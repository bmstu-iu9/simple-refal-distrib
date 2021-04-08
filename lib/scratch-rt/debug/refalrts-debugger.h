#ifndef RefalRTS_DEBUGGER_H_
#define RefalRTS_DEBUGGER_H_

#include <map>
#include <set>
#include <string>
#include <utility>

#include "refalrts.h"
#include "refalrts-vm.h"


//=============================================================================
// Пошаговый отладчик
//=============================================================================

namespace refalrts {

namespace debugger {

extern const char *const s_STEP;

class VariableDebugTable {
  Iter *m_context;
  const StringItem *m_strings;
  const RASLCommand *m_first;
  const RASLCommand *m_last;
  VM *m_vm;

  std::pair<std::string, int> parse_var_name(const char *full_name);
  void variable_bounds(
    refalrts::Iter& var_begin, refalrts::Iter& var_end,
    char type, int offset
  );
public:
  VariableDebugTable(VM *vm)
    : m_context(0)
    , m_strings(0)
    , m_first(0)
    , m_last(0)
    , m_vm(vm)
  {
    /* пусто */
  }
  void insert_var(const RASLCommand *next);
  void clear();
  std::map<int, int> find_var(const char *var_name);
  void print(FILE *out, bool multiline);
  void print_var(const char *var_name, FILE *out, bool multiline);
  void set_string_items(const StringItem *items);
  void set_context(Iter *cont);
};

struct FileAndName {
  FILE * out;
  std::string name;
  bool is_append;
};

class TracedFunctionTable {
  std::map<std::string, struct FileAndName> m_traced_func_table;
public:
  void trace_func(const std::string &func_name, const struct FileAndName &file);
  void notrace_func(const std::string &func_name);
  void clear();
  bool is_traced_func(const char *func_name);
  FILE *get_trace_outstream(const char *func_name);
  void print(FILE *out);
};

class BreakpointSet {
  std::set<int> m_step_breaks;
  std::set<std::string> m_func_breaks;
  // точки остановки на элементах стека предполагаются одноразовыми.
  // Т.е. после первой остановки программы точка удаляется.
  std::set<Iter> m_stack_breaks; // набор открывающих скобок активации
public:
  void add_breakpoint(int step_numb);
  void add_breakpoint(const std::string &func_name);
  // для stack_breaks
  void add_breakpoint(Iter open_call_bracket);
  void rm_breakpoint(int step_numb);
  void rm_breakpoint(const std::string &func_name);
  void rm_breakpoint(Iter open_call_bracket);
  bool is_breakpoint(int cur_step_numb, Iter begin);
  void print(FILE *out = stdout);
};

// класс для удобной работой с введеной пользователем командой
class Cmd {
public:
  std::vector<std::string> prefixes;
  std::string cmd, param, file;
  bool is_file_append;

  Cmd(
    std::vector<std::string> &prefixes,
    std::string &cmd,
    std::string &param,
    std::string &file,
    bool is_file_append
  ) :
    prefixes(prefixes),
    cmd(cmd),
    param(param),
    file(file),
    is_file_append(is_file_append)
  {
    /* пусто */
  }

  Cmd() : is_file_append(false) {};

  const std::string to_string();

  const bool has_param();

  const bool has_prefix(const std::string &prefix);

  const bool has_prefix(const char *prefix);
};

class RefalDebugger: public Debugger {
  const char *m_last_option;
  unsigned m_step_numb;
  unsigned m_memory_limit;
  FILE *m_in;
  Iter m_next_expr;
  Iter m_res_begin;
  Iter m_res_end;
  VM *m_vm;
  // параметры печати
  bool m_multiline;
  bool m_skeleton;
  bool m_has_debugger_script;

public:
  VariableDebugTable var_debug_table;
  TracedFunctionTable func_trace_table;
  BreakpointSet break_set;

  RefalDebugger(VM *vm)
    : m_last_option(s_STEP)
    , m_step_numb(0)
    , m_memory_limit(-1)
    , m_next_expr(0)
    , m_res_begin(0)
    , m_res_end(0)
    , m_vm(vm)
    , m_multiline(false)
    , m_skeleton(true)
    , var_debug_table(m_vm)
  {
    m_in = open_debugger_script();
    if (m_in) {
      m_has_debugger_script = true;
    } else {
      m_in = stdin;
      m_has_debugger_script = false;
    }
  }
  ~RefalDebugger() {
    func_trace_table.clear();
  }

  std::string ask_for_param(const std::string &appeal);
  FILE *get_out(Cmd &cmd);
  bool next_cond(Iter begin);
  bool run_cond(Iter begin);
  bool step_cond();
  bool mem_cond();

  bool is_debug_stop(Iter begin);
  void debug_trace(Iter begin, Iter end, RefalFunction *callee);
  void set_step_res(Iter begin, Iter end);

  void help_option();
  void break_option(Cmd &cmd, Iter begin);
  void clear_option(Cmd &cmd, Iter begin);
  void step_limit_option(Cmd &cmd);
  void memory_limit_option(Cmd &cmd);
  void trace_option(Cmd &cmd, FILE *out = stdout);
  void no_trace_option(Cmd &cmd);
  void next_option(Cmd &cmd, Iter begin);
  void print_callee_option(Iter begin, Iter end, FILE *out = stdout);
  void print_arg_option(Iter begin, Iter end, FILE *out = stdout);
  void print_res_option(FILE *out);
  void print_view_field_option(FILE *out, bool multiline, bool skeleton);
  bool print_var_option(
    const char *var_name, FILE *out = stdout, bool multiline = false
  );
  void backtrace_option(Iter begin, FILE *out, bool multiline, bool skeleton);
  Iter find_call_stack_elem(Iter begin, const std::string &elem_number);
  void print_call_stack_option(
    Iter begin,
    const std::string &elem_number,
    FILE *out,
    bool multiline,
    bool skeleton
  );
  void mode_option();
  bool isCmdMultiline(Cmd &cmd);
  bool isCmdSkeleton(Cmd &cmd);
  refalrts::FnResult debugger_loop(Iter begin, Iter end);
  FILE *open_debugger_script();

  static std::pair<refalrts::debugger::Cmd, std::string>
    parse_input_line(const std::string &line);
  static std::pair<std::string, std::string>
    parse_file_name(const std::string &fileString);

  virtual void set_context(Iter *context) {
    var_debug_table.set_context(context);
  }

  virtual void set_string_items(const StringItem *items) {
    var_debug_table.set_string_items(items);
  }

  virtual void insert_var(const RASLCommand *next) {
    var_debug_table.insert_var(next);
  }

  virtual refalrts::FnResult handle_function_call(
    Iter begin, Iter end, RefalFunction *callee
  );
};

Debugger *create_debugger(VM *vm);

} // namespace debugger

}  // namespace refalrts


#endif  // RefalRTS_DEBUGGER_H_
