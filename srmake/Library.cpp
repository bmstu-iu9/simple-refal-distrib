// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #False
template <typename SREFAL_PARAM_INT>
struct ident_False {
  static const char *name() {
    return "False";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #True
template <typename SREFAL_PARAM_INT>
struct ident_True {
  static const char *name() {
    return "True";
  }
};

// identifier #TypeCharacter
template <typename SREFAL_PARAM_INT>
struct ident_TypeCharacter {
  static const char *name() {
    return "TypeCharacter";
  }
};

// identifier #TypeFile
template <typename SREFAL_PARAM_INT>
struct ident_TypeFile {
  static const char *name() {
    return "TypeFile";
  }
};

// identifier #TypeFunction
template <typename SREFAL_PARAM_INT>
struct ident_TypeFunction {
  static const char *name() {
    return "TypeFunction";
  }
};

// identifier #TypeIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TypeIdentifier {
  static const char *name() {
    return "TypeIdentifier";
  }
};

// identifier #TypeNumber
template <typename SREFAL_PARAM_INT>
struct ident_TypeNumber {
  static const char *name() {
    return "TypeNumber";
  }
};

extern refalrts::RefalFunction& Add;
extern refalrts::RefalFunction& Sub;
extern refalrts::RefalFunction& Mul;
extern refalrts::RefalFunction& Div;
extern refalrts::RefalFunction& Mod;
extern refalrts::RefalFunction& WriteLine;
extern refalrts::RefalFunction& FWriteLine;
extern refalrts::RefalFunction& ReadLine;
extern refalrts::RefalFunction& FReadLine;
extern refalrts::RefalFunction& FOpen;
extern refalrts::RefalFunction& FClose;
extern refalrts::RefalFunction& Arg;
extern refalrts::RefalFunction& ExistFile;
extern refalrts::RefalFunction& GetEnv;
extern refalrts::RefalFunction& Exit;
extern refalrts::RefalFunction& System;
extern refalrts::RefalFunction& IntFromStr;
extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& Chr;
extern refalrts::RefalFunction& Ord;
extern refalrts::RefalFunction& SymbCompare;
extern refalrts::RefalFunction& SymbType;

#line 2 "Library.sref"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

//FROM refalrts

#define USE_IDENT(ident_name) \
  (& ident_ ## ident_name<int>::name)
#line 113 "Library.cpp"
#line 37 "Library.sref"
#define BINARY(binary) \
  refalrts::Iter pX = 0, pY = 0; \
  refalrts::Iter pFunc = refalrts::call_left(pX, pY, arg_begin, arg_end); \
  \
  if (pX->next != pY) { \
    return refalrts::cRecognitionImpossible; \
  } \
  \
  binary \
  \
  refalrts::splice_to_freelist(arg_begin, pFunc); \
  refalrts::splice_to_freelist(pY, arg_end); \
  return refalrts::cSuccess;

#define ARITHM_BINARY(op, check) \
  if ( \
    refalrts::cDataNumber != pX->tag \
    || refalrts::cDataNumber != pY->tag \
  ) { \
    return refalrts::cRecognitionImpossible; \
  } \
  \
  check \
  \
  pX->number_info op##= pY->number_info; \

#define ARITHM(op, check) \
  BINARY(ARITHM_BINARY(op, check))

#define ARITHM_NO_CHECK \
  /* пусто */

#define ARITHM_ZERODIV \
  if (0 == pY->number_info) { \
    /* деление на нуль */ \
    return refalrts::cRecognitionImpossible; \
  }

#line 153 "Library.cpp"
static refalrts::FnResult func_Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 79 "Library.sref"
  ARITHM(+, ARITHM_NO_CHECK);
#line 157 "Library.cpp"
}

refalrts::RefalFunction descr_Add(func_Add, "Add");
refalrts::RefalFunction& Add = descr_Add;

static refalrts::FnResult func_Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 85 "Library.sref"
  ARITHM(-, ARITHM_NO_CHECK);
#line 166 "Library.cpp"
}

refalrts::RefalFunction descr_Sub(func_Sub, "Sub");
refalrts::RefalFunction& Sub = descr_Sub;

