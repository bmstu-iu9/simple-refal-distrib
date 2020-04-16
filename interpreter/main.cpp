// This file automatically generated from 'main.ref'
// Don't edit! Edit 'main.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1702956446_854783491
#define COOKIE1_ 1702956446U
#define COOKIE2_ 854783491U

enum efunc {
  efunc_u_u_Metau_Mu = 0,
  efunc_u_u_Stepm_Drop = 1,
  efunc_Mu = 2,
  efunc_d_table = 3,
  efunc_Add = 4,
  efunc_Arg = 5,
  efunc_Br = 6,
  efunc_Card = 7,
  efunc_Chr = 8,
  efunc_Cp = 9,
  efunc_Dg = 10,
  efunc_Dgall = 11,
  efunc_Div = 12,
  efunc_Divmod = 13,
  efunc_Explode = 14,
  efunc_First = 15,
  efunc_Get = 16,
  efunc_Implode = 17,
  efunc_Last = 18,
  efunc_Lenw = 19,
  efunc_Lower = 20,
  efunc_Mod = 21,
  efunc_Mul = 22,
  efunc_Numb = 23,
  efunc_Open = 24,
  efunc_Ord = 25,
  efunc_Print = 26,
  efunc_Prout = 27,
  efunc_Proud = 28,
  efunc_Trout = 29,
  efunc_Put = 30,
  efunc_Putout = 31,
  efunc_Rp = 32,
  efunc_Step = 33,
  efunc_Sub = 34,
  efunc_Symb = 35,
  efunc_Time = 36,
  efunc_Type = 37,
  efunc_Upper = 38,
  efunc_Sysfun = 39,
  efunc_Freeze = 40,
  efunc_Freezer = 41,
  efunc_Dn = 42,
  efunc_Up = 43,
  efunc_Evm_met = 44,
  efunc_Residue = 45,
  efunc_u_u_Metau_Residue = 46,
  efunc_GetEnv = 47,
  efunc_System = 48,
  efunc_Exit = 49,
  efunc_Close = 50,
  efunc_ExistFile = 51,
  efunc_GetCurrentDirectory = 52,
  efunc_RemoveFile = 53,
  efunc_Implodeu_Ext = 54,
  efunc_Explodeu_Ext = 55,
  efunc_TimeElapsed = 56,
  efunc_Compare = 57,
  efunc_DeSysfun = 58,
  efunc_XMLParse = 59,
  efunc_Random = 60,
  efunc_RandomDigit = 61,
  efunc_Write = 62,
  efunc_ListOfBuiltin = 63,
  efunc_SizeOf = 64,
  efunc_GetPID = 65,
  efunc_GetPPID = 66,
  efunc_Modulem_Load = 67,
  efunc_Modulem_LookupFunction = 68,
  efunc_Modulem_Unload = 69,
  efunc_gen_Go_A6 = 70,
  efunc_gen_Go_A5 = 71,
  efunc_gen_Go_A4 = 72,
  efunc_gen_Go_A3 = 73,
  efunc_FindEntryPoint = 74,
  efunc_gen_Go_A2 = 75,
  efunc_LoadProgramModule = 76,
  efunc_gen_Go_A1 = 77,
  efunc_Go = 78,
  efunc_ReadInterpreterFlags = 79,
  efunc_gen_LoadProgramModule_B1 = 80,
  efunc_gen_FindEntryPoint_B1S2B1 = 81,
  efunc_gen_FindEntryPoint_B1 = 82,
};


enum ident {
  ident_Success = 0,
  ident_Fails = 1,
  ident_stderr = 2,
  ident_GO = 3,
  ident_Go = 4,
  ident_Mu = 5,
  ident_Up = 6,
  ident_Evm_met = 7,
  ident_Residue = 8,
  ident_u_u_Metau_Residue = 9,
  ident_ReadInterpreterFlags = 10,
  ident_LoadProgramModule = 11,
  ident_FindEntryPoint = 12,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);

#line 5 "main.ref"
#include <stdio.h>
#include <string.h>

#include "refalrts-diagnostic-defs.h"
#include "refalrts-vm.h"

static void version(FILE *output) {
  fprintf(
    output,
    "rlgo, a part of Refal-5-lambda compiler toolkit, version 3.0\n"
    "Copyright (c) 2008-2016, Alexander Konovalov, "
    "2016-2020, BMSTU IU9 Department\n"
    "All rights reserved.\n\n"
  );
}

