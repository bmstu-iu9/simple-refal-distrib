// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BEGIN = refalrts::ident_from_static("BEGIN");
const refalrts::RefalIdentifier ident_CURRENT = refalrts::ident_from_static("CURRENT");
const refalrts::RefalIdentifier ident_END = refalrts::ident_from_static("END");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
const refalrts::RefalIdentifier ident_TypeCharacter = refalrts::ident_from_static("TypeCharacter");
const refalrts::RefalIdentifier ident_TypeFile = refalrts::ident_from_static("TypeFile");
const refalrts::RefalIdentifier ident_TypeFunction = refalrts::ident_from_static("TypeFunction");
const refalrts::RefalIdentifier ident_TypeIdentifier = refalrts::ident_from_static("TypeIdentifier");
const refalrts::RefalIdentifier ident_TypeNumber = refalrts::ident_from_static("TypeNumber");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);
static refalrts::ExternalReference ref_FWriteLine("FWriteLine", 0U, 0U);
static refalrts::ExternalReference ref_ReadLine("ReadLine", 0U, 0U);
static refalrts::ExternalReference ref_FReadLine("FReadLine", 0U, 0U);
static refalrts::ExternalReference ref_FOpen("FOpen", 0U, 0U);
static refalrts::ExternalReference ref_FClose("FClose", 0U, 0U);
static refalrts::ExternalReference ref_Arg("Arg", 0U, 0U);
static refalrts::ExternalReference ref_ExistFile("ExistFile", 0U, 0U);
static refalrts::ExternalReference ref_GetEnv("GetEnv", 0U, 0U);
static refalrts::ExternalReference ref_Exit("Exit", 0U, 0U);
static refalrts::ExternalReference ref_System("System", 0U, 0U);
static refalrts::ExternalReference ref_IntFromStr("IntFromStr", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
static refalrts::ExternalReference ref_SymbCompare("SymbCompare", 0U, 0U);
static refalrts::ExternalReference ref_SymbType("SymbType", 0U, 0U);
static refalrts::ExternalReference ref_Implode("Implode", 0U, 0U);
static refalrts::ExternalReference ref_Explode("Explode", 0U, 0U);
static refalrts::ExternalReference ref_FWriteBytes("FWriteBytes", 0U, 0U);
static refalrts::ExternalReference ref_FReadBytes("FReadBytes", 0U, 0U);
static refalrts::ExternalReference ref_FTell("FTell", 0U, 0U);
static refalrts::ExternalReference ref_FSeek("FSeek", 0U, 0U);
static refalrts::ExternalReference ref_RenameFile("RenameFile", 0U, 0U);
static refalrts::ExternalReference ref_RemoveFile("RemoveFile", 0U, 0U);

#line 2 "Library.sref"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>

//FROM refalrts

#define USE_IDENT(ident_name) (ident_ ## ident_name)
#line 61 "Library.cpp"
#line 40 "Library.sref"
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

#line 101 "Library.cpp"
static refalrts::FnResult func_Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 82 "Library.sref"
  ARITHM(+, ARITHM_NO_CHECK);
#line 105 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Add("Add", 0U, 0U, func_Add);

static refalrts::FnResult func_Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 88 "Library.sref"
  ARITHM(-, ARITHM_NO_CHECK);
#line 113 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Sub("Sub", 0U, 0U, func_Sub);

static refalrts::FnResult func_Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 94 "Library.sref"
  ARITHM(*, ARITHM_NO_CHECK);
#line 121 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Mul("Mul", 0U, 0U, func_Mul);

static refalrts::FnResult func_Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 100 "Library.sref"
  ARITHM(/, ARITHM_ZERODIV);
#line 129 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Div("Div", 0U, 0U, func_Div);

static refalrts::FnResult func_Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 106 "Library.sref"
  ARITHM(%, ARITHM_ZERODIV);
#line 137 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Mod("Mod", 0U, 0U, func_Mod);

#line 113 "Library.sref"
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
        printf_res = fprintf(out, "%u ", p->number_info);
        break;

      case refalrts::cDataFunction:
        printf_res = fprintf(out, "%s ", p->function_info->name.name);
        break;

      case refalrts::cDataIdentifier:
        printf_res = fprintf(out, "%s ", p->ident_info->name());
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
        printf_res = fprintf(out, "[%u] ", p->number_info);
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
#line 225 "Library.cpp"
static refalrts::FnResult func_WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 199 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::FnResult fnres = write_to_stream(stdout, content_b, content_e);
  if (fnres != refalrts::cSuccess) {
    return fnres;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 239 "Library.cpp"
}

static refalrts::NativeReference nat_ref_WriteLine("WriteLine", 0U, 0U, func_WriteLine);

static refalrts::FnResult func_FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 215 "Library.sref"
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
#line 268 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteLine("FWriteLine", 0U, 0U, func_FWriteLine);

#line 241 "Library.sref"
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
#line 310 "Library.cpp"
static refalrts::FnResult func_ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 281 "Library.sref"
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
#line 332 "Library.cpp"
}