static refalrts::FnResult func_Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 91 "Library.sref"
  ARITHM(*, ARITHM_NO_CHECK);
#line 175 "Library.cpp"
}

refalrts::RefalFunction descr_Mul(func_Mul, "Mul");
refalrts::RefalFunction& Mul = descr_Mul;

static refalrts::FnResult func_Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 97 "Library.sref"
  ARITHM(/, ARITHM_ZERODIV);
#line 184 "Library.cpp"
}

refalrts::RefalFunction descr_Div(func_Div, "Div");
refalrts::RefalFunction& Div = descr_Div;

static refalrts::FnResult func_Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 103 "Library.sref"
  ARITHM(%, ARITHM_ZERODIV);
#line 193 "Library.cpp"
}

refalrts::RefalFunction descr_Mod(func_Mod, "Mod");
refalrts::RefalFunction& Mod = descr_Mod;

#line 110 "Library.sref"
refalrts::FnResult write_to_stream(
  FILE *out, refalrts::Iter str_begin, refalrts::Iter str_end
) {
  if (ferror(out)) {
    return refalrts::cRecognitionImpossible;
  }

  int printf_res = 0;

  for (
    refalrts::Iter p = str_begin;
    printf_res >= 0 && ! refalrts::empty_seq(p, str_end);
    refalrts::move_left(p, str_end)
  ) {
    switch(p->tag) {
      case refalrts::cDataChar:
        printf_res = fprintf(out, "%c", p->char_info);
        break;

      case refalrts::cDataNumber:
        printf_res = fprintf(out, "%lu ", p->number_info);
        break;

      case refalrts::cDataFunction:
        printf_res = fprintf(out, "%s ", p->function_info->name);
        break;

      case refalrts::cDataIdentifier:
        printf_res = fprintf(out, "%s ", (p->ident_info)());
        break;

      case refalrts::cDataOpenADT:
        printf_res = fprintf(out, "[");
        break;

      case refalrts::cDataCloseADT:
        printf_res = fprintf(out, "]");
        break;

      case refalrts::cDataOpenBracket:
        printf_res = fprintf(out, "(");
        break;

      case refalrts::cDataCloseBracket:
        printf_res = fprintf(out, ")");
        break;

      case refalrts::cDataFile:
        printf_res = fprintf(out, "*%p", p->file_info);
        break;

      case refalrts::cDataClosure:
        printf_res = fprintf(out, "{ ");
        p = refalrts::unwrap_closure(p);
        break;

      case refalrts::cDataClosureHead:
        printf_res = fprintf(out, "[%lu] ", p->number_info);
        break;

      case refalrts::cDataUnwrappedClosure:
        printf_res = fprintf(out, "} ");
        refalrts::wrap_closure(p);
        break;

      default:
        refalrts_switch_default_violation(p->tag);
        // break;
    }
  }

  if (printf_res < 0) {
    return refalrts::cRecognitionImpossible;
  }

  printf_res = fprintf(out, "\n");
  if (printf_res < 0) {
    return refalrts::cRecognitionImpossible;
  } else {
    return refalrts::cSuccess;
  }
}
#line 282 "Library.cpp"
static refalrts::FnResult func_WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 196 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::FnResult fnres = write_to_stream(stdout, content_b, content_e);
  if (fnres != refalrts::cSuccess) {
    return fnres;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 296 "Library.cpp"
}

refalrts::RefalFunction descr_WriteLine(func_WriteLine, "WriteLine");
refalrts::RefalFunction& WriteLine = descr_WriteLine;

static refalrts::FnResult func_FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 212 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (
    ! refalrts::svar_left(pfile_handle, content_b, content_e)
    || refalrts::cDataFile != pfile_handle->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = static_cast<FILE*>(pfile_handle->file_info);
  refalrts::FnResult fnres = write_to_stream(handle, content_b, content_e);
  if (fnres != refalrts::cSuccess) {
    return fnres;
  }

  refalrts::splice_stvar(arg_begin, pfile_handle);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 326 "Library.cpp"
}