static void help(FILE *output) {
  fprintf(
    output,
    "Interpreter (loader) for Refal-5-lambda modules, version 2.5\n"
    "Command line:\n\n"
    "    interpreter [--param=value ...] module [module options]\n"
    "    interpreter --help\n\n"
    "--help - show this help\n\n"
    "The parameters are same as in the config file "
    "@refal-5-lambda-diagnostic.ini:\n\n"
    "%s",
    refalrts::DiagnosticConfig::help
  );
}
#line 278 "main.cpp"

static refalrts::FnResult func_gen_Go_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Go=6/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Go=6/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A6("Go=6", COOKIE1_, COOKIE2_, func_gen_Go_A6);


static refalrts::FnResult func_gen_Go_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Go=5/4 t.Handle#4/5 e.Skipped#6/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Skipped#6 as range 2
  //DEBUG: t.Handle#4: 5
  //DEBUG: e.Skipped#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Skipped#6/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=6/4 } </7 & Module-Unload/8 Tile{ AsIs: t.Handle#4/5 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Modulem_Unload]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A5("Go=5", COOKIE1_, COOKIE2_, func_gen_Go_A5);


static refalrts::FnResult func_gen_Go_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Go=4/4 t.Handle#4/5 s.EntryPoint#5/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Handle#4: 5
  //DEBUG: s.EntryPoint#5: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=5/4 AsIs: t.Handle#4/5 } </8 Tile{ AsIs: s.EntryPoint#5/7 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A5]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A4("Go=4", COOKIE1_, COOKIE2_, func_gen_Go_A4);


static refalrts::FnResult func_gen_Go_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Go=3/4 t.Handle#4/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Handle#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=4/4 AsIs: t.Handle#4/5 HalfReuse: </1 } & FindEntryPoint/7 t.Handle#4/5/8 >/10 >/11 Tile{ ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_FindEntryPoint]);
  refalrts::copy_evar(vm, context[8], context[9], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A4]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A3("Go=3", COOKIE1_, COOKIE2_, func_gen_Go_A3);


static refalrts::FnResult func_gen_Go_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go=2/4 e.Module#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Module#3 as range 2
  //DEBUG: e.Module#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Go=3/6 Tile{ AsIs: </0 Reuse: & LoadProgramModule/4 AsIs: e.Module#3/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Go_A3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_LoadProgramModule]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A2("Go=2", COOKIE1_, COOKIE2_, func_gen_Go_A2);


static refalrts::FnResult func_gen_Go_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Go=1/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=2/4 HalfReuse: </1 } & Arg/5 0/6 >/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Arg]);
  refalrts::alloc_number(vm, context[6], 0UL);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A2]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A1("Go=1", COOKIE1_, COOKIE2_, func_gen_Go_A1);


static refalrts::FnResult func_Go(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=1/4 HalfReuse: </1 } & ReadInterpreterFlags/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_ReadInterpreterFlags]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_ReadInterpreterFlags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 51 "main.ref"
  using refalrts::DiagnosticConfig;
  DiagnosticConfig *diagnostic_config = vm->diagnostic_config();

  if (vm->arg(1) && vm->arg(1)[0] == '\0') {
    help(stdout);
    vm->set_return_code(0);
    return refalrts::cExit;
  }

  vm->shift_args();
  char *arg;
  int count = 1;
  while (arg = vm->arg(0), arg && arg[0] == '-' && arg[1] == '-') {
    char *equals = strchr(arg, '=');

    char *name = arg + 2;
    char *value;
    if (equals) {
      *equals = '\0';
      value = equals + 1;
    } else {
      value = vm->arg(1);
      vm->shift_args();
      ++ count;
    }
    vm->shift_args();
    ++ count;

    if (strcmp(name, "help") == 0) {
      help(stdout);
      vm->set_return_code(0);
      return refalrts::cExit;
    } else if (strcmp(name, "version") == 0) {
      version(stdout);
      vm->set_return_code(0);
      return refalrts::cExit;
    }

    DiagnosticConfig::ParseError res =
      diagnostic_config->set_parameter(name, value);

    /* Ошибки в параметрах не препятствие для запуска */
    switch (res) {
      case DiagnosticConfig::cParseError_Success:
        /* ничего не делаем */;
        break;

#define case_error(error, message) \
      case DiagnosticConfig::cParseError_ ## error: \
        fprintf(stderr, "Bad command line parameter %d: %s\n", count, arg); \
        fprintf(stderr, "  " message "\n"); \
        break;

      case_error(NotANumber, "Number argument is expected");
      case_error(NotABool, "Number argument is expected");
      case_error(VeryLongString, "Very long string parameter");
#undef case_error

       default:
         refalrts_switch_default_violation(res);
    }
  }

  if (! vm->arg(0) || vm->arg(0)[0] == '\0') {
    fprintf(stderr, "No module in command line\n\n");
    help(stderr);
    vm->set_return_code(157);
    return refalrts::cExit;
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 654 "main.cpp"
}