static refalrts::NativeReference nat_ref_ReadLine("ReadLine", 0U, 0U, func_ReadLine);

static refalrts::FnResult func_FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 305 "Library.sref"
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
#line 366 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FReadLine("FReadLine", 0U, 0U, func_FReadLine);

#line 336 "Library.sref"
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
#line 407 "Library.cpp"
static refalrts::FnResult func_FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 375 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  std::string mode;

  refalrts::Iter mode_b = 0;
  refalrts::Iter mode_e = 0;

  if (refalrts::char_left('r', content_b, content_e)) {
    mode = "r";
  } else if (refalrts::char_left('w', content_b, content_e)) {
    mode = "w";
  } else if (refalrts::char_left('a', content_b, content_e)) {
    mode = "a";
  } else if (refalrts::brackets_left(mode_b, mode_e, content_b, content_e)) {
    char mode_str[100] = { '\0' };  // должно хватить
    unsigned len =
      refalrts::read_chars(mode_str, sizeof(mode_str) - 1, mode_b, mode_e);

    if (! refalrts::empty_seq(mode_b, mode_e) || len == 0) {
      return refalrts::cRecognitionImpossible;
    }

    mode = mode_str;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  char filename[FILENAME_MAX + 1] = { '\0' };
  unsigned len =
    refalrts::read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e) || len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  if (FILE *f = fopen(filename, mode.c_str())) {
    refalrts::Iter file_ptr = arg_begin;
    file_ptr->tag = refalrts::cDataFile;
    file_ptr->file_info = f;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 458 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FOpen("FOpen", 0U, 0U, func_FOpen);

static refalrts::FnResult func_FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 428 "Library.sref"
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
#line 485 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FClose("FClose", 0U, 0U, func_FClose);

static refalrts::FnResult func_Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 453 "Library.sref"
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
#line 518 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Arg("Arg", 0U, 0U, func_Arg);

static refalrts::FnResult func_ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 484 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  char filename[FILENAME_MAX + 1] = { '\0' };
  unsigned len =
    refalrts::read_chars(filename, FILENAME_MAX, content_b, content_e);

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
#line 551 "Library.cpp"
}

static refalrts::NativeReference nat_ref_ExistFile("ExistFile", 0U, 0U, func_ExistFile);

static refalrts::FnResult func_GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 515 "Library.sref"
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
#line 586 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetEnv("GetEnv", 0U, 0U, func_GetEnv);

static refalrts::FnResult func_Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 548 "Library.sref"
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
#line 609 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Exit("Exit", 0U, 0U, func_Exit);

static refalrts::FnResult func_System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 569 "Library.sref"
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

  // Skip return value
  int ret = system(&command[0]);
  (void) ret;

  refalrts::reset_allocator();
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 638 "Library.cpp"
}

static refalrts::NativeReference nat_ref_System("System", 0U, 0U, func_System);

static refalrts::FnResult func_IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 598 "Library.sref"
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
#line 684 "Library.cpp"
}

static refalrts::NativeReference nat_ref_IntFromStr("IntFromStr", 0U, 0U, func_IntFromStr);

static refalrts::FnResult func_StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 642 "Library.sref"
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
#line 742 "Library.cpp"
}