refalrts::RefalFunction descr_FWriteLine(func_FWriteLine, "FWriteLine");
refalrts::RefalFunction& FWriteLine = descr_FWriteLine;

#line 238 "Library.sref"
refalrts::FnResult read_from_stream(
  FILE *input, refalrts::Iter& begin, refalrts::Iter& end
) {
  begin = 0;
  end = 0;

  int cur_char;
  while ((cur_char = getc(input)) != EOF && cur_char != '\n') {
    /*
      Пользуемся тем фактом, что в данной реализации размещёные в свободной
      памяти узлы располагаются в последовательных адресах.
    */
    if (! refalrts::alloc_char(end, static_cast<char>(cur_char))) {
      return refalrts::cNoMemory;
    }

    if (begin == 0) {
      begin = end;
    }
  }

  if (cur_char == EOF) {
    if (! refalrts::alloc_number(end, 0UL)) {
      return refalrts::cNoMemory;
    }

    if (begin == 0) {
      begin = end;
    }
  }

  if (begin == 0) assert (end == 0);
  if (begin != 0) assert (end != 0);

  return refalrts::cSuccess;
}
#line 369 "Library.cpp"
static refalrts::FnResult func_ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 278 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();

  refalrts::Iter str_begin, str_end;
  refalrts::FnResult fn_result = read_from_stream(stdin, str_begin, str_end);
  if (fn_result != refalrts::cSuccess) {
    return fn_result;
  }

  refalrts::splice_evar(arg_begin, str_begin, str_end);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 391 "Library.cpp"
}

refalrts::RefalFunction descr_ReadLine(func_ReadLine, "ReadLine");
refalrts::RefalFunction& ReadLine = descr_ReadLine;

static refalrts::FnResult func_FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 302 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (
    ! refalrts::svar_left(pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataFile != pfile_handle->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();

  FILE *handle = static_cast<FILE*>(pfile_handle->file_info);
  refalrts::Iter str_begin, str_end;
  refalrts::FnResult fn_result = read_from_stream(handle, str_begin, str_end);
  if (fn_result != refalrts::cSuccess) {
    return fn_result;
  }

  refalrts::Iter res = refalrts::splice_evar(arg_begin, str_begin, str_end);
  refalrts::splice_stvar(res, pfile_handle);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 426 "Library.cpp"
}

refalrts::RefalFunction descr_FReadLine(func_FReadLine, "FReadLine");
refalrts::RefalFunction& FReadLine = descr_FReadLine;

#line 333 "Library.sref"
namespace {

refalrts::FnResult string_from_seq(
  std::vector<char>& string, refalrts::Iter begin, refalrts::Iter end
) {
  std::vector<char> result;

  enum { cBufLen = 100 };
  char buffer[cBufLen + 1] = { 0 };

  unsigned read;
  while ((read = refalrts::read_chars(buffer, cBufLen, begin, end)) != 0) {
    // В текущей версии Open Watcom (и форка Open Watcom V2) есть ошибка
    // в функции vector::insert, которая возникает в случае,
    // если во время вставки вектор увеличивает свою ёмкость (capacity).
    // Для обхода этой ошибки предварительно резервируем место.
    result.reserve(result.size() + read + 1);
    result.insert(result.end(), buffer, buffer + read);
  }

  /*
    Здесь refalrts::empty_seq(begin, end) || (begin->tag != cDataChar).
  */

  if (refalrts::empty_seq(begin, end)) {
    result.push_back('\0');
    string.swap(result);
    return refalrts::cSuccess;
  } else {
    // здесь begin->tag != cDataChar
    return refalrts::cRecognitionImpossible;
  }
}

} // unnamed namespace
#line 468 "Library.cpp"
static refalrts::FnResult func_FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 372 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  const char *mode;

  if (refalrts::char_left('r', content_b, content_e)) {
    mode = "r";
  } else if (refalrts::char_left('w', content_b, content_e)) {
    mode = "w";
  } else {
    return refalrts::cRecognitionImpossible;
  }

  char filename[FILENAME_MAX + 1] = { '\0' };
  unsigned len = read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e) || len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter file_ptr = arg_begin;
  file_ptr->tag = refalrts::cDataFile;
  if (FILE *f = fopen(filename, mode)) {
    file_ptr->file_info = f;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 503 "Library.cpp"
}