static refalrts::NativeReference nat_ref_ReadInterpreterFlags("ReadInterpreterFlags", COOKIE1_, COOKIE2_, func_ReadInterpreterFlags);


static refalrts::FnResult func_gen_LoadProgramModule_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & LoadProgramModule:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LoadProgramModule:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & LoadProgramModule:1/4 (/7 e.Module#1/10 )/8 # Success/9 t.Handle#2/14 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[9] ) )
      continue;
    // closed e.Module#1 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: e.Module#1: 10
    //DEBUG: t.Handle#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LoadProgramModule:1/4 (/7 e.Module#1/10 )/8 # Success/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Handle#2/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadProgramModule:1/4 (/7 e.Module#1/5 )/8 # Fails/9 e.Errors#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Module#1 as range 5
  // closed e.Errors#2 as range 2
  //DEBUG: e.Module#1: 5
  //DEBUG: e.Errors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Errors#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 }"Ca"/10 Tile{ HalfReuse: 'n'/8 HalfReuse: '\''/9 }"t load module "/12 Tile{ AsIs: e.Module#1/5 } >/14 </15 & Exit/16 157/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "Ca", 2);
  refalrts::alloc_chars(vm, context[12], context[13], "t load module ", 14);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[17], 157UL);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
  refalrts::reinit_char(context[8], 'n');
  refalrts::reinit_char(context[9], '\'');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadProgramModule_B1("LoadProgramModule:1", COOKIE1_, COOKIE2_, func_gen_LoadProgramModule_B1);


static refalrts::FnResult func_LoadProgramModule(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & LoadProgramModule/4 e.Module#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Module#1 as range 2
  //DEBUG: e.Module#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & LoadProgramModule:1/6 (/7 e.Module#1/2/8 )/10 Tile{ AsIs: </0 Reuse: & Module-Load/4 AsIs: e.Module#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_LoadProgramModule_B1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Modulem_Load]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LoadProgramModule("LoadProgramModule", COOKIE1_, COOKIE2_, func_LoadProgramModule);


static refalrts::FnResult func_gen_FindEntryPoint_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindEntryPoint:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindEntryPoint:1$2:1/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & FindEntryPoint:1$2:1/4 # Success/8 s.GO#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = refalrts::ident_left( identifiers[ident_Success], context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.GO#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindEntryPoint:1$2:1/4 # Success/8 s.GO#3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.GO3 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindEntryPoint:1$2:1/4 # Fails/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Putout/7 # stderr/8"Entry point (Go or GO) is not found"/9 >/11 Tile{ AsIs: </0 Reuse: & Exit/4 HalfReuse: 158/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Putout]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_stderr]);
  refalrts::alloc_chars(vm, context[9], context[10], "Entry point (Go or GO) is not found", 35);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Exit]);
  refalrts::reinit_number(context[5], 158UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindEntryPoint_B1S2B1("FindEntryPoint:1$2:1", COOKIE1_, COOKIE2_, func_gen_FindEntryPoint_B1S2B1);


static refalrts::FnResult func_gen_FindEntryPoint_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindEntryPoint:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindEntryPoint:1/4 e.new#1/2 t.new#2/6 s.new#3/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_right( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & FindEntryPoint:1/4 t.Handle#1/10 # Success/6 s.Go#2/5 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[6] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[8], context[9] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Go#2: 5
    //DEBUG: t.Handle#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindEntryPoint:1/4 t.Handle#1/10 # Success/6 s.Go#2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Go2 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindEntryPoint:1/4 t.Handle#1/6 # Fails/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Handle#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & FindEntryPoint:1$2:1/9 Tile{ AsIs: </0 Reuse: & Module-LookupFunction/4 AsIs: t.Handle#1/6 Reuse: # GO/5 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FindEntryPoint_B1S2B1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Modulem_LookupFunction]);
  refalrts::update_ident(context[5], identifiers[ident_GO]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindEntryPoint_B1("FindEntryPoint:1", COOKIE1_, COOKIE2_, func_gen_FindEntryPoint_B1);


static refalrts::FnResult func_FindEntryPoint(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindEntryPoint/4 t.Handle#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Handle#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindEntryPoint:1/4 AsIs: t.Handle#1/5 HalfReuse: </1 } & Module-LookupFunction/7 t.Handle#1/5/8 # Go/10 >/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_Modulem_LookupFunction]);
  refalrts::copy_evar(vm, context[8], context[9], context[5], context[6]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_Go]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_FindEntryPoint_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindEntryPoint("FindEntryPoint", COOKIE1_, COOKIE2_, func_FindEntryPoint);


//End of file
