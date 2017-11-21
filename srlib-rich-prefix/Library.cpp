// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_BEGIN = refalrts::ident_from_static("BEGIN");
const refalrts::RefalIdentifier ident_CURRENT = refalrts::ident_from_static("CURRENT");
const refalrts::RefalIdentifier ident_END = refalrts::ident_from_static("END");
const refalrts::RefalIdentifier ident_Fails = refalrts::ident_from_static("Fails");
const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
const refalrts::RefalIdentifier ident_Success = refalrts::ident_from_static("Success");
const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Arg("Arg", 0U, 0U);
static refalrts::ExternalReference ref_Card("Card", 0U, 0U);
static refalrts::ExternalReference ref_Explode("Explode", 0U, 0U);
static refalrts::ExternalReference ref_Get("Get", 0U, 0U);
static refalrts::ExternalReference ref_Open("Open", 0U, 0U);
static refalrts::ExternalReference ref_Print("Print", 0U, 0U);
static refalrts::ExternalReference ref_Prout("Prout", 0U, 0U);
static refalrts::ExternalReference ref_Proud("Proud", 0U, 0U);
static refalrts::ExternalReference ref_Trout("Trout", 0U, 0U);
static refalrts::ExternalReference ref_Put("Put", 0U, 0U);
static refalrts::ExternalReference ref_Putout("Putout", 0U, 0U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_GetEnv("GetEnv", 0U, 0U);
static refalrts::ExternalReference ref_Close("Close", 0U, 0U);
static refalrts::ExternalReference ref_ExistFile("ExistFile", 0U, 0U);
static refalrts::ExternalReference ref_Explodeu_Ext("Explode_Ext", 0U, 0U);
static refalrts::ExternalReference ref_Write("Write", 0U, 0U);
static refalrts::ExternalReference ref_FClose("FClose", 0U, 0U);
static refalrts::ExternalReference ref_gen_FOpen_A1("FOpen=1", 3735402646U, 3143664169U);
static refalrts::ExternalReference ref_FOpen("FOpen", 0U, 0U);
static refalrts::ExternalReference ref_FReadLine("FReadLine", 0U, 0U);
static refalrts::ExternalReference ref_FWriteLine("FWriteLine", 0U, 0U);
static refalrts::ExternalReference ref_GetFreeHandle("GetFreeHandle", 3735402646U, 3143664169U);
static refalrts::ExternalReference ref_ReadLine("ReadLine", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Exit("Exit", 0U, 0U);
static refalrts::ExternalReference ref_System("System", 0U, 0U);
static refalrts::ExternalReference ref_IntFromStr("IntFromStr", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_Chr("Chr", 0U, 0U);
static refalrts::ExternalReference ref_Ord("Ord", 0U, 0U);
static refalrts::ExternalReference ref_SymbCompare("SymbCompare", 0U, 0U);
static refalrts::ExternalReference ref_Implode("Implode", 0U, 0U);
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

namespace {

extern refalrts::FnResult arg(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult explode(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
);

enum {
  cFlags_Autoopen       = 1 << 0,
  cFlags_Read           = 1 << 1,
  cFlags_Write          = 1 << 2,
  cFlags_ReturnHandle   = 1 << 3,
  cFlags_NoHandle       = 1 << 4,
  cFlags_Transparent    = 1 << 5,

  cFlags_StreamMask     = 3 << 6,
  cFlags_StdIn          = 1 << 6,
  cFlags_StdOut         = 2 << 6,
  cFlags_StdErr         = 3 << 6,

  cFlags_NoEOL          = 1 << 8,
};

extern refalrts::FnResult fread_line(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
);

extern refalrts::FnResult refal_open(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
);

extern bool get_free_handle(refalrts::RefalNumber& free_file);

extern refalrts::FnResult fwrite_line(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
);

extern refalrts::FnResult refal_getenv(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
);

enum CloseMode { cCloseMode_Silent, cCloseMode_Fail };

extern refalrts::FnResult close(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, CloseMode mode
);

extern refalrts::FnResult exist_file(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
);

}  // unnamed namespace
#line 122 "Library.cpp"
static refalrts::FnResult func_Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 94 "Library.sref"
  return arg(arg_begin, arg_end);
#line 126 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Arg("Arg", 0U, 0U, func_Arg);

static refalrts::FnResult func_Card(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 104 "Library.sref"
  return fread_line(arg_begin, arg_end, cFlags_NoHandle | cFlags_StdIn);
#line 134 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Card("Card", 0U, 0U, func_Card);

static refalrts::FnResult func_Explode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 114 "Library.sref"
  return explode(arg_begin, arg_end);
#line 142 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Explode("Explode", 0U, 0U, func_Explode);

static refalrts::FnResult func_Get(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 124 "Library.sref"
  return fread_line(
    arg_begin, arg_end, cFlags_Autoopen | cFlags_Read | cFlags_StdIn
  );
#line 152 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Get("Get", 0U, 0U, func_Get);

static refalrts::FnResult func_Open(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 137 "Library.sref"
  return refal_open(arg_begin, arg_end);
#line 160 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Open("Open", 0U, 0U, func_Open);

static refalrts::FnResult func_Print(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 147 "Library.sref"
  return fwrite_line(
    arg_begin, arg_end, cFlags_NoHandle | cFlags_StdOut | cFlags_Transparent
  );
#line 170 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Print("Print", 0U, 0U, func_Print);

static refalrts::FnResult func_Prout(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 159 "Library.sref"
  return fwrite_line(arg_begin, arg_end, cFlags_NoHandle | cFlags_StdOut);
#line 178 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Prout("Prout", 0U, 0U, func_Prout);

static refalrts::FnResult func_Proud(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Proud/4 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyExpression#1 as range 2
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.AnyExpression#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Prout.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Proud("Proud", 0U, 0U, func_Proud);

static refalrts::FnResult func_Trout(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Trout/4 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyExpression#1 as range 2
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.AnyExpression#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Prout.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Trout("Trout", 0U, 0U, func_Trout);

static refalrts::FnResult func_Put(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 175 "Library.sref"
  return fwrite_line(
    arg_begin, arg_end,
    cFlags_Autoopen | cFlags_Write | cFlags_StdErr | cFlags_Transparent
  );
#line 239 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Put("Put", 0U, 0U, func_Put);

static refalrts::FnResult func_Putout(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 188 "Library.sref"
  return fwrite_line(
    arg_begin, arg_end, cFlags_Autoopen | cFlags_Write | cFlags_StdErr
  );
#line 249 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Putout("Putout", 0U, 0U, func_Putout);

static refalrts::FnResult func_Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 222 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  char type = '*';
  char subtype = '0';

  if (! refalrts::empty_seq(content_b, content_e)) {
    switch (content_b->tag) {
    case refalrts::cDataChar:
      {
        char ch = content_b->char_info;

        if (isdigit(ch)) {
          type = 'D';
        } else {
          if (isalpha(ch)) {
            type = 'L';
          } else if (isprint(ch)) {
            type = 'P';
          } else {
            type = 'O';
          }

          if (isupper(ch)) {
            subtype = 'u';
          } else {
            subtype = 'l';
          }
        }
      }
      break;

    case refalrts::cDataNumber:
      type = 'N';
      break;

    case refalrts::cDataFunction:
      type = 'F';
      subtype = 'g';
      break;

    case refalrts::cDataIdentifier:
      {
        const char *name = content_b->ident_info->name();

        type = 'W';
        subtype = 'q';
        if (isalpha(*name)) {
          while (
            *name != '\0' && (isalnum(*name) || *name == '_' || *name == '-')
          ) {
            ++name;
          }

          if (*name == '\0') {
            subtype = 'i';
          }
        }
      }
      break;

    case refalrts::cDataOpenADT:
      type = 'B';
      subtype = 'a';
      break;

    case refalrts::cDataOpenBracket:
      type = 'B';
      break;

    case refalrts::cDataFile:
      type = 'H';
      break;

    case refalrts::cDataClosure:
      type = 'F';
      subtype = 'c';
      break;

    default:
      refalrts_switch_default_violation(content_b->tag);
      // break;
    }
  }

  refalrts::reinit_char(arg_begin, type);
  refalrts::reinit_char(pfunc_name, subtype);
  refalrts::splice_to_freelist(arg_end, arg_end);

  return refalrts::cSuccess;
#line 348 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Type("Type", 0U, 0U, func_Type);

static refalrts::FnResult func_GetEnv(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 324 "Library.sref"
  return refal_getenv(arg_begin, arg_end);
#line 356 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetEnv("GetEnv", 0U, 0U, func_GetEnv);

static refalrts::FnResult func_Close(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 335 "Library.sref"
  return close(arg_begin, arg_end, cCloseMode_Silent);
#line 364 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Close("Close", 0U, 0U, func_Close);

static refalrts::FnResult func_ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 346 "Library.sref"
  return exist_file(arg_begin, arg_end);
#line 372 "Library.cpp"
}

static refalrts::NativeReference nat_ref_ExistFile("ExistFile", 0U, 0U, func_ExistFile);

static refalrts::FnResult func_Explodeu_Ext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 356 "Library.sref"
  return explode(arg_begin, arg_end);
#line 380 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Explodeu_Ext("Explode_Ext", 0U, 0U, func_Explodeu_Ext);

static refalrts::FnResult func_Write(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 366 "Library.sref"
  return fwrite_line(
    arg_begin, arg_end,
    cFlags_Autoopen | cFlags_Write | cFlags_StdErr | cFlags_NoEOL
  );
#line 391 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Write("Write", 0U, 0U, func_Write);

static refalrts::FnResult func_FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 385 "Library.sref"
  return close(arg_begin, arg_end, cCloseMode_Fail);
#line 399 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FClose("FClose", 0U, 0U, func_FClose);

static refalrts::FnResult func_gen_FOpen_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FOpen=1/4 t.Mode#1/5 s.FileNameChar#1/7 (/10 e.FileName#1/8 )/11 s.FreeHandle#2/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.FileName#1 as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Mode#1: 5
  //DEBUG: s.FileNameChar#1: 7
  //DEBUG: e.FileName#1: 8
  //DEBUG: s.FreeHandle#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FileNameChar#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Open/4 AsIs: t.Mode#1/5 } Tile{ HalfReuse: s.FreeHandle2 #12/1 } Tile{ HalfReuse: s.FileNameChar1 #7/10 AsIs: e.FileName#1/8 HalfReuse: >/11 AsIs: s.FreeHandle#2/12 } Tile{ ]] }
  refalrts::update_name( context[4], ref_Open.ref.function );
  refalrts::reinit_svar( context[1], context[12] );
  refalrts::reinit_svar( context[10], context[7] );
  refalrts::reinit_close_call( context[11] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FOpen_A1("FOpen=1", 3735402646U, 3143664169U, func_gen_FOpen_A1);

static refalrts::FnResult func_FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FOpen/4 t.Mode#1/5 s.FileNameChar#1/7 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: t.Mode#1: 5
  //DEBUG: s.FileNameChar#1: 7
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 </9 Tile{ HalfReuse: & @create_closure@/0 Reuse: & FOpen=1/4 AsIs: t.Mode#1/5 AsIs: s.FileNameChar#1/7 } (/10 Tile{ AsIs: e.FileName#1/2 } )/11 >/12 </13 & GetFreeHandle/14 >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_GetFreeHandle.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure );
  refalrts::update_name( context[4], ref_gen_FOpen_A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FOpen("FOpen", 0U, 0U, func_FOpen);

static refalrts::FnResult func_FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 407 "Library.sref"
  return fread_line(arg_begin, arg_end, cFlags_ReturnHandle | cFlags_StdIn);
#line 522 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FReadLine("FReadLine", 0U, 0U, func_FReadLine);

static refalrts::FnResult func_FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 417 "Library.sref"
  return fwrite_line(
    arg_begin, arg_end, cFlags_Write | cFlags_StdErr | cFlags_ReturnHandle
  );
#line 532 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteLine("FWriteLine", 0U, 0U, func_FWriteLine);

static refalrts::FnResult func_GetFreeHandle(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 430 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber free_file = 0;
  if (! get_free_handle(free_file)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, free_file);
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 556 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetFreeHandle("GetFreeHandle", 3735402646U, 3143664169U, func_GetFreeHandle);

static refalrts::FnResult func_ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 456 "Library.sref"
  return fread_line(arg_begin, arg_end, cFlags_NoHandle | cFlags_StdIn);
#line 564 "Library.cpp"
}

static refalrts::NativeReference nat_ref_ReadLine("ReadLine", 0U, 0U, func_ReadLine);

static refalrts::FnResult func_WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 468 "Library.sref"
  return fwrite_line(arg_begin, arg_end, cFlags_NoHandle | cFlags_StdOut);
#line 572 "Library.cpp"
}

static refalrts::NativeReference nat_ref_WriteLine("WriteLine", 0U, 0U, func_WriteLine);

#line 478 "Library.sref"
#define USE_IDENT(ident_name) (ident_ ## ident_name)
#line 579 "Library.cpp"
#line 492 "Library.sref"
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

#line 619 "Library.cpp"
static refalrts::FnResult func_Add(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 534 "Library.sref"
  ARITHM(+, ARITHM_NO_CHECK);
#line 623 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Add("Add", 0U, 0U, func_Add);

static refalrts::FnResult func_Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 540 "Library.sref"
  ARITHM(-, ARITHM_NO_CHECK);
#line 631 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Sub("Sub", 0U, 0U, func_Sub);

static refalrts::FnResult func_Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 546 "Library.sref"
  ARITHM(*, ARITHM_NO_CHECK);
#line 639 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Mul("Mul", 0U, 0U, func_Mul);

static refalrts::FnResult func_Div(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 552 "Library.sref"
  ARITHM(/, ARITHM_ZERODIV);
#line 647 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Div("Div", 0U, 0U, func_Div);

static refalrts::FnResult func_Mod(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 558 "Library.sref"
  ARITHM(%, ARITHM_ZERODIV);
#line 655 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Mod("Mod", 0U, 0U, func_Mod);

#line 565 "Library.sref"
namespace {

enum { cMaxFileHandles = 40 };
FILE *g_file_handles[cMaxFileHandles];

bool file_handle_left(
  refalrts::Iter& pfile_handle, refalrts::Iter& first, refalrts::Iter& last
) {
  return refalrts::svar_left(pfile_handle, first, last)
    && refalrts::cDataNumber == pfile_handle->tag;
}

void close_all_files_at_exit(void *) {
  for (size_t i = 0; i < cMaxFileHandles; ++i) {
    if (g_file_handles[i] != 0) {
      fclose(g_file_handles[i]);
      g_file_handles[i] = 0;    // на всякий случай
    }
  }
}

FILE *extract_file_handle(refalrts::Iter pfile_handle, unsigned flags = 0) {
  bool is_stdin = (flags & cFlags_StreamMask) == cFlags_StdIn;
  bool is_stdout = (flags & cFlags_StreamMask) == cFlags_StdOut;
  bool is_stderr = (flags & cFlags_StreamMask) == cFlags_StdErr;

  FILE *default_handle =
    is_stdin ? stdin : is_stdout ? stdout : is_stderr ? stderr : 0;

  if (flags & cFlags_NoHandle) {
    assert(is_stdin + is_stdout + is_stderr == 1);
    return default_handle;
  } else {
    assert(refalrts::cDataNumber == pfile_handle->tag);

    bool autoopen = flags & cFlags_Autoopen;
    refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

    if (file_no == 0) {
      assert(is_stdin + is_stdout + is_stderr <= 1);
      return default_handle;
    } else if (g_file_handles[file_no] == 0 && autoopen) {
      refalrts::at_exit(close_all_files_at_exit, 0);

      char default_name[sizeof("REFAL4294967296.DAT")];
      sprintf(default_name, "REFAL%d.DAT", file_no);

      bool default_read = (flags & cFlags_Read) != 0;
      bool default_write = (flags & cFlags_Write) != 0;
      assert(default_read + default_write == 1);

      const char *default_mode = default_read ? "r" : default_write ? "w" : 0;
      g_file_handles[file_no] = fopen(default_name, default_mode);
    }

    return g_file_handles[file_no];
  }
}

bool get_free_handle(refalrts::RefalNumber& free_file) {
  free_file = 1;
  while (free_file < cMaxFileHandles && g_file_handles[free_file] != 0)
    ++free_file;

  return free_file < cMaxFileHandles;
}

bool release_file_handle(refalrts::Iter pfile_handle) {
  assert(refalrts::cDataNumber == pfile_handle->tag);

  refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

  assert(g_file_handles[file_no] != 0);

  bool successful_closed = EOF != fclose(g_file_handles[file_no]);
  g_file_handles[file_no] = 0;
  return successful_closed;
}

bool reopen_handle(
  refalrts::Iter pfile_handle, const char *filename, const char *mode
) {
  assert(refalrts::cDataNumber == pfile_handle->tag);

  refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

  if (g_file_handles[file_no] != 0) {
    release_file_handle(pfile_handle);
  }

  char default_name[sizeof("REFAL4294967296.DAT")];
  if ((filename == 0 || strlen(filename) == 0)) {
    sprintf(default_name, "REFAL%d.DAT", file_no);
    filename = default_name;
  }

  refalrts::at_exit(close_all_files_at_exit, 0);
  return (g_file_handles[file_no] = fopen(filename, mode)) != 0;
}

refalrts::FnResult fwrite_line(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  bool handle_in_arg = (flags & cFlags_NoHandle) == 0;
  refalrts::Iter pfile_handle = 0;

  if (handle_in_arg && ! file_handle_left(pfile_handle, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(pfile_handle, flags);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

  if (ferror(handle)) {
    return refalrts::cRecognitionImpossible;
  }

  int printf_res = 0;

  for (
    refalrts::Iter p = content_b, end = content_e;
    printf_res >= 0 && ! refalrts::empty_seq(p, end);
    refalrts::move_left(p, end)
  ) {
    switch(p->tag) {
      case refalrts::cDataChar:
        printf_res = fprintf(handle, "%c", p->char_info);
        break;

      case refalrts::cDataNumber:
        printf_res = fprintf(handle, "%u ", p->number_info);
        break;

      case refalrts::cDataFunction:
        printf_res = fprintf(handle, "%s ", p->function_info->name.name);
        break;

      case refalrts::cDataIdentifier:
        printf_res = fprintf(handle, "%s ", p->ident_info->name());
        break;

      case refalrts::cDataOpenADT:
        printf_res = fprintf(handle, "[");
        break;

      case refalrts::cDataCloseADT:
        printf_res = fprintf(handle, "]");
        break;

      case refalrts::cDataOpenBracket:
        printf_res = fprintf(handle, "(");
        break;

      case refalrts::cDataCloseBracket:
        printf_res = fprintf(handle, ")");
        break;

      case refalrts::cDataFile:
        printf_res = fprintf(handle, "*%p", p->file_info);
        break;

      case refalrts::cDataClosure:
        printf_res = fprintf(handle, "{ ");
        p = refalrts::unwrap_closure(p);
        break;

      case refalrts::cDataClosureHead:
        printf_res = fprintf(handle, "[%u] ", p->number_info);
        break;

      case refalrts::cDataUnwrappedClosure:
        printf_res = fprintf(handle, "} ");
        refalrts::wrap_closure(p);
        break;

      default:
        refalrts_switch_default_violation(p->tag);
    }
  }

  if (printf_res >= 0 && ! (flags & cFlags_NoEOL)) {
    printf_res = fprintf(handle, "\n");
  }

  if (printf_res < 0) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter res = arg_begin;
  if (flags & cFlags_Transparent) {
    res = refalrts::splice_evar(res, content_b, content_e);
  }

  if (flags & cFlags_ReturnHandle) {
    refalrts::splice_stvar(res, pfile_handle);
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
}

refalrts::FnResult fread_line(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  bool handle_in_arg = (flags & cFlags_NoHandle) == 0;
  refalrts::Iter pfile_handle = 0;

  if (
    (handle_in_arg && ! file_handle_left(pfile_handle, content_b, content_e))
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();

  FILE *handle = extract_file_handle(pfile_handle, flags);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter dummy = 0;
  int cur_char;
  while ((cur_char = getc(handle)) != EOF && cur_char != '\n') {
    /*
      Пользуемся тем фактом, что в данной реализации размещёные в свободной
      памяти узлы располагаются в последовательных адресах.
    */
    if (! refalrts::alloc_char(dummy, static_cast<char>(cur_char))) {
      return refalrts::cNoMemory;
    }
  }

  if (cur_char == EOF) {
    if (! refalrts::alloc_number(dummy, 0UL)) {
      return refalrts::cNoMemory;
    }
  }

  refalrts::Iter res = refalrts::splice_from_freelist(arg_begin);
  if (flags & cFlags_ReturnHandle) {
    refalrts::splice_stvar(res, pfile_handle);
  }
  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
}

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

refalrts::FnResult refal_open(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  std::string mode;

  refalrts::Iter mode_b = 0;
  refalrts::Iter mode_e = 0;
  refalrts::Iter pmode = 0;

  if (! refalrts::tvar_left(pmode, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  if (refalrts::char_term('r', pmode)) {
    mode = "r";
  } else if (refalrts::char_term('w', pmode)) {
    mode = "w";
  } else if (refalrts::char_term('a', pmode)) {
    mode = "a";
  } else if (refalrts::brackets_term(mode_b, mode_e, pmode)) {
    char mode_str[100] = { '\0' };  // должно хватить
    unsigned len =
      refalrts::read_chars(mode_str, sizeof(mode_str) - 1, mode_b, mode_e);

    if (! refalrts::empty_seq(mode_b, mode_e) || len == 0) {
      return refalrts::cRecognitionImpossible;
    }

    mode = mode_str;
  } else if (refalrts::cDataIdentifier == pmode->tag) {
    mode = pmode->ident_info->name();
  } else {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter pfile_handle = 0;
  if (! file_handle_left(pfile_handle, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  char filename[FILENAME_MAX + 1] = { '\0' };
  refalrts::read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  if (! reopen_handle(pfile_handle, filename, mode.c_str())) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
}

refalrts::FnResult close(
  refalrts::Iter arg_begin, refalrts::Iter arg_end, CloseMode mode
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  if (
    ! file_handle_left(pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(pfile_handle);
  switch (mode) {
  case cCloseMode_Silent:
    if (handle) {
      if (! release_file_handle(pfile_handle)) {
        return refalrts::cRecognitionImpossible;
      }
    }
    break;

  case cCloseMode_Fail:
    if (! handle) {
      return refalrts::cRecognitionImpossible;
    }

    if (! release_file_handle(pfile_handle)) {
      return refalrts::cRecognitionImpossible;
    }
    break;

  default:
    refalrts_switch_default_violation(mode);
  }

  refalrts::splice_to_freelist(arg_begin, arg_end);
  return refalrts::cSuccess;
}

refalrts::FnResult arg(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
}


refalrts::FnResult exist_file(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
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
}

}  // unnamed namespace
namespace {

refalrts::FnResult refal_getenv(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
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
}

}  // unnamed namespace
#line 1150 "Library.cpp"
static refalrts::FnResult func_Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1061 "Library.sref"
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
#line 1169 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Exit("Exit", 0U, 0U, func_Exit);

static refalrts::FnResult func_System(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1082 "Library.sref"
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
#line 1198 "Library.cpp"
}

static refalrts::NativeReference nat_ref_System("System", 0U, 0U, func_System);

static refalrts::FnResult func_IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1111 "Library.sref"
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
#line 1244 "Library.cpp"
}

static refalrts::NativeReference nat_ref_IntFromStr("IntFromStr", 0U, 0U, func_IntFromStr);

static refalrts::FnResult func_StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1155 "Library.sref"
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
#line 1302 "Library.cpp"
}

static refalrts::NativeReference nat_ref_StrFromInt("StrFromInt", 0U, 0U, func_StrFromInt);

static refalrts::FnResult func_Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1211 "Library.sref"
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
#line 1329 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Chr("Chr", 0U, 0U, func_Chr);

static refalrts::FnResult func_Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1236 "Library.sref"
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
#line 1356 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Ord("Ord", 0U, 0U, func_Ord);

#line 1260 "Library.sref"
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
#line 1564 "Library.cpp"
static refalrts::FnResult func_SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1466 "Library.sref"
  BINARY(COMPARE_BINARY);
#line 1568 "Library.cpp"
}

static refalrts::NativeReference nat_ref_SymbCompare("SymbCompare", 0U, 0U, func_SymbCompare);

static refalrts::FnResult func_Implode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1472 "Library.sref"
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
#line 1597 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Implode("Implode", 0U, 0U, func_Implode);

#line 1498 "Library.sref"
namespace {

refalrts::FnResult explode(
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
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
}

}  // unnamed namespace
#line 1634 "Library.cpp"
static refalrts::FnResult func_FWriteBytes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1533 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (! file_handle_left(pfile_handle, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(pfile_handle);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

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
#line 1677 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteBytes("FWriteBytes", 0U, 0U, func_FWriteBytes);

static refalrts::FnResult func_FReadBytes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1578 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter pcount_bytes = 0;

  if (
    ! file_handle_left(pfile_handle, content_b, content_e)
    || ! refalrts::svar_left(pcount_bytes, content_b, content_e)
    || refalrts::cDataNumber != pcount_bytes->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator();

  FILE *handle = extract_file_handle(pfile_handle);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

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
#line 1740 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FReadBytes("FReadBytes", 0U, 0U, func_FReadBytes);

static refalrts::FnResult func_FTell(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1639 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (
    ! file_handle_left(pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(pfile_handle);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

  long int pos = ftell(handle);

  if (pos == -1L) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, static_cast<refalrts::RefalNumber>(pos));
  refalrts::splice_to_freelist(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 1775 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FTell("FTell", 0U, 0U, func_FTell);

static refalrts::FnResult func_FSeek(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1672 "Library.sref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter porigin = 0;
  refalrts::Iter psign = 0;
  refalrts::Iter poffset = 0;

  if (
    ! file_handle_left(pfile_handle, content_b, content_e)
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

  FILE *handle = extract_file_handle(pfile_handle);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

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
#line 1837 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FSeek("FSeek", 0U, 0U, func_FSeek);

static refalrts::FnResult func_RenameFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1732 "Library.sref"
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
#line 1884 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RenameFile("RenameFile", 0U, 0U, func_RenameFile);

static refalrts::FnResult func_RemoveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
#line 1777 "Library.sref"
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
#line 1912 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RemoveFile("RemoveFile", 0U, 0U, func_RemoveFile);


//End of file