refalrts::RefalFunction descr_FOpen(func_FOpen, "FOpen");
refalrts::RefalFunction& FOpen = descr_FOpen;

static refalrts::FnResult func_FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 409 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  if (
    ! refalrts::svar_left(pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataFile != pfile_handle->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = static_cast<FILE*>(pfile_handle->file_info);
  if (EOF == fclose(handle)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 531 "Library.cpp"
}

refalrts::RefalFunction descr_FClose(func_FClose, "FClose");
refalrts::RefalFunction& FClose = descr_FClose;

static refalrts::FnResult func_Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 434 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pparam_no = 0;
  if (
    ! refalrts::svar_left(pparam_no, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataNumber != pparam_no->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  unsigned int param_no = static_cast<unsigned int>(pparam_no->number_info);

  refalrts::Iter param_begin = 0;
  refalrts::Iter param_end = 0;
  const char *param = refalrts::arg(param_no);

  if (! refalrts::alloc_string(param_begin, param_end, param)) {
    return refalrts::cNoMemory;
  }

  refalrts::splice_evar(arg_begin, param_begin, param_end);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 565 "Library.cpp"
}

refalrts::RefalFunction descr_Arg(func_Arg, "Arg");
refalrts::RefalFunction& Arg = descr_Arg;

static refalrts::FnResult func_ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 465 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  char filename[FILENAME_MAX + 1] = { '\0' };
  unsigned len = read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e) || len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter ans = arg_begin;
  if (FILE *f = fopen(filename, "r")) {
    // Файл существует
    fclose(f);

    refalrts::reinit_ident(ans, USE_IDENT(True));
  } else {
    // Файл по-видимому не существует
    refalrts::reinit_ident(ans, USE_IDENT(False));
  }

  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 598 "Library.cpp"
}

refalrts::RefalFunction descr_ExistFile(func_ExistFile, "ExistFile");
refalrts::RefalFunction& ExistFile = descr_ExistFile;

static refalrts::FnResult func_GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 495 "Library.sref"
  refalrts::Iter envname_b = 0;
  refalrts::Iter envname_e = 0;
  refalrts::call_left(envname_b, envname_e, arg_begin, arg_end);

  std::vector<char> envname;
  refalrts::FnResult envname_res =
    string_from_seq(envname, envname_b, envname_e);

  if (envname_res != refalrts::cSuccess) {
    return envname_res;
  }

  refalrts::reset_allocator();
  const char *envres = getenv(& envname[0]);

  if (envres != 0) {
    refalrts::Iter env_begin;
    refalrts::Iter env_end;

    if (! refalrts::alloc_string(env_begin, env_end, envres)) {
      return refalrts::cNoMemory;
    }

    refalrts::splice_evar(arg_begin, env_begin, env_end);
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 634 "Library.cpp"
}

refalrts::RefalFunction descr_GetEnv(func_GetEnv, "GetEnv");
refalrts::RefalFunction& GetEnv = descr_GetEnv;

static refalrts::FnResult func_Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 528 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pretcode = 0;
  if (
    ! refalrts::svar_left(pretcode, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataNumber != pretcode->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::set_return_code(pretcode->number_info);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cExit;
#line 658 "Library.cpp"
}

refalrts::RefalFunction descr_Exit(func_Exit, "Exit");
refalrts::RefalFunction& Exit = descr_Exit;

static refalrts::FnResult func_System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 549 "Library.sref"
  refalrts::Iter command_b = 0;
  refalrts::Iter command_e = 0;
  refalrts::call_left(command_b, command_e, arg_begin, arg_end);

  std::vector<char> command;
  refalrts::FnResult command_res =
    string_from_seq(command, command_b, command_e);

  if (command_res != refalrts::cSuccess) {
    return command_res;
  }

  fflush(stdout);
  fflush(stderr);

  system(&command[0]);

  refalrts::reset_allocator();
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 686 "Library.cpp"
}

refalrts::RefalFunction descr_System(func_System, "System");
refalrts::RefalFunction& System = descr_System;

static refalrts::FnResult func_IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 576 "Library.sref"
  refalrts::Iter number_b = 0;
  refalrts::Iter number_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(number_b, number_e, arg_begin, arg_end);

  bool start_is_digit =
    ! refalrts::empty_seq(number_b, number_e)
    && refalrts::cDataChar == number_b->tag
    && isdigit(number_b->char_info);

    if (! start_is_digit) {
      refalrts::Iter fail_pos = pfunc_name;
      refalrts::reinit_ident(fail_pos, USE_IDENT(Fails));
      refalrts::splice_to_freelist(arg_begin, arg_begin);
      refalrts::splice_to_freelist(arg_end, arg_end);
    } else {
      refalrts::RefalNumber result = 0;
      while (
        ! refalrts::empty_seq(number_b, number_e)
        && refalrts::cDataChar == number_b->tag
        && isdigit(number_b->char_info)
      ) {
        result *= 10;
        result += number_b->char_info - '0';

        refalrts::move_left(number_b, number_e);
      }

      refalrts::Iter success_pos = arg_begin;
      refalrts::reinit_ident(success_pos, USE_IDENT(Success));
      refalrts::Iter number_pos = pfunc_name;
      refalrts::reinit_number(number_pos, result);

      refalrts::Iter res =
        refalrts::splice_evar(arg_end->next, number_b, number_e);
      refalrts::splice_to_freelist_open(number_pos, res);
    }

    return refalrts::cSuccess;
#line 733 "Library.cpp"
}