static refalrts::NativeReference nat_ref_StrFromInt("StrFromInt", 0U, 0U, func_StrFromInt);

static refalrts::FnResult func_Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 698 "Library.sref"
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
#line 769 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Chr("Chr", 0U, 0U, func_Chr);

static refalrts::FnResult func_Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 723 "Library.sref"
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
#line 796 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Ord("Ord", 0U, 0U, func_Ord);

#line 747 "Library.sref"
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

char strcmp_char(const char *x, const char *y) {
  int res = strcmp(x, y);
  if (res < 0) {
    return '<';
  } else if (res > 0) {
    return '>';
  } else {
    return '=';
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
            refalrts::RefalFunction *fl = left->function_info;
            refalrts::RefalFunction *fr = right->function_info;

            order = strcmp_char(fl->name.name, fr->name.name);
            if (order == '=') {
              order = compare_char(fl->name.cookie1, fr->name.cookie1);
            }
            if (order == '=') {
              order = compare_char(fl->name.cookie2, fr->name.cookie2);
            }
            if (order == '=') {
              order = compare_char(fl->rasl, fr->rasl);
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
          order =
            strcmp_char(left->ident_info->name(), right->ident_info->name());
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
#line 1004 "Library.cpp"
static refalrts::FnResult func_SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 953 "Library.sref"
  BINARY(COMPARE_BINARY);
#line 1008 "Library.cpp"
}

static refalrts::NativeReference nat_ref_SymbCompare("SymbCompare", 0U, 0U, func_SymbCompare);

static refalrts::FnResult func_SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 959 "Library.sref"
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
#line 1057 "Library.cpp"
}

static refalrts::NativeReference nat_ref_SymbType("SymbType", 0U, 0U, func_SymbType);

static refalrts::FnResult func_Implode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1006 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  std::vector<char> ident_str;
  refalrts::FnResult res = string_from_seq(ident_str, content_b, content_e);

  if (res != refalrts::cSuccess) {
    return res;
  }

  refalrts::RefalIdentifier ident = refalrts::ident_implode(&ident_str[0]);

  if (! ident) {
    return refalrts::cIdentTableLimit;
  }

  refalrts::reinit_ident(arg_begin, ident);
  refalrts::splice_to_freelist(pfunc_name, arg_end);

  return refalrts::cSuccess;
#line 1086 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Implode("Implode", 0U, 0U, func_Implode);

static refalrts::FnResult func_Explode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1033 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pident = 0;
  if (
    ! refalrts::svar_right(pident, content_b, content_e)
    || refalrts::cDataIdentifier != pident->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();
  if (
    ! refalrts::alloc_string(content_b, content_e, pident->ident_info->name())
  ) {
    return refalrts::cNoMemory;
  }

  refalrts::splice_evar(arg_begin, content_b, content_e);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 1116 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Explode("Explode", 0U, 0U, func_Explode);

static refalrts::FnResult func_FWriteBytes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1061 "Library.sref"
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

  int fputc_return = 0;

  while (fputc_return != EOF && ! refalrts::empty_seq(content_b, content_e)) {
    switch (content_b->tag) {
      case refalrts::cDataChar:
        fputc_return = fputc(content_b->char_info, handle);
        break;

      case refalrts::cDataNumber:
        fputc_return = fputc(content_b->number_info & 0xFF, handle);
        break;

      default:
        return refalrts::cRecognitionImpossible;
    }

    refalrts::move_left(content_b, content_e);
  }

  if (fputc_return == EOF) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 1163 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteBytes("FWriteBytes", 0U, 0U, func_FWriteBytes);

static refalrts::FnResult func_FReadBytes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1106 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter pcount_bytes = 0;

  if (
    ! refalrts::svar_left(pfile_handle, content_b, content_e)
    || refalrts::cDataFile != pfile_handle->tag
    || ! refalrts::svar_left(pcount_bytes, content_b, content_e)
    || refalrts::cDataNumber != pcount_bytes->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();

  FILE *handle = static_cast<FILE*>(pfile_handle->file_info);
  refalrts::RefalNumber count = pcount_bytes->number_info;

  refalrts::Iter begin = 0;
  refalrts::Iter end = 0;

  clearerr(handle);
  int cur_char = 0;
  while (count > 0 && (cur_char = getc(handle)) != EOF) {
    /*
      Пользуемся тем фактом, что в данной реализации размещёные в свободной
      памяти узлы располагаются в последовательных адресах.
    */
    refalrts::RefalNumber value = cur_char & 0xFFU;
    if (! refalrts::alloc_number(end, value)) {
      return refalrts::cNoMemory;
    }

    if (begin == 0) {
      begin = end;
    }
    --count;
  }

  if (begin == 0) assert (end == 0);
  if (begin != 0) assert (end != 0);

  if (cur_char == EOF && ferror(handle)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_evar(arg_begin, begin, end);
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 1223 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FReadBytes("FReadBytes", 0U, 0U, func_FReadBytes);

static refalrts::FnResult func_FTell(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1164 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
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
  long int pos = ftell(handle);

  if (pos == -1L) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, static_cast<refalrts::RefalNumber>(pos));
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 1255 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FTell("FTell", 0U, 0U, func_FTell);

static refalrts::FnResult func_FSeek(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1194 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter porigin = 0;
  refalrts::Iter psign = 0;
  refalrts::Iter poffset = 0;

  if (
    ! refalrts::svar_left(pfile_handle, content_b, content_e)
    || refalrts::cDataFile != pfile_handle->tag
    || ! refalrts::svar_left(porigin, content_b, content_e)
    || refalrts::cDataIdentifier != porigin->tag
    || ! refalrts::svar_left(psign, content_b, content_e)
    || refalrts::cDataChar != psign->tag
    || ! refalrts::svar_left(poffset, content_b, content_e)
    || refalrts::cDataNumber != poffset->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = static_cast<FILE*>(pfile_handle->file_info);

  int origin;
  if (USE_IDENT(BEGIN) == porigin->ident_info) {
    origin = SEEK_SET;
  } else if (USE_IDENT(CURRENT) == porigin->ident_info) {
    origin = SEEK_CUR;
  } else if (USE_IDENT(END) == porigin->ident_info) {
    origin = SEEK_END;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  signed sign;
  if ('+' == psign->char_info) {
    sign = +1;
  } else if ('-' == psign->char_info) {
    sign = -1;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  long int offset = sign * static_cast<long int>(poffset->number_info);

  if (fseek(handle, offset, origin) != 0) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
#line 1315 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FSeek("FSeek", 0U, 0U, func_FSeek);

static refalrts::FnResult func_RenameFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1252 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter source_b = 0;
  refalrts::Iter source_e = 0;
  refalrts::Iter target_b = 0;
  refalrts::Iter target_e = 0;

  if (
    ! refalrts::brackets_left(source_b, source_e, content_b, content_e)
    || ! refalrts::brackets_left(target_b, target_e, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  char source[FILENAME_MAX + 1] = { '\0' };
  unsigned source_len = read_chars(source, FILENAME_MAX, source_b, source_e);

  if (! refalrts::empty_seq(source_b, source_e) || source_len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  char target[FILENAME_MAX + 1] = { '\0' };
  unsigned target_len = read_chars(target, FILENAME_MAX, target_b, target_e);

  if (! refalrts::empty_seq(target_b, target_e) || target_len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  int result = rename(source, target);

  refalrts::RefalIdentifier i_result =
    result == 0 ? USE_IDENT(True) : USE_IDENT(False);

  refalrts::reinit_ident(arg_begin, i_result);
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 1362 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RenameFile("RenameFile", 0U, 0U, func_RenameFile);

static refalrts::FnResult func_RemoveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1297 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  char filename[FILENAME_MAX + 1] = { '\0' };
  unsigned filename_len =
    read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e) || filename_len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  int result = remove(filename);

  refalrts::RefalIdentifier i_result =
    result == 0 ? USE_IDENT(True) : USE_IDENT(False);

  refalrts::reinit_ident(arg_begin, i_result);
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 1390 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RemoveFile("RemoveFile", 0U, 0U, func_RemoveFile);


//End of file