refalrts::RefalFunction descr_IntFromStr(func_IntFromStr, "IntFromStr");
refalrts::RefalFunction& IntFromStr = descr_IntFromStr;

static refalrts::FnResult func_StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 620 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter number = 0;
  if (
    ! refalrts::svar_left(number, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataNumber != number->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();
  refalrts::Iter begin_splice = arg_begin;

  if (refalrts::RefalNumber num = number->number_info) {
    // Длина десятичного числа = 0,3 * длина двоичного числа,
    // т.к. lg(2) = 0,3. Хрен с ним, что много. Главное, что не мало.
    enum { cMaxNumberLen = 8 * sizeof(refalrts::RefalNumber) * 3 / 10 + 2 };

    char buffer[cMaxNumberLen + 1] = { 0 };
    char *lim_digit = buffer + cMaxNumberLen;
    char *cur_digit = lim_digit;

    while (num != 0) {
      -- cur_digit;
      *cur_digit = static_cast<char>((num % 10) + '0');
      num /= 10;
    }

    refalrts::Iter num_begin;
    refalrts::Iter num_end;
    bool allocated = refalrts::alloc_chars(
      num_begin, num_end, cur_digit, unsigned(lim_digit - cur_digit)
    );

    if (! allocated) {
      return refalrts::cNoMemory;
    }

    refalrts::splice_evar(arg_begin, num_begin, num_end);
  } else {
    refalrts::reinit_char(arg_begin, '0');
    begin_splice = pfunc_name;
  }

  refalrts::splice_to_freelist(begin_splice, arg_end);

  return refalrts::cSuccess;
#line 792 "Library.cpp"
}

refalrts::RefalFunction descr_StrFromInt(func_StrFromInt, "StrFromInt");
refalrts::RefalFunction& StrFromInt = descr_StrFromInt;

static refalrts::FnResult func_Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 676 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter number = 0;
  if (
    ! refalrts::svar_left(number, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataNumber != number->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  char result = static_cast<char>(number->number_info);

  refalrts::reinit_char(number, result);
  refalrts::splice_to_freelist(arg_begin, pfunc_name);
  refalrts::splice_to_freelist(arg_end, arg_end);
  return refalrts::cSuccess;
#line 820 "Library.cpp"
}

refalrts::RefalFunction descr_Chr(func_Chr, "Chr");
refalrts::RefalFunction& Chr = descr_Chr;

static refalrts::FnResult func_Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 701 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter chr = 0;
  if (
    ! refalrts::svar_left(chr, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataChar != chr->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber result = static_cast<unsigned char>(chr->char_info);

  refalrts::reinit_number(chr, result);
  refalrts::splice_to_freelist(arg_begin, pfunc_name);
  refalrts::splice_to_freelist(arg_end, arg_end);
  return refalrts::cSuccess;
#line 848 "Library.cpp"
}

refalrts::RefalFunction descr_Ord(func_Ord, "Ord");
refalrts::RefalFunction& Ord = descr_Ord;

#line 725 "Library.sref"
namespace {

template <typename T>
char compare_char(T x, T y) {
  if (x < y) {
    return '<';
  } else if (x == y) {
    return '=';
  } else {
    return '>';
  }
}

bool compare(refalrts::Iter left, refalrts::Iter right) {
  char order;

  switch(left->tag) {
    case refalrts::cDataNumber:
      switch(right->tag) {
        case refalrts::cDataNumber:
          order = compare_char(left->number_info, right->number_info);
          break;

        case refalrts::cDataChar:
          order = '>';
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataChar:
      switch(right->tag) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = compare_char(left->char_info, right->char_info);
          break;

        case refalrts::cDataFunction:
          order = '>';
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFunction:
      switch(right->tag) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          {
            int cmpres =
              strcmp(left->function_info->name, right->function_info->name);

            if (cmpres < 0) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order =
                compare_char(
                  left->function_info->ptr,
                  right->function_info->ptr
                );
            }
          }
          break;

        case refalrts::cDataIdentifier:
          order = '>';
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataIdentifier:
      switch(right->tag) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          order = '<';
          break;

        case refalrts::cDataIdentifier:
          {
            int cmpres =
              strcmp((left->ident_info)(), (right->ident_info)());
            if (cmpres < 0) {
              order = '<';
            } else if (cmpres > 0) {
              order = '>';
            } else {
              order = '=';
            }
          }
          break;

        case refalrts::cDataFile:
          order = '>';
          break;

        default:
          order = '?';
          break;
      }
      break;

    case refalrts::cDataFile:
      switch(right->tag) {
        case refalrts::cDataNumber:
          order = '<';
          break;

        case refalrts::cDataChar:
          order = '<';
          break;

        case refalrts::cDataFunction:
          order = '<';
          break;

        case refalrts::cDataIdentifier:
          order = '<';
          break;

        case refalrts::cDataFile:
          order = compare_char(left->file_info, right->file_info);
          break;

        default:
          order = '?';
          break;
      }
      break;

    default:
      order = '?';
      break;
  }

  if (order != '?') {
    refalrts::reinit_char(left, order);
    return true;
  } else {
    return false;
  }
}

} // unnamed namespace

#define COMPARE_BINARY \
  if (! compare(pX, pY)) { \
    return refalrts::cRecognitionImpossible; \
  }
#line 1056 "Library.cpp"
static refalrts::FnResult func_SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 930 "Library.sref"
  BINARY(COMPARE_BINARY);
#line 1060 "Library.cpp"
}

refalrts::RefalFunction descr_SymbCompare(func_SymbCompare, "SymbCompare");
refalrts::RefalFunction& SymbCompare = descr_SymbCompare;

static refalrts::FnResult func_SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 936 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter atom = 0;
  if (
    ! refalrts::svar_left(atom, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalIdentifier type_tag;
  switch(atom->tag) {
    case refalrts::cDataNumber:
      type_tag = USE_IDENT(TypeNumber);
      break;

    case refalrts::cDataChar:
      type_tag = USE_IDENT(TypeCharacter);
      break;

    case refalrts::cDataFunction:
      type_tag = USE_IDENT(TypeFunction);
      break;

    case refalrts::cDataIdentifier:
      type_tag = USE_IDENT(TypeIdentifier);
      break;

    case refalrts::cDataFile:
      type_tag = USE_IDENT(TypeFile);
      break;

    default:
      return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_ident(arg_begin, type_tag);
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 1110 "Library.cpp"
}

refalrts::RefalFunction descr_SymbType(func_SymbType, "SymbType");
refalrts::RefalFunction& SymbType = descr_SymbType;


//End of file
//FROM refalrts
