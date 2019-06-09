// This file automatically generated from 'Library.ref'
// Don't edit! Edit 'Library.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2948557630_3778842242

enum efunc {
  efunc_gen_u_u_FindMuPtr_B1 = 0,
  efunc_u_u_FindMuPtr = 1,
  efunc_PtrFromName = 2,
  efunc_gen_PtrFromName_B1 = 3,
  efunc_Modulem_LookupFunction = 4,
  efunc_gen_Add_S2C1 = 5,
  efunc_Add = 6,
  efunc_u_u_Stepm_Start = 7,
  efunc_u_u_Stepm_End = 8,
  efunc_Addm_Digits = 9,
  efunc_NormArithmArg = 10,
  efunc_Addm_Normed = 11,
  efunc_gen_NormArithmArg_S1C1 = 12,
  efunc_gen_NormArithmArg_S2C1 = 13,
  efunc_gen_NormArithmArg_S2C2 = 14,
  efunc_gen_NormArithmArg_S3C1 = 15,
  efunc_gen_NormArithmArg_S3C2 = 16,
  efunc_gen_NormArithmArg_S4C1 = 17,
  efunc_gen_NormArithmArg_S4C2 = 18,
  efunc_gen_NormArithmArg_S5C1 = 19,
  efunc_gen_NormArithmArg_S5C2 = 20,
  efunc_NormNumber = 21,
  efunc_Type = 22,
  efunc_gen_NormNumber_S7C1 = 23,
  efunc_gen_NormNumber_S8C1 = 24,
  efunc_gen_NormNumber_S9C1 = 25,
  efunc_AllDigits = 26,
  efunc_AllDigitsm_SwFirst = 27,
  efunc_Addm_Nat = 28,
  efunc_Subm_Nat = 29,
  efunc_gen_Addm_Nat_S1B1 = 30,
  efunc_Arg = 31,
  efunc_Br = 32,
  efunc_Buried = 33,
  efunc_Card = 34,
  efunc_Getm_Aux = 35,
  efunc_Chr = 36,
  efunc_gen_Cp_B1 = 37,
  efunc_Cp = 38,
  efunc_gen_Dg_B1 = 39,
  efunc_Dg = 40,
  efunc_Dgall = 41,
  efunc_gen_Div_S1A1 = 42,
  efunc_gen_Div_S2C1 = 43,
  efunc_gen_Div_S2C2 = 44,
  efunc_Div = 45,
  efunc_Divmodm_Digits = 46,
  efunc_Divmodm_Normed = 47,
  efunc_gen_Divmod_S2C1 = 48,
  efunc_gen_Divmod_S2C2 = 49,
  efunc_Divmod = 50,
  efunc_Divmodm_Nat = 51,
  efunc_gen_Divmodm_Nat_S1A1 = 52,
  efunc_gen_Divmodm_Nat_S2A5 = 53,
  efunc_gen_Divmodm_Nat_S2A5B1 = 54,
  efunc_gen_Divmodm_Nat_S2A4 = 55,
  efunc_Divmodm_Shl = 56,
  efunc_gen_Divmodm_Nat_S2A3 = 57,
  efunc_Divmodm_Natm_Normed = 58,
  efunc_gen_Divmodm_Nat_S2A2 = 59,
  efunc_gen_Divmodm_Nat_S2A1 = 60,
  efunc_gen_Divmodm_Nat_S2A1B1 = 61,
  efunc_Divmodm_Align = 62,
  efunc_gen_Divmodm_Align_S2A1 = 63,
  efunc_LeadingZeros = 64,
  efunc_Divmodm_CalcDigits = 65,
  efunc_gen_Divmodm_CalcDigits_B1 = 66,
  efunc_gen_Divmodm_CalcDigits_A1 = 67,
  efunc_Divmodm_GetNextDigit = 68,
  efunc_gen_Divmodm_GetNextDigit_S2A1 = 69,
  efunc_Divmodm_AdjustDigit = 70,
  efunc_Subm_Normed = 71,
  efunc_Mulm_Natm_Line = 72,
  efunc_Divmodm_GuessDigit = 73,
  efunc_Subm_Digits = 74,
  efunc_Explode = 75,
  efunc_First = 76,
  efunc_DoFirst = 77,
  efunc_Get = 78,
  efunc_Autoopen = 79,
  efunc_ZeroHandle = 80,
  efunc_gen_Implode_S1B1 = 81,
  efunc_DoImplode = 82,
  efunc_Implode = 83,
  efunc_gen_DoImplode_S4C1 = 84,
  efunc_gen_DoImplode_S5C1 = 85,
  efunc_Implodeu_Ext = 86,
  efunc_Last = 87,
  efunc_DoLast = 88,
  efunc_Lenw = 89,
  efunc_DoLenw = 90,
  efunc_Lower = 91,
  efunc_gen_Mod_S1A1 = 92,
  efunc_gen_Mod_S2C1 = 93,
  efunc_gen_Mod_S2C2 = 94,
  efunc_Mod = 95,
  efunc_gen_Mul_S2C1 = 96,
  efunc_Mul = 97,
  efunc_Mulm_Digits = 98,
  efunc_Mulm_Normed = 99,
  efunc_Mulm_Nat = 100,
  efunc_gen_Mulm_Natm_Line_S2B1 = 101,
  efunc_Numb = 102,
  efunc_Neg = 103,
  efunc_Numbm_Aux = 104,
  efunc_DoNumb = 105,
  efunc_Numbm_Ok = 106,
  efunc_Numbm_Fail = 107,
  efunc_Numbm_Wrap = 108,
  efunc_DoNumbm_Wrap = 109,
  efunc_Open = 110,
  efunc_Ord = 111,
  efunc_Print = 112,
  efunc_Putm_Aux = 113,
  efunc_Prout = 114,
  efunc_Putoutm_Aux = 115,
  efunc_Proud = 116,
  efunc_Trout = 117,
  efunc_Put = 118,
  efunc_Putout = 119,
  efunc_gen_Rp_B1 = 120,
  efunc_Rp = 121,
  efunc_Step = 122,
  efunc_gen_Sub_S2C1 = 123,
  efunc_Sub = 124,
  efunc_gen_Subm_Nat_B1 = 125,
  efunc_Subm_Natm_Nat = 126,
  efunc_Comparem_Nat = 127,
  efunc_DoSubm_Natm_Nat = 128,
  efunc_gen_DoSubm_Natm_Nat_S1B2 = 129,
  efunc_gen_DoSubm_Natm_Nat_S1B1 = 130,
  efunc_gen_Symb_B1 = 131,
  efunc_Symbm_Nat = 132,
  efunc_gen_Symb_A1 = 133,
  efunc_Symb = 134,
  efunc_gen_Symbm_Nat_S2A2 = 135,
  efunc_gen_Symbm_Nat_S2A1 = 136,
  efunc_StrFromInt = 137,
  efunc_Time = 138,
  efunc_Upper = 139,
  efunc_Sysfun = 140,
  efunc_Sysfunm_Xxin = 141,
  efunc_Sysfunm_Xxout = 142,
  efunc_gen_Sysfunm_Xxin_B1S1A1 = 143,
  efunc_Xxinm_Scan = 144,
  efunc_gen_Sysfunm_Xxin_B1 = 145,
  efunc_FOpen = 146,
  efunc_ExistFile = 147,
  efunc_gen_Xxinm_Scan_S14B1 = 148,
  efunc_Sysfunm_Xxinm_ERROR = 149,
  efunc_gen_Xxinm_Scan_S38B1 = 150,
  efunc_HexDigit = 151,
  efunc_FClose = 152,
  efunc_Quote = 153,
  efunc_Xxoutm_Wrap = 154,
  efunc_Xxoutm_Scan = 155,
  efunc_gen_Xxoutm_Wrap_B1 = 156,
  efunc_Writem_Aux = 157,
  efunc_gen_Xxoutm_Scan_S1A1 = 158,
  efunc_gen_Xxoutm_Scan_S2A1 = 159,
  efunc_gen_Xxoutm_Scan_S4A1 = 160,
  efunc_gen_Xxoutm_Scan_S6A1 = 161,
  efunc_gen_Xxoutm_Scan_S7A1 = 162,
  efunc_Xxoutm_Chars = 163,
  efunc_gen_Xxoutm_Chars_S7A1 = 164,
  efunc_Hex = 165,
  efunc_gen_Xxoutm_Chars_S1C1 = 166,
  efunc_Freeze = 167,
  efunc_Freezer = 168,
  efunc_Dn = 169,
  efunc_GetEnv = 170,
  efunc_System = 171,
  efunc_Exit = 172,
  efunc_Close = 173,
  efunc_GetCurrentDirectory = 174,
  efunc_RemoveFile = 175,
  efunc_Explodeu_Ext = 176,
  efunc_TimeElapsed = 177,
  efunc_gen_Compare_S2C1 = 178,
  efunc_Compare = 179,
  efunc_Comparem_Digits = 180,
  efunc_Comparem_Normed = 181,
  efunc_Comparem_Align = 182,
  efunc_Comparem_ByDigits = 183,
  efunc_DeSysfun = 184,
  efunc_XMLParse = 185,
  efunc_Random = 186,
  efunc_RandomDigit = 187,
  efunc_Write = 188,
  efunc_ListOfBuiltin = 189,
  efunc_SizeOf = 190,
  efunc_GetPID = 191,
  efunc_GetPPID = 192,
  efunc_gen_FOpen_A1 = 193,
  efunc_GetFreeHandle = 194,
  efunc_FReadLine = 195,
  efunc_FWriteLine = 196,
  efunc_ReadLine = 197,
  efunc_WriteLine = 198,
  efunc_gen_IntFromStr_L1 = 199,
  efunc_gen_IntFromStr_L2 = 200,
  efunc_IntFromStr = 201,
  efunc_SymbCompare = 202,
  efunc_FWriteBytes = 203,
  efunc_FReadBytes = 204,
  efunc_FTell = 205,
  efunc_FSeek = 206,
  efunc_RenameFile = 207,
  efunc_Modulem_Load = 208,
  efunc_Modulem_Unload = 209,
  efunc_Modulem_Mu = 210,
  efunc_Modulem_FunctionPtr = 211,
  efunc_INIT = 212,
  efunc_FINAL = 213,
};


enum ident {
  ident_Success = 0,
  ident_Fails = 1,
  ident_CURRENTm_ANDm_GLOBAL = 2,
  ident_True = 3,
  ident_False = 4,
  ident_stdin = 5,
  ident_stdout = 6,
  ident_stderr = 7,
  ident_stout = 8,
  ident_General = 9,
  ident_Escapem_Hex = 10,
  ident_Escape = 11,
  ident_Quote = 12,
  ident_Word = 13,
  ident_Number = 14,
  ident_special = 15,
  ident_Add = 16,
  ident_regular = 17,
  ident_Arg = 18,
  ident_Br = 19,
  ident_Card = 20,
  ident_Chr = 21,
  ident_Cp = 22,
  ident_Dg = 23,
  ident_Dgall = 24,
  ident_Div = 25,
  ident_Divmod = 26,
  ident_Explode = 27,
  ident_First = 28,
  ident_Get = 29,
  ident_Implode = 30,
  ident_Last = 31,
  ident_Lenw = 32,
  ident_Lower = 33,
  ident_Mod = 34,
  ident_Mul = 35,
  ident_Numb = 36,
  ident_Open = 37,
  ident_Ord = 38,
  ident_Print = 39,
  ident_Prout = 40,
  ident_Put = 41,
  ident_Putout = 42,
  ident_Rp = 43,
  ident_Step = 44,
  ident_Sub = 45,
  ident_Symb = 46,
  ident_Time = 47,
  ident_Type = 48,
  ident_Upper = 49,
  ident_Sysfun = 50,
  ident_Freeze = 51,
  ident_Freezer = 52,
  ident_Dn = 53,
  ident_Up = 54,
  ident_Evm_met = 55,
  ident_Residue = 56,
  ident_GetEnv = 57,
  ident_System = 58,
  ident_Exit = 59,
  ident_Close = 60,
  ident_ExistFile = 61,
  ident_GetCurrentDirectory = 62,
  ident_RemoveFile = 63,
  ident_Implodeu_Ext = 64,
  ident_Explodeu_Ext = 65,
  ident_TimeElapsed = 66,
  ident_Compare = 67,
  ident_DeSysfun = 68,
  ident_XMLParse = 69,
  ident_Random = 70,
  ident_RandomDigit = 71,
  ident_Write = 72,
  ident_ListOfBuiltin = 73,
  ident_SizeOf = 74,
  ident_GetPID = 75,
  ident_GetPPID = 76,
  ident_Mu = 77,
  ident_CURRENT = 78,
  ident_BEGIN = 79,
  ident_END = 80,
  ident_GLOBAL = 81,
};

#line 2 "Library.ref"
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <vector>

#include "refalrts-platform-specific.h"

#line 326 "Library.cpp"

static refalrts::FnResult func_gen_u_u_FindMuPtr_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __FindMuPtr:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & __FindMuPtr:1/4 s.FnPtr#2/7 e.Rest#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Rest#2 as range 5
    //DEBUG: s.FnPtr#2: 7
    //DEBUG: e.Rest#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __FindMuPtr:1/4 s.FnPtr#2/7 e.Rest#2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
    refalrts::reinit_svar( context[1], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __FindMuPtr:1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & __FindMuPtr:1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_FindMuPtr_B1("__FindMuPtr:1", 2948557630U, 3778842242U, func_gen_u_u_FindMuPtr_B1);


static refalrts::FnResult func_u_u_FindMuPtr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & __FindMuPtr/4 s.Cookie1#1/5 s.Cookie2#1/6 e.FuncName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncName#1 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: e.FuncName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __FindMuPtr:1/8 Tile{ AsIs: </0 Reuse: & PtrFromName/4 AsIs: s.Cookie1#1/5 AsIs: s.Cookie2#1/6 AsIs: e.FuncName#1/2 AsIs: >/1 } </9 & PtrFromName/10 0/11 0/12 e.FuncName#1/2/13 >/15 >/16 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_FindMuPtr_B1]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_PtrFromName]);
  refalrts::alloc_number(vm, context[11], 0UL);
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_PtrFromName]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U, func_u_u_FindMuPtr);


static refalrts::FnResult func_gen_PtrFromName_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PtrFromName:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PtrFromName:1/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & PtrFromName:1/4 # Success/8 s.FuncPtr#2/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = refalrts::ident_left( identifiers[ident_Success], context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.FuncPtr#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PtrFromName:1/4 # Success/8 s.FuncPtr#2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FuncPtr2 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PtrFromName:1/4 # Fails/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PtrFromName:1/4 # Fails/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PtrFromName_B1("PtrFromName:1", 2948557630U, 3778842242U, func_gen_PtrFromName_B1);


static refalrts::FnResult func_PtrFromName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & PtrFromName/4 s.Cookie1#1/5 s.Cookie2#1/6 e.FuncName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncName#1 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: e.FuncName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & PtrFromName:1/8 </9 Tile{ HalfReuse: & Module-LookupFunction/0 HalfReuse: # CURRENT-AND-GLOBAL/4 AsIs: s.Cookie1#1/5 AsIs: s.Cookie2#1/6 AsIs: e.FuncName#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_PtrFromName_B1]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::reinit_name(context[0], functions[efunc_Modulem_LookupFunction]);
  refalrts::reinit_ident(context[4], identifiers[ident_CURRENTm_ANDm_GLOBAL]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PtrFromName("PtrFromName", 0U, 0U, func_PtrFromName);


static refalrts::FnResult func_Add(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Add/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Add/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & __Step-Start/10 >/11 Tile{ AsIs: </0 Reuse: & Add-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } </12 & __Step-End/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Addm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Add/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Add_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Add$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ArithmArg#1/2 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: </5 Reuse: & Add-Normed/9 AsIs: (/12 AsIs: e.First#2/10 AsIs: )/13 AsIs: e.Second#2/7 AsIs: >/6 HalfReuse: </1 } Tile{ Reuse: & __Step-End/4 } Tile{ HalfReuse: >/0 } Tile{ ]] }
    refalrts::update_name(context[9], functions[efunc_Addm_Normed]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[0]);
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Add("Add", 0U, 0U, func_Add);


static refalrts::FnResult func_NormArithmArg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & NormArithmArg/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & NormArithmArg/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & NormArithmArg/4 s.new#3/7 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_term( context[7], context[7] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & NormArithmArg/4 0/7 e.Second#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::number_term( 0UL, context[7] ) )
          continue;
        // closed e.Second#1 as range 11
        //DEBUG: e.Second#1: 11
        //11: e.Second#1
        //18: e.Second#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[13]);
        refalrts::alloc_name(vm, context[15], functions[efunc_gen_NormArithmArg_S1C1]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_NormNumber]);
        refalrts::copy_evar(vm, context[18], context[19], context[11], context[12]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[14]);
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[13] );
        res = refalrts::splice_elem( res, context[14] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[16] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_elem( res, context[17] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </13 & NormArithmArg$1?1/17 s.SecondSign#2/18 e.Second#2/15 >/14
          context[15] = 0;
          context[16] = 0;
          context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
          if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
            continue;
          // closed e.Second#2 as range 15
          //DEBUG: e.Second#1: 11
          //DEBUG: s.SecondSign#2: 18
          //DEBUG: e.Second#2: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Second#1/11 </13 & NormArithmArg$1?1/17 {REMOVED TILE} {REMOVED TILE} >/14 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: 0/4 HalfReuse: )/7 } Tile{ AsIs: s.SecondSign#2/18 } Tile{ AsIs: e.Second#2/15 } Tile{ ]] }
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_number(context[4], 0UL);
          refalrts::reinit_close_bracket(context[7]);
          refalrts::link_brackets( context[0], context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[18], context[18] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[13], context[14]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormArithmArg/4 s.First#1/7 e.Second#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        // closed e.Second#1 as range 11
        //DEBUG: s.First#1: 7
        //DEBUG: e.Second#1: 11
        //7: s.First#1
        //11: e.Second#1
        //18: s.First#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[13]);
        refalrts::alloc_name(vm, context[15], functions[efunc_gen_NormArithmArg_S2C1]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_Type]);
        refalrts::copy_stvar(vm, context[18], context[7]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_close_call(vm, context[14]);
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[13] );
        res = refalrts::splice_elem( res, context[14] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[16] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_stvar( res, context[18] );
        res = refalrts::splice_elem( res, context[17] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </13 & NormArithmArg$2?1/17 'N'/18 s.SubType#2/19 s.First#2/20 >/14
          context[15] = 0;
          context[16] = 0;
          context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
          context[18] = refalrts::char_left( 'N', context[15], context[16] );
          if( ! context[18] )
            continue;
          if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
            continue;
          if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
            continue;
          if( ! refalrts::empty_seq( context[15], context[16] ) )
            continue;
          //DEBUG: s.First#1: 7
          //DEBUG: e.Second#1: 11
          //DEBUG: s.SubType#2: 19
          //DEBUG: s.First#2: 20
          //7: s.First#1
          //11: e.Second#1
          //19: s.SubType#2
          //20: s.First#2
          //26: e.Second#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[21]);
          refalrts::alloc_name(vm, context[23], functions[efunc_gen_NormArithmArg_S2C2]);
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[25], functions[efunc_NormNumber]);
          refalrts::copy_evar(vm, context[26], context[27], context[11], context[12]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_close_call(vm, context[22]);
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[21] );
          res = refalrts::splice_elem( res, context[22] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[24] );
          res = refalrts::splice_elem( res, context[28] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_elem( res, context[25] );
          res = refalrts::splice_elem( res, context[24] );
          res = refalrts::splice_elem( res, context[23] );
          res = refalrts::splice_elem( res, context[21] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </21 & NormArithmArg$2?2/25 s.SecondSign#3/26 e.Second#3/23 >/22
            context[23] = 0;
            context[24] = 0;
            context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
            if( ! refalrts::svar_left( context[26], context[23], context[24] ) )
              continue;
            // closed e.Second#3 as range 23
            //DEBUG: s.First#1: 7
            //DEBUG: e.Second#1: 11
            //DEBUG: s.SubType#2: 19
            //DEBUG: s.First#2: 20
            //DEBUG: s.SecondSign#3: 26
            //DEBUG: e.Second#3: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} & NormArithmArg/4 s.First#1/7 e.Second#1/11 </13 & NormArithmArg$2?1/17 'N'/18 s.SubType#2/19 s.First#2/20 {REMOVED TILE} {REMOVED TILE} >/22 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: '+'/14 HalfReuse: s.First2 #20/21 HalfReuse: )/25 AsIs: s.SecondSign#3/26 } Tile{ AsIs: e.Second#3/23 } Tile{ ]] }
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[14], '+');
            refalrts::reinit_svar( context[21], context[20] );
            refalrts::reinit_close_bracket(context[25]);
            refalrts::link_brackets( context[0], context[25] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[14], context[26] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[21], context[22]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[13], context[14]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormArithmArg/4 s.new#5/7 s.new#6/13 e.new#7/11 >/1
      context[11] = context[9];
      context[12] = context[10];
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#7 as range 11
      do {
        // </0 & NormArithmArg/4 '+'/7 s.First#1/13 e.Second#1/14 >/1
        context[14] = context[11];
        context[15] = context[12];
        if( ! refalrts::char_term( '+', context[7] ) )
          continue;
        // closed e.Second#1 as range 14
        //DEBUG: s.First#1: 13
        //DEBUG: e.Second#1: 14
        //13: s.First#1
        //14: e.Second#1
        //21: s.First#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[18], functions[efunc_gen_NormArithmArg_S3C1]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Type]);
        refalrts::copy_stvar(vm, context[21], context[13]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_close_call(vm, context[17]);
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[16] );
        res = refalrts::splice_elem( res, context[17] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[19] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_stvar( res, context[21] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[16] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </16 & NormArithmArg$3?1/20 'N'/21 s.SubType#2/22 s.First#2/23 >/17
          context[18] = 0;
          context[19] = 0;
          context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
          context[21] = refalrts::char_left( 'N', context[18], context[19] );
          if( ! context[21] )
            continue;
          if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
            continue;
          if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
            continue;
          if( ! refalrts::empty_seq( context[18], context[19] ) )
            continue;
          //DEBUG: s.First#1: 13
          //DEBUG: e.Second#1: 14
          //DEBUG: s.SubType#2: 22
          //DEBUG: s.First#2: 23
          //13: s.First#1
          //14: e.Second#1
          //22: s.SubType#2
          //23: s.First#2
          //29: e.Second#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[26], functions[efunc_gen_NormArithmArg_S3C2]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_NormNumber]);
          refalrts::copy_evar(vm, context[29], context[30], context[14], context[15]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[24] );
          res = refalrts::splice_elem( res, context[25] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[27] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_elem( res, context[28] );
          res = refalrts::splice_elem( res, context[27] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_elem( res, context[24] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </24 & NormArithmArg$3?2/28 s.SecondSign#3/29 e.Second#3/26 >/25
            context[26] = 0;
            context[27] = 0;
            context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
            if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
              continue;
            // closed e.Second#3 as range 26
            //DEBUG: s.First#1: 13
            //DEBUG: e.Second#1: 14
            //DEBUG: s.SubType#2: 22
            //DEBUG: s.First#2: 23
            //DEBUG: s.SecondSign#3: 29
            //DEBUG: e.Second#3: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} & NormArithmArg/4 '+'/7 s.First#1/13 e.Second#1/14 </16 & NormArithmArg$3?1/20 'N'/21 s.SubType#2/22 s.First#2/23 {REMOVED TILE} {REMOVED TILE} >/25 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: '+'/17 HalfReuse: s.First2 #23/24 HalfReuse: )/28 AsIs: s.SecondSign#3/29 } Tile{ AsIs: e.Second#3/26 } Tile{ ]] }
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_char(context[17], '+');
            refalrts::reinit_svar( context[24], context[23] );
            refalrts::reinit_close_bracket(context[28]);
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_evar( res, context[17], context[29] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[24], context[25]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[16], context[17]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormArithmArg/4 '-'/7 s.First#1/13 e.Second#1/14 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::char_term( '-', context[7] ) )
        continue;
      // closed e.Second#1 as range 14
      //DEBUG: s.First#1: 13
      //DEBUG: e.Second#1: 14
      //13: s.First#1
      //14: e.Second#1
      //21: s.First#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_NormArithmArg_S4C1]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Type]);
      refalrts::copy_stvar(vm, context[21], context[13]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </16 & NormArithmArg$4?1/20 'N'/21 s.SubType#2/22 s.First#2/23 >/17
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
        context[21] = refalrts::char_left( 'N', context[18], context[19] );
        if( ! context[21] )
          continue;
        if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
          continue;
        if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
          continue;
        if( ! refalrts::empty_seq( context[18], context[19] ) )
          continue;
        //DEBUG: s.First#1: 13
        //DEBUG: e.Second#1: 14
        //DEBUG: s.SubType#2: 22
        //DEBUG: s.First#2: 23
        //13: s.First#1
        //14: e.Second#1
        //22: s.SubType#2
        //23: s.First#2
        //29: e.Second#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[26], functions[efunc_gen_NormArithmArg_S4C2]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_NormNumber]);
        refalrts::copy_evar(vm, context[29], context[30], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </24 & NormArithmArg$4?2/28 s.SecondSign#3/29 e.Second#3/26 >/25
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
          if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
            continue;
          // closed e.Second#3 as range 26
          //DEBUG: s.First#1: 13
          //DEBUG: e.Second#1: 14
          //DEBUG: s.SubType#2: 22
          //DEBUG: s.First#2: 23
          //DEBUG: s.SecondSign#3: 29
          //DEBUG: e.Second#3: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & NormArithmArg/4 '-'/7 s.First#1/13 e.Second#1/14 </16 & NormArithmArg$4?1/20 'N'/21 s.SubType#2/22 s.First#2/23 {REMOVED TILE} {REMOVED TILE} >/25 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: '-'/17 HalfReuse: s.First2 #23/24 HalfReuse: )/28 AsIs: s.SecondSign#3/29 } Tile{ AsIs: e.Second#3/26 } Tile{ ]] }
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_char(context[17], '-');
          refalrts::reinit_svar( context[24], context[23] );
          refalrts::reinit_close_bracket(context[28]);
          refalrts::link_brackets( context[0], context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[24], context[25]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[16], context[17]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormArithmArg/4 (/7 e.First#1/11 )/8 e.Second#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.First#1 as range 11
    // closed e.Second#1 as range 9
    //DEBUG: e.First#1: 11
    //DEBUG: e.Second#1: 9
    //9: e.Second#1
    //11: e.First#1
    //18: e.First#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_NormArithmArg_S5C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_NormNumber]);
    refalrts::copy_evar(vm, context[18], context[19], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & NormArithmArg$5?1/17 s.FirstSign#2/18 e.First#2/15 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
        continue;
      // closed e.First#2 as range 15
      //DEBUG: e.First#1: 11
      //DEBUG: e.Second#1: 9
      //DEBUG: s.FirstSign#2: 18
      //DEBUG: e.First#2: 15
      //9: e.Second#1
      //11: e.First#1
      //15: e.First#2
      //18: s.FirstSign#2
      //24: e.Second#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_NormArithmArg_S5C2]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_NormNumber]);
      refalrts::copy_evar(vm, context[24], context[25], context[9], context[10]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[22] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </19 & NormArithmArg$5?2/23 s.SecondSign#3/24 e.Second#3/21 >/20
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
        if( ! refalrts::svar_left( context[24], context[21], context[22] ) )
          continue;
        // closed e.Second#3 as range 21
        //DEBUG: e.First#1: 11
        //DEBUG: e.Second#1: 9
        //DEBUG: s.FirstSign#2: 18
        //DEBUG: e.First#2: 15
        //DEBUG: s.SecondSign#3: 24
        //DEBUG: e.Second#3: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormArithmArg/4 (/7 e.First#1/11 )/8 e.Second#1/9 </13 {REMOVED TILE} & NormArithmArg$5?2/23 s.SecondSign#3/24 {REMOVED TILE} >/20 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/17 AsIs: s.FirstSign#2/18 AsIs: e.First#2/15 HalfReuse: )/14 HalfReuse: s.SecondSign3 #24/19 } Tile{ AsIs: e.Second#3/21 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[17]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::reinit_svar( context[19], context[24] );
        refalrts::link_brackets( context[17], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[17], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[19], context[20]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormArithmArg/4 e.OtherArg#1/2 >/1
  // closed e.OtherArg#1 as range 2
  //DEBUG: e.OtherArg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NormArithmArg/4 e.OtherArg#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormArithmArg("NormArithmArg", 2948557630U, 3778842242U, func_NormArithmArg);


static refalrts::FnResult func_NormNumber(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & NormNumber/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & NormNumber/4 s.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & NormNumber/4 s.new#3/7 0/10 e.new#4/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      context[10] = refalrts::number_left( 0UL, context[8], context[9] );
      if( ! context[10] )
        continue;
      // closed e.new#4 as range 8
      do {
        // </0 & NormNumber/4 '+'/7 0/10 e.new#5/11 >/1
        context[11] = context[8];
        context[12] = context[9];
        if( ! refalrts::char_term( '+', context[7] ) )
          continue;
        // closed e.new#5 as range 11
        do {
          // </0 & NormNumber/4 '+'/7 0/10 >/1
          if( ! refalrts::empty_seq( context[11], context[12] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NormNumber/4 '+'/7 0/10 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
          refalrts::reinit_number(context[1], 0UL);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NormNumber/4 '+'/7 0/10 e.Digits#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        // closed e.Digits#1 as range 13
        //DEBUG: e.Digits#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & NormNumber/7 HalfReuse: '+'/10 AsIs: e.Digits#1/13 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_NormNumber]);
        refalrts::reinit_char(context[10], '+');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[4];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormNumber/4 '-'/7 0/10 e.new#5/11 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::char_term( '-', context[7] ) )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & NormNumber/4 '-'/7 0/10 >/1
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormNumber/4 '-'/7 0/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
        refalrts::reinit_number(context[1], 0UL);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormNumber/4 '-'/7 0/10 e.Digits#1/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      // closed e.Digits#1 as range 13
      //DEBUG: e.Digits#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & NormNumber/7 HalfReuse: '-'/10 AsIs: e.Digits#1/13 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_NormNumber]);
      refalrts::reinit_char(context[10], '-');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NormNumber/4 0/7 e.new#3/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::number_term( 0UL, context[7] ) )
        continue;
      // closed e.new#3 as range 8
      do {
        // </0 & NormNumber/4 0/7 >/1
        if( ! refalrts::empty_seq( context[8], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormNumber/4 0/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
        refalrts::reinit_number(context[1], 0UL);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormNumber/4 0/7 e.Digits#1/10 >/1
      context[10] = context[8];
      context[11] = context[9];
      // closed e.Digits#1 as range 10
      //DEBUG: e.Digits#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormNumber/4 HalfReuse: '+'/7 AsIs: e.Digits#1/10 AsIs: >/1 ]] }
      refalrts::reinit_char(context[7], '+');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NormNumber/4 '+'/7 e.Digits#1/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::char_term( '+', context[7] ) )
        continue;
      // closed e.Digits#1 as range 8
      //DEBUG: e.Digits#1: 8
      //8: e.Digits#1
      //15: e.Digits#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[10]);
      refalrts::alloc_name(vm, context[12], functions[efunc_gen_NormNumber_S7C1]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_AllDigits]);
      refalrts::copy_evar(vm, context[15], context[16], context[8], context[9]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_close_call(vm, context[11]);
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[10] );
      res = refalrts::splice_elem( res, context[11] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[13] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </10 & NormNumber$7?1/14 # True/15 >/11
        context[12] = 0;
        context[13] = 0;
        context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
        context[15] = refalrts::ident_left( identifiers[ident_True], context[12], context[13] );
        if( ! context[15] )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        //DEBUG: e.Digits#1: 8

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & NormNumber/4 '+'/7 {REMOVED TILE} </10 & NormNumber$7?1/14 # True/15 >/11 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '+'/0 } Tile{ AsIs: e.Digits#1/8 } Tile{ ]] }
        refalrts::reinit_char(context[0], '+');
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[9] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[10], context[11]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormNumber/4 '-'/7 e.Digits#1/8 >/1
    context[8] = context[5];
    context[9] = context[6];
    if( ! refalrts::char_term( '-', context[7] ) )
      continue;
    // closed e.Digits#1 as range 8
    //DEBUG: e.Digits#1: 8
    //8: e.Digits#1
    //15: e.Digits#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_NormNumber_S8C1]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_AllDigits]);
    refalrts::copy_evar(vm, context[15], context[16], context[8], context[9]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </10 & NormNumber$8?1/14 # True/15 >/11
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
      context[15] = refalrts::ident_left( identifiers[ident_True], context[12], context[13] );
      if( ! context[15] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      //DEBUG: e.Digits#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & NormNumber/4 '-'/7 {REMOVED TILE} </10 & NormNumber$8?1/14 # True/15 >/11 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '-'/0 } Tile{ AsIs: e.Digits#1/8 } Tile{ ]] }
      refalrts::reinit_char(context[0], '-');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[10], context[11]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormNumber/4 e.Digits#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Digits#1 as range 5
    //DEBUG: e.Digits#1: 5
    //5: e.Digits#1
    //12: e.Digits#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_NormNumber_S9C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Type]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </7 & NormNumber$9?1/11 'N'/12 s.SubType#2/13 e.Digits#2/9 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::char_left( 'N', context[9], context[10] );
      if( ! context[12] )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      // closed e.Digits#2 as range 9
      //DEBUG: e.Digits#1: 5
      //DEBUG: s.SubType#2: 13
      //DEBUG: e.Digits#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Digits#1/5 </7 & NormNumber$9?1/11 {REMOVED TILE} s.SubType#2/13 {REMOVED TILE} >/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormNumber/4 } Tile{ Reuse: '+'/12 } Tile{ AsIs: e.Digits#2/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_char(context[12], '+');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormNumber/4 e.Digits#1/2 >/1
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NormNumber/4 e.Digits#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormNumber("NormNumber", 2948557630U, 3778842242U, func_NormNumber);


static refalrts::FnResult func_AllDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AllDigits/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AllDigits-SwFirst/6 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: e.Items#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_AllDigitsm_SwFirst]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Type]);
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

static refalrts::NativeReference nat_ref_AllDigits("AllDigits", 2948557630U, 3778842242U, func_AllDigits);


static refalrts::FnResult func_AllDigitsm_SwFirst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AllDigits-SwFirst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AllDigits-SwFirst/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & AllDigits-SwFirst/4 'N'/5 s.new#4/6 s.new#5/9 e.new#6/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::char_term( 'N', context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#6 as range 7
    do {
      // </0 & AllDigits-SwFirst/4 'N'/5 s.SubType#1/6 s.Digit#1/9 >/1
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: s.SubType#1: 6
      //DEBUG: s.Digit#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AllDigits-SwFirst/4 'N'/5 s.SubType#1/6 s.Digit#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AllDigits-SwFirst/4 'N'/5 s.SubType#1/6 s.Digit#1/9 e.Items#1/10 >/1
    context[10] = context[7];
    context[11] = context[8];
    // closed e.Items#1 as range 10
    //DEBUG: s.SubType#1: 6
    //DEBUG: s.Digit#1: 9
    //DEBUG: e.Items#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} 'N'/5 s.SubType#1/6 s.Digit#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AllDigits/4 } Tile{ AsIs: e.Items#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_AllDigits]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllDigits-SwFirst/4 s.Type#1/5 s.SubType#1/6 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: s.Type#1: 5
  //DEBUG: s.SubType#1: 6
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AllDigits-SwFirst/4 s.Type#1/5 s.SubType#1/6 e.Expr#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllDigitsm_SwFirst("AllDigits-SwFirst", 2948557630U, 3778842242U, func_AllDigitsm_SwFirst);


static refalrts::FnResult func_Addm_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Add-Normed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Add-Normed/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & Add-Normed/4 (/7 s.new#4/9 e.new#5/10 )/8 s.new#6/14 e.new#7/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#5 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Add-Normed/4 (/7 '+'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::char_term( '+', context[9] ) )
        continue;
      // closed e.new#8 as range 15
      // closed e.new#10 as range 17
      do {
        // </0 & Add-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '+', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/14 AsIs: e.Second#1/21 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Addm_Nat]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Add-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '-', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/14 AsIs: e.Second#1/21 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Subm_Nat]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Add-Normed/4 (/7 '+'/9 e.First#1/19 )/8 0/14 >/1
      context[19] = context[15];
      context[20] = context[16];
      if( ! refalrts::number_term( 0UL, context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.First#1 as range 19
      //DEBUG: e.First#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Add-Normed/4 (/7 '+'/9 {REMOVED TILE} )/8 0/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.First#1/19 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Add-Normed/4 (/7 '-'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::char_term( '-', context[9] ) )
        continue;
      // closed e.new#8 as range 15
      // closed e.new#10 as range 17
      do {
        // </0 & Add-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '+', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '-'/9 {REMOVED TILE} {REMOVED TILE} '+'/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub-Nat/4 AsIs: (/7 } Tile{ AsIs: e.Second#1/21 } Tile{ AsIs: )/8 } Tile{ AsIs: e.First#1/19 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Subm_Nat]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Add-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '-', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '-'/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: </4 HalfReuse: & Add-Nat/7 HalfReuse: (/9 AsIs: e.First#1/19 AsIs: )/8 } Tile{ AsIs: e.Second#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], '-');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_Addm_Nat]);
        refalrts::reinit_open_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::link_brackets( context[9], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Add-Normed/4 (/7 '-'/9 e.First#1/19 )/8 0/14 >/1
      context[19] = context[15];
      context[20] = context[16];
      if( ! refalrts::number_term( 0UL, context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.First#1 as range 19
      //DEBUG: e.First#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Add-Normed/4 (/7 '-'/9 {REMOVED TILE} )/8 0/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '-'/0 } Tile{ AsIs: e.First#1/19 } Tile{ ]] }
      refalrts::reinit_char(context[0], '-');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Add-Normed/4 (/7 0/9 )/8 '+'/14 e.Second#1/15 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::char_term( '+', context[14] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Second#1 as range 15
    //DEBUG: e.Second#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Add-Normed/4 (/7 0/9 )/8 '+'/14 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Second#1/15 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Add-Normed/4 (/7 0/9 )/8 e.NegOrZero#1/2 >/1
  if( ! refalrts::number_term( 0UL, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NegOrZero#1 as range 2
  //DEBUG: e.NegOrZero#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Add-Normed/4 (/7 0/9 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NegOrZero#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Addm_Normed("Add-Normed", 2948557630U, 3778842242U, func_Addm_Normed);


static refalrts::FnResult func_gen_Addm_Nat_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Add-Nat$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Add-Nat$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 s.new#4/13 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Add-Nat$1:1/4 (/7 e.First#1/14 )/8 (/11 e.Second#1/16 )/12 s.LastSum#2/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.First#1 as range 14
    // closed e.Second#1 as range 16
    //DEBUG: s.LastSum#2: 13
    //DEBUG: e.First#1: 14
    //DEBUG: e.Second#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} s.LastSum#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add-Nat/4 AsIs: (/7 AsIs: e.First#1/14 AsIs: )/8 } Tile{ AsIs: e.Second#1/16 } Tile{ HalfReuse: >/12 } Tile{ HalfReuse: s.LastSum2 #13/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Addm_Nat]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_svar( context[1], context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Add-Nat$1:1/4 (/7 e.First#1/5 )/8 (/11 e.Second#1/9 )/12 1/14 s.LastSum#2/13 >/1
  context[14] = refalrts::number_left( 1UL, context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 9
  //DEBUG: s.LastSum#2: 13
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LastSum#2/13 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add-Nat/4 AsIs: (/7 AsIs: e.First#1/5 AsIs: )/8 HalfReuse: </11 } & Add-Nat/15 (/16 Tile{ AsIs: e.Second#1/9 } Tile{ AsIs: )/12 AsIs: 1/14 } >/17 >/18 Tile{ HalfReuse: s.LastSum2 #13/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_Addm_Nat]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_Addm_Nat]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_svar( context[1], context[13] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[16], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Addm_Nat_S1B1("Add-Nat$1:1", 2948557630U, 3778842242U, func_gen_Addm_Nat_S1B1);


static refalrts::FnResult func_Addm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Add-Nat/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Add-Nat/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Add-Nat/4 (/7 e.First#1/9 s.FirstLast#1/13 )/8 e.Second#1/11 s.SecondLast#1/14 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_right( context[13], context[9], context[10] ) )
      continue;
    // closed e.First#1 as range 9
    if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: s.FirstLast#1: 13
    //DEBUG: e.First#1: 9
    //DEBUG: s.SecondLast#1: 14
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Add-Nat$1:1/7 } (/15 Tile{ AsIs: e.First#1/9 } )/16 (/17 Tile{ AsIs: e.Second#1/11 } Tile{ AsIs: )/8 } {*}/18 </19 & Add-Digits/20 Tile{ AsIs: s.FirstLast#1/13 } Tile{ AsIs: s.SecondLast#1/14 AsIs: >/1 } >/21 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[4]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Addm_Digits]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Addm_Nat_S1B1]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Add-Nat/4 (/7 e.First#1/5 )/8 e.Second#1/2 >/1
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 2
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Add-Nat/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.First#1/5 } Tile{ AsIs: e.Second#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Addm_Nat("Add-Nat", 2948557630U, 3778842242U, func_Addm_Nat);

#line 160 "Library.ref"

#define ARITHM_PRELUDE \
  refalrts::Iter pFirst = 0, pSecond = 0; \
  refalrts::Iter pFunc \
    = refalrts::call_left(pFirst, pSecond, arg_begin, arg_end); \
  \
  if (pFirst->next != pSecond) { \
    return refalrts::cRecognitionImpossible; \
  } \
  \
  if ( \
    refalrts::cDataNumber != pFirst->tag \
    || refalrts::cDataNumber != pSecond->tag \
  ) { \
    return refalrts::cRecognitionImpossible; \
  } \
  \
  refalrts::RefalNumber first = pFirst->number_info; \
  refalrts::RefalNumber second = pSecond->number_info;

#line 2369 "Library.cpp"

static refalrts::FnResult func_Addm_Digits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 184 "Library.ref"
  ARITHM_PRELUDE

  refalrts::RefalNumber sum = first + second;

  if (sum >= first) {
    pFirst->number_info = sum;
    refalrts::splice_to_freelist(vm, arg_begin, pFunc);
    refalrts::splice_to_freelist(vm, pSecond, arg_end);
  } else {
    pFirst->number_info = 1;
    pSecond->number_info = sum;
    refalrts::splice_to_freelist(vm, arg_begin, pFunc);
    refalrts::splice_to_freelist(vm, arg_end, arg_end);
  }

  return refalrts::cSuccess;
#line 2393 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Addm_Digits("Add-Digits", 2948557630U, 3778842242U, func_Addm_Digits);


static refalrts::FnResult func_Arg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 210 "Library.ref"
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
  const char *param = refalrts::arg(vm, param_no);
  refalrts::alloc_string(vm, param_begin, param_end, param);
  refalrts::splice_evar(arg_begin, param_begin, param_end);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 2427 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Arg("Arg", 0U, 0U, func_Arg);


static refalrts::FnResult func_Br(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Br/4 e.Key#1/5 '='/9 e.Value#1/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::char_left( '=', context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Value#1 as range 7
    //DEBUG: e.Key#1: 5
    //DEBUG: e.Value#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & __Step-Start/11 >/12 </13 Tile{ HalfReuse: & Buried/0 HalfReuse: (/4 AsIs: e.Key#1/5 AsIs: '='/9 AsIs: e.Value#1/7 HalfReuse: )/1 } </14 & Buried/15 >/16 >/17 </18 & __Step-End/19 >/20 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Buried]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_u_u_Stepm_End]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::reinit_name(context[0], functions[efunc_Buried]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Br("Br", 0U, 0U, func_Br);


static refalrts::FnResult func_Card(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Card/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 AsIs: >/1 } </5 & Get-Aux/6 # stdin/7 >/8 </9 & __Step-End/10 >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Getm_Aux]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_stdin]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Card("Card", 0U, 0U, func_Card);

#line 259 "Library.ref"
namespace {

template <typename Conv>
refalrts::FnResult convert(
  refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end, Conv conv
) {
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::Iter pfunc =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  while (! refalrts::empty_seq(content_b, content_e)) {
    if (conv.for_convert(content_b)) {
      conv.convert(content_b);
    }

    if (content_b->tag != refalrts::cDataOpenADT) {
      refalrts::move_left(content_b, content_e);
    } else {
      refalrts::Iter dummy;
      refalrts::tvar_left(dummy, content_b, content_e);
    }
  }

  refalrts::splice_to_freelist(vm, arg_begin, pfunc);
  refalrts::splice_to_freelist(vm, arg_end, arg_end);

  return refalrts::cSuccess;
}

struct ChrConv {
  bool for_convert(refalrts::Iter item) {
    return refalrts::cDataNumber == item->tag;
  }

  void convert(refalrts::Iter item) {
    item->tag = refalrts::cDataChar;
    item->char_info = static_cast<char>(item->number_info);
  }
};

}  // unnamed namespace
#line 2589 "Library.cpp"

static refalrts::FnResult func_Chr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 304 "Library.ref"
  return convert(vm, arg_begin, arg_end, ChrConv());
#line 2598 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Chr("Chr", 0U, 0U, func_Chr);


static refalrts::FnResult func_gen_Cp_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Cp:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Cp:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Cp:1/4 (/7 e.Key#1/9 )/8 e.Values-B#2/13 (/19 e.Key#1/21 '='/23 e.Value#2/17 )/20 e.Values-E#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Key#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      context[23] = refalrts::char_left( '=', context[17], context[18] );
      if( ! context[23] )
        continue;
      // closed e.Value#2 as range 17
      // closed e.Values-E#2 as range 15
      //DEBUG: e.Key#1: 9
      //DEBUG: e.Values-B#2: 13
      //DEBUG: e.Value#2: 17
      //DEBUG: e.Values-E#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Key#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } e.Value#2/17/24 </26 Tile{ HalfReuse: & Buried/8 AsIs: e.Values-B#2/13 AsIs: (/19 AsIs: e.Key#1/21 AsIs: '='/23 AsIs: e.Value#2/17 AsIs: )/20 AsIs: e.Values-E#2/15 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & __Step-End/4 HalfReuse: >/7 } Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::reinit_name(context[8], functions[efunc_Buried]);
      refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Cp:1/4 (/7 e.Key#1/5 )/8 e.Values#2/2 >/1
  // closed e.Key#1 as range 5
  // closed e.Values#2 as range 2
  //DEBUG: e.Key#1: 5
  //DEBUG: e.Values#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Key#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Buried/4 } Tile{ AsIs: e.Values#2/2 } Tile{ HalfReuse: >/7 } Tile{ HalfReuse: </8 } & __Step-End/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_Buried]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Cp_B1("Cp:1", 2948557630U, 3778842242U, func_gen_Cp_B1);


static refalrts::FnResult func_Cp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Cp/4 e.Key#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Key#1 as range 2
  //DEBUG: e.Key#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Cp:1/5 (/6 Tile{ AsIs: e.Key#1/2 } )/7 {*}/8 </9 & __Step-Start/10 >/11 </12 & Buried/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Cp_B1]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[4]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Buried]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Cp("Cp", 0U, 0U, func_Cp);


static refalrts::FnResult func_gen_Dg_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Dg:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Dg:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Dg:1/4 (/7 e.Key#1/9 )/8 e.Values-B#2/13 (/19 e.Key#1/21 '='/23 e.Value#2/17 )/20 e.Values-E#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Key#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      context[23] = refalrts::char_left( '=', context[17], context[18] );
      if( ! context[23] )
        continue;
      // closed e.Value#2 as range 17
      // closed e.Values-E#2 as range 15
      //DEBUG: e.Key#1: 9
      //DEBUG: e.Values-B#2: 13
      //DEBUG: e.Value#2: 17
      //DEBUG: e.Values-E#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 e.Key#1/9 )/8 {REMOVED TILE} {REMOVED TILE} e.Key#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Value#2/17 } Tile{ AsIs: </0 Reuse: & Buried/4 } Tile{ AsIs: e.Values-B#2/13 } Tile{ AsIs: e.Values-E#2/15 } Tile{ HalfReuse: >/19 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & __Step-End/20 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Buried]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[20], functions[efunc_u_u_Stepm_End]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dg:1/4 (/7 e.Key#1/5 )/8 e.Values#2/2 >/1
  // closed e.Key#1 as range 5
  // closed e.Values#2 as range 2
  //DEBUG: e.Key#1: 5
  //DEBUG: e.Values#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Key#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Buried/4 } Tile{ AsIs: e.Values#2/2 } Tile{ HalfReuse: >/7 } Tile{ HalfReuse: </8 } & __Step-End/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_Buried]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Dg_B1("Dg:1", 2948557630U, 3778842242U, func_gen_Dg_B1);


static refalrts::FnResult func_Dg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Dg/4 e.Key#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Key#1 as range 2
  //DEBUG: e.Key#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Dg:1/5 (/6 Tile{ AsIs: e.Key#1/2 } )/7 {*}/8 </9 & __Step-Start/10 >/11 </12 & Buried/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Dg_B1]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[4]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Buried]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dg("Dg", 0U, 0U, func_Dg);


static refalrts::FnResult func_Dgall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Dgall/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 AsIs: >/1 } </5 & Buried/6 >/7 </8 & __Step-End/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Buried]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dgall("Dgall", 0U, 0U, func_Dgall);


static refalrts::FnResult func_gen_Div_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Div$1=1/4 (/7 s.Div#2/9 )/8 s.Rem#2/10 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Div#2: 9
  //DEBUG: s.Rem#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Div#2/9 )/8 s.Rem#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Div2 #9/0 HalfReuse: </4 HalfReuse: & __Step-End/7 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_u_u_Stepm_End]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Div_S1A1("Div$1=1", 2948557630U, 3778842242U, func_gen_Div_S1A1);


static refalrts::FnResult func_Div(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Div/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Div/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Div$1=1/10 </11 & __Step-Start/12 >/13 Tile{ AsIs: </0 Reuse: & Divmod-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_Div_S1A1]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Divmodm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Div/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Div_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Div$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7
    //2: e.ArithmArg#1
    //7: e.Second#2
    //10: e.First#2
    //20: e.First#2
    //23: e.Second#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Div_S2C2]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Divmodm_Normed]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[10], context[11]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::link_brackets( context[19], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & Div$2?2/18 (/21 e.Div#3/19 )/22 e.Mod#3/16 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Div#3 as range 19
      // closed e.Mod#3 as range 16
      //DEBUG: e.ArithmArg#1: 2
      //DEBUG: e.First#2: 10
      //DEBUG: e.Second#2: 7
      //DEBUG: e.Div#3: 19
      //DEBUG: e.Mod#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Div/4 e.ArithmArg#1/2 </5 & Div$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6 {REMOVED TILE} & Div$2?2/18 (/21 {REMOVED TILE} )/22 e.Mod#3/16 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Div#3/19 } Tile{ AsIs: </14 } Tile{ HalfReuse: & __Step-End/15 AsIs: >/1 ]] }
      refalrts::reinit_name(context[15], functions[efunc_u_u_Stepm_End]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Div("Div", 0U, 0U, func_Div);


static refalrts::FnResult func_Divmod(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Divmod/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Divmod/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & __Step-Start/10 >/11 Tile{ AsIs: </0 Reuse: & Divmod-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } </12 & __Step-End/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Divmodm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Divmod_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Divmod$2?1/9 (/12 e.First#2/10 )/13 s.Sign#2/14 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    if( ! refalrts::svar_left( context[14], context[7], context[8] ) )
      continue;
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: s.Sign#2: 14
    //DEBUG: e.Second#2: 7
    //2: e.ArithmArg#1
    //7: e.Second#2
    //10: e.First#2
    //14: s.Sign#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_Divmod_S2C2]);
    refalrts::alloc_chars(vm, context[18], context[19], "+-", 2);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & Divmod$2?2/19 e.Signs-B#3/20 s.Sign#2/24 e.Signs-E#3/22 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = 0;
      context[21] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::repeated_stvar_left( vm, context[24], context[14], context[22], context[23] ) )
          continue;
        // closed e.Signs-E#3 as range 22
        //DEBUG: e.ArithmArg#1: 2
        //DEBUG: e.First#2: 10
        //DEBUG: s.Sign#2: 14
        //DEBUG: e.Second#2: 7
        //DEBUG: e.Signs-B#3: 20
        //DEBUG: e.Signs-E#3: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Divmod/4 e.ArithmArg#1/2 {REMOVED TILE} e.Signs-B#3/20 s.Sign#2/24 e.Signs-E#3/22 >/16 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </5 Reuse: & Divmod-Normed/9 AsIs: (/12 AsIs: e.First#2/10 AsIs: )/13 AsIs: s.Sign#2/14 AsIs: e.Second#2/7 AsIs: >/6 AsIs: </15 Reuse: & __Step-End/19 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[9], functions[efunc_Divmodm_Normed]);
        refalrts::update_name(context[19], functions[efunc_u_u_Stepm_End]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[5] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[20], context[21], context[17], context[18] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Divmod("Divmod", 0U, 0U, func_Divmod);


static refalrts::FnResult func_Divmodm_Digits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 384 "Library.ref"
  ARITHM_PRELUDE

  if (0 == second) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter pleft_bracket = arg_begin;
  refalrts::Iter pdiv = pFunc;
  refalrts::Iter pright_bracket = pFirst;
  refalrts::Iter pmod = pSecond;
  refalrts::link_brackets(pleft_bracket, pright_bracket);

  refalrts::reinit_open_bracket(pleft_bracket);
  refalrts::reinit_number(pdiv, first / second);
  refalrts::reinit_close_bracket(pright_bracket);
  refalrts::update_number(pmod, first % second);
  refalrts::splice_to_freelist(vm, arg_end, arg_end);

  return refalrts::cSuccess;
#line 3450 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Divmodm_Digits("Divmod-Digits", 2948557630U, 3778842242U, func_Divmodm_Digits);


static refalrts::FnResult func_Divmodm_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Divmod-Normed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-Normed/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & Divmod-Normed/4 (/7 s.new#4/9 e.new#5/10 )/8 s.new#6/14 e.new#7/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#5 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Divmod-Normed/4 (/7 '+'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::char_term( '+', context[9] ) )
        continue;
      // closed e.new#8 as range 15
      // closed e.new#10 as range 17
      do {
        // </0 & Divmod-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '+', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Second#1/21 } (/23 Tile{ AsIs: )/8 HalfReuse: (/14 } )/24 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::alloc_close_bracket(vm, context[24]);
        refalrts::update_name(context[4], functions[efunc_Divmodm_Nat]);
        refalrts::reinit_close_bracket(context[9]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[23], context[8] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Divmod-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::char_term( '-', context[14] ) )
        continue;
      // closed e.First#1 as range 19
      // closed e.Second#1 as range 21
      //DEBUG: e.First#1: 19
      //DEBUG: e.Second#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Second#1/21 } Tile{ HalfReuse: (/8 AsIs: '-'/14 } )/23 (/24 )/25 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_Divmodm_Nat]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[8], context[23] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Divmod-Normed/4 (/7 '-'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    if( ! refalrts::char_term( '-', context[9] ) )
      continue;
    // closed e.new#8 as range 15
    // closed e.new#10 as range 17
    do {
      // </0 & Divmod-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::char_term( '+', context[14] ) )
        continue;
      // closed e.First#1 as range 19
      // closed e.Second#1 as range 21
      //DEBUG: e.First#1: 19
      //DEBUG: e.Second#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } )/23 Tile{ AsIs: e.Second#1/21 } (/24 Tile{ AsIs: '-'/9 } Tile{ AsIs: )/8 HalfReuse: (/14 } '-'/25 )/26 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_char(vm, context[25], '-');
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_Divmodm_Nat]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[26] );
      refalrts::link_brackets( context[24], context[8] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Divmod-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
    context[19] = context[15];
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    if( ! refalrts::char_term( '-', context[14] ) )
      continue;
    // closed e.First#1 as range 19
    // closed e.Second#1 as range 21
    //DEBUG: e.First#1: 19
    //DEBUG: e.Second#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } )/23 Tile{ AsIs: e.Second#1/21 } (/24 Tile{ AsIs: )/8 HalfReuse: (/14 } Tile{ AsIs: '-'/9 } )/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_Divmodm_Nat]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[25] );
    refalrts::link_brackets( context[24], context[8] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-Normed/4 (/7 0/9 )/8 e.AnySecond#1/2 >/1
  if( ! refalrts::number_term( 0UL, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnySecond#1 as range 2
  //DEBUG: e.AnySecond#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Divmod-Normed/4 {REMOVED TILE} e.AnySecond#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: 0/9 AsIs: )/8 } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_Normed("Divmod-Normed", 2948557630U, 3778842242U, func_Divmodm_Normed);


static refalrts::FnResult func_gen_Divmodm_Nat_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Divmod-Nat$1=1/4 (/7 e.QuotSign#1/5 )/8 (/11 e.RemSing#1/9 )/12 (/15 s.Quot#2/17 )/16 s.Rem#2/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.QuotSign#1 as range 5
  // closed e.RemSing#1 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.RemSing#1: 9
  //DEBUG: s.Quot#2: 17
  //DEBUG: s.Rem#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Divmod-Nat$1=1/4 {REMOVED TILE} (/15 s.Quot#2/17 )/16 s.Rem#2/18 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.QuotSign#1/5 HalfReuse: s.Quot2 #17/8 HalfReuse: )/11 AsIs: e.RemSing#1/9 HalfReuse: s.Rem2 #18/12 } Tile{ ]] }
  refalrts::reinit_svar( context[8], context[17] );
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_svar( context[12], context[18] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S1A1("Divmod-Nat$1=1", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S1A1);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Divmod-Nat$2=5/4 (/7 e.QuotSign#1/5 )/8 (/11 e.Quot#5/9 )/12 (/15 e.RemSing#1/13 )/16 e.Rem#6/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.QuotSign#1 as range 5
  // closed e.Quot#5 as range 9
  // closed e.RemSing#1 as range 13
  // closed e.Rem#6 as range 2
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.Quot#5: 9
  //DEBUG: e.RemSing#1: 13
  //DEBUG: e.Rem#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Divmod-Nat$2=5/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.QuotSign#1/5 } Tile{ AsIs: e.Quot#5/9 } Tile{ AsIs: )/16 } Tile{ AsIs: e.RemSing#1/13 } Tile{ AsIs: e.Rem#6/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::link_brackets( context[0], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A5("Divmod-Nat$2=5", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A5);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Divmod-Nat$2=5:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-Nat$2=5:1/4 e.new#1/2 0/5 >/1
  context[5] = refalrts::number_right( 0UL, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & Divmod-Nat$2=5:1/4 0/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Divmod-Nat$2=5:1/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-Nat$2=5:1/4 e.Rem#6/2 0/5 >/1
  // closed e.Rem#6 as range 2
  //DEBUG: e.Rem#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Divmod-Nat$2=5:1/4 {REMOVED TILE} 0/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Rem#6/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A5B1("Divmod-Nat$2=5:1", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A5B1);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Divmod-Nat$2=4/4 (/7 e.QuotSign#1/5 )/8 (/11 e.RemSing#1/9 )/12 s.RestoreShift#2/13 (/16 e.Quot#5/14 )/17 e.Rem#5/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.QuotSign#1 as range 5
  // closed e.RemSing#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Quot#5 as range 14
  // closed e.Rem#5 as range 2
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.RemSing#1: 9
  //DEBUG: s.RestoreShift#2: 13
  //DEBUG: e.Quot#5: 14
  //DEBUG: e.Rem#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.RestoreShift#2/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & Divmod-Nat$2=5/4 AsIs: (/7 AsIs: e.QuotSign#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Quot#5/14 } Tile{ AsIs: )/12 } Tile{ AsIs: (/16 } Tile{ AsIs: e.RemSing#1/9 } )/19 {*}/20 </21 & Divmod-Nat$2=5:1/22 </23 & Divmod-Shl/24 Tile{ HalfReuse: s.RestoreShift2 #13/17 AsIs: e.Rem#5/2 AsIs: >/1 } >/25 >/26 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[0]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_Divmodm_Nat_S2A5B1]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Divmodm_Shl]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Divmodm_Nat_S2A5]);
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A4("Divmod-Nat$2=4", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A4);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Divmod-Nat$2=3/4 (/7 e.QuotSign#1/5 )/8 (/11 e.RemSing#1/9 )/12 s.RestoreShift#2/13 (/16 e.Numerator#3/14 )/17 e.Denominator#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.QuotSign#1 as range 5
  // closed e.RemSing#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Numerator#3 as range 14
  // closed e.Denominator#4 as range 2
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.RemSing#1: 9
  //DEBUG: s.RestoreShift#2: 13
  //DEBUG: e.Numerator#3: 14
  //DEBUG: e.Denominator#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & Divmod-Nat$2=4/4 AsIs: (/7 AsIs: e.QuotSign#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RemSing#1/9 AsIs: )/12 AsIs: s.RestoreShift#2/13 HalfReuse: {*}/16 } </19 & Divmod-Nat-Normed/20 (/21 Tile{ AsIs: e.Numerator#3/14 } Tile{ AsIs: )/17 AsIs: e.Denominator#4/2 AsIs: >/1 } >/22 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Divmodm_Natm_Normed]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Divmodm_Nat_S2A4]);
  refalrts::reinit_unwrapped_closure(context[16], context[0]);
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A3("Divmod-Nat$2=3", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A3);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Divmod-Nat$2=2/4 (/7 e.QuotSign#1/5 )/8 (/11 e.RemSing#1/9 )/12 s.RestoreShift#2/13 s.NormShift#2/14 s.DenomFirst#1/15 (/18 e.Denominator#1/16 )/19 e.Numerator#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.QuotSign#1 as range 5
  // closed e.RemSing#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.Denominator#1 as range 16
  // closed e.Numerator#3 as range 2
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.RemSing#1: 9
  //DEBUG: s.RestoreShift#2: 13
  //DEBUG: s.NormShift#2: 14
  //DEBUG: s.DenomFirst#1: 15
  //DEBUG: e.Denominator#1: 16
  //DEBUG: e.Numerator#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & Divmod-Nat$2=3/4 AsIs: (/7 AsIs: e.QuotSign#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RemSing#1/9 AsIs: )/12 AsIs: s.RestoreShift#2/13 } Tile{ AsIs: (/18 } Tile{ AsIs: e.Numerator#3/2 } Tile{ AsIs: )/19 } {*}/21 </22 & Divmod-Shl/23 Tile{ AsIs: s.NormShift#2/14 AsIs: s.DenomFirst#1/15 } Tile{ AsIs: e.Denominator#1/16 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_unwrapped_closure(vm, context[21], context[0]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Divmodm_Shl]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Divmodm_Nat_S2A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A2("Divmod-Nat$2=2", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A2);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Divmod-Nat$2=1/4 (/7 e.QuotSign#1/5 )/8 (/11 e.RemSing#1/9 )/12 s.DenomFirst#1/13 (/16 e.Denominator#1/14 )/17 (/20 e.Numerator#1/18 )/21 s.NormShift#2/22 s.RestoreShift#2/23 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.QuotSign#1 as range 5
  // closed e.RemSing#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Denominator#1 as range 14
  // closed e.Numerator#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.QuotSign#1: 5
  //DEBUG: e.RemSing#1: 9
  //DEBUG: s.DenomFirst#1: 13
  //DEBUG: e.Denominator#1: 14
  //DEBUG: e.Numerator#1: 18
  //DEBUG: s.NormShift#2: 22
  //DEBUG: s.RestoreShift#2: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & Divmod-Nat$2=2/4 AsIs: (/7 AsIs: e.QuotSign#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RemSing#1/9 AsIs: )/12 } Tile{ AsIs: s.RestoreShift#2/23 } s.NormShift#2/22/25 Tile{ AsIs: s.DenomFirst#1/13 AsIs: (/16 AsIs: e.Denominator#1/14 AsIs: )/17 HalfReuse: {*}/20 } </26 Tile{ HalfReuse: & Divmod-Shl/21 AsIs: s.NormShift#2/22 } Tile{ AsIs: e.Numerator#1/18 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::copy_stvar(vm, context[25], context[22]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Divmodm_Nat_S2A2]);
  refalrts::reinit_unwrapped_closure(context[20], context[0]);
  refalrts::reinit_name(context[21], functions[efunc_Divmodm_Shl]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A1("Divmod-Nat$2=1", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A1);


static refalrts::FnResult func_gen_Divmodm_Nat_S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 423 "Library.ref"
        refalrts::Iter pfunc = arg_begin->next;
        assert(refalrts::cDataFunction == pfunc->tag);

        refalrts::Iter pvalue = pfunc->next;
        assert(refalrts::cDataNumber == pvalue->tag);

        refalrts::RefalNumber value = pvalue->number_info;
        assert(value != 0);

        int shift = 0;
        while ((value & (1 << 31)) == 0) {
          ++shift;
          value <<= 1;
        }

        refalrts::reinit_number(arg_begin, shift);
        refalrts::reinit_number(pfunc, 32 - shift);
        refalrts::splice_to_freelist(vm, pvalue, arg_end);
        return refalrts::cSuccess;
#line 4260 "Library.cpp"
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Nat_S2A1B1("Divmod-Nat$2=1:1", 2948557630U, 3778842242U, func_gen_Divmodm_Nat_S2A1B1);


static refalrts::FnResult func_Divmodm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Divmod-Nat/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-Nat/4 (/7 e.new#1/5 )/8 s.new#2/17 e.new#3/2 (/15 e.new#4/13 )/16 (/11 e.new#5/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#1 as range 5
  // closed e.new#4 as range 13
  // closed e.new#5 as range 9
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Divmod-Nat/4 (/7 s.Numerator#1/24 )/8 s.Denominator#1/17 (/15 e.QuotSign#1/20 )/16 (/11 e.RemSing#1/22 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[13];
    context[21] = context[14];
    context[22] = context[9];
    context[23] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.QuotSign#1 as range 20
    // closed e.RemSing#1 as range 22
    if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: s.Denominator#1: 17
    //DEBUG: e.QuotSign#1: 20
    //DEBUG: e.RemSing#1: 22
    //DEBUG: s.Numerator#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Numerator#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Divmod-Nat$1=1/7 } Tile{ AsIs: (/15 AsIs: e.QuotSign#1/20 AsIs: )/16 AsIs: (/11 AsIs: e.RemSing#1/22 AsIs: )/12 HalfReuse: {*}/1 } </25 & Divmod-Digits/26 Tile{ HalfReuse: s.Numerator1 #24/8 AsIs: s.Denominator#1/17 } >/27 >/28 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Divmodm_Digits]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Divmodm_Nat_S1A1]);
    refalrts::reinit_unwrapped_closure(context[1], context[4]);
    refalrts::reinit_svar( context[8], context[24] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[8], context[17] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-Nat/4 (/7 e.Numerator#1/5 )/8 s.DenomFirst#1/17 e.Denominator#1/2 (/15 e.QuotSign#1/13 )/16 (/11 e.RemSing#1/9 )/12 >/1
  // closed e.Numerator#1 as range 5
  // closed e.Denominator#1 as range 2
  // closed e.QuotSign#1 as range 13
  // closed e.RemSing#1 as range 9
  //DEBUG: s.DenomFirst#1: 17
  //DEBUG: e.Numerator#1: 5
  //DEBUG: e.Denominator#1: 2
  //DEBUG: e.QuotSign#1: 13
  //DEBUG: e.RemSing#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/18 & Divmod-Nat$2=1/19 Tile{ AsIs: (/15 AsIs: e.QuotSign#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.RemSing#1/9 AsIs: )/12 HalfReuse: s.DenomFirst1 #17/1 } (/20 Tile{ AsIs: e.Denominator#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Numerator#1/5 AsIs: )/8 } {*}/21 </22 & Divmod-Nat$2=1:1/23 Tile{ AsIs: s.DenomFirst#1/17 } >/24 >/25 Tile{ ]] }
  refalrts::alloc_closure_head(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_Divmodm_Nat_S2A1]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_unwrapped_closure(vm, context[21], context[18]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_Divmodm_Nat_S2A1B1]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_svar( context[1], context[17] );
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_Nat("Divmod-Nat", 2948557630U, 3778842242U, func_Divmodm_Nat);


static refalrts::FnResult func_Divmodm_Shl(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 459 "Library.ref"
  refalrts::Iter digits_b = 0, digits_e = 0;
  refalrts::call_left(digits_b, digits_e, arg_begin, arg_end);

  refalrts::Iter pshift;
  if (
    ! refalrts::svar_left(pshift, digits_b, digits_e)
    && refalrts::cDataNumber != pshift->tag
    && refalrts::empty_seq(digits_b, digits_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber shift = pshift->number_info;
  if (shift > 32) {
    return refalrts::cRecognitionImpossible;
  }

  if (0 == shift) {
    refalrts::splice_to_freelist(vm, arg_begin, pshift);
    refalrts::splice_to_freelist(vm, arg_end, arg_end);
    return refalrts::cSuccess;
  }

  refalrts::Iter garbage_end = pshift;
  refalrts::reinit_number(arg_end, 0);
  if (shift < 32) {
    refalrts::Iter current = digits_e;
    while (current != pshift) {
      current->next->number_info |= current->number_info << shift;
      current->number_info >>= 32 - shift;
      current = current->prev;
    }

    if (0 == digits_b->number_info) {
      garbage_end = digits_b;
    }
  }

  refalrts::splice_to_freelist(vm, arg_begin, garbage_end);
  return refalrts::cSuccess;
#line 4455 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Divmodm_Shl("Divmod-Shl", 2948557630U, 3778842242U, func_Divmodm_Shl);


static refalrts::FnResult func_Divmodm_Natm_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Divmod-Nat-Normed/4 (/7 e.Numerator#1/5 )/8 e.Denominator#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Numerator#1 as range 5
  // closed e.Denominator#1 as range 2
  //DEBUG: e.Numerator#1: 5
  //DEBUG: e.Denominator#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-Align/4 AsIs: (/7 } 0/9 )/10 (/11 Tile{ AsIs: e.Numerator#1/5 } )/12 (/13 Tile{ AsIs: )/8 AsIs: e.Denominator#1/2 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[9], 0UL);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Divmodm_Align]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_Natm_Normed("Divmod-Nat-Normed", 2948557630U, 3778842242U, func_Divmodm_Natm_Normed);


static refalrts::FnResult func_gen_Divmodm_Align_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Divmod-Align$2=1/4 e.Quot#2/2 (/7 e.Rest#2/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Quot#2 as range 2
  // closed e.Rest#2 as range 5
  //DEBUG: e.Quot#2: 2
  //DEBUG: e.Rest#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & LeadingZeros/4 AsIs: e.Quot#2/2 HalfReuse: >/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Rest#2/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::update_name(context[4], functions[efunc_LeadingZeros]);
  refalrts::reinit_close_call(context[7]);
  refalrts::link_brackets( context[1], context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_Align_S2A1("Divmod-Align$2=1", 2948557630U, 3778842242U, func_gen_Divmodm_Align_S2A1);


static refalrts::FnResult func_Divmodm_Align(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Divmod-Align/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-Align/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 2
  do {
    // </0 & Divmod-Align/4 (/7 e.Numerator#1/17 )/8 (/11 s.N#1/25 e.NumerRest#1/19 )/12 (/15 e.Denominator#1/21 )/16 s.D#1/26 e.DenominRest#1/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Numerator#1 as range 17
    // closed e.Denominator#1 as range 21
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.NumerRest#1 as range 19
    if( ! refalrts::svar_left( context[26], context[23], context[24] ) )
      continue;
    // closed e.DenominRest#1 as range 23
    //DEBUG: e.Numerator#1: 17
    //DEBUG: e.Denominator#1: 21
    //DEBUG: s.N#1: 25
    //DEBUG: e.NumerRest#1: 19
    //DEBUG: s.D#1: 26
    //DEBUG: e.DenominRest#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.N#1/25 {REMOVED TILE} {REMOVED TILE} s.D#1/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Divmod-Align/4 AsIs: (/7 AsIs: e.Numerator#1/17 HalfReuse: s.N1 #25/8 HalfReuse: )/11 } (/27 Tile{ AsIs: e.NumerRest#1/19 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Denominator#1/21 HalfReuse: s.D1 #26/16 } )/28 Tile{ AsIs: e.DenominRest#1/23 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::reinit_svar( context[8], context[25] );
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_svar( context[16], context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[28] );
    refalrts::link_brackets( context[27], context[12] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Divmod-Align/4 (/7 e.Numerator#1/17 )/8 (/11 e.NumerRest#1/19 )/12 (/15 e.Denominator#1/21 )/16 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Numerator#1 as range 17
    // closed e.NumerRest#1 as range 19
    // closed e.Denominator#1 as range 21
    //DEBUG: e.Numerator#1: 17
    //DEBUG: e.NumerRest#1: 19
    //DEBUG: e.Denominator#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </15 } & Divmod-Align$2=1/23 Tile{ AsIs: </0 Reuse: & Divmod-CalcDigits/4 AsIs: (/7 AsIs: e.Numerator#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.NumerRest#1/19 AsIs: )/12 } Tile{ AsIs: e.Denominator#1/21 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_Divmodm_Align_S2A1]);
    refalrts::reinit_open_call(context[15]);
    refalrts::update_name(context[4], functions[efunc_Divmodm_CalcDigits]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-Align/4 (/7 0/17 e.Numerator#1/5 )/8 (/11 )/12 (/15 e.Denominator#1/13 )/16 e.DenominRest#1/2 >/1
  context[17] = refalrts::number_left( 0UL, context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Numerator#1 as range 5
  // closed e.Denominator#1 as range 13
  // closed e.DenominRest#1 as range 2
  //DEBUG: e.Numerator#1: 5
  //DEBUG: e.Denominator#1: 13
  //DEBUG: e.DenominRest#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Divmod-Align/4 {REMOVED TILE} {REMOVED TILE} )/8 (/11 )/12 (/15 e.Denominator#1/13 {REMOVED TILE} e.DenominRest#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: 0/17 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Numerator#1/5 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_Align("Divmod-Align", 2948557630U, 3778842242U, func_Divmodm_Align);


static refalrts::FnResult func_gen_Divmodm_CalcDigits_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Divmod-CalcDigits:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-CalcDigits:1/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 2
  do {
    // </0 & Divmod-CalcDigits:1/4 s.QuotDigit#2/5 (/8 e.Rem#2/14 )/9 (/12 e.Denominator#1/16 )/13 s.NextDigit#3/20 e.NumerRest#3/18 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Rem#2 as range 14
    // closed e.Denominator#1 as range 16
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    // closed e.NumerRest#3 as range 18
    //DEBUG: s.QuotDigit#2: 5
    //DEBUG: e.Rem#2: 14
    //DEBUG: e.Denominator#1: 16
    //DEBUG: s.NextDigit#3: 20
    //DEBUG: e.NumerRest#3: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.QuotDigit#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NextDigit#3/20 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.QuotDigit2 #5/0 HalfReuse: </4 } & Divmod-CalcDigits/21 Tile{ AsIs: (/8 AsIs: e.Rem#2/14 HalfReuse: s.NextDigit3 #20/9 HalfReuse: )/12 } (/22 Tile{ AsIs: e.NumerRest#3/18 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Denominator#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[21], functions[efunc_Divmodm_CalcDigits]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_svar( context[9], context[20] );
    refalrts::reinit_close_bracket(context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[22], context[13] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-CalcDigits:1/4 s.QuotDigit#2/5 (/8 e.Rem#2/6 )/9 (/12 e.Denominator#1/10 )/13 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rem#2 as range 6
  // closed e.Denominator#1 as range 10
  //DEBUG: s.QuotDigit#2: 5
  //DEBUG: e.Rem#2: 6
  //DEBUG: e.Denominator#1: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Divmod-CalcDigits:1/4 {REMOVED TILE} (/12 e.Denominator#1/10 )/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.QuotDigit#2/5 AsIs: (/8 AsIs: e.Rem#2/6 AsIs: )/9 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_CalcDigits_B1("Divmod-CalcDigits:1", 2948557630U, 3778842242U, func_gen_Divmodm_CalcDigits_B1);


static refalrts::FnResult func_gen_Divmodm_CalcDigits_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Divmod-CalcDigits=1/4 (/7 e.Denominator#1/5 )/8 (/11 e.NumerRest#1/9 )/12 s.QuotDigit#2/13 e.Rem#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Denominator#1 as range 5
  // closed e.NumerRest#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rem#2 as range 2
  //DEBUG: e.Denominator#1: 5
  //DEBUG: e.NumerRest#1: 9
  //DEBUG: s.QuotDigit#2: 13
  //DEBUG: e.Rem#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/14 Tile{ HalfReuse: & Divmod-CalcDigits:1/1 } Tile{ AsIs: s.QuotDigit#2/13 } (/15 Tile{ AsIs: e.Rem#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Denominator#1/5 AsIs: )/8 HalfReuse: {*}/11 AsIs: e.NumerRest#1/9 HalfReuse: >/12 } Tile{ ]] }
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::reinit_name(context[1], functions[efunc_gen_Divmodm_CalcDigits_B1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[14]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_CalcDigits_A1("Divmod-CalcDigits=1", 2948557630U, 3778842242U, func_gen_Divmodm_CalcDigits_A1);


static refalrts::FnResult func_Divmodm_CalcDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Divmod-CalcDigits/4 (/7 e.Numerator#1/5 )/8 (/11 e.NumerRest#1/9 )/12 e.Denominator#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Numerator#1 as range 5
  // closed e.NumerRest#1 as range 9
  // closed e.Denominator#1 as range 2
  //DEBUG: e.Numerator#1: 5
  //DEBUG: e.NumerRest#1: 9
  //DEBUG: e.Denominator#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 [*]/14 & Divmod-CalcDigits=1/15 (/16 e.Denominator#1/2/17 )/19 Tile{ AsIs: (/11 AsIs: e.NumerRest#1/9 AsIs: )/12 } {*}/20 Tile{ AsIs: </0 Reuse: & Divmod-GetNextDigit/4 AsIs: (/7 AsIs: e.Numerator#1/5 AsIs: )/8 } Tile{ AsIs: e.Denominator#1/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Divmodm_CalcDigits_A1]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[14]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Divmodm_GetNextDigit]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_CalcDigits("Divmod-CalcDigits", 2948557630U, 3778842242U, func_Divmodm_CalcDigits);


static refalrts::FnResult func_gen_Divmodm_GetNextDigit_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Divmod-GetNextDigit$2=1/4 s.N1#1/5 s.N2#1/6 (/9 e.Numerator#1/7 )/10 s.D#1/11 (/14 e.Denominator#1/12 )/15 s.QuotDigit#2/16 s.RemDigit#2/17 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Numerator#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Denominator#1 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.N1#1: 5
  //DEBUG: s.N2#1: 6
  //DEBUG: e.Numerator#1: 7
  //DEBUG: s.D#1: 11
  //DEBUG: e.Denominator#1: 12
  //DEBUG: s.QuotDigit#2: 16
  //DEBUG: s.RemDigit#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.RemDigit#2/17 {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 & Divmod-AdjustDigit/19 s.QuotDigit#2/16/20 </21 & Sub-Normed/22 Tile{ AsIs: (/9 } '+'/23 Tile{ AsIs: </0 Reuse: & LeadingZeros/4 AsIs: s.N1#1/5 AsIs: s.N2#1/6 } Tile{ AsIs: e.Numerator#1/7 } >/24 )/25 '+'/26 </27 Tile{ HalfReuse: & Mul-Nat-Line/10 AsIs: s.D#1/11 } e.Denominator#1/12/28 Tile{ AsIs: s.QuotDigit#2/16 } >/30 >/31 (/32 Tile{ HalfReuse: s.D1 #11/14 AsIs: e.Denominator#1/12 AsIs: )/15 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Divmodm_AdjustDigit]);
  refalrts::copy_stvar(vm, context[20], context[16]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Subm_Normed]);
  refalrts::alloc_char(vm, context[23], '+');
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_char(vm, context[26], '+');
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::copy_evar(vm, context[28], context[29], context[12], context[13]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::update_name(context[4], functions[efunc_LeadingZeros]);
  refalrts::reinit_name(context[10], functions[efunc_Mulm_Natm_Line]);
  refalrts::reinit_svar( context[14], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[32], context[15] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[9], context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Divmodm_GetNextDigit_S2A1("Divmod-GetNextDigit$2=1", 2948557630U, 3778842242U, func_gen_Divmodm_GetNextDigit_S2A1);


static refalrts::FnResult func_Divmodm_GetNextDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Divmod-GetNextDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-GetNextDigit/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 s.new#4/11 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Divmod-GetNextDigit/4 (/7 s.N1#1/9 s.N2#1/10 )/8 s.D#1/11 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.N1#1: 9
    //DEBUG: s.N2#1: 10
    //DEBUG: s.D#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.N1#1/9 s.N2#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Divmod-GuessDigit/4 HalfReuse: s.N11 #9/7 } Tile{ HalfReuse: s.N21 #10/8 AsIs: s.D#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Divmodm_GuessDigit]);
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_svar( context[8], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-GetNextDigit/4 (/7 s.N1#1/9 s.N2#1/10 e.Numerator#1/5 )/8 s.D#1/11 e.Denominator#1/2 >/1
  // closed e.Numerator#1 as range 5
  // closed e.Denominator#1 as range 2
  //DEBUG: s.N1#1: 9
  //DEBUG: s.N2#1: 10
  //DEBUG: s.D#1: 11
  //DEBUG: e.Numerator#1: 5
  //DEBUG: e.Denominator#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Divmod-GetNextDigit$2=1/7 AsIs: s.N1#1/9 AsIs: s.N2#1/10 } (/12 Tile{ AsIs: e.Numerator#1/5 } Tile{ AsIs: )/8 AsIs: s.D#1/11 } (/13 Tile{ AsIs: e.Denominator#1/2 } )/14 {*}/15 </16 & Divmod-GuessDigit/17 s.N1#1/9/18 s.N2#1/10/19 s.D#1/11/20 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Divmodm_GuessDigit]);
  refalrts::copy_stvar(vm, context[18], context[9]);
  refalrts::copy_stvar(vm, context[19], context[10]);
  refalrts::copy_stvar(vm, context[20], context[11]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Divmodm_GetNextDigit_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_GetNextDigit("Divmod-GetNextDigit", 2948557630U, 3778842242U, func_Divmodm_GetNextDigit);


static refalrts::FnResult func_Divmodm_AdjustDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Divmod-AdjustDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Divmod-AdjustDigit/4 s.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Divmod-AdjustDigit/4 s.QuotDigit#1/9 '-'/14 e.Rem#1/10 (/7 e.Denominator#1/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    context[14] = refalrts::char_left( '-', context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Rem#1 as range 10
    // closed e.Denominator#1 as range 12
    //DEBUG: s.QuotDigit#1: 9
    //DEBUG: e.Rem#1: 10
    //DEBUG: e.Denominator#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Divmod-AdjustDigit/16 Tile{ AsIs: </0 Reuse: & Sub-Digits/4 AsIs: s.QuotDigit#1/9 HalfReuse: 1/14 } >/17 </18 & Sub-Nat/19 (/20 e.Denominator#1/12/21 )/23 Tile{ AsIs: e.Rem#1/10 } >/24 Tile{ AsIs: (/7 AsIs: e.Denominator#1/12 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Divmodm_AdjustDigit]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Subm_Nat]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::copy_evar(vm, context[21], context[22], context[12], context[13]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_Subm_Digits]);
    refalrts::reinit_number(context[14], 1UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[20], context[23] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[17], context[23] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Divmod-AdjustDigit/4 s.QuotDigit#1/9 e.Rem#1/2 (/7 e.Denominator#1/5 )/8 >/1
  // closed e.Rem#1 as range 2
  // closed e.Denominator#1 as range 5
  //DEBUG: s.QuotDigit#1: 9
  //DEBUG: e.Rem#1: 2
  //DEBUG: e.Denominator#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Divmod-AdjustDigit/4 s.QuotDigit#1/9 {REMOVED TILE} (/7 e.Denominator#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.QuotDigit1 #9/0 } Tile{ AsIs: e.Rem#1/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Divmodm_AdjustDigit("Divmod-AdjustDigit", 2948557630U, 3778842242U, func_Divmodm_AdjustDigit);

#line 562 "Library.ref"
namespace cookie_ns {

void long_mul(
  refalrts::UInt32& res_high, refalrts::UInt32& res_low,
  refalrts::UInt32 first, refalrts::UInt32 second
);

}  // namespace cookie_ns
#line 5277 "Library.cpp"

static refalrts::FnResult func_Divmodm_GuessDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 574 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::Iter pfunc =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pN1 = 0, pN2 = 0, pD = 0;
  if (
    ! refalrts::svar_left(pN1, content_b, content_e)
    || refalrts::cDataNumber != pN1->tag
    || ! refalrts::svar_left(pN2, content_b, content_e)
    || refalrts::cDataNumber != pN2->tag
    || ! refalrts::svar_left(pD, content_b, content_e)
    || refalrts::cDataNumber != pD->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }


  using refalrts::UInt32;
  UInt32 num_hi = pN1->number_info;
  UInt32 num_lo = pN2->number_info;
  UInt32 denom = pD->number_info;

  if (num_hi >= denom) {
    refalrts::reinit_number(arg_begin, 4294967295U);
    refalrts::reinit_char(pfunc, '*');
    refalrts::splice_to_freelist(vm, pN1, arg_end);
    return refalrts::cSuccess;
  }

  if (num_hi >= denom || (denom & (1 << 31)) == 0) {
    return refalrts::cRecognitionImpossible;
  }

  UInt32 denom_half_hi = denom >> 16;
  UInt32 quot_hi = num_hi / denom_half_hi;
  if (quot_hi >= 65536) {
    quot_hi = 65535;
  }

  UInt32 subst_hi, subst_lo;
  while (true) {
    cookie_ns::long_mul(subst_hi, subst_lo, quot_hi << 16, denom);

    if (subst_hi < num_hi || (subst_hi == num_hi && subst_lo <= num_lo)) {
      break;
    }
    --quot_hi;
  }

  if (subst_lo > num_lo) {
    --num_hi;
  }
  num_lo -= subst_lo;
  num_hi -= subst_hi;

  assert(num_hi < 65536);

  UInt32 num_major = (num_hi << 16) | (num_lo >> 16);
  assert(num_major < denom);
  UInt32 quot_lo = (num_major) / denom_half_hi;

  while (true) {
    cookie_ns::long_mul(subst_hi, subst_lo, quot_lo, denom);

    if (subst_hi < num_hi || (subst_hi == num_hi && subst_lo <= num_lo)) {
      break;
    }
    --quot_lo;
  }

  if (subst_lo > num_lo) {
    --num_hi;
  }
  num_lo -= subst_lo;
  num_hi -= subst_hi;

  assert(num_hi == 0);

  UInt32 quot = (quot_hi << 16) + quot_lo;
  UInt32 rem = num_lo;

  refalrts::reinit_number(arg_begin, quot);
  refalrts::reinit_number(pfunc, rem);
  refalrts::splice_to_freelist(vm, pN1, arg_end);

  return refalrts::cSuccess;
#line 5372 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Divmodm_GuessDigit("Divmod-GuessDigit", 2948557630U, 3778842242U, func_Divmodm_GuessDigit);


static refalrts::FnResult func_Explode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 671 "Library.ref"
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

  refalrts::reset_allocator(vm);
  refalrts::alloc_string(vm, content_b, content_e, pident->ident_info->name());
  refalrts::splice_evar(arg_begin, content_b, content_e);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 5402 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Explode("Explode", 0U, 0U, func_Explode);


static refalrts::FnResult func_First(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & First/4 s.N#1/5 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: s.N#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/6 </7 & DoFirst/8 Tile{ AsIs: s.N#1/5 } (/9 )/10 Tile{ AsIs: e.Expr#1/2 } >/11 </12 & __Step-End/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_DoFirst]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_First("First", 0U, 0U, func_First);


static refalrts::FnResult func_DoFirst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DoFirst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFirst/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & DoFirst/4 0/5 (/8 e.Prefix#1/10 )/9 e.Suffix#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Prefix#1 as range 10
    // closed e.Suffix#1 as range 12
    //DEBUG: e.Prefix#1: 10
    //DEBUG: e.Suffix#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoFirst/4 0/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Prefix#1/10 AsIs: )/9 } Tile{ AsIs: e.Suffix#1/12 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFirst/4 s.N#1/5 (/8 e.Prefix#1/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Prefix#1 as range 10
    //DEBUG: s.N#1: 5
    //DEBUG: e.Prefix#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoFirst/4 s.N#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Prefix#1/10 AsIs: )/9 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFirst/4 s.N#1/5 (/8 e.Prefix#1/6 )/9 t.Next#1/10 e.Suffix#1/2 >/1
  // closed e.Prefix#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Suffix#1 as range 2
  //DEBUG: s.N#1: 5
  //DEBUG: e.Prefix#1: 6
  //DEBUG: t.Next#1: 10
  //DEBUG: e.Suffix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFirst/4 } </12 & Sub-Digits/13 Tile{ AsIs: s.N#1/5 HalfReuse: 1/8 } >/14 (/15 Tile{ AsIs: e.Prefix#1/6 } Tile{ AsIs: t.Next#1/10 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Suffix#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Subm_Digits]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::reinit_number(context[8], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[9] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFirst("DoFirst", 2948557630U, 3778842242U, func_DoFirst);


static refalrts::FnResult func_Get(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Get/4 s.FileNo#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileNo#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & __Step-Start/7 >/8 </9 & Autoopen/10 'r'/11 s.FileNo#1/5/12 >/13 </14 & Get-Aux/15 Tile{ AsIs: </0 Reuse: & ZeroHandle/4 AsIs: s.FileNo#1/5 HalfReuse: # stdin/1 } >/16 >/17 </18 & __Step-End/19 >/20 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Autoopen]);
  refalrts::alloc_char(vm, context[11], 'r');
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Getm_Aux]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_ZeroHandle]);
  refalrts::reinit_ident(context[1], identifiers[ident_stdin]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Get("Get", 0U, 0U, func_Get);


static refalrts::FnResult func_ZeroHandle(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ZeroHandle/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ZeroHandle/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ZeroHandle/4 0/5 s.Default#1/6 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    //DEBUG: s.Default#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ZeroHandle/4 0/5 s.Default#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Default1 #6/1 ]] }
    refalrts::reinit_svar( context[1], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ZeroHandle/4 s.FileNo#1/5 s.Default#1/6 >/1
  //DEBUG: s.FileNo#1: 5
  //DEBUG: s.Default#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ZeroHandle/4 s.FileNo#1/5 s.Default#1/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FileNo1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ZeroHandle("ZeroHandle", 2948557630U, 3778842242U, func_ZeroHandle);

#line 730 "Library.ref"
namespace {

#define USE_IDENT(ident_name) (identifiers[ident_ ## ident_name])

enum { cMaxFileHandles = 40 };
refalrts::GlobalRef<FILE*> g_file_handles(cMaxFileHandles);

bool file_handle_left(
  const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter& pfile_handle, refalrts::Iter& first, refalrts::Iter& last
) {
  return refalrts::svar_left(pfile_handle, first, last)
    && (
      refalrts::cDataNumber == pfile_handle->tag
      || (
        refalrts::cDataIdentifier == pfile_handle->tag
        && (
          USE_IDENT(stdin) == pfile_handle->ident_info
          || USE_IDENT(stdout) == pfile_handle->ident_info
          || USE_IDENT(stderr) == pfile_handle->ident_info
          || USE_IDENT(stout) == pfile_handle->ident_info
        )
      )
    );
}

FILE *extract_file_handle(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter pfile_handle
) {
  assert(
    refalrts::cDataNumber == pfile_handle->tag
    || refalrts::cDataIdentifier == pfile_handle->tag
  );

  if (refalrts::cDataNumber == pfile_handle->tag) {
    refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

    if (file_no == 0) {
      return 0;
    }

    return g_file_handles.ref(vm, file_no);
  } else if (refalrts::cDataIdentifier == pfile_handle->tag) {
    return
      USE_IDENT(stdin) == pfile_handle->ident_info ? stdin :
      USE_IDENT(stdout) == pfile_handle->ident_info ? stdout :
      USE_IDENT(stderr) == pfile_handle->ident_info ? stderr : stdout;
  } else {
    refalrts_switch_default_violation(pfile_handle->tag);
  }
}

bool release_file_handle(refalrts::VM *vm, refalrts::Iter pfile_handle) {
  if (refalrts::cDataIdentifier == pfile_handle->tag) {
    return true;
  }

  assert(refalrts::cDataNumber == pfile_handle->tag);

  refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

  assert(g_file_handles.ref(vm, file_no) != 0);

  bool successful_closed = EOF != fclose(g_file_handles.ref(vm, file_no));
  g_file_handles.ref(vm, file_no) = 0;
  return successful_closed;
}

bool open_handle(
  refalrts::VM *vm,
  refalrts::RefalNumber file_no, const char *filename, const char *mode
) {
  if (0 != g_file_handles.ref(vm, file_no)) {
    return false;
  }

  char default_name[sizeof("REFAL4294967296.DAT")];
  if ((filename == 0 || strlen(filename) == 0)) {
    sprintf(default_name, "REFAL%d.DAT", file_no);
    filename = default_name;
  }

  return (g_file_handles.ref(vm, file_no) = fopen(filename, mode)) != 0;
}

bool reopen_handle(
  refalrts::VM *vm,
  refalrts::Iter pfile_handle, const char *filename, const char *mode
) {
  assert(refalrts::cDataNumber == pfile_handle->tag);

  refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

  if (g_file_handles.ref(vm, file_no) != 0) {
    if (! release_file_handle(vm, pfile_handle)) {
      return false;
    }
  }

  return open_handle(vm, file_no, filename, mode);
}

}  // unnamed namespace
#line 5808 "Library.cpp"

static refalrts::FnResult func_Autoopen(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 838 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pmode = 0;
  refalrts::Iter pfile_handle = 0;
  if (
    ! refalrts::svar_left(pmode, content_b, content_e)
    || refalrts::cDataChar != pmode->tag
    || ('r' != pmode->char_info && 'w' != pmode->char_info)
    || ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  bool success = true;
  if (refalrts::cDataNumber == pfile_handle->tag) {
    refalrts::RefalNumber file_no = pfile_handle->number_info % cMaxFileHandles;

    if (0 != file_no && 0 == g_file_handles.ref(vm, file_no)) {
      char default_mode[] = { pmode->char_info, '\0' };
      success = open_handle(vm, file_no, 0, default_mode);
    }
  }

  if (! success) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 5848 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Autoopen("Autoopen", 2948557630U, 3778842242U, func_Autoopen);


static refalrts::FnResult func_Getm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 875 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator(vm);

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
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
    refalrts::alloc_char(vm, dummy, static_cast<char>(cur_char));
  }

  if (cur_char == EOF) {
    refalrts::alloc_number(vm, dummy, 0UL);
  }

  refalrts::splice_from_freelist(vm, arg_begin);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 5897 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Getm_Aux("Get-Aux", 2948557630U, 3778842242U, func_Getm_Aux);


static refalrts::FnResult func_gen_Implode_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Implode$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Implode$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Implode$1:1/4 (/7 e.Tail#1/12 )/8 'L'/9 s.SubType#2/10 s.Init#2/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::char_term( 'L', context[9] ) )
      continue;
    // closed e.Tail#1 as range 12
    //DEBUG: s.SubType#2: 10
    //DEBUG: s.Init#2: 11
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SubType#2/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoImplode/4 AsIs: (/7 } Tile{ AsIs: s.Init#2/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#1/12 } Tile{ HalfReuse: >/9 } </14 & __Step-End/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_u_u_Stepm_End]);
    refalrts::update_name(context[4], functions[efunc_DoImplode]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Implode$1:1/4 (/7 e.Tail#1/5 )/8 s.Type#2/9 s.SubType#2/10 s.Init#2/11 >/1
  // closed e.Tail#1 as range 5
  //DEBUG: s.Type#2: 9
  //DEBUG: s.SubType#2: 10
  //DEBUG: s.Init#2: 11
  //DEBUG: e.Tail#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/9 s.SubType#2/10 s.Init#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/4 HalfReuse: s.Init2 #11/7 AsIs: e.Tail#1/5 HalfReuse: </8 } Tile{ HalfReuse: & __Step-End/0 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_number(context[4], 0UL);
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[0], functions[efunc_u_u_Stepm_End]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Implode_S1B1("Implode$1:1", 2948557630U, 3778842242U, func_gen_Implode_S1B1);


static refalrts::FnResult func_Implode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Implode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Implode/4 s.Init#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.Init#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 [*]/9 & Implode$1:1/10 (/11 Tile{ AsIs: e.Tail#1/5 } )/12 {*}/13 </14 & __Step-Start/15 >/16 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: s.Init#1/7 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_closure_head(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_Implode_S1B1]);
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_unwrapped_closure(vm, context[13], context[9]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Type]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Implode/4 e.InvalidExpr#1/2 >/1
  // closed e.InvalidExpr#1 as range 2
  //DEBUG: e.InvalidExpr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Implode/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ AsIs: e.InvalidExpr#1/2 } Tile{ ]] }
  refalrts::reinit_number(context[0], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Implode("Implode", 0U, 0U, func_Implode);


static refalrts::FnResult func_DoImplode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoImplode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoImplode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoImplode/4 (/7 e.new#3/9 )/8 s.new#4/13 e.new#5/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#3 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & DoImplode/4 (/7 e.Scanned#1/14 )/8 '-'/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Scanned#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Scanned#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoImplode/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoImplode/4 (/7 e.Scanned#1/14 )/8 '_'/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Scanned#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Scanned#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoImplode/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoImplode/4 (/7 e.Scanned#1/14 )/8 '$'/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '$', context[13] ) )
        continue;
      // closed e.Scanned#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Scanned#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoImplode/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: '$'/8 HalfReuse: )/13 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '$');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoImplode/4 (/7 e.Scanned#1/14 )/8 s.Next#1/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.Scanned#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Scanned#1: 14
      //DEBUG: e.Tail#1: 16
      //13: s.Next#1
      //14: e.Scanned#1
      //16: e.Tail#1
      //23: s.Next#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoImplode_S4C1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
      refalrts::copy_stvar(vm, context[23], context[13]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </18 & DoImplode$4?1/22 'L'/23 s.SubType#2/24 s.Lettern#2/25 >/19
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
        context[23] = refalrts::char_left( 'L', context[20], context[21] );
        if( ! context[23] )
          continue;
        if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
          continue;
        if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: s.Next#1: 13
        //DEBUG: e.Scanned#1: 14
        //DEBUG: e.Tail#1: 16
        //DEBUG: s.SubType#2: 24
        //DEBUG: s.Lettern#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Next#1/13 {REMOVED TILE} </18 & DoImplode$4?1/22 {REMOVED TILE} s.SubType#2/24 s.Lettern#2/25 >/19 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoImplode/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: s.Lettern2 #25/8 } Tile{ HalfReuse: )/23 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[8], context[25] );
        refalrts::reinit_close_bracket(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[18], context[19]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoImplode/4 (/7 e.Scanned#1/14 )/8 s.Next#1/13 e.Tail#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Scanned#1 as range 14
    // closed e.Tail#1 as range 16
    //DEBUG: s.Next#1: 13
    //DEBUG: e.Scanned#1: 14
    //DEBUG: e.Tail#1: 16
    //13: s.Next#1
    //14: e.Scanned#1
    //16: e.Tail#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoImplode_S5C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[23], context[13]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & DoImplode$5?1/22 'D'/23 s.SubType#2/24 s.Digit#2/25 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::char_left( 'D', context[20], context[21] );
      if( ! context[23] )
        continue;
      if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Scanned#1: 14
      //DEBUG: e.Tail#1: 16
      //DEBUG: s.SubType#2: 24
      //DEBUG: s.Digit#2: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/13 {REMOVED TILE} </18 & DoImplode$5?1/22 {REMOVED TILE} s.SubType#2/24 s.Digit#2/25 >/19 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoImplode/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: s.Digit2 #25/8 } Tile{ HalfReuse: )/23 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[8], context[25] );
      refalrts::reinit_close_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoImplode/4 (/7 e.Scanned#1/5 )/8 e.Other#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.Other#1 as range 2
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Implode_Ext/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Other#1/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Implodeu_Ext]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoImplode("DoImplode", 2948557630U, 3778842242U, func_DoImplode);


static refalrts::FnResult func_Last(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Last/4 s.N#1/5 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: s.N#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/6 </7 & DoLast/8 Tile{ AsIs: s.N#1/5 } (/9 Tile{ AsIs: e.Expr#1/2 } )/10 >/11 </12 & __Step-End/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_DoLast]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Last("Last", 0U, 0U, func_Last);


static refalrts::FnResult func_DoLast(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DoLast/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoLast/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & DoLast/4 0/5 (/8 e.Prefix#1/10 )/9 e.Suffix#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Prefix#1 as range 10
    // closed e.Suffix#1 as range 12
    //DEBUG: e.Prefix#1: 10
    //DEBUG: e.Suffix#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoLast/4 0/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Prefix#1/10 AsIs: )/9 } Tile{ AsIs: e.Suffix#1/12 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoLast/4 s.N#1/5 (/8 )/9 e.Suffix#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Suffix#1 as range 10
    //DEBUG: s.N#1: 5
    //DEBUG: e.Suffix#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoLast/4 s.N#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: )/9 } Tile{ AsIs: e.Suffix#1/10 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoLast/4 s.N#1/5 (/8 e.Prefix#1/6 t.Next#1/10 )/9 e.Suffix#1/2 >/1
  // closed e.Suffix#1 as range 2
  context[11] = refalrts::tvar_right( context[10], context[6], context[7] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 6
  //DEBUG: s.N#1: 5
  //DEBUG: e.Suffix#1: 2
  //DEBUG: t.Next#1: 10
  //DEBUG: e.Prefix#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoLast/4 } </12 & Sub-Digits/13 Tile{ AsIs: s.N#1/5 HalfReuse: 1/8 } >/14 (/15 Tile{ AsIs: e.Prefix#1/6 } Tile{ AsIs: )/9 } Tile{ AsIs: t.Next#1/10 } Tile{ AsIs: e.Suffix#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Subm_Digits]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::reinit_number(context[8], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[9] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoLast("DoLast", 2948557630U, 3778842242U, func_DoLast);


static refalrts::FnResult func_Lenw(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Lenw/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/5 </6 & DoLenw/7 0/8 Tile{ AsIs: e.Expr#1/2 } >/9 </10 & __Step-End/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_DoLenw]);
  refalrts::alloc_number(vm, context[8], 0UL);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Lenw("Lenw", 0U, 0U, func_Lenw);


static refalrts::FnResult func_DoLenw(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DoLenw/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoLenw/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoLenw/4 s.Len#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Len#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoLenw/4 s.Len#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Len1 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoLenw/4 s.Len#1/5 e.Expr#1/2 t.Term#1/6 >/1
  context[7] = refalrts::tvar_right( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: s.Len#1: 5
  //DEBUG: t.Term#1: 6
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoLenw/4 } </8 & Add-Digits/9 Tile{ AsIs: s.Len#1/5 } 1/10 Tile{ AsIs: >/1 } Tile{ AsIs: e.Expr#1/2 } >/11 Tile{ AsIs: t.Term#1/6 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Addm_Digits]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoLenw("DoLenw", 2948557630U, 3778842242U, func_DoLenw);

#line 983 "Library.ref"
namespace {

struct LowerConv {
  bool for_convert(refalrts::Iter item) {
    return refalrts::cDataChar == item->tag;
  }

  void convert(refalrts::Iter item) {
    item->char_info = static_cast<char>(tolower(item->char_info));
  }
};

}  // unnamed namespace
#line 6695 "Library.cpp"

static refalrts::FnResult func_Lower(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1000 "Library.ref"
  return convert(vm, arg_begin, arg_end, LowerConv());
#line 6704 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Lower("Lower", 0U, 0U, func_Lower);


static refalrts::FnResult func_gen_Mod_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Mod$1=1/4 (/7 s.Div#2/9 )/8 s.Mod#2/10 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Div#2: 9
  //DEBUG: s.Mod#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Div#2/9 )/8 s.Mod#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Mod2 #10/0 HalfReuse: </4 HalfReuse: & __Step-End/7 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_svar( context[0], context[10] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_u_u_Stepm_End]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mod_S1A1("Mod$1=1", 2948557630U, 3778842242U, func_gen_Mod_S1A1);


static refalrts::FnResult func_Mod(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Mod/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Mod/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Mod$1=1/10 </11 & __Step-Start/12 >/13 Tile{ AsIs: </0 Reuse: & Divmod-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_Mod_S1A1]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Divmodm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mod/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Mod_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Mod$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7
    //2: e.ArithmArg#1
    //7: e.Second#2
    //10: e.First#2
    //20: e.First#2
    //23: e.Second#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Mod_S2C2]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Divmodm_Normed]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[10], context[11]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::link_brackets( context[19], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & Mod$2?2/18 (/21 e.Div#3/19 )/22 e.Mod#3/16 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Div#3 as range 19
      // closed e.Mod#3 as range 16
      //DEBUG: e.ArithmArg#1: 2
      //DEBUG: e.First#2: 10
      //DEBUG: e.Second#2: 7
      //DEBUG: e.Div#3: 19
      //DEBUG: e.Mod#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Mod/4 e.ArithmArg#1/2 </5 & Mod$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6 {REMOVED TILE} & Mod$2?2/18 (/21 e.Div#3/19 )/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Mod#3/16 } Tile{ AsIs: </14 } Tile{ HalfReuse: & __Step-End/15 AsIs: >/1 ]] }
      refalrts::reinit_name(context[15], functions[efunc_u_u_Stepm_End]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mod("Mod", 0U, 0U, func_Mod);


static refalrts::FnResult func_Mul(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Mul/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Mul/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & __Step-Start/10 >/11 Tile{ AsIs: </0 Reuse: & Mul-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } </12 & __Step-End/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Mulm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mul/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Mul_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Mul$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ArithmArg#1/2 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: </5 Reuse: & Mul-Normed/9 AsIs: (/12 AsIs: e.First#2/10 AsIs: )/13 AsIs: e.Second#2/7 AsIs: >/6 HalfReuse: </1 } Tile{ Reuse: & __Step-End/4 } Tile{ HalfReuse: >/0 } Tile{ ]] }
    refalrts::update_name(context[9], functions[efunc_Mulm_Normed]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[0]);
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mul("Mul", 0U, 0U, func_Mul);

#line 1035 "Library.ref"
void cookie_ns::long_mul(
  refalrts::UInt32& res_high, refalrts::UInt32& res_low,
  refalrts::UInt32 first, refalrts::UInt32 second
) {
  /*
    Double-word multiplication scheme:

    (x,y,z,t) = (F,i)*(S,e)     -- first * second

       S   e        (A,a) = F * S
     ---------      (B,b) = i * S
     |\ b|\ d|      (C,c) = F * e
    i| \ | \ |t     (D,d) = i * e
     |B \|D \|
     ---------      t = d
     |\ a|\ c|      (Z,z) = b + D + c
    F| \ | \ |z     (Y,y) = B + a + C + Z
     |A \|C \|      x = A + Y
     ---------
       x   y        (x,y) = (A, a) + B + C + Z
  */

  using refalrts::UInt32;

  UInt32 F = first >> 16;
  UInt32 i = first & 0xFFFFU;
  UInt32 S = second >> 16;
  UInt32 e = second & 0xFFFFU;

  UInt32 Aa = F * S;
  UInt32 Bb = i * S;
  UInt32 Cc = F * e;
  UInt32 Dd = i * e;

  UInt32 Zz = (Bb & 0xFFFFU) + (Dd >> 16) + (Cc & 0xFFFFU);
  res_low = (Zz << 16) + (Dd & 0xFFFFU);
  res_high = Aa + (Bb >> 16) + (Cc >> 16) + (Zz >> 16);
}
#line 7142 "Library.cpp"

static refalrts::FnResult func_Mulm_Digits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1077 "Library.ref"
  ARITHM_PRELUDE

  refalrts::UInt32 res_high, res_low;
  cookie_ns::long_mul(res_high, res_low, first, second);

  if (res_high > 0) {
    refalrts::reinit_number(arg_begin, res_high);
    refalrts::reinit_number(pFunc, res_low);
    refalrts::splice_to_freelist(vm, pFirst, arg_end);
  } else {
    refalrts::reinit_number(arg_begin, res_low);
    refalrts::splice_to_freelist(vm, pFunc, arg_end);
  }

  return refalrts::cSuccess;
#line 7165 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Mulm_Digits("Mul-Digits", 2948557630U, 3778842242U, func_Mulm_Digits);


static refalrts::FnResult func_Mulm_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Mul-Normed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Mul-Normed/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & Mul-Normed/4 (/7 s.new#4/9 e.new#5/10 )/8 s.new#6/14 e.new#7/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#5 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Mul-Normed/4 (/7 '+'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::char_term( '+', context[9] ) )
        continue;
      // closed e.new#8 as range 15
      // closed e.new#10 as range 17
      do {
        // </0 & Mul-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '+', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Mul-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/14 AsIs: e.Second#1/21 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Mulm_Nat]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Mul-Normed/4 (/7 '+'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::char_term( '-', context[14] ) )
          continue;
        // closed e.First#1 as range 19
        // closed e.Second#1 as range 21
        //DEBUG: e.First#1: 19
        //DEBUG: e.Second#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} '-'/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: </4 HalfReuse: & Mul-Nat/7 HalfReuse: (/9 AsIs: e.First#1/19 AsIs: )/8 } Tile{ AsIs: e.Second#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], '-');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_Mulm_Nat]);
        refalrts::reinit_open_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::link_brackets( context[9], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Mul-Normed/4 (/7 '+'/9 e.First#1/19 )/8 0/14 >/1
      context[19] = context[15];
      context[20] = context[16];
      if( ! refalrts::number_term( 0UL, context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.First#1 as range 19
      //DEBUG: e.First#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Mul-Normed/4 (/7 '+'/9 e.First#1/19 )/8 0/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
      refalrts::reinit_number(context[1], 0UL);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Mul-Normed/4 (/7 '-'/9 e.new#8/15 )/8 s.new#9/14 e.new#10/17 >/1
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    if( ! refalrts::char_term( '-', context[9] ) )
      continue;
    // closed e.new#8 as range 15
    // closed e.new#10 as range 17
    do {
      // </0 & Mul-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '+'/14 e.Second#1/21 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::char_term( '+', context[14] ) )
        continue;
      // closed e.First#1 as range 19
      // closed e.Second#1 as range 21
      //DEBUG: e.First#1: 19
      //DEBUG: e.Second#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '+'/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: </4 HalfReuse: & Mul-Nat/7 HalfReuse: (/9 AsIs: e.First#1/19 AsIs: )/8 } Tile{ AsIs: e.Second#1/21 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_char(context[0], '-');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Mulm_Nat]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[9], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Mul-Normed/4 (/7 '-'/9 e.First#1/19 )/8 '-'/14 e.Second#1/21 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::char_term( '-', context[14] ) )
        continue;
      // closed e.First#1 as range 19
      // closed e.Second#1 as range 21
      //DEBUG: e.First#1: 19
      //DEBUG: e.Second#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '-'/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Mul-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/19 } Tile{ HalfReuse: )/14 AsIs: e.Second#1/21 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Mulm_Nat]);
      refalrts::reinit_close_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Mul-Normed/4 (/7 '-'/9 e.First#1/19 )/8 0/14 >/1
    context[19] = context[15];
    context[20] = context[16];
    if( ! refalrts::number_term( 0UL, context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.First#1 as range 19
    //DEBUG: e.First#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Mul-Normed/4 (/7 '-'/9 e.First#1/19 )/8 0/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mul-Normed/4 (/7 0/9 )/8 e.AnySecond#1/2 >/1
  if( ! refalrts::number_term( 0UL, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnySecond#1 as range 2
  //DEBUG: e.AnySecond#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Mul-Normed/4 (/7 0/9 )/8 e.AnySecond#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mulm_Normed("Mul-Normed", 2948557630U, 3778842242U, func_Mulm_Normed);


static refalrts::FnResult func_Mulm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Mul-Nat/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Mul-Nat/4 (/7 e.new#1/5 )/8 e.new#2/2 s.new#3/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Mul-Nat/4 (/7 e.First#1/10 )/8 s.SecondLast#1/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.First#1 as range 10
    //DEBUG: s.SecondLast#1: 9
    //DEBUG: e.First#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Mul-Nat-Line/4 } Tile{ AsIs: e.First#1/10 } Tile{ AsIs: s.SecondLast#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Mulm_Natm_Line]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mul-Nat/4 (/7 e.First#1/5 )/8 e.Second#1/2 s.SecondLast#1/9 >/1
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 2
  //DEBUG: s.SecondLast#1: 9
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Add-Nat/11 (/12 Tile{ AsIs: </0 AsIs: & Mul-Nat/4 AsIs: (/7 AsIs: e.First#1/5 AsIs: )/8 } Tile{ AsIs: e.Second#1/2 } >/13 0/14 )/15 </16 & Mul-Nat-Line/17 e.First#1/5/18 Tile{ AsIs: s.SecondLast#1/9 AsIs: >/1 } >/20 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Addm_Nat]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Mulm_Natm_Line]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mulm_Nat("Mul-Nat", 2948557630U, 3778842242U, func_Mulm_Nat);


static refalrts::FnResult func_gen_Mulm_Natm_Line_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Mul-Nat-Line$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Mul-Nat-Line$2:1/4 (/7 e.new#1/5 )/8 e.new#2/2 s.new#3/10 s.new#4/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Mul-Nat-Line$2:1/4 (/7 e.First#1/11 )/8 s.Second#1/15 s.MulHigh#2/10 s.MulLow#2/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.First#1 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: s.MulHigh#2: 10
    //DEBUG: s.MulLow#2: 9
    //DEBUG: e.First#1: 11
    //DEBUG: s.Second#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MulLow#2/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add-Nat/4 AsIs: (/7 } </16 & Mul-Nat-Line/17 Tile{ AsIs: e.First#1/11 } Tile{ AsIs: s.Second#1/15 } >/18 Tile{ AsIs: )/8 } Tile{ AsIs: s.MulHigh#2/10 } >/19 Tile{ HalfReuse: s.MulLow2 #9/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Mulm_Natm_Line]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_Addm_Nat]);
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mul-Nat-Line$2:1/4 (/7 e.First#1/5 )/8 s.Second#1/10 s.MulLow#2/9 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 5
  //DEBUG: s.Second#1: 10
  //DEBUG: s.MulLow#2: 9
  //DEBUG: e.First#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MulLow#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Mul-Nat-Line/4 } Tile{ AsIs: e.First#1/5 } Tile{ AsIs: s.Second#1/10 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: s.MulLow2 #9/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Mulm_Natm_Line]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mulm_Natm_Line_S2B1("Mul-Nat-Line$2:1", 2948557630U, 3778842242U, func_gen_Mulm_Natm_Line_S2B1);


static refalrts::FnResult func_Mulm_Natm_Line(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Mul-Nat-Line/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Mul-Nat-Line/4 e.new#1/2 s.new#2/6 s.new#3/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & Mul-Nat-Line/4 s.FirstLast#1/6 s.Second#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FirstLast#1: 6
    //DEBUG: s.Second#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Mul-Digits/4 AsIs: s.FirstLast#1/6 AsIs: s.Second#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Mulm_Digits]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Mul-Nat-Line/4 e.First#1/2 s.FirstLast#1/6 s.Second#1/5 >/1
  // closed e.First#1 as range 2
  //DEBUG: s.FirstLast#1: 6
  //DEBUG: s.Second#1: 5
  //DEBUG: e.First#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Mul-Nat-Line$2:1/7 (/8 Tile{ AsIs: e.First#1/2 } )/9 s.Second#1/5/10 {*}/11 </12 & Mul-Digits/13 Tile{ AsIs: s.FirstLast#1/6 AsIs: s.Second#1/5 AsIs: >/1 } >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Mulm_Natm_Line_S2B1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::copy_stvar(vm, context[10], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[4]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Mulm_Digits]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[6], context[1] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mulm_Natm_Line("Mul-Nat-Line", 2948557630U, 3778842242U, func_Mulm_Natm_Line);


static refalrts::FnResult func_Numb(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Numb/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Numb/4 s.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Numb/4 '-'/7 e.String#1/8 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::char_term( '-', context[7] ) )
        continue;
      // closed e.String#1 as range 8
      //DEBUG: e.String#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 HalfReuse: >/7 } </10 & Neg/11 </12 & Numb-Aux/13 Tile{ AsIs: e.String#1/8 } >/14 >/15 </16 & __Step-End/17 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[10]);
      refalrts::alloc_name(vm, context[11], functions[efunc_Neg]);
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[13], functions[efunc_Numbm_Aux]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_u_u_Stepm_End]);
      refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Numb/4 '+'/7 e.String#1/8 >/1
    context[8] = context[5];
    context[9] = context[6];
    if( ! refalrts::char_term( '+', context[7] ) )
      continue;
    // closed e.String#1 as range 8
    //DEBUG: e.String#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 HalfReuse: >/7 } </10 & Numb-Aux/11 Tile{ AsIs: e.String#1/8 } >/12 </13 & __Step-End/14 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Numbm_Aux]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Stepm_End]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Numb/4 e.String#1/2 >/1
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Start/6 >/7 Tile{ AsIs: </0 Reuse: & Numb-Aux/4 AsIs: e.String#1/2 AsIs: >/1 } </8 & __Step-End/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Numbm_Aux]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numb("Numb", 0U, 0U, func_Numb);


static refalrts::FnResult func_Numbm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Numb-Aux/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoNumb/6 & Numb-Ok/7 & Numb-Fail/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoNumb]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Numbm_Ok]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Numbm_Fail]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numbm_Aux("Numb-Aux", 2948557630U, 3778842242U, func_Numbm_Aux);


static refalrts::FnResult func_DoNumb(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoNumb/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoNumb/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#3 as range 7
  // closed e.new#4 as range 2
  do {
    // </0 & DoNumb/4 s.new#5/5 s.new#6/6 (/9 e.new#7/11 )/10 s.new#8/15 e.new#9/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '0'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '0', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 0/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 0UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '1'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '1', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 1/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 1UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '2'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '2', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 2/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 2UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '3'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '3', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 3/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 3UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '4'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '4', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 4/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 4UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '5'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '5', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 5/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 5UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '6'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '6', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 6/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 6UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '7'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '7', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 7/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 7UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '8'/15 e.Rest#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '8', context[15] ) )
        continue;
      // closed e.Digits#1 as range 16
      // closed e.Rest#1 as range 18
      //DEBUG: s.Ok#1: 5
      //DEBUG: s.Fail#1: 6
      //DEBUG: e.Digits#1: 16
      //DEBUG: e.Rest#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 8/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
      refalrts::reinit_number(context[10], 8UL);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[15] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/16 )/10 '9'/15 e.Rest#1/18 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    if( ! refalrts::char_term( '9', context[15] ) )
      continue;
    // closed e.Digits#1 as range 16
    // closed e.Rest#1 as range 18
    //DEBUG: s.Ok#1: 5
    //DEBUG: s.Fail#1: 6
    //DEBUG: e.Digits#1: 16
    //DEBUG: e.Rest#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb/4 AsIs: s.Ok#1/5 AsIs: s.Fail#1/6 AsIs: (/9 AsIs: e.Digits#1/16 HalfReuse: 9/10 HalfReuse: )/15 AsIs: e.Rest#1/18 AsIs: >/1 ]] }
    refalrts::reinit_number(context[10], 9UL);
    refalrts::reinit_close_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 )/10 e.Rest#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Rest#1 as range 11
    //DEBUG: s.Ok#1: 5
    //DEBUG: s.Fail#1: 6
    //DEBUG: e.Rest#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: s.Fail1 #6/10 AsIs: e.Rest#1/11 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_svar( context[10], context[6] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoNumb/4 s.Ok#1/5 s.Fail#1/6 (/9 e.Digits#1/7 )/10 e.Rest#1/2 >/1
  // closed e.Digits#1 as range 7
  // closed e.Rest#1 as range 2
  //DEBUG: s.Ok#1: 5
  //DEBUG: s.Fail#1: 6
  //DEBUG: e.Digits#1: 7
  //DEBUG: e.Rest#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Ok#1/5 s.Fail#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.Ok1 #5/4 } Tile{ AsIs: (/9 } </11 & Numb-Wrap/12 Tile{ AsIs: e.Digits#1/7 } >/13 Tile{ AsIs: )/10 AsIs: e.Rest#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Numbm_Wrap]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_svar( context[4], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoNumb("DoNumb", 2948557630U, 3778842242U, func_DoNumb);


static refalrts::FnResult func_Numbm_Ok(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Numb-Ok/4 (/7 e.Number#1/5 )/8 e.Rest#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Number#1 as range 5
  // closed e.Rest#1 as range 2
  //DEBUG: e.Number#1: 5
  //DEBUG: e.Rest#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Numb-Ok/4 (/7 {REMOVED TILE} )/8 e.Rest#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Number#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numbm_Ok("Numb-Ok", 2948557630U, 3778842242U, func_Numbm_Ok);


static refalrts::FnResult func_Numbm_Fail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Numb-Fail/4 e.Rest#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rest#1 as range 2
  //DEBUG: e.Rest#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Numb-Fail/4 e.Rest#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numbm_Fail("Numb-Fail", 2948557630U, 3778842242U, func_Numbm_Fail);


static refalrts::FnResult func_Numbm_Wrap(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Numb-Wrap/4 e.Digits#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoNumb-Wrap/6 (/7 Tile{ HalfReuse: 0/0 HalfReuse: )/4 AsIs: e.Digits#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoNumbm_Wrap]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::reinit_number(context[0], 0UL);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numbm_Wrap("Numb-Wrap", 2948557630U, 3778842242U, func_Numbm_Wrap);


static refalrts::FnResult func_DoNumbm_Wrap(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoNumb-Wrap/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoNumb-Wrap/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoNumb-Wrap/4 (/7 e.Result#1/9 )/8 s.NextDigit#1/13 e.Digits#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Result#1 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Digits#1 as range 11
    //DEBUG: e.Result#1: 9
    //DEBUG: s.NextDigit#1: 13
    //DEBUG: e.Digits#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoNumb-Wrap/4 AsIs: (/7 } </14 & Add-Nat/15 (/16 </17 & Mul-Nat-Line/18 Tile{ AsIs: e.Result#1/9 } 10/19 >/20 Tile{ AsIs: )/8 AsIs: s.NextDigit#1/13 } >/21 )/22 Tile{ AsIs: e.Digits#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Addm_Nat]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Mulm_Natm_Line]);
    refalrts::alloc_number(vm, context[19], 10UL);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoNumb-Wrap/4 (/7 e.Result#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 5
  //DEBUG: e.Result#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoNumb-Wrap/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Result#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoNumbm_Wrap("DoNumb-Wrap", 2948557630U, 3778842242U, func_DoNumbm_Wrap);


static refalrts::FnResult func_Open(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1190 "Library.ref"
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

  if (refalrts::char_term('r', pmode) || refalrts::char_term('R', pmode)) {
    mode = "r";
  } else if (
    refalrts::char_term('w', pmode) || refalrts::char_term('W', pmode)
  ) {
    mode = "w";
  } else if (
    refalrts::char_term('a', pmode) || refalrts::char_term('A', pmode)
  ) {
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
  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || refalrts::cDataNumber != pfile_handle->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  char filename[FILENAME_MAX + 1] = { '\0' };
  refalrts::read_chars(filename, FILENAME_MAX, content_b, content_e);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  if (! reopen_handle(vm, pfile_handle, filename, mode.c_str())) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 8508 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Open("Open", 0U, 0U, func_Open);

#line 1259 "Library.ref"
namespace {

struct OrdConv {
  bool for_convert(refalrts::Iter item) {
    return refalrts::cDataChar == item->tag;
  }

  void convert(refalrts::Iter item) {
    item->tag = refalrts::cDataNumber;
    item->number_info = static_cast<unsigned char>(item->char_info);
  }
};

}  // unnamed namespace
#line 8528 "Library.cpp"

static refalrts::FnResult func_Ord(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1277 "Library.ref"
  return convert(vm, arg_begin, arg_end, OrdConv());
#line 8537 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Ord("Ord", 0U, 0U, func_Ord);


static refalrts::FnResult func_Print(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Print/4 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyExpression#1 as range 2
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/5 </6 & Put-Aux/7 # stdout/8 Tile{ AsIs: e.AnyExpression#1/2 } >/9 </10 & __Step-End/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Putm_Aux]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_stdout]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Print("Print", 0U, 0U, func_Print);


static refalrts::FnResult func_Prout(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Prout/4 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyExpression#1 as range 2
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/5 </6 & Putout-Aux/7 # stdout/8 Tile{ AsIs: e.AnyExpression#1/2 } >/9 </10 & __Step-End/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Putoutm_Aux]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_stdout]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Prout("Prout", 0U, 0U, func_Prout);


static refalrts::FnResult func_Proud(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.AnyExpression#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Proud("Proud", 0U, 0U, func_Proud);


static refalrts::FnResult func_Trout(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.AnyExpression#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Trout("Trout", 0U, 0U, func_Trout);


static refalrts::FnResult func_Put(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Put/4 s.FileNo#1/5 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnyExpression#1 as range 2
  //DEBUG: s.FileNo#1: 5
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/6 </7 & Autoopen/8 'w'/9 Tile{ AsIs: s.FileNo#1/5 } >/10 </11 & Put-Aux/12 </13 & ZeroHandle/14 s.FileNo#1/5/15 # stderr/16 >/17 Tile{ AsIs: e.AnyExpression#1/2 } >/18 </19 & __Step-End/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Autoopen]);
  refalrts::alloc_char(vm, context[9], 'w');
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Putm_Aux]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ZeroHandle]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_stderr]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Put("Put", 0U, 0U, func_Put);

#line 1318 "Library.ref"
namespace cookie_ns {

enum {
  cFlags_ReturnHandle   = 1 << 3,
  cFlags_Transparent    = 1 << 5,
  cFlags_NoEOL          = 1 << 8,
};

extern refalrts::FnResult fwrite_line(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
);

}  // namespace cookie_ns
#line 8778 "Library.cpp"

static refalrts::FnResult func_Putm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1336 "Library.ref"
  return cookie_ns::fwrite_line(
    vm, identifiers, arg_begin, arg_end, cookie_ns::cFlags_Transparent
  );
#line 8789 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Putm_Aux("Put-Aux", 2948557630U, 3778842242U, func_Putm_Aux);

#line 1343 "Library.ref"
refalrts::FnResult cookie_ns::fwrite_line(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end, unsigned flags
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (! file_handle_left(identifiers, pfile_handle, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
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
        printf_res = fprintf(
          handle, "%s ", refalrts::function_name(p->function_info)->name
        );
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

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
}
#line 8903 "Library.cpp"

static refalrts::FnResult func_Putout(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Putout/4 s.FileNo#1/5 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnyExpression#1 as range 2
  //DEBUG: s.FileNo#1: 5
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/6 </7 & Autoopen/8 'w'/9 Tile{ AsIs: s.FileNo#1/5 } >/10 </11 & Putout-Aux/12 </13 & ZeroHandle/14 s.FileNo#1/5/15 # stderr/16 >/17 Tile{ AsIs: e.AnyExpression#1/2 } >/18 </19 & __Step-End/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Autoopen]);
  refalrts::alloc_char(vm, context[9], 'w');
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Putoutm_Aux]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ZeroHandle]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_stderr]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Putout("Putout", 0U, 0U, func_Putout);


static refalrts::FnResult func_Putoutm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1467 "Library.ref"
  return cookie_ns::fwrite_line(vm, identifiers, arg_begin, arg_end, 0);
#line 8977 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Putoutm_Aux("Putout-Aux", 2948557630U, 3778842242U, func_Putoutm_Aux);


static refalrts::FnResult func_gen_Rp_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Rp:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Rp:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & Rp:1/4 (/7 e.Key#1/13 )/8 (/11 e.NewValue#1/15 )/12 e.Values-B#2/19 (/25 e.Key#1/27 '='/29 e.OldValue#2/23 )/26 e.Values-E#2/21 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Key#1 as range 13
    // closed e.NewValue#1 as range 15
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[17];
      context[22] = context[18];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[13], context[14], context[23], context[24] ) )
        continue;
      context[29] = refalrts::char_left( '=', context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.OldValue#2 as range 23
      // closed e.Values-E#2 as range 21
      //DEBUG: e.Key#1: 13
      //DEBUG: e.NewValue#1: 15
      //DEBUG: e.Values-B#2: 19
      //DEBUG: e.OldValue#2: 23
      //DEBUG: e.Values-E#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Key#1/13 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OldValue#2/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Buried/12 AsIs: e.Values-B#2/19 AsIs: (/25 AsIs: e.Key#1/27 AsIs: '='/29 } Tile{ AsIs: e.NewValue#1/15 } Tile{ AsIs: )/26 AsIs: e.Values-E#2/21 AsIs: >/1 } Tile{ HalfReuse: </11 } Tile{ Reuse: & __Step-End/4 HalfReuse: >/7 } Tile{ ]] }
      refalrts::reinit_name(context[12], functions[efunc_Buried]);
      refalrts::reinit_open_call(context[11]);
      refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[7] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[26], context[1] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[12], context[29] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Rp:1/4 (/7 e.Key#1/5 )/8 (/11 e.NewValue#1/9 )/12 e.Values#2/2 >/1
  // closed e.Key#1 as range 5
  // closed e.NewValue#1 as range 9
  // closed e.Values#2 as range 2
  //DEBUG: e.Key#1: 5
  //DEBUG: e.NewValue#1: 9
  //DEBUG: e.Values#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Buried/4 AsIs: (/7 AsIs: e.Key#1/5 HalfReuse: '='/8 } Tile{ AsIs: e.NewValue#1/9 } Tile{ AsIs: )/12 AsIs: e.Values#2/2 AsIs: >/1 } Tile{ HalfReuse: </11 } & __Step-End/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Buried]);
  refalrts::reinit_char(context[8], '=');
  refalrts::reinit_open_call(context[11]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Rp_B1("Rp:1", 2948557630U, 3778842242U, func_gen_Rp_B1);


static refalrts::FnResult func_Rp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Rp/4 e.Key#1/5 '='/9 e.NewValue#1/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::char_left( '=', context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.NewValue#1 as range 7
    //DEBUG: e.Key#1: 5
    //DEBUG: e.NewValue#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Rp:1/10 (/11 Tile{ AsIs: e.Key#1/5 } Tile{ HalfReuse: )/9 } (/12 Tile{ AsIs: e.NewValue#1/7 } )/13 {*}/14 </15 & __Step-Start/16 >/17 </18 & Buried/19 >/20 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_Rp_B1]);
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Buried]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[11], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[14] );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Rp("Rp", 0U, 0U, func_Rp);

#line 1493 "Library.ref"
namespace cookie_ns {

extern unsigned long raw_step(refalrts::VM *vm);
refalrts::GlobalRef<unsigned long> g_correction;

}  // namespace cookie_ns
#line 9188 "Library.cpp"

static refalrts::FnResult func_Step(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1503 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::Iter pfunc =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber step =
    static_cast<refalrts::RefalNumber>(
      cookie_ns::raw_step(vm) - cookie_ns::g_correction.ref(vm)
    );

  refalrts::reinit_number(arg_begin, step);
  refalrts::splice_to_freelist(vm, pfunc, arg_end);

  return refalrts::cSuccess;
#line 9213 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Step("Step", 0U, 0U, func_Step);

#line 1524 "Library.ref"
unsigned long cookie_ns::raw_step(refalrts::VM *vm) {
  double perfomance_counters[
    refalrts::cPerformanceCounter_COUNTERS_NUMBER
  ];

  refalrts::read_performance_counters(vm, perfomance_counters);
  return static_cast<unsigned long>(
    perfomance_counters[refalrts::cPerformanceCounter_TotalSteps]
  );
}

namespace cookie_ns {

refalrts::GlobalRef<unsigned long> g_start_step;

}  // namespace cookie_ns
#line 9235 "Library.cpp"

static refalrts::FnResult func_u_u_Stepm_Start(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1548 "Library.ref"
  if (0 != cookie_ns::g_start_step.ref(vm)) {
    return refalrts::cRecognitionImpossible;
  }
  cookie_ns::g_start_step.ref(vm) = cookie_ns::raw_step(vm);

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 9250 "Library.cpp"
}

static refalrts::NativeReference nat_ref_u_u_Stepm_Start("__Step-Start", 0U, 0U, func_u_u_Stepm_Start);


static refalrts::FnResult func_u_u_Stepm_End(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1560 "Library.ref"
  if (0 == cookie_ns::g_start_step.ref(vm)) {
    return refalrts::cRecognitionImpossible;
  }
  cookie_ns::g_correction.ref(vm) +=
    (cookie_ns::raw_step(vm) - cookie_ns::g_start_step.ref(vm)) + 1;
  cookie_ns::g_start_step.ref(vm) = 0;

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 9271 "Library.cpp"
}

static refalrts::NativeReference nat_ref_u_u_Stepm_End("__Step-End", 0U, 0U, func_u_u_Stepm_End);


static refalrts::FnResult func_Sub(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Sub/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Sub/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & __Step-Start/10 >/11 Tile{ AsIs: </0 Reuse: & Sub-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 } </12 & __Step-End/13 >/14 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_Start]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_u_u_Stepm_End]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Subm_Digits]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sub/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //13: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Sub_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Sub$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.ArithmArg#1/2 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: </5 Reuse: & Sub-Normed/9 AsIs: (/12 AsIs: e.First#2/10 AsIs: )/13 AsIs: e.Second#2/7 AsIs: >/6 HalfReuse: </1 } Tile{ Reuse: & __Step-End/4 } Tile{ HalfReuse: >/0 } Tile{ ]] }
    refalrts::update_name(context[9], functions[efunc_Subm_Normed]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[0]);
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Sub("Sub", 0U, 0U, func_Sub);


static refalrts::FnResult func_Subm_Digits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1587 "Library.ref"
  ARITHM_PRELUDE

  if (first >= second) {
    refalrts::reinit_number(arg_begin, first - second);
    refalrts::splice_to_freelist(vm, pFunc, arg_end);
  } else {
    refalrts::reinit_char(arg_begin, '-');
    refalrts::reinit_number(pFunc, second - first);
    refalrts::splice_to_freelist(vm, pFirst, arg_end);
  }

  return refalrts::cSuccess;
#line 9439 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Subm_Digits("Sub-Digits", 2948557630U, 3778842242U, func_Subm_Digits);


static refalrts::FnResult func_Subm_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Sub-Normed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sub-Normed/4 (/7 s.new#1/9 e.new#2/5 )/8 s.new#3/10 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Sub-Normed/4 (/7 '+'/9 e.new#5/11 )/8 s.new#6/10 e.new#7/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::char_term( '+', context[9] ) )
      continue;
    // closed e.new#5 as range 11
    // closed e.new#7 as range 13
    do {
      // </0 & Sub-Normed/4 (/7 '+'/9 e.First#1/15 )/8 '+'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '+', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/15 } Tile{ HalfReuse: )/10 AsIs: e.Second#1/17 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Subm_Nat]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Sub-Normed/4 (/7 '+'/9 e.First#1/15 )/8 '-'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '-', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/15 } Tile{ HalfReuse: )/10 AsIs: e.Second#1/17 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Addm_Nat]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Sub-Normed/4 (/7 '+'/9 e.First#1/15 )/8 0/10 >/1
    context[15] = context[11];
    context[16] = context[12];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.First#1 as range 15
    //DEBUG: e.First#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Sub-Normed/4 (/7 '+'/9 {REMOVED TILE} )/8 0/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.First#1/15 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Sub-Normed/4 (/7 '-'/9 e.new#5/11 )/8 s.new#6/10 e.new#7/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::char_term( '-', context[9] ) )
      continue;
    // closed e.new#5 as range 11
    // closed e.new#7 as range 13
    do {
      // </0 & Sub-Normed/4 (/7 '-'/9 e.First#1/15 )/8 '+'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '+', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '+'/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: </4 HalfReuse: & Add-Nat/7 HalfReuse: (/9 AsIs: e.First#1/15 AsIs: )/8 } Tile{ AsIs: e.Second#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_char(context[0], '-');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Addm_Nat]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[9], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Sub-Normed/4 (/7 '-'/9 e.First#1/15 )/8 '-'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '-', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Neg/4 HalfReuse: </7 HalfReuse: & Sub-Nat/9 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.First#1/15 } Tile{ HalfReuse: )/10 AsIs: e.Second#1/17 AsIs: >/1 } >/19 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::update_name(context[4], functions[efunc_Neg]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_Subm_Nat]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[8], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Sub-Normed/4 (/7 '-'/9 e.First#1/15 )/8 0/10 >/1
    context[15] = context[11];
    context[16] = context[12];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.First#1 as range 15
    //DEBUG: e.First#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Sub-Normed/4 (/7 '-'/9 {REMOVED TILE} )/8 0/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '-'/0 } Tile{ AsIs: e.First#1/15 } Tile{ ]] }
    refalrts::reinit_char(context[0], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sub-Normed/4 (/7 0/9 )/8 s.new#5/10 e.new#6/2 >/1
  if( ! refalrts::number_term( 0UL, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & Sub-Normed/4 (/7 0/9 )/8 '+'/10 e.Second#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::char_term( '+', context[10] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Sub-Normed/4 (/7 0/9 )/8 '+'/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '-'/0 } Tile{ AsIs: e.Second#1/11 } Tile{ ]] }
    refalrts::reinit_char(context[0], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Sub-Normed/4 (/7 0/9 )/8 '-'/10 e.Second#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::char_term( '-', context[10] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Sub-Normed/4 (/7 0/9 )/8 '-'/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Second#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sub-Normed/4 (/7 0/9 )/8 0/10 >/1
  if( ! refalrts::number_term( 0UL, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Sub-Normed/4 (/7 0/9 )/8 0/10 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Subm_Normed("Sub-Normed", 2948557630U, 3778842242U, func_Subm_Normed);


static refalrts::FnResult func_Neg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Neg/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Neg/4 s.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Neg/4 0/7 >/1
      if( ! refalrts::number_term( 0UL, context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Neg/4 0/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
      refalrts::reinit_number(context[1], 0UL);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Neg/4 '-'/7 e.Digits#1/8 >/1
    context[8] = context[5];
    context[9] = context[6];
    if( ! refalrts::char_term( '-', context[7] ) )
      continue;
    // closed e.Digits#1 as range 8
    //DEBUG: e.Digits#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Neg/4 '-'/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Digits#1/8 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Neg/4 e.Digits#1/2 >/1
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Neg/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '-'/0 } Tile{ AsIs: e.Digits#1/2 } Tile{ ]] }
  refalrts::reinit_char(context[0], '-');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Neg("Neg", 2948557630U, 3778842242U, func_Neg);


static refalrts::FnResult func_gen_Subm_Nat_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Sub-Nat:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sub-Nat:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Sub-Nat:1/4 (/7 e.First#1/14 )/8 (/11 e.Second#1/16 )/12 '+'/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::char_term( '+', context[13] ) )
      continue;
    // closed e.First#1 as range 14
    // closed e.Second#1 as range 16
    //DEBUG: e.First#1: 14
    //DEBUG: e.Second#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 '+'/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub-Nat-Nat/4 AsIs: (/7 AsIs: e.First#1/14 AsIs: )/8 } Tile{ AsIs: e.Second#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Subm_Natm_Nat]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Sub-Nat:1/4 (/7 e.First#1/14 )/8 (/11 e.Second#1/16 )/12 '-'/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::char_term( '-', context[13] ) )
      continue;
    // closed e.First#1 as range 14
    // closed e.Second#1 as range 16
    //DEBUG: e.First#1: 14
    //DEBUG: e.Second#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} '-'/13 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '-'/0 HalfReuse: </4 } Tile{ HalfReuse: & Sub-Nat-Nat/8 AsIs: (/11 AsIs: e.Second#1/16 AsIs: )/12 } Tile{ AsIs: e.First#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_char(context[0], '-');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[8], functions[efunc_Subm_Natm_Nat]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sub-Nat:1/4 (/7 e.First#1/5 )/8 (/11 e.Second#1/9 )/12 '0'/13 >/1
  if( ! refalrts::char_term( '0', context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 9
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Sub-Nat:1/4 (/7 e.First#1/5 )/8 (/11 e.Second#1/9 )/12 '0'/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Subm_Nat_B1("Sub-Nat:1", 2948557630U, 3778842242U, func_gen_Subm_Nat_B1);


static refalrts::FnResult func_Subm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Sub-Nat/4 (/7 e.First#1/5 )/8 e.Second#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 2
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 [*]/10 & Sub-Nat:1/11 (/12 e.First#1/5/13 )/15 (/16 e.Second#1/2/17 )/19 {*}/20 Tile{ AsIs: </0 Reuse: & Compare-Nat/4 AsIs: (/7 AsIs: e.First#1/5 AsIs: )/8 AsIs: e.Second#1/2 AsIs: >/1 } >/21 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Subm_Nat_B1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[10]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Comparem_Nat]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Subm_Nat("Sub-Nat", 2948557630U, 3778842242U, func_Subm_Nat);


static refalrts::FnResult func_Subm_Natm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Sub-Nat-Nat/4 (/7 e.First#1/5 )/8 e.Second#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 2
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & LeadingZeros/10 Tile{ AsIs: </0 Reuse: & DoSub-Nat-Nat/4 AsIs: (/7 AsIs: e.First#1/5 AsIs: )/8 AsIs: e.Second#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_LeadingZeros]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_DoSubm_Natm_Nat]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Subm_Natm_Nat("Sub-Nat-Nat", 2948557630U, 3778842242U, func_Subm_Natm_Nat);


static refalrts::FnResult func_gen_DoSubm_Natm_Nat_S1B2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoSub-Nat-Nat$1:2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoSub-Nat-Nat$1:2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 s.new#4/13 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoSub-Nat-Nat$1:2/4 (/7 e.First#1/14 )/8 (/11 e.Second#1/16 )/12 s.LastDigit#2/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.First#1 as range 14
    // closed e.Second#1 as range 16
    //DEBUG: s.LastDigit#2: 13
    //DEBUG: e.First#1: 14
    //DEBUG: e.Second#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} s.LastDigit#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoSub-Nat-Nat/4 AsIs: (/7 AsIs: e.First#1/14 AsIs: )/8 } Tile{ AsIs: e.Second#1/16 } Tile{ HalfReuse: >/12 } Tile{ HalfReuse: s.LastDigit2 #13/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoSubm_Natm_Nat]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_svar( context[1], context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoSub-Nat-Nat$1:2/4 (/7 e.First#1/5 )/8 (/11 e.Second#1/9 )/12 '*'/14 s.LastDigit#2/13 >/1
  context[14] = refalrts::char_left( '*', context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 9
  //DEBUG: s.LastDigit#2: 13
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LastDigit#2/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & DoSub-Nat-Nat/16 (/17 Tile{ AsIs: </0 Reuse: & Sub-Nat-Nat/4 AsIs: (/7 AsIs: e.First#1/5 AsIs: )/8 HalfReuse: 1/11 } Tile{ HalfReuse: >/14 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Second#1/9 } >/18 Tile{ HalfReuse: s.LastDigit2 #13/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_DoSubm_Natm_Nat]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_Subm_Natm_Nat]);
  refalrts::reinit_number(context[11], 1UL);
  refalrts::reinit_close_call(context[14]);
  refalrts::reinit_svar( context[1], context[13] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[17], context[12] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoSubm_Natm_Nat_S1B2("DoSub-Nat-Nat$1:2", 2948557630U, 3778842242U, func_gen_DoSubm_Natm_Nat_S1B2);


static refalrts::FnResult func_gen_DoSubm_Natm_Nat_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1639 "Library.ref"
        ARITHM_PRELUDE

        refalrts::RefalNumber diff = first - second;

        if (diff <= first) {
          pFirst->number_info = diff;
          refalrts::splice_to_freelist(vm, arg_begin, pFunc);
          refalrts::splice_to_freelist(vm, pSecond, arg_end);
        } else {
          refalrts::reinit_char(pFirst, '*');
          pSecond->number_info = diff;
          refalrts::splice_to_freelist(vm, arg_begin, pFunc);
          refalrts::splice_to_freelist(vm, arg_end, arg_end);
        }

        return refalrts::cSuccess;
#line 10185 "Library.cpp"
}

static refalrts::NativeReference nat_ref_gen_DoSubm_Natm_Nat_S1B1("DoSub-Nat-Nat$1:1", 2948557630U, 3778842242U, func_gen_DoSubm_Natm_Nat_S1B1);


static refalrts::FnResult func_DoSubm_Natm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoSub-Nat-Nat/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoSub-Nat-Nat/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoSub-Nat-Nat/4 (/7 e.First#1/9 s.FirstLast#1/13 )/8 e.Second#1/11 s.SecondLast#1/14 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_right( context[13], context[9], context[10] ) )
      continue;
    // closed e.First#1 as range 9
    if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: s.FirstLast#1: 13
    //DEBUG: e.First#1: 9
    //DEBUG: s.SecondLast#1: 14
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoSub-Nat-Nat$1:2/7 } (/15 Tile{ AsIs: e.First#1/9 } )/16 (/17 Tile{ AsIs: e.Second#1/11 } Tile{ AsIs: )/8 } {*}/18 </19 & DoSub-Nat-Nat$1:1/20 Tile{ AsIs: s.FirstLast#1/13 } Tile{ AsIs: s.SecondLast#1/14 AsIs: >/1 } >/21 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[4]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoSubm_Natm_Nat_S1B1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_DoSubm_Natm_Nat_S1B2]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoSub-Nat-Nat/4 (/7 e.First#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 5
  //DEBUG: e.First#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoSub-Nat-Nat/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.First#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoSubm_Natm_Nat("DoSub-Nat-Nat", 2948557630U, 3778842242U, func_DoSubm_Natm_Nat);


static refalrts::FnResult func_LeadingZeros(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LeadingZeros/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & LeadingZeros/4 0/7 e.new#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[7] )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & LeadingZeros/4 0/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & LeadingZeros/4 0/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
      refalrts::reinit_number(context[1], 0UL);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & LeadingZeros/4 0/7 e.Digits#1/8 >/1
    context[8] = context[5];
    context[9] = context[6];
    // closed e.Digits#1 as range 8
    //DEBUG: e.Digits#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LeadingZeros/7 AsIs: e.Digits#1/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_LeadingZeros]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LeadingZeros/4 e.Digits#1/2 >/1
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LeadingZeros/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Digits#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LeadingZeros("LeadingZeros", 2948557630U, 3778842242U, func_LeadingZeros);


static refalrts::FnResult func_gen_Symb_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Symb:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Symb:1/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Symb:1/4 (/7 e.new#4/11 )/8 s.new#5/9 0/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Symb:1/4 (/7 e.NormedNumber#2/13 )/8 0/9 0/10 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::number_term( 0UL, context[9] ) )
        continue;
      // closed e.NormedNumber#2 as range 13
      //DEBUG: e.NormedNumber#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Symb:1/4 (/7 e.NormedNumber#2/13 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/8 HalfReuse: </9 HalfReuse: & __Step-End/10 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[10], functions[efunc_u_u_Stepm_End]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Symb:1/4 (/7 e.NormedNumber#2/13 )/8 s.Sign#3/9 0/10 >/1
    context[13] = context[11];
    context[14] = context[12];
    // closed e.NormedNumber#2 as range 13
    //DEBUG: s.Sign#3: 9
    //DEBUG: e.NormedNumber#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.NormedNumber#2/13 )/8 s.Sign#3/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Sign3 #9/0 HalfReuse: '0'/4 HalfReuse: </7 } Tile{ HalfReuse: & __Step-End/10 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[0], context[9] );
    refalrts::reinit_char(context[4], '0');
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[10], functions[efunc_u_u_Stepm_End]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Symb:1/4 (/7 e.NormedNumber#2/11 )/8 s.Sign#3/9 s.Sign#3/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::repeated_stvar_term( vm, context[10], context[9] ) )
      continue;
    // closed e.NormedNumber#2 as range 11
    //DEBUG: s.Sign#3: 9
    //DEBUG: e.NormedNumber#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Sign#3/9 s.Sign#3/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Sign3 #10/0 HalfReuse: </4 HalfReuse: & Symb-Nat/7 AsIs: e.NormedNumber#2/11 HalfReuse: >/8 } </13 & __Step-End/14 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_svar( context[0], context[10] );
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Symbm_Nat]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Symb:1/4 (/7 e.NormedNumber#2/5 )/8 s.Digit#3/9 '+'/10 >/1
  if( ! refalrts::char_term( '+', context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NormedNumber#2 as range 5
  //DEBUG: s.Digit#3: 9
  //DEBUG: e.NormedNumber#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Digit#3/9 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb-Nat/4 } Tile{ AsIs: e.NormedNumber#2/5 } Tile{ HalfReuse: >/8 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & __Step-End/10 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Symbm_Nat]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[10], functions[efunc_u_u_Stepm_End]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Symb_B1("Symb:1", 2948557630U, 3778842242U, func_gen_Symb_B1);


static refalrts::FnResult func_gen_Symb_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Symb=1/4 s.First#1/5 s.NormedSign#2/6 e.NormedNumber#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NormedNumber#2 as range 2
  //DEBUG: s.First#1: 5
  //DEBUG: s.NormedSign#2: 6
  //DEBUG: e.NormedNumber#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & Symb:1/9 (/10 Tile{ AsIs: e.NormedNumber#2/2 } Tile{ HalfReuse: )/0 HalfReuse: {*}/4 AsIs: s.First#1/5 AsIs: s.NormedSign#2/6 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Symb_B1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_unwrapped_closure(context[4], context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[10], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Symb_A1("Symb=1", 2948557630U, 3778842242U, func_gen_Symb_A1);


static refalrts::FnResult func_Symb(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Symb/4 s.First#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: s.First#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 [*]/7 & Symb=1/8 s.First#1/5/9 {*}/10 </11 & __Step-Start/12 >/13 Tile{ AsIs: </0 Reuse: & NormNumber/4 AsIs: s.First#1/5 AsIs: e.Tail#1/2 AsIs: >/1 } >/14 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Symb_A1]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[7]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_NormNumber]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Symb("Symb", 0U, 0U, func_Symb);


static refalrts::FnResult func_gen_Symbm_Nat_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Symb-Nat$2=2/4 (/7 e.Div#2/5 )/8 (/11 e.Zeros#3/9 )/12 e.StrDigits#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Div#2 as range 5
  // closed e.Zeros#3 as range 9
  // closed e.StrDigits#3 as range 2
  //DEBUG: e.Div#2: 5
  //DEBUG: e.Zeros#3: 9
  //DEBUG: e.StrDigits#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 (/11 e.Zeros#3/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb-Nat/4 } Tile{ AsIs: e.Div#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.StrDigits#3/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Symbm_Nat]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Symbm_Nat_S2A2("Symb-Nat$2=2", 2948557630U, 3778842242U, func_gen_Symbm_Nat_S2A2);


static refalrts::FnResult func_gen_Symbm_Nat_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Symb-Nat$2=1/4 (/7 e.Div#2/5 )/8 s.Mod#2/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Div#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Div#2: 5
  //DEBUG: s.Mod#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: [*]/0 Reuse: & Symb-Nat$2=2/4 AsIs: (/7 AsIs: e.Div#2/5 AsIs: )/8 } {*}/11 </12 & DoLast/13 9/14 (/15"000000000"/16 </18 & StrFromInt/19 Tile{ AsIs: s.Mod#2/9 AsIs: >/1 } )/20 >/21 >/22 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DoLast]);
  refalrts::alloc_number(vm, context[14], 9UL);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], "000000000", 9);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_StrFromInt]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Symbm_Nat_S2A2]);
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Symbm_Nat_S2A1("Symb-Nat$2=1", 2948557630U, 3778842242U, func_gen_Symbm_Nat_S2A1);


static refalrts::FnResult func_Symbm_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Symb-Nat/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Symb-Nat/4 s.Number#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Number#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StrFromInt/4 AsIs: s.Number#1/7 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_StrFromInt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Symb-Nat/4 e.Number#1/2 >/1
  // closed e.Number#1 as range 2
  //DEBUG: e.Number#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb-Nat$2=1/4 } </5 & Divmod-Nat/6 (/7 Tile{ AsIs: e.Number#1/2 } )/8 1000000000/9 (/10 )/11 (/12 )/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Divmodm_Nat]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_number(vm, context[9], 1000000000UL);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Symbm_Nat_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Symbm_Nat("Symb-Nat", 2948557630U, 3778842242U, func_Symbm_Nat);


static refalrts::FnResult func_Time(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1706 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator(vm);

  time_t timer;
  time(&timer);
  char *str_time = ctime(&timer);

  char *newline = strchr(str_time, '\n');
  if (newline) {
    *newline = '\0';
  }

  refalrts::alloc_string(vm, content_b, content_e, str_time);
  refalrts::splice_evar(arg_begin, content_b, content_e);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 10847 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Time("Time", 0U, 0U, func_Time);


static refalrts::FnResult func_Type(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1759 "Library.ref"
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
  refalrts::splice_to_freelist(vm, arg_end, arg_end);

  return refalrts::cSuccess;
#line 10951 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Type("Type", 0U, 0U, func_Type);

#line 1859 "Library.ref"
namespace {

struct UpperConv {
  bool for_convert(refalrts::Iter item) {
    return refalrts::cDataChar == item->tag;
  }

  void convert(refalrts::Iter item) {
    item->char_info = static_cast<char>(toupper(item->char_info));
  }
};

}  // unnamed namespace
#line 10970 "Library.cpp"

static refalrts::FnResult func_Upper(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 1876 "Library.ref"
  return convert(vm, arg_begin, arg_end, UpperConv());
#line 10979 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Upper("Upper", 0U, 0U, func_Upper);


static refalrts::FnResult func_Sysfun(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Sysfun/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sysfun/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Sysfun/4 1/5 e.FileName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    // closed e.FileName#1 as range 6
    //DEBUG: e.FileName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 HalfReuse: >/5 } </8 & Sysfun-Xxin/9 Tile{ AsIs: e.FileName#1/6 } >/10 </11 & __Step-End/12 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Sysfunm_Xxin]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_u_u_Stepm_End]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
    refalrts::reinit_close_call(context[5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sysfun/4 2/5 e.FileName#1/2 (/8 s.Width#1/10 e.ObjectExpression#1/6 )/9 >/1
  if( ! refalrts::number_term( 2UL, context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.FileName#1 as range 2
  if( ! refalrts::svar_left( context[10], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ObjectExpression#1 as range 6
  //DEBUG: e.FileName#1: 2
  //DEBUG: s.Width#1: 10
  //DEBUG: e.ObjectExpression#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & __Step-Start/12 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & Sysfun-Xxout/5 AsIs: e.FileName#1/2 AsIs: (/8 AsIs: s.Width#1/10 AsIs: e.ObjectExpression#1/6 AsIs: )/9 AsIs: >/1 } </13 & __Step-End/14 >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_close_call(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_Sysfunm_Xxout]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sysfun("Sysfun", 0U, 0U, func_Sysfun);


static refalrts::FnResult func_gen_Sysfunm_Xxin_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Sysfun-Xxin:1$1=1/4 s.FileNo#3/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileNo#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Xxin-Scan/4 AsIs: s.FileNo#3/5 HalfReuse: # General/1 } (/6 '^'/7 )/8 </9 & Type/10 </11 & Get-Aux/12 s.FileNo#3/5/13 >/14 >/15 >/16 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_char(vm, context[7], '^');
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Type]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Getm_Aux]);
  refalrts::copy_stvar(vm, context[13], context[5]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Xxinm_Scan]);
  refalrts::reinit_ident(context[1], identifiers[ident_General]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Sysfunm_Xxin_B1S1A1("Sysfun-Xxin:1$1=1", 2948557630U, 3778842242U, func_gen_Sysfunm_Xxin_B1S1A1);


static refalrts::FnResult func_gen_Sysfunm_Xxin_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Sysfun-Xxin:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sysfun-Xxin:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Sysfun-Xxin:1/4 (/7 e.FileName#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.FileName#1 as range 10
    //DEBUG: e.FileName#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </1 } & Sysfun-Xxin:1$1=1/12 Tile{ AsIs: </0 Reuse: & FOpen/4 HalfReuse: 'r'/7 AsIs: e.FileName#1/10 HalfReuse: >/8 HalfReuse: >/9 } Tile{ ]] }
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Sysfunm_Xxin_B1S1A1]);
    refalrts::reinit_open_call(context[1]);
    refalrts::update_name(context[4], functions[efunc_FOpen]);
    refalrts::reinit_char(context[7], 'r');
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sysfun-Xxin:1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Sysfun-Xxin:1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Sysfunm_Xxin_B1("Sysfun-Xxin:1", 2948557630U, 3778842242U, func_gen_Sysfunm_Xxin_B1);


static refalrts::FnResult func_Sysfunm_Xxin(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Sysfun-Xxin/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 [*]/6 & Sysfun-Xxin:1/7 (/8 e.FileName#1/2/9 )/11 {*}/12 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Sysfunm_Xxin_B1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::copy_evar(vm, context[9], context[10], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_ExistFile]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sysfunm_Xxin("Sysfun-Xxin", 2948557630U, 3778842242U, func_Sysfunm_Xxin);


static refalrts::FnResult func_gen_Xxinm_Scan_S14B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Xxin-Scan$14:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxin-Scan$14:1/4 s.new#1/5 s.new#2/6 t.new#3/7 (/11 e.new#4/9 )/12 (/15 e.new#5/13 )/16 (/19 e.new#6/17 )/20 e.new#7/2 s.new#8/21 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#4 as range 9
  // closed e.new#5 as range 13
  // closed e.new#6 as range 17
  if( ! refalrts::svar_right( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & Xxin-Scan$14:1/4 s.FileNo#1/5 s.State#1/6 t.Stack#1/7 (/11 e.Scanned#1/22 )/12 (/15 e.Digits#1/24 )/16 (/19 e.Tail#1/26 )/20 s.Char#1/30 s.Digit#2/21 >/1
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[17];
    context[27] = context[18];
    context[28] = context[2];
    context[29] = context[3];
    // closed e.Scanned#1 as range 22
    // closed e.Digits#1 as range 24
    // closed e.Tail#1 as range 26
    if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    //DEBUG: t.Stack#1: 7
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.State#1: 6
    //DEBUG: s.Digit#2: 21
    //DEBUG: e.Scanned#1: 22
    //DEBUG: e.Digits#1: 24
    //DEBUG: e.Tail#1: 26
    //DEBUG: s.Char#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#1/30 s.Digit#2/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Xxin-Scan/4 AsIs: s.FileNo#1/5 } Tile{ HalfReuse: # Escape-Hex/20 } Tile{ AsIs: (/11 } Tile{ HalfReuse: (/12 } Tile{ AsIs: s.State#1/6 AsIs: t.Stack#1/7 } Tile{ AsIs: e.Scanned#1/22 } Tile{ HalfReuse: )/15 AsIs: e.Digits#1/24 HalfReuse: s.Digit2 #21/16 HalfReuse: )/19 } </31 & Type/32 Tile{ AsIs: e.Tail#1/26 } >/33 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_Type]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::update_name(context[4], functions[efunc_Xxinm_Scan]);
    refalrts::reinit_ident(context[20], identifiers[ident_Escapem_Hex]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[15]);
    refalrts::reinit_svar( context[16], context[21] );
    refalrts::reinit_close_bracket(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[11], context[19] );
    refalrts::link_brackets( context[12], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[6], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxin-Scan$14:1/4 s.FileNo#1/5 s.State#1/6 t.Stack#1/7 (/11 e.Scanned#1/9 )/12 (/15 e.Digits#1/13 )/16 (/19 e.Tail#1/17 )/20 s.Char#1/21 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  // closed e.Digits#1 as range 13
  // closed e.Tail#1 as range 17
  //DEBUG: t.Stack#1: 7
  //DEBUG: s.FileNo#1: 5
  //DEBUG: s.State#1: 6
  //DEBUG: s.Char#1: 21
  //DEBUG: e.Scanned#1: 9
  //DEBUG: e.Digits#1: 13
  //DEBUG: e.Tail#1: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FileNo#1/5 s.State#1/6 t.Stack#1/7 {REMOVED TILE} e.Scanned#1/9 {REMOVED TILE} e.Digits#1/13 {REMOVED TILE} e.Tail#1/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } Tile{ HalfReuse: 'U'/16 HalfReuse: 'n'/19 } Tile{ HalfReuse: 'k'/12 HalfReuse: 'n'/15 } Tile{ HalfReuse: 'o'/11 }"wn escape sequence \\"/22 Tile{ HalfReuse: 'x'/20 AsIs: s.Char#1/21 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[22], context[23], "wn escape sequence \\", 20);
  refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
  refalrts::reinit_char(context[16], 'U');
  refalrts::reinit_char(context[19], 'n');
  refalrts::reinit_char(context[12], 'k');
  refalrts::reinit_char(context[15], 'n');
  refalrts::reinit_char(context[11], 'o');
  refalrts::reinit_char(context[20], 'x');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxinm_Scan_S14B1("Xxin-Scan$14:1", 2948557630U, 3778842242U, func_gen_Xxinm_Scan_S14B1);


static refalrts::FnResult func_gen_Xxinm_Scan_S38B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Xxin-Scan$38:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxin-Scan$38:1/4 s.new#1/5 t.new#2/6 (/10 e.new#3/8 )/11 (/14 e.new#4/12 )/15 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new#3 as range 8
  // closed e.new#4 as range 12
  // closed e.new#5 as range 2
  do {
    // </0 & Xxin-Scan$38:1/4 s.FileNo#1/5 t.Stack#1/6 (/10 e.Scanned#1/16 )/11 (/14 e.Tail#1/18 )/15 s.OneMacroDigit#2/22 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.Scanned#1 as range 16
    // closed e.Tail#1 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: t.Stack#1: 6
    //DEBUG: s.FileNo#1: 5
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Tail#1: 18
    //DEBUG: s.OneMacroDigit#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Xxin-Scan/4 AsIs: s.FileNo#1/5 } # General/23 Tile{ AsIs: (/10 } Tile{ AsIs: t.Stack#1/6 } Tile{ AsIs: e.Scanned#1/16 } Tile{ AsIs: s.OneMacroDigit#2/22 } )/24 Tile{ HalfReuse: </11 HalfReuse: & Type/14 AsIs: e.Tail#1/18 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[23], identifiers[ident_General]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_Xxinm_Scan]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[14], functions[efunc_Type]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[10], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxin-Scan$38:1/4 s.FileNo#1/5 t.Stack#1/6 (/10 e.Scanned#1/8 )/11 (/14 e.Tail#1/12 )/15 e.SeveralMacrodigits#2/2 >/1
  // closed e.Scanned#1 as range 8
  // closed e.Tail#1 as range 12
  // closed e.SeveralMacrodigits#2 as range 2
  //DEBUG: t.Stack#1: 6
  //DEBUG: s.FileNo#1: 5
  //DEBUG: e.Scanned#1: 8
  //DEBUG: e.Tail#1: 12
  //DEBUG: e.SeveralMacrodigits#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FileNo#1/5 t.Stack#1/6 {REMOVED TILE} e.Scanned#1/8 {REMOVED TILE} e.Tail#1/12 {REMOVED TILE} e.SeveralMacrodigits#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } Tile{ HalfReuse: 'V'/10 } Tile{ HalfReuse: 'e'/11 HalfReuse: 'r'/14 } Tile{ HalfReuse: 'y'/15 }" long macrodigit is read"/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[16], context[17], " long macrodigit is read", 24);
  refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
  refalrts::reinit_char(context[10], 'V');
  refalrts::reinit_char(context[11], 'e');
  refalrts::reinit_char(context[14], 'r');
  refalrts::reinit_char(context[15], 'y');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxinm_Scan_S38B1("Xxin-Scan$38:1", 2948557630U, 3778842242U, func_gen_Xxinm_Scan_S38B1);


static refalrts::FnResult func_Xxinm_Scan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & Xxin-Scan/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxin-Scan/4 s.new#1/5 s.new#2/6 (/9 t.new#3/13 e.new#4/7 )/10 s.new#5/11 s.new#6/12 e.new#7/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  context[14] = refalrts::tvar_left( context[13], context[7], context[8] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & Xxin-Scan/4 s.FileNo#1/5 s.State#1/6 (/9 t.Stack#1/13 e.Scanned#1/15 )/10 '*'/11 s.0#1/12 >/1
    context[15] = context[7];
    context[16] = context[8];
    if( ! refalrts::char_term( '*', context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 15
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.State#1: 6
    //DEBUG: s.0#1: 12
    //DEBUG: e.Scanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.0#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: s.State#1/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/15 AsIs: )/10 HalfReuse: </11 } & Type/17 </18 & Get-Aux/19 s.FileNo#1/5/20 >/21 >/22 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[17], functions[efunc_Type]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Getm_Aux]);
    refalrts::copy_stvar(vm, context[20], context[5]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#8/5 s.new#9/6 (/9 (/13 s.new#10/21 t.new#11/22 e.new#12/19 )/14 e.new#13/15 )/10 s.new#14/11 s.new#15/12 e.new#16/17 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    // closed e.new#13 as range 15
    // closed e.new#16 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.new#12 as range 19
    do {
      // </0 & Xxin-Scan/4 s.new#17/5 # Escape/6 (/9 (/13 s.new#18/21 t.new#19/22 e.new#20/24 )/14 )/10 s.new#21/11 s.new#22/12 s.new#23/28 e.new#24/26 >/1
      context[24] = context[19];
      context[25] = context[20];
      context[26] = context[17];
      context[27] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Escape], context[6] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#20 as range 24
      if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
        continue;
      // closed e.new#24 as range 26
      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '\\'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '\\', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\\'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\\');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '\''/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '\'', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\''/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\'');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '\"'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '\"', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\"'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\"');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '('/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '(', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '('/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '(');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 ')'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( ')', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: ')'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], ')');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '<'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '<', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '<'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '<');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 '>'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( '>', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '>'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '>');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 'n'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( 'n', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\n'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\n');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 't'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( 't', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\t'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\t');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 'r'/28 e.Tail#1/31 >/1
        context[29] = context[24];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        if( ! refalrts::char_term( 'r', context[28] ) )
          continue;
        // closed e.Scanned#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 HalfReuse: '\r'/14 AsIs: )/10 } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_char(context[14], '\r');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[28], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[22], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 'x'/28 e.Tail#1/31 >/1
      context[29] = context[24];
      context[30] = context[25];
      context[31] = context[26];
      context[32] = context[27];
      if( ! refalrts::char_term( 'x', context[28] ) )
        continue;
      // closed e.Scanned#1 as range 29
      // closed e.Tail#1 as range 31
      //DEBUG: t.Stack#1: 22
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.State#1: 21
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Tail#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # Escape-Hex/6 AsIs: (/9 AsIs: (/13 AsIs: s.State#1/21 AsIs: t.Stack#1/22 AsIs: e.Scanned#1/29 AsIs: )/14 AsIs: )/10 } </33 Tile{ HalfReuse: & Type/28 AsIs: e.Tail#1/31 AsIs: >/1 } >/34 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::update_ident(context[6], identifiers[ident_Escapem_Hex]);
      refalrts::reinit_name(context[28], functions[efunc_Type]);
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[28], context[1] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.new#17/5 # Escape-Hex/6 (/9 (/13 s.new#18/21 t.new#19/22 e.new#20/24 )/14 e.new#21/26 )/10 s.new#22/11 s.new#23/12 e.new#24/28 >/1
      context[24] = context[19];
      context[25] = context[20];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Escapem_Hex], context[6] ) )
        continue;
      // closed e.new#20 as range 24
      // closed e.new#21 as range 26
      // closed e.new#24 as range 28
      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape-Hex/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/30 )/14 s.D1#1/36 s.D2#1/37 )/10 s.T#1/11 s.S#1/12 e.Tail#1/34 >/1
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        // closed e.Scanned#1 as range 30
        // closed e.Tail#1 as range 34
        if( ! refalrts::svar_left( context[36], context[32], context[33] ) )
          continue;
        if( ! refalrts::svar_left( context[37], context[32], context[33] ) )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Scanned#1: 30
        //DEBUG: e.Tail#1: 34
        //DEBUG: s.D1#1: 36
        //DEBUG: s.D2#1: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.State#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 HalfReuse: s.State1 #21/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/22 AsIs: e.Scanned#1/30 HalfReuse: </14 } & Chr/38 </39 Tile{ HalfReuse: & Add-Digits/13 } </40 & Mul-Digits/41 Tile{ AsIs: s.D1#1/36 } 16/42 >/43 Tile{ AsIs: s.D2#1/37 } >/44 >/45 Tile{ AsIs: )/10 AsIs: s.T#1/11 AsIs: s.S#1/12 AsIs: e.Tail#1/34 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[38], functions[efunc_Chr]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_Mulm_Digits]);
        refalrts::alloc_number(vm, context[42], 16UL);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::reinit_svar( context[6], context[21] );
        refalrts::reinit_open_call(context[14]);
        refalrts::reinit_name(context[13], functions[efunc_Addm_Digits]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[22], context[14] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxin-Scan/4 s.new#25/5 # Escape-Hex/6 (/9 (/13 s.new#26/21 t.new#27/22 e.new#28/30 )/14 e.new#29/32 )/10 s.new#30/11 s.new#31/12 s.new#32/36 e.new#33/34 >/1
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      // closed e.new#28 as range 30
      // closed e.new#29 as range 32
      if( ! refalrts::svar_left( context[36], context[34], context[35] ) )
        continue;
      // closed e.new#33 as range 34
      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape-Hex/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/37 )/14 e.Digits#1/39 )/10 s.T#1/11 s.S#1/12 s.Char#1/36 e.Tail#1/41 >/1
        context[37] = context[30];
        context[38] = context[31];
        context[39] = context[32];
        context[40] = context[33];
        context[41] = context[34];
        context[42] = context[35];
        // closed e.Scanned#1 as range 37
        // closed e.Digits#1 as range 39
        // closed e.Tail#1 as range 41
        //DEBUG: t.Stack#1: 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.State#1: 21
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: s.Char#1: 36
        //DEBUG: e.Scanned#1: 37
        //DEBUG: e.Digits#1: 39
        //DEBUG: e.Tail#1: 41

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: [*]/6 HalfReuse: & Xxin-Scan$14:1/9 HalfReuse: s.FileNo1 #5/13 AsIs: s.State#1/21 AsIs: t.Stack#1/22 } (/43 Tile{ AsIs: e.Scanned#1/37 } )/44 Tile{ HalfReuse: (/14 AsIs: e.Digits#1/39 AsIs: )/10 } (/45 Tile{ AsIs: e.Tail#1/41 } )/46 Tile{ AsIs: s.Char#1/36 } {*}/47 </48 Tile{ Reuse: & HexDigit/4 } s.Char#1/36/49 >/50 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::alloc_close_bracket(vm, context[46]);
        refalrts::alloc_unwrapped_closure(vm, context[47], context[6]);
        refalrts::alloc_open_call(vm, context[48]);
        refalrts::copy_stvar(vm, context[49], context[36]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::reinit_closure_head(context[6]);
        refalrts::reinit_name(context[9], functions[efunc_gen_Xxinm_Scan_S14B1]);
        refalrts::reinit_svar( context[13], context[5] );
        refalrts::reinit_open_bracket(context[14]);
        refalrts::update_name(context[4], functions[efunc_HexDigit]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[48] );
        refalrts::link_brackets( context[45], context[46] );
        refalrts::link_brackets( context[14], context[10] );
        refalrts::link_brackets( context[43], context[44] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[49], context[50] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[14], context[10] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[6], context[23] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        refalrts::wrap_closure( context[47] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape-Hex/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/37 )/14 e.Digits#1/39 )/10 'N'/11 s.0#1/12 0/36 >/1
      context[37] = context[30];
      context[38] = context[31];
      context[39] = context[32];
      context[40] = context[33];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Scanned#1 as range 37
      // closed e.Digits#1 as range 39
      //DEBUG: t.Stack#1: 22
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.State#1: 21
      //DEBUG: s.0#1: 12
      //DEBUG: e.Scanned#1: 37
      //DEBUG: e.Digits#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} s.State#1/21 t.Stack#1/22 e.Scanned#1/37 {REMOVED TILE} e.Digits#1/39 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'U'/41 Tile{ HalfReuse: 'n'/10 Reuse: 'e'/11 } Tile{ HalfReuse: 'x'/6 HalfReuse: 'p'/9 HalfReuse: 'e'/13 } Tile{ HalfReuse: 'c'/14 }"ted EOF in \\x.."/42 Tile{ HalfReuse: '.'/36 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[41], 'U');
      refalrts::alloc_chars(vm, context[42], context[43], "ted EOF in \\x..", 15);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[10], 'n');
      refalrts::update_char(context[11], 'e');
      refalrts::reinit_char(context[6], 'x');
      refalrts::reinit_char(context[9], 'p');
      refalrts::reinit_char(context[13], 'e');
      refalrts::reinit_char(context[14], 'c');
      refalrts::reinit_char(context[36], '.');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[36];
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[6], context[13] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.new#17/5 # Escape/6 (/9 (/13 s.new#18/21 t.new#19/22 e.new#20/24 )/14 )/10 s.new#21/11 s.new#22/12 s.new#23/28 e.new#24/26 >/1
    context[24] = context[19];
    context[25] = context[20];
    context[26] = context[17];
    context[27] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_Escape], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.new#20 as range 24
    if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
      continue;
    // closed e.new#24 as range 26
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 'N'/11 s.0#1/12 0/28 >/1
      context[29] = context[24];
      context[30] = context[25];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.Scanned#1 as range 29
      //DEBUG: t.Stack#1: 22
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.State#1: 21
      //DEBUG: s.0#1: 12
      //DEBUG: e.Scanned#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} s.State#1/21 t.Stack#1/22 e.Scanned#1/29 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'U'/31 Tile{ HalfReuse: 'n'/14 HalfReuse: 'e'/10 Reuse: 'x'/11 } Tile{ HalfReuse: 'p'/6 HalfReuse: 'e'/9 HalfReuse: 'c'/13 }"ted EOF in escape sequenc"/32 Tile{ HalfReuse: 'e'/28 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[31], 'U');
      refalrts::alloc_chars(vm, context[32], context[33], "ted EOF in escape sequenc", 25);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[14], 'n');
      refalrts::reinit_char(context[10], 'e');
      refalrts::update_char(context[11], 'x');
      refalrts::reinit_char(context[6], 'p');
      refalrts::reinit_char(context[9], 'e');
      refalrts::reinit_char(context[13], 'c');
      refalrts::reinit_char(context[28], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[6], context[13] );
      res = refalrts::splice_evar( res, context[14], context[11] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Escape/6 (/9 (/13 s.State#1/21 t.Stack#1/22 e.Scanned#1/29 )/14 )/10 s.T#1/11 s.S#1/12 s.Next#1/28 e.Tail#1/31 >/1
    context[29] = context[24];
    context[30] = context[25];
    context[31] = context[26];
    context[32] = context[27];
    // closed e.Scanned#1 as range 29
    // closed e.Tail#1 as range 31
    //DEBUG: t.Stack#1: 22
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.State#1: 21
    //DEBUG: s.T#1: 11
    //DEBUG: s.S#1: 12
    //DEBUG: s.Next#1: 28
    //DEBUG: e.Scanned#1: 29
    //DEBUG: e.Tail#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} s.State#1/21 t.Stack#1/22 e.Scanned#1/29 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} e.Tail#1/31 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'B'/33 Tile{ HalfReuse: 'a'/6 HalfReuse: 'd'/9 HalfReuse: ' '/13 } 'e'/34 Tile{ HalfReuse: 's'/14 HalfReuse: 'c'/10 }"ape sequence \\"/35 Tile{ AsIs: s.Next#1/28 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[33], 'B');
    refalrts::alloc_char(vm, context[34], 'e');
    refalrts::alloc_chars(vm, context[35], context[36], "ape sequence \\", 14);
    refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
    refalrts::reinit_char(context[6], 'a');
    refalrts::reinit_char(context[9], 'd');
    refalrts::reinit_char(context[13], ' ');
    refalrts::reinit_char(context[14], 's');
    refalrts::reinit_char(context[10], 'c');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[14], context[10] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[6], context[13] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxin-Scan/4 s.new#8/5 s.new#9/6 (/9 t.new#10/13 e.new#11/7 )/10 s.new#12/11 s.new#13/12 s.new#14/15 e.new#15/2 >/1
  // closed e.new#11 as range 7
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#15 as range 2
  do {
    // </0 & Xxin-Scan/4 s.FileNo#1/5 s.State#1/6 (/9 t.Stack#1/13 e.Scanned#1/16 )/10 s.T#1/11 s.S#1/12 '\\'/15 e.Tail#1/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::char_term( '\\', context[15] ) )
      continue;
    // closed e.Scanned#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.State#1: 6
    //DEBUG: s.T#1: 11
    //DEBUG: s.S#1: 12
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.State#1/6 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 } # Escape/20 (/21 (/22 Tile{ HalfReuse: s.State1 #6/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/16 AsIs: )/10 } )/23 </24 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/18 AsIs: >/1 } >/25 Tile{ ]] }
    refalrts::alloc_ident(vm, context[20], identifiers[ident_Escape]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_svar( context[9], context[6] );
    refalrts::reinit_name(context[15], functions[efunc_Type]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[21], context[23] );
    refalrts::link_brackets( context[22], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 # General/6 (/9 t.new#17/13 e.new#18/16 )/10 s.new#19/11 s.new#20/12 s.new#21/15 e.new#22/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_General], context[6] ) )
      continue;
    // closed e.new#18 as range 16
    // closed e.new#22 as range 18
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.T#1/11 s.S#1/12 '('/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( '(', context[15] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # General/6 AsIs: (/9 } (/24 # General/25 Tile{ AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 AsIs: )/10 } )/26 </27 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/28 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_General]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::reinit_name(context[15], functions[efunc_Type]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[24], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[13], context[10] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.new#23/5 # General/6 (/9 t.new#24/13 e.new#25/20 )/10 s.new#26/11 s.new#27/12 ')'/15 e.new#28/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( ')', context[15] ) )
        continue;
      // closed e.new#25 as range 20
      // closed e.new#28 as range 22
      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 (/13 # General/30 t.Stack#1/31 e.Scanned#1/28 )/14 e.Inner#1/24 )/10 s.T#1/11 s.S#1/12 ')'/15 e.Tail#1/26 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        context[28] = 0;
        context[29] = 0;
        if( ! refalrts::brackets_term( context[28], context[29], context[13] ) )
          continue;
        context[30] = refalrts::ident_left( identifiers[ident_General], context[28], context[29] );
        if( ! context[30] )
          continue;
        // closed e.Inner#1 as range 24
        // closed e.Tail#1 as range 26
        context[32] = refalrts::tvar_left( context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        // closed e.Scanned#1 as range 28
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.T#1: 11
        //DEBUG: s.S#1: 12
        //DEBUG: e.Inner#1: 24
        //DEBUG: e.Tail#1: 26
        //DEBUG: t.Stack#1: 31
        //DEBUG: e.Scanned#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # General/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/31 AsIs: e.Scanned#1/28 HalfReuse: (/14 AsIs: e.Inner#1/24 AsIs: )/10 } Tile{ HalfReuse: )/13 HalfReuse: </30 } Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/26 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_close_bracket(context[13]);
        refalrts::reinit_open_call(context[30]);
        refalrts::reinit_name(context[15], functions[efunc_Type]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[9], context[13] );
        refalrts::link_brackets( context[14], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[15], context[1] );
        res = refalrts::splice_evar( res, context[13], context[30] );
        res = refalrts::splice_evar( res, context[31], context[10] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 '^'/13 e.Scanned#1/24 )/10 s.T#1/11 s.S#1/12 ')'/15 e.Tail#1/26 >/1
      context[24] = context[20];
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[23];
      if( ! refalrts::char_term( '^', context[13] ) )
        continue;
      // closed e.Scanned#1 as range 24
      // closed e.Tail#1 as range 26
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Scanned#1: 24
      //DEBUG: e.Tail#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} e.Scanned#1/24 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} e.Tail#1/26 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } Tile{ HalfReuse: 'U'/10 } Tile{ HalfReuse: 'n'/6 HalfReuse: 'b'/9 Reuse: 'a'/13 }"lanced "/28 Tile{ AsIs: ')'/15 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[28], context[29], "lanced ", 7);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[10], 'U');
      refalrts::reinit_char(context[6], 'n');
      refalrts::reinit_char(context[9], 'b');
      refalrts::update_char(context[13], 'a');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[6], context[13] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.new#23/5 # General/6 (/9 t.new#24/13 e.new#25/20 )/10 'N'/11 s.new#26/12 0/15 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#25 as range 20
      do {
        // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 '^'/13 e.Scanned#1/22 )/10 'N'/11 s.0#1/12 0/15 >/1
        context[22] = context[20];
        context[23] = context[21];
        if( ! refalrts::char_term( '^', context[13] ) )
          continue;
        // closed e.Scanned#1 as range 22
        //DEBUG: s.FileNo#1: 5
        //DEBUG: s.0#1: 12
        //DEBUG: e.Scanned#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 '^'/13 {REMOVED TILE} )/10 'N'/11 s.0#1/12 0/15 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: s.FileNo#1/5 HalfReuse: >/6 } Tile{ AsIs: e.Scanned#1/22 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_FClose]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 (/13 # General/26 t.Stack#1/27 e.Scanned#1/24 )/14 e.Inner#1/22 )/10 'N'/11 s.0#1/12 0/15 >/1
      context[22] = context[20];
      context[23] = context[21];
      context[24] = 0;
      context[25] = 0;
      if( ! refalrts::brackets_term( context[24], context[25], context[13] ) )
        continue;
      context[26] = refalrts::ident_left( identifiers[ident_General], context[24], context[25] );
      if( ! context[26] )
        continue;
      // closed e.Inner#1 as range 22
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.Scanned#1 as range 24
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.0#1: 12
      //DEBUG: e.Inner#1: 22
      //DEBUG: t.Stack#1: 27
      //DEBUG: e.Scanned#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/27 e.Scanned#1/24 {REMOVED TILE} e.Inner#1/22 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } Tile{ HalfReuse: 'U'/6 HalfReuse: 'n'/9 HalfReuse: 'b'/13 HalfReuse: 'a'/26 } Tile{ HalfReuse: 'l'/10 Reuse: 'a'/11 } Tile{ HalfReuse: 'n'/14 }"ced "/29 Tile{ HalfReuse: '('/15 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[29], context[30], "ced ", 4);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[6], 'U');
      refalrts::reinit_char(context[9], 'n');
      refalrts::reinit_char(context[13], 'b');
      refalrts::reinit_char(context[26], 'a');
      refalrts::reinit_char(context[10], 'l');
      refalrts::update_char(context[11], 'a');
      refalrts::reinit_char(context[14], 'n');
      refalrts::reinit_char(context[15], '(');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[6], context[26] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.S#1/11 s.T#1/12 '\''/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( '\'', context[15] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.S#1: 11
      //DEBUG: s.T#1: 12
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.S#1/11 s.T#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # Quote/6 AsIs: (/9 } (/24 # General/25 Tile{ AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 AsIs: )/10 } '\''/26 )/27 </28 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/29 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_General]);
      refalrts::alloc_char(vm, context[26], '\'');
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_ident(context[6], identifiers[ident_Quote]);
      refalrts::reinit_name(context[15], functions[efunc_Type]);
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[9], context[27] );
      refalrts::link_brackets( context[24], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[13], context[10] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.S#1/11 s.T#1/12 '\"'/15 e.Tail#1/22 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    if( ! refalrts::char_term( '\"', context[15] ) )
      continue;
    // closed e.Scanned#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.S#1: 11
    //DEBUG: s.T#1: 12
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.S#1/11 s.T#1/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # Quote/6 AsIs: (/9 } (/24 # General/25 Tile{ AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 AsIs: )/10 } '\"'/26 )/27 </28 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/29 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_General]);
    refalrts::alloc_char(vm, context[26], '\"');
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::update_ident(context[6], identifiers[ident_Quote]);
    refalrts::reinit_name(context[15], functions[efunc_Type]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[9], context[27] );
    refalrts::link_brackets( context[24], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[13], context[10] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 # Quote/6 (/9 (/13 # General/22 t.new#17/24 e.new#18/20 )/14 s.new#19/23 e.new#20/16 )/10 s.new#21/11 s.new#22/12 s.new#23/15 e.new#24/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    if( ! refalrts::brackets_term( context[20], context[21], context[13] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Quote], context[6] ) )
      continue;
    context[22] = refalrts::ident_left( identifiers[ident_General], context[20], context[21] );
    if( ! context[22] )
      continue;
    // closed e.new#24 as range 18
    if( ! refalrts::svar_left( context[23], context[16], context[17] ) )
      continue;
    // closed e.new#20 as range 16
    context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
    if( ! context[25] )
      continue;
    // closed e.new#18 as range 20
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Quote/6 (/9 (/13 # General/22 t.Stack#1/24 e.Scanned#1/26 )/14 s.Quote#1/23 e.Quotten#1/28 )/10 s.S#1/11 s.T#1/12 s.Quote#1/15 e.Tail#1/30 >/1
      context[26] = context[20];
      context[27] = context[21];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      if( ! refalrts::repeated_stvar_term( vm, context[15], context[23] ) )
        continue;
      // closed e.Scanned#1 as range 26
      // closed e.Quotten#1 as range 28
      // closed e.Tail#1 as range 30
      //DEBUG: t.Stack#1: 24
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.Quote#1: 23
      //DEBUG: s.S#1: 11
      //DEBUG: s.T#1: 12
      //DEBUG: e.Scanned#1: 26
      //DEBUG: e.Quotten#1: 28
      //DEBUG: e.Tail#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.S#1/11 s.T#1/12 s.Quote#1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # General/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/24 } Tile{ AsIs: e.Scanned#1/26 } </32 Tile{ HalfReuse: & Quote/14 AsIs: s.Quote#1/23 AsIs: e.Quotten#1/28 HalfReuse: >/10 } Tile{ HalfReuse: )/13 HalfReuse: </22 } & Type/33 Tile{ AsIs: e.Tail#1/30 } >/34 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::update_ident(context[6], identifiers[ident_General]);
      refalrts::reinit_name(context[14], functions[efunc_Quote]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_call(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[13], context[22] );
      res = refalrts::splice_evar( res, context[14], context[10] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Quote/6 (/9 (/13 # General/22 t.Stack#1/24 e.Scanned#1/26 )/14 s.Quote#1/23 e.Quotten#1/28 )/10 'N'/11 s.0#1/12 0/15 >/1
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[16];
    context[29] = context[17];
    if( ! refalrts::char_term( 'N', context[11] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Scanned#1 as range 26
    // closed e.Quotten#1 as range 28
    //DEBUG: t.Stack#1: 24
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.Quote#1: 23
    //DEBUG: s.0#1: 12
    //DEBUG: e.Scanned#1: 26
    //DEBUG: e.Quotten#1: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/24 e.Scanned#1/26 {REMOVED TILE} e.Quotten#1/28 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'U'/30 Tile{ HalfReuse: 'n'/6 HalfReuse: 'e'/9 HalfReuse: 'x'/13 HalfReuse: 'p'/22 } 'e'/31 Tile{ HalfReuse: 'c'/10 Reuse: 't'/11 }"ed EOF in"/32 Tile{ HalfReuse: ' '/14 AsIs: s.Quote#1/23 }".."/34 Tile{ HalfReuse: '.'/15 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[30], 'U');
    refalrts::alloc_char(vm, context[31], 'e');
    refalrts::alloc_chars(vm, context[32], context[33], "ed EOF in", 9);
    refalrts::alloc_chars(vm, context[34], context[35], "..", 2);
    refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
    refalrts::reinit_char(context[6], 'n');
    refalrts::reinit_char(context[9], 'e');
    refalrts::reinit_char(context[13], 'x');
    refalrts::reinit_char(context[22], 'p');
    refalrts::reinit_char(context[10], 'c');
    refalrts::update_char(context[11], 't');
    refalrts::reinit_char(context[14], ' ');
    refalrts::reinit_char(context[15], '.');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[14], context[23] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[6], context[22] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 s.new#17/6 (/9 t.new#18/13 e.new#19/16 )/10 'L'/11 s.new#20/12 s.new#21/15 e.new#22/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::char_term( 'L', context[11] ) )
      continue;
    // closed e.new#19 as range 16
    // closed e.new#22 as range 18
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'L'/11 s.S#1/12 s.Letter#1/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_General], context[6] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.S#1: 12
      //DEBUG: s.Letter#1: 15
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.S#1/12 s.Letter#1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # Word/6 AsIs: (/9 } (/24 # General/25 Tile{ AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 AsIs: )/10 HalfReuse: s.Letter1 #15/11 } )/26 </27 & Type/28 Tile{ AsIs: e.Tail#1/22 } >/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_General]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_ident(context[6], identifiers[ident_Word]);
      refalrts::reinit_svar( context[11], context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[24], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'L'/11 s.S#1/12 s.Letter#1/15 e.Tail#1/22 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_Word], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.S#1: 12
    //DEBUG: s.Letter#1: 15
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.S#1/12 s.Letter#1/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # Word/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 HalfReuse: s.Letter1 #15/10 HalfReuse: )/11 } </24 & Type/25 Tile{ AsIs: e.Tail#1/22 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Type]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::reinit_svar( context[10], context[15] );
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 # Word/6 (/9 t.new#17/13 e.new#18/16 )/10 s.new#19/11 s.new#20/12 s.new#21/15 e.new#22/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Word], context[6] ) )
      continue;
    // closed e.new#18 as range 16
    // closed e.new#22 as range 18
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'D'/11 s.0#1/12 s.Digit#1/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.0#1: 12
      //DEBUG: s.Digit#1: 15
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.0#1/12 s.Digit#1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # Word/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 HalfReuse: s.Digit1 #15/10 HalfReuse: )/11 } </24 & Type/25 Tile{ AsIs: e.Tail#1/22 } >/26 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_svar( context[10], context[15] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[9], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.T#1/11 s.S#1/12 '-'/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( '-', context[15] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # Word/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 HalfReuse: '-'/10 } )/24 </25 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/26 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_char(context[10], '-');
      refalrts::reinit_name(context[15], functions[efunc_Type]);
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[9], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.T#1/11 s.S#1/12 '_'/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::char_term( '_', context[15] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # Word/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 HalfReuse: '_'/10 } )/24 </25 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/26 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_char(context[10], '_');
      refalrts::reinit_name(context[15], functions[efunc_Type]);
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[9], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 (/13 # General/26 t.Stack#1/27 e.Scanned#1/24 )/14 e.Word#1/20 )/10 s.T#1/11 s.S#1/12 ' '/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      if( ! refalrts::brackets_term( context[24], context[25], context[13] ) )
        continue;
      if( ! refalrts::char_term( ' ', context[15] ) )
        continue;
      context[26] = refalrts::ident_left( identifiers[ident_General], context[24], context[25] );
      if( ! context[26] )
        continue;
      // closed e.Word#1 as range 20
      // closed e.Tail#1 as range 22
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.Scanned#1 as range 24
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Word#1: 20
      //DEBUG: e.Tail#1: 22
      //DEBUG: t.Stack#1: 27
      //DEBUG: e.Scanned#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # General/6 AsIs: (/9 } Tile{ AsIs: t.Stack#1/27 AsIs: e.Scanned#1/24 HalfReuse: </14 } Tile{ HalfReuse: & Implode_Ext/26 } Tile{ AsIs: e.Word#1/20 } Tile{ HalfReuse: >/13 } Tile{ AsIs: )/10 } </29 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/22 AsIs: >/1 } >/30 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::update_ident(context[6], identifiers[ident_General]);
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[26], functions[efunc_Implodeu_Ext]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_name(context[15], functions[efunc_Type]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[27], context[14] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'N'/11 s.0#1/12 0/15 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Scanned#1 as range 20
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.0#1: 12
      //DEBUG: e.Scanned#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/13 e.Scanned#1/20 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'U'/22 Tile{ HalfReuse: 'n'/10 Reuse: 'e'/11 } Tile{ HalfReuse: 'x'/6 HalfReuse: 'p'/9 }"ected EOF while reading wor"/23 Tile{ HalfReuse: 'd'/15 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[22], 'U');
      refalrts::alloc_chars(vm, context[23], context[24], "ected EOF while reading wor", 27);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[10], 'n');
      refalrts::update_char(context[11], 'e');
      refalrts::reinit_char(context[6], 'x');
      refalrts::reinit_char(context[9], 'p');
      refalrts::reinit_char(context[15], 'd');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[6], context[9] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Word/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.T#1/11 s.S#1/12 s.Other#1/15 e.Tail#1/22 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    // closed e.Scanned#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.T#1: 11
    //DEBUG: s.S#1: 12
    //DEBUG: s.Other#1: 15
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/13 e.Scanned#1/20 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} e.Tail#1/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 }"Un"/24 Tile{ HalfReuse: 'e'/6 HalfReuse: 'x'/9 } Tile{ HalfReuse: 'p'/10 }"ected \""/26 Tile{ AsIs: s.Other#1/15 }"\" while reading word"/28 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[24], context[25], "Un", 2);
    refalrts::alloc_chars(vm, context[26], context[27], "ected \"", 7);
    refalrts::alloc_chars(vm, context[28], context[29], "\" while reading word", 20);
    refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
    refalrts::reinit_char(context[6], 'e');
    refalrts::reinit_char(context[9], 'x');
    refalrts::reinit_char(context[10], 'p');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[6], context[9] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 s.new#17/6 (/9 t.new#18/13 e.new#19/16 )/10 'D'/11 s.new#20/12 s.new#21/15 e.new#22/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::char_term( 'D', context[11] ) )
      continue;
    // closed e.new#19 as range 16
    // closed e.new#22 as range 18
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'D'/11 s.0#1/12 s.Digit#1/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_General], context[6] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 22
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.0#1: 12
      //DEBUG: s.Digit#1: 15
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Tail#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.0#1/12 s.Digit#1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 Reuse: # Number/6 AsIs: (/9 } (/24 # General/25 Tile{ AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 AsIs: )/10 HalfReuse: s.Digit1 #15/11 } )/26 </27 & Type/28 Tile{ AsIs: e.Tail#1/22 } >/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_General]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_Type]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_ident(context[6], identifiers[ident_Number]);
      refalrts::reinit_svar( context[11], context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[24], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Number/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'D'/11 s.0#1/12 s.Digit#1/15 e.Tail#1/22 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_Number], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.0#1: 12
    //DEBUG: s.Digit#1: 15
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.0#1/12 s.Digit#1/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # Number/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/20 HalfReuse: s.Digit1 #15/10 HalfReuse: )/11 } </24 & Type/25 Tile{ AsIs: e.Tail#1/22 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Type]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::reinit_svar( context[10], context[15] );
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.new#16/5 # Number/6 (/9 t.new#17/13 e.new#18/16 )/10 s.new#19/11 s.new#20/12 s.new#21/15 e.new#22/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Number], context[6] ) )
      continue;
    // closed e.new#18 as range 16
    // closed e.new#22 as range 18
    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Number/6 (/9 (/13 # General/26 t.Stack#1/27 e.Scanned#1/24 )/14 e.Number#1/20 )/10 s.T#1/11 s.S#1/12 ' '/15 e.Tail#1/22 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      if( ! refalrts::brackets_term( context[24], context[25], context[13] ) )
        continue;
      if( ! refalrts::char_term( ' ', context[15] ) )
        continue;
      context[26] = refalrts::ident_left( identifiers[ident_General], context[24], context[25] );
      if( ! context[26] )
        continue;
      // closed e.Number#1 as range 20
      // closed e.Tail#1 as range 22
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.Scanned#1 as range 24
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.T#1: 11
      //DEBUG: s.S#1: 12
      //DEBUG: e.Number#1: 20
      //DEBUG: e.Tail#1: 22
      //DEBUG: t.Stack#1: 27
      //DEBUG: e.Scanned#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: [*]/9 HalfReuse: & Xxin-Scan$38:1/13 HalfReuse: s.FileNo1 #5/26 AsIs: t.Stack#1/27 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.Scanned#1/24 } Tile{ HalfReuse: )/15 } (/29 Tile{ AsIs: e.Tail#1/22 } )/30 {*}/31 Tile{ AsIs: </0 } Tile{ HalfReuse: & Numb-Aux/14 AsIs: e.Number#1/20 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_unwrapped_closure(vm, context[31], context[9]);
      refalrts::reinit_open_call(context[6]);
      refalrts::reinit_closure_head(context[9]);
      refalrts::reinit_name(context[13], functions[efunc_gen_Xxinm_Scan_S38B1]);
      refalrts::reinit_svar( context[26], context[5] );
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_name(context[14], functions[efunc_Numbm_Aux]);
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::link_brackets( context[4], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[10] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[6], context[28] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[31] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Xxin-Scan/4 s.FileNo#1/5 # Number/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 'N'/11 s.0#1/12 0/15 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      if( ! refalrts::number_term( 0UL, context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Scanned#1 as range 20
      //DEBUG: t.Stack#1: 13
      //DEBUG: s.FileNo#1: 5
      //DEBUG: s.0#1: 12
      //DEBUG: e.Scanned#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/13 e.Scanned#1/20 {REMOVED TILE} s.0#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 } 'U'/22 Tile{ HalfReuse: 'n'/10 Reuse: 'e'/11 } Tile{ HalfReuse: 'x'/6 HalfReuse: 'p'/9 }"ected EOF while reading macrodigi"/23 Tile{ HalfReuse: 't'/15 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[22], 'U');
      refalrts::alloc_chars(vm, context[23], context[24], "ected EOF while reading macrodigi", 33);
      refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
      refalrts::reinit_char(context[10], 'n');
      refalrts::update_char(context[11], 'e');
      refalrts::reinit_char(context[6], 'x');
      refalrts::reinit_char(context[9], 'p');
      refalrts::reinit_char(context[15], 't');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[6], context[9] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxin-Scan/4 s.FileNo#1/5 # Number/6 (/9 t.Stack#1/13 e.Scanned#1/20 )/10 s.T#1/11 s.S#1/12 s.Other#1/15 e.Tail#1/22 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    // closed e.Scanned#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.T#1: 11
    //DEBUG: s.S#1: 12
    //DEBUG: s.Other#1: 15
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileNo#1/5 {REMOVED TILE} t.Stack#1/13 e.Scanned#1/20 {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} e.Tail#1/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sysfun-Xxin-ERROR/4 }"Un"/24 Tile{ HalfReuse: 'e'/6 HalfReuse: 'x'/9 } Tile{ HalfReuse: 'p'/10 }"ected \""/26 Tile{ AsIs: s.Other#1/15 }"\" while reading macrodigit"/28 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[24], context[25], "Un", 2);
    refalrts::alloc_chars(vm, context[26], context[27], "ected \"", 7);
    refalrts::alloc_chars(vm, context[28], context[29], "\" while reading macrodigit", 26);
    refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxinm_ERROR]);
    refalrts::reinit_char(context[6], 'e');
    refalrts::reinit_char(context[9], 'x');
    refalrts::reinit_char(context[10], 'p');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[6], context[9] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Xxin-Scan/4 s.FileNo#1/5 # General/6 (/9 t.Stack#1/13 e.Scanned#1/16 )/10 s.T#1/11 s.S#1/12 ' '/15 e.Tail#1/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::char_term( ' ', context[15] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_General], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Stack#1: 13
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.T#1: 11
    //DEBUG: s.S#1: 12
    //DEBUG: e.Scanned#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.T#1/11 s.S#1/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: # General/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/16 AsIs: )/10 } </20 Tile{ HalfReuse: & Type/15 AsIs: e.Tail#1/18 AsIs: >/1 } >/21 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_name(context[15], functions[efunc_Type]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxin-Scan/4 s.FileNo#1/5 s.State#1/6 (/9 t.Stack#1/13 e.Scanned#1/7 )/10 s.T#1/11 s.S#1/12 s.Other#1/15 e.Tail#1/2 >/1
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 2
  //DEBUG: t.Stack#1: 13
  //DEBUG: s.FileNo#1: 5
  //DEBUG: s.State#1: 6
  //DEBUG: s.T#1: 11
  //DEBUG: s.S#1: 12
  //DEBUG: s.Other#1: 15
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.T#1/11 s.S#1/12 s.Other#1/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxin-Scan/4 AsIs: s.FileNo#1/5 AsIs: s.State#1/6 AsIs: (/9 AsIs: t.Stack#1/13 AsIs: e.Scanned#1/7 HalfReuse: s.Other1 #15/10 } )/16 </17 & Type/18 Tile{ AsIs: e.Tail#1/2 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Type]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_svar( context[10], context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[9], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Xxinm_Scan("Xxin-Scan", 2948557630U, 3778842242U, func_Xxinm_Scan);


static refalrts::FnResult func_HexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & HexDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HexDigit/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & HexDigit/4 '0'/5 >/1
    if( ! refalrts::char_term( '0', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '0'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '1'/5 >/1
    if( ! refalrts::char_term( '1', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '1'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number(context[1], 1UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '2'/5 >/1
    if( ! refalrts::char_term( '2', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '2'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number(context[1], 2UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '3'/5 >/1
    if( ! refalrts::char_term( '3', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '3'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number(context[1], 3UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '4'/5 >/1
    if( ! refalrts::char_term( '4', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '4'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number(context[1], 4UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '5'/5 >/1
    if( ! refalrts::char_term( '5', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '5'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
    refalrts::reinit_number(context[1], 5UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '6'/5 >/1
    if( ! refalrts::char_term( '6', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '6'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
    refalrts::reinit_number(context[1], 6UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '7'/5 >/1
    if( ! refalrts::char_term( '7', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '7'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
    refalrts::reinit_number(context[1], 7UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '8'/5 >/1
    if( ! refalrts::char_term( '8', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '8'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
    refalrts::reinit_number(context[1], 8UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '9'/5 >/1
    if( ! refalrts::char_term( '9', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '9'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
    refalrts::reinit_number(context[1], 9UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'A'/5 >/1
    if( ! refalrts::char_term( 'A', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'A'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
    refalrts::reinit_number(context[1], 10UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'B'/5 >/1
    if( ! refalrts::char_term( 'B', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'B'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
    refalrts::reinit_number(context[1], 11UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'C'/5 >/1
    if( ! refalrts::char_term( 'C', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'C'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
    refalrts::reinit_number(context[1], 12UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'D'/5 >/1
    if( ! refalrts::char_term( 'D', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'D'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
    refalrts::reinit_number(context[1], 13UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'E'/5 >/1
    if( ! refalrts::char_term( 'E', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'E'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
    refalrts::reinit_number(context[1], 14UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'F'/5 >/1
    if( ! refalrts::char_term( 'F', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'F'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
    refalrts::reinit_number(context[1], 15UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'a'/5 >/1
    if( ! refalrts::char_term( 'a', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'a'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
    refalrts::reinit_number(context[1], 10UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'b'/5 >/1
    if( ! refalrts::char_term( 'b', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'b'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
    refalrts::reinit_number(context[1], 11UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'c'/5 >/1
    if( ! refalrts::char_term( 'c', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'c'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
    refalrts::reinit_number(context[1], 12UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'd'/5 >/1
    if( ! refalrts::char_term( 'd', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'd'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
    refalrts::reinit_number(context[1], 13UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
    refalrts::reinit_number(context[1], 14UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'f'/5 >/1
    if( ! refalrts::char_term( 'f', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'f'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
    refalrts::reinit_number(context[1], 15UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HexDigit/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HexDigit/4 s.Other#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", 2948557630U, 3778842242U, func_HexDigit);


static refalrts::FnResult func_Quote(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Quote/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Quote/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Quote/4 '\''/5 e.Text#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;
    // closed e.Text#1 as range 6
    //DEBUG: e.Text#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Quote/4 '\''/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Text#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Quote/4 '\"'/5 e.Text#1/2 >/1
  if( ! refalrts::char_term( '\"', context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Implode_Ext/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_Implodeu_Ext]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Quote("Quote", 2948557630U, 3778842242U, func_Quote);


static refalrts::FnResult func_Sysfunm_Xxout(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Sysfun-Xxout/4 e.FileName#1/2 (/7 s.Width#1/9 e.Expression#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.FileName#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expression#1 as range 5
  //DEBUG: e.FileName#1: 2
  //DEBUG: s.Width#1: 9
  //DEBUG: e.Expression#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Xxout-Wrap/11 </12 Tile{ HalfReuse: & FOpen/0 HalfReuse: 'w'/4 AsIs: e.FileName#1/2 HalfReuse: >/7 AsIs: s.Width#1/9 } </13 & Xxout-Scan/14 </15 & Type/16 Tile{ AsIs: e.Expression#1/5 } >/17 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Xxoutm_Wrap]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Xxoutm_Scan]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Type]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_name(context[0], functions[efunc_FOpen]);
  refalrts::reinit_char(context[4], 'w');
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sysfunm_Xxout("Sysfun-Xxout", 2948557630U, 3778842242U, func_Sysfunm_Xxout);


static refalrts::FnResult func_gen_Xxoutm_Wrap_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Xxout-Wrap:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxout-Wrap:1/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#3 as range 7
  // closed e.new#4 as range 2
  do {
    // </0 & Xxout-Wrap:1/4 s.FileNo#1/5 s.Width#1/6 (/9 e.Line#2/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Line#2 as range 11
    //DEBUG: s.FileNo#1: 5
    //DEBUG: s.Width#1: 6
    //DEBUG: e.Line#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Width#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Write-Aux/4 AsIs: s.FileNo#1/5 } Tile{ AsIs: e.Line#2/11 } Tile{ HalfReuse: >/9 } </13 & FClose/14 Tile{ HalfReuse: s.FileNo1 #5/10 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_FClose]);
    refalrts::update_name(context[4], functions[efunc_Writem_Aux]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxout-Wrap:1/4 s.FileNo#1/5 s.Width#1/6 (/9 e.Line#2/7 )/10 e.Rest#2/2 >/1
  // closed e.Line#2 as range 7
  // closed e.Rest#2 as range 2
  //DEBUG: s.FileNo#1: 5
  //DEBUG: s.Width#1: 6
  //DEBUG: e.Line#2: 7
  //DEBUG: e.Rest#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Width#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout-Aux/4 AsIs: s.FileNo#1/5 } Tile{ AsIs: e.Line#2/7 } Tile{ HalfReuse: >/9 } </11 & Xxout-Wrap/12 s.FileNo#1/5/13 Tile{ HalfReuse: s.Width1 #6/10 AsIs: e.Rest#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Xxoutm_Wrap]);
  refalrts::copy_stvar(vm, context[13], context[5]);
  refalrts::update_name(context[4], functions[efunc_Putoutm_Aux]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_svar( context[10], context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Wrap_B1("Xxout-Wrap:1", 2948557630U, 3778842242U, func_gen_Xxoutm_Wrap_B1);


static refalrts::FnResult func_Xxoutm_Wrap(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Xxout-Wrap/4 s.FileNo#1/5 s.Width#1/6 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: s.FileNo#1: 5
  //DEBUG: s.Width#1: 6
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: [*]/0 Reuse: & Xxout-Wrap:1/4 AsIs: s.FileNo#1/5 AsIs: s.Width#1/6 } {*}/8 </9 & DoFirst/10 s.Width#1/6/11 (/12 )/13 Tile{ AsIs: e.Text#1/2 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[0]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_DoFirst]);
  refalrts::copy_stvar(vm, context[11], context[6]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Xxoutm_Wrap_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Xxoutm_Wrap("Xxout-Wrap", 2948557630U, 3778842242U, func_Xxoutm_Wrap);


static refalrts::FnResult func_gen_Xxoutm_Scan_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Xxout-Scan$1=1/4 (/7 e.Chars#2/5 )/8 s.T#2/9 s.S#2/10 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Chars#2: 5
  //DEBUG: s.T#2: 9
  //DEBUG: s.S#2: 10
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\''/0 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: '\''/4 HalfReuse: </7 } Tile{ HalfReuse: & Xxout-Scan/8 AsIs: s.T#2/9 AsIs: s.S#2/10 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_char(context[0], '\'');
  refalrts::reinit_char(context[4], '\'');
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Xxoutm_Scan]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Scan_S1A1("Xxout-Scan$1=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Scan_S1A1);


static refalrts::FnResult func_gen_Xxoutm_Scan_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Xxout-Scan$2=1/4 (/7 e.Chars#2/5 )/8 s.T#2/9 s.S#2/10 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Chars#2: 5
  //DEBUG: s.T#2: 9
  //DEBUG: s.S#2: 10
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\''/0 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: '\''/4 HalfReuse: </7 } Tile{ HalfReuse: & Xxout-Scan/8 AsIs: s.T#2/9 AsIs: s.S#2/10 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_char(context[0], '\'');
  refalrts::reinit_char(context[4], '\'');
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Xxoutm_Scan]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Scan_S2A1("Xxout-Scan$2=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Scan_S2A1);


static refalrts::FnResult func_gen_Xxoutm_Scan_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Xxout-Scan$4=1/4 (/7 e.Tail#1/5 )/8 (/11 e.Chars#2/9 )/12 '*'/13 s.0#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::char_left( '*', context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 5
  // closed e.Chars#2 as range 9
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Tail#1: 5
  //DEBUG: e.Chars#2: 9
  //DEBUG: s.0#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.0#2/14 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: '\"'/13 } Tile{ AsIs: e.Chars#2/9 } Tile{ HalfReuse: '\"'/1 } Tile{ HalfReuse: </12 } Tile{ HalfReuse: & Xxout-Scan/0 HalfReuse: </4 HalfReuse: & Type/7 AsIs: e.Tail#1/5 HalfReuse: >/8 HalfReuse: >/11 } Tile{ ]] }
  refalrts::update_char(context[13], '\"');
  refalrts::reinit_char(context[1], '\"');
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[0], functions[efunc_Xxoutm_Scan]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Type]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Scan_S4A1("Xxout-Scan$4=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Scan_S4A1);


static refalrts::FnResult func_gen_Xxoutm_Scan_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Xxout-Scan$6=1/4 (/7 e.Chars#2/5 )/8 s.T#2/9 s.S#2/10 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Chars#2: 5
  //DEBUG: s.T#2: 9
  //DEBUG: s.S#2: 10
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\''/0 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: '\''/4 HalfReuse: </7 } Tile{ HalfReuse: & Xxout-Scan/8 AsIs: s.T#2/9 AsIs: s.S#2/10 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_char(context[0], '\'');
  refalrts::reinit_char(context[4], '\'');
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Xxoutm_Scan]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Scan_S6A1("Xxout-Scan$6=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Scan_S6A1);


static refalrts::FnResult func_gen_Xxoutm_Scan_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Xxout-Scan$7=1/4 (/7 e.Chars#2/5 )/8 s.T#2/9 s.S#2/10 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Chars#2: 5
  //DEBUG: s.T#2: 9
  //DEBUG: s.S#2: 10
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '\''/0 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: '\''/4 HalfReuse: </7 } Tile{ HalfReuse: & Xxout-Scan/8 AsIs: s.T#2/9 AsIs: s.S#2/10 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::reinit_char(context[0], '\'');
  refalrts::reinit_char(context[4], '\'');
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Xxoutm_Scan]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Scan_S7A1("Xxout-Scan$7=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Scan_S7A1);


static refalrts::FnResult func_Xxoutm_Scan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Xxout-Scan/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxout-Scan/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Xxout-Scan/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Xxout-Scan/4 s.new#8/5 s.new#9/6 s.new#10/9 e.new#11/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[9], context[9] ) )
        continue;
      // closed e.new#11 as range 11
      do {
        // </0 & Xxout-Scan/4 'L'/5 s.S#1/6 s.Letter#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'L', context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: s.S#1: 6
        //DEBUG: s.Letter#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </15 & Xxout-Scan$1=1/16 </17 & Xxout-Chars/18 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: 'L'/5 AsIs: s.S#1/6 AsIs: s.Letter#1/9 AsIs: e.Tail#1/13 AsIs: >/1 } >/19 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_name(vm, context[16], functions[efunc_gen_Xxoutm_Scan_S1A1]);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Xxoutm_Chars]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[15], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Scan/4 'D'/5 s.0#1/6 s.Digit#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'D', context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: s.0#1: 6
        //DEBUG: s.Digit#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </15 & Xxout-Scan$2=1/16 </17 & Xxout-Chars/18 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: 'D'/5 AsIs: s.0#1/6 AsIs: s.Digit#1/9 AsIs: e.Tail#1/13 AsIs: >/1 } >/19 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_name(vm, context[16], functions[efunc_gen_Xxoutm_Scan_S2A1]);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Xxoutm_Chars]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[15], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Scan/4 'W'/5 s.new#12/6 s.new#13/9 e.new#14/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'W', context[5] ) )
          continue;
        // closed e.new#14 as range 13
        do {
          // </0 & Xxout-Scan/4 'W'/5 'i'/6 s.Word#1/9 e.Tail#1/15 >/1
          context[15] = context[13];
          context[16] = context[14];
          if( ! refalrts::char_term( 'i', context[6] ) )
            continue;
          // closed e.Tail#1 as range 15
          //DEBUG: s.Word#1: 9
          //DEBUG: e.Tail#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Word#1/9 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Explode/4 HalfReuse: s.Word1 #9/5 HalfReuse: >/6 } ' '/17 </18 & Xxout-Scan/19 </20 & Type/21 Tile{ AsIs: e.Tail#1/15 } >/22 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[17], ' ');
          refalrts::alloc_open_call(vm, context[18]);
          refalrts::alloc_name(vm, context[19], functions[efunc_Xxoutm_Scan]);
          refalrts::alloc_open_call(vm, context[20]);
          refalrts::alloc_name(vm, context[21], functions[efunc_Type]);
          refalrts::alloc_close_call(vm, context[22]);
          refalrts::update_name(context[4], functions[efunc_Explode]);
          refalrts::reinit_svar( context[5], context[9] );
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[22], context[22] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[17], context[21] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Xxout-Scan/4 'W'/5 'q'/6 s.Compound#1/9 e.Tail#1/15 >/1
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::char_term( 'q', context[6] ) )
          continue;
        // closed e.Tail#1 as range 15
        //DEBUG: s.Compound#1: 9
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </17 [*]/18 & Xxout-Scan$4=1/19 (/20 Tile{ AsIs: e.Tail#1/15 } )/21 {*}/22 </23 & Xxout-Chars/24 (/25 )/26 Tile{ AsIs: </0 Reuse: & Type/4 HalfReuse: </5 HalfReuse: & Explode/6 AsIs: s.Compound#1/9 } >/27 >/28 >/29 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_closure_head(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_gen_Xxoutm_Scan_S4A1]);
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::alloc_unwrapped_closure(vm, context[22], context[18]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_Xxoutm_Chars]);
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::update_name(context[4], functions[efunc_Type]);
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[6], functions[efunc_Explode]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[5] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[21], context[26] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::use( res );
        refalrts::wrap_closure( context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Scan/4 'N'/5 s.0#1/6 s.Number#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'N', context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: s.0#1: 6
        //DEBUG: s.Number#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.0#1/6 s.Number#1/9 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & StrFromInt/4 HalfReuse: s.Number1 #9/5 } >/15 ' '/16 </17 & Xxout-Scan/18 </19 & Type/20 Tile{ AsIs: e.Tail#1/13 } >/21 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[15]);
        refalrts::alloc_char(vm, context[16], ' ');
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Xxoutm_Scan]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Type]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::update_name(context[4], functions[efunc_StrFromInt]);
        refalrts::reinit_svar( context[5], context[9] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[15], context[20] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Scan/4 'P'/5 s.S#1/6 s.Printable#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::char_term( 'P', context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: s.S#1: 6
        //DEBUG: s.Printable#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </15 & Xxout-Scan$6=1/16 </17 & Xxout-Chars/18 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: 'P'/5 AsIs: s.S#1/6 AsIs: s.Printable#1/9 AsIs: e.Tail#1/13 AsIs: >/1 } >/19 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_name(vm, context[16], functions[efunc_gen_Xxoutm_Scan_S6A1]);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Xxoutm_Chars]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[15], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxout-Scan/4 'O'/5 s.S#1/6 s.Other#1/9 e.Tail#1/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::char_term( 'O', context[5] ) )
        continue;
      // closed e.Tail#1 as range 13
      //DEBUG: s.S#1: 6
      //DEBUG: s.Other#1: 9
      //DEBUG: e.Tail#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Xxout-Scan$7=1/16 </17 & Xxout-Chars/18 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: 'O'/5 AsIs: s.S#1/6 AsIs: s.Other#1/9 AsIs: e.Tail#1/13 AsIs: >/1 } >/19 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_Xxoutm_Scan_S7A1]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_Xxoutm_Chars]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxout-Scan/4 'B'/5 s.0#1/6 (/9 e.Inner#1/13 )/10 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    if( ! refalrts::char_term( 'B', context[5] ) )
      continue;
    // closed e.Inner#1 as range 13
    // closed e.Tail#1 as range 11
    //DEBUG: s.0#1: 6
    //DEBUG: e.Inner#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.0#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '('/15 Tile{ AsIs: </0 AsIs: & Xxout-Scan/4 HalfReuse: </5 } & Type/16 Tile{ AsIs: e.Inner#1/13 } >/17 Tile{ HalfReuse: >/9 } ')'/18 </19 & Xxout-Scan/20 </21 Tile{ HalfReuse: & Type/10 AsIs: e.Tail#1/11 AsIs: >/1 } >/22 Tile{ ]] }
    refalrts::alloc_char(vm, context[15], '(');
    refalrts::alloc_name(vm, context[16], functions[efunc_Type]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_char(vm, context[18], ')');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Xxoutm_Scan]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_name(context[10], functions[efunc_Type]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxout-Scan/4 '*'/5 s.0#1/6 >/1
  if( ! refalrts::char_term( '*', context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Xxout-Scan/4 '*'/5 s.0#1/6 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Xxoutm_Scan("Xxout-Scan", 2948557630U, 3778842242U, func_Xxoutm_Scan);


static refalrts::FnResult func_gen_Xxoutm_Chars_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Xxout-Chars$7=1/4 (/7 e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 (/15 s.Hi#2/17 )/16 s.Low#2/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Tail#1: 9
  //DEBUG: s.Hi#2: 17
  //DEBUG: s.Low#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Xxout-Chars/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\\'/8 HalfReuse: 'x'/11 } Tile{ HalfReuse: </12 HalfReuse: & Hex/15 AsIs: s.Hi#2/17 } >/19 </20 Tile{ HalfReuse: & Hex/16 AsIs: s.Low#2/18 AsIs: >/1 } )/21 </22 & Type/23 Tile{ AsIs: e.Tail#1/9 } >/24 >/25 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Type]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_Xxoutm_Chars]);
  refalrts::reinit_char(context[8], '\\');
  refalrts::reinit_char(context[11], 'x');
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_Hex]);
  refalrts::reinit_name(context[16], functions[efunc_Hex]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Xxoutm_Chars_S7A1("Xxout-Chars$7=1", 2948557630U, 3778842242U, func_gen_Xxoutm_Chars_S7A1);


static refalrts::FnResult func_Xxoutm_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 68 elems
  refalrts::Iter context[68];
  refalrts::zeros( context, 68 );
  // </0 & Xxout-Chars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Xxout-Chars/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Xxout-Chars/4 (/7 e.new#5/11 )/8 s.new#6/9 s.new#7/10 t.new#8/15 e.new#9/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & Xxout-Chars/4 (/7 e.new#10/17 )/8 s.new#11/9 s.new#12/10 s.new#13/15 e.new#14/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[15], context[15] ) )
        continue;
      // closed e.new#10 as range 17
      // closed e.new#14 as range 19
      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 s.T#1/9 s.S#1/10 s.Escaped#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.T#1: 9
        //DEBUG: s.S#1: 10
        //DEBUG: s.Escaped#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23
        //9: s.T#1
        //10: s.S#1
        //15: s.Escaped#1
        //21: e.Scanned#1
        //23: e.Tail#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Xxoutm_Chars_S1C1]);
        refalrts::alloc_open_bracket(vm, context[28]);
        refalrts::alloc_chars(vm, context[29], context[30], "\\\\", 2);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_chars(vm, context[33], context[34], "\'\'", 2);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_chars(vm, context[37], context[38], "\"\"", 2);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::alloc_open_bracket(vm, context[40]);
        refalrts::alloc_chars(vm, context[41], context[42], "((", 2);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_chars(vm, context[45], context[46], "))", 2);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_chars(vm, context[49], context[50], "<<", 2);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_open_bracket(vm, context[52]);
        refalrts::alloc_chars(vm, context[53], context[54], ">>", 2);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_open_bracket(vm, context[56]);
        refalrts::alloc_chars(vm, context[57], context[58], "\nn", 2);
        refalrts::alloc_close_bracket(vm, context[59]);
        refalrts::alloc_open_bracket(vm, context[60]);
        refalrts::alloc_chars(vm, context[61], context[62], "\tt", 2);
        refalrts::alloc_close_bracket(vm, context[63]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::alloc_chars(vm, context[65], context[66], "\rr", 2);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[25] );
        res = refalrts::splice_elem( res, context[26] );
        refalrts::link_brackets( context[64], context[67] );
        res = refalrts::splice_elem( res, context[67] );
        res = refalrts::splice_evar( res, context[65], context[66] );
        res = refalrts::splice_elem( res, context[64] );
        refalrts::link_brackets( context[60], context[63] );
        res = refalrts::splice_elem( res, context[63] );
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_elem( res, context[60] );
        refalrts::link_brackets( context[56], context[59] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_evar( res, context[57], context[58] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::link_brackets( context[52], context[55] );
        res = refalrts::splice_elem( res, context[55] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_elem( res, context[52] );
        refalrts::link_brackets( context[48], context[51] );
        res = refalrts::splice_elem( res, context[51] );
        res = refalrts::splice_evar( res, context[49], context[50] );
        res = refalrts::splice_elem( res, context[48] );
        refalrts::link_brackets( context[44], context[47] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_elem( res, context[44] );
        refalrts::link_brackets( context[40], context[43] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_elem( res, context[40] );
        refalrts::link_brackets( context[36], context[39] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::link_brackets( context[32], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::link_brackets( context[28], context[31] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </25 & Xxout-Chars$1?1/29 e.Escaped-B#2/30 (/36 s.Escaped#1/38 e.Replace#2/34 )/37 e.Escaped-E#2/32 >/26
          context[27] = 0;
          context[28] = 0;
          context[29] = refalrts::call_left( context[27], context[28], context[25], context[26] );
          context[30] = 0;
          context[31] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[32] = context[27];
            context[33] = context[28];
            context[34] = 0;
            context[35] = 0;
            context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
            if( ! context[36] )
              continue;
            refalrts::bracket_pointers(context[36], context[37]);
            if( ! refalrts::repeated_stvar_left( vm, context[38], context[15], context[34], context[35] ) )
              continue;
            // closed e.Replace#2 as range 34
            // closed e.Escaped-E#2 as range 32
            //DEBUG: s.T#1: 9
            //DEBUG: s.S#1: 10
            //DEBUG: s.Escaped#1: 15
            //DEBUG: e.Scanned#1: 21
            //DEBUG: e.Tail#1: 23
            //DEBUG: e.Escaped-B#2: 30
            //DEBUG: e.Replace#2: 34
            //DEBUG: e.Escaped-E#2: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.T#1/9 s.S#1/10 s.Escaped#1/15 {REMOVED TILE} {REMOVED TILE} e.Escaped-B#2/30 (/36 s.Escaped#1/38 {REMOVED TILE} {REMOVED TILE} e.Escaped-E#2/32 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxout-Chars/4 AsIs: (/7 AsIs: e.Scanned#1/21 HalfReuse: '\\'/8 } Tile{ AsIs: e.Replace#2/34 } Tile{ AsIs: )/37 } Tile{ AsIs: </25 Reuse: & Type/29 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/26 AsIs: >/1 ]] }
            refalrts::reinit_char(context[8], '\\');
            refalrts::update_name(context[29], functions[efunc_Type]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[25] );
            refalrts::link_brackets( context[7], context[37] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[26];
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[25], context[29] );
            res = refalrts::splice_evar( res, context[37], context[37] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::splice_to_freelist_open( vm, context[8], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[30], context[31], context[27], context[28] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[25], context[26]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'L'/9 s.S#1/10 s.Letter#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::char_term( 'L', context[9] ) )
          continue;
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.S#1: 10
        //DEBUG: s.Letter#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.S#1/10 s.Letter#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxout-Chars/4 AsIs: (/7 AsIs: e.Scanned#1/21 HalfReuse: s.Letter1 #15/8 HalfReuse: )/9 } </25 & Type/26 Tile{ AsIs: e.Tail#1/23 } >/27 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::reinit_svar( context[8], context[15] );
        refalrts::reinit_close_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'D'/9 s.S#1/10 s.Digit#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::char_term( 'D', context[9] ) )
          continue;
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.S#1: 10
        //DEBUG: s.Digit#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.S#1/10 s.Digit#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxout-Chars/4 AsIs: (/7 AsIs: e.Scanned#1/21 HalfReuse: s.Digit1 #15/8 HalfReuse: )/9 } </25 & Type/26 Tile{ AsIs: e.Tail#1/23 } >/27 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::reinit_svar( context[8], context[15] );
        refalrts::reinit_close_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'W'/9 s.S#1/10 s.Word#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::char_term( 'W', context[9] ) )
          continue;
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.S#1: 10
        //DEBUG: s.Word#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Xxout-Chars/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/21 AsIs: )/8 AsIs: 'W'/9 AsIs: s.S#1/10 AsIs: s.Word#1/15 } Tile{ AsIs: e.Tail#1/23 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'N'/9 s.0#1/10 s.Number#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::char_term( 'N', context[9] ) )
          continue;
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.0#1: 10
        //DEBUG: s.Number#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Xxout-Chars/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/21 AsIs: )/8 AsIs: 'N'/9 AsIs: s.0#1/10 AsIs: s.Number#1/15 } Tile{ AsIs: e.Tail#1/23 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'P'/9 s.S#1/10 s.Printable#1/15 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::char_term( 'P', context[9] ) )
          continue;
        // closed e.Scanned#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.S#1: 10
        //DEBUG: s.Printable#1: 15
        //DEBUG: e.Scanned#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.S#1/10 s.Printable#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Xxout-Chars/4 AsIs: (/7 AsIs: e.Scanned#1/21 HalfReuse: s.Printable1 #15/8 HalfReuse: )/9 } </25 & Type/26 Tile{ AsIs: e.Tail#1/23 } >/27 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::reinit_svar( context[8], context[15] );
        refalrts::reinit_close_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Xxout-Chars/4 (/7 e.Scanned#1/21 )/8 'O'/9 s.S#1/10 s.Other#1/15 e.Tail#1/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      if( ! refalrts::char_term( 'O', context[9] ) )
        continue;
      // closed e.Scanned#1 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: s.S#1: 10
      //DEBUG: s.Other#1: 15
      //DEBUG: e.Scanned#1: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.S#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & Xxout-Chars$7=1/4 AsIs: (/7 AsIs: e.Scanned#1/21 AsIs: )/8 HalfReuse: (/9 } Tile{ AsIs: e.Tail#1/23 } )/26 {*}/27 </28 & Divmod-Digits/29 </30 & Ord/31 Tile{ AsIs: s.Other#1/15 } >/32 16/33 >/34 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_unwrapped_closure(vm, context[27], context[0]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_Divmodm_Digits]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Ord]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_number(vm, context[33], 16UL);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Xxoutm_Chars_S7A1]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[27] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Xxout-Chars/4 (/7 e.Scanned#1/17 )/8 'B'/9 s.0#1/10 (/15 e.Inner#1/21 )/16 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
      continue;
    if( ! refalrts::char_term( 'B', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 17
    // closed e.Inner#1 as range 21
    // closed e.Tail#1 as range 19
    //DEBUG: s.0#1: 10
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Inner#1: 21
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Xxout-Chars/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/17 AsIs: )/8 AsIs: 'B'/9 AsIs: s.0#1/10 AsIs: (/15 AsIs: e.Inner#1/21 AsIs: )/16 } Tile{ AsIs: e.Tail#1/19 } Tile{ ]] }
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Xxout-Chars/4 (/7 e.Scanned#1/5 )/8 '*'/9 s.0#1/10 >/1
  if( ! refalrts::char_term( '*', context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: s.0#1: 10
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Xxout-Chars/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: '*'/9 AsIs: s.0#1/10 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Xxoutm_Chars("Xxout-Chars", 2948557630U, 3778842242U, func_Xxoutm_Chars);


static refalrts::FnResult func_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Hex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Hex/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Hex/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char(context[1], '0');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char(context[1], '1');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char(context[1], '2');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char(context[1], '3');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char(context[1], '4');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char(context[1], '5');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char(context[1], '6');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 7/5 >/1
    if( ! refalrts::number_term( 7UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 7/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
    refalrts::reinit_char(context[1], '7');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 8/5 >/1
    if( ! refalrts::number_term( 8UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 8/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '8'/1 ]] }
    refalrts::reinit_char(context[1], '8');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 9/5 >/1
    if( ! refalrts::number_term( 9UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 9/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '9'/1 ]] }
    refalrts::reinit_char(context[1], '9');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 10/5 >/1
    if( ! refalrts::number_term( 10UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 10/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'A'/1 ]] }
    refalrts::reinit_char(context[1], 'A');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 11/5 >/1
    if( ! refalrts::number_term( 11UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 11/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'B'/1 ]] }
    refalrts::reinit_char(context[1], 'B');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 12/5 >/1
    if( ! refalrts::number_term( 12UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 12/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'C'/1 ]] }
    refalrts::reinit_char(context[1], 'C');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 13/5 >/1
    if( ! refalrts::number_term( 13UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 13/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'D'/1 ]] }
    refalrts::reinit_char(context[1], 'D');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Hex/4 14/5 >/1
    if( ! refalrts::number_term( 14UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Hex/4 14/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'E'/1 ]] }
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Hex/4 15/5 >/1
  if( ! refalrts::number_term( 15UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Hex/4 15/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'F'/1 ]] }
  refalrts::reinit_char(context[1], 'F');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Hex("Hex", 2948557630U, 3778842242U, func_Hex);

#line 2215 "Library.ref"
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

}  // unnamed namespace
#line 15950 "Library.cpp"

static refalrts::FnResult func_GetEnv(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2254 "Library.ref"
  refalrts::Iter envname_b = 0;
  refalrts::Iter envname_e = 0;
  refalrts::call_left(envname_b, envname_e, arg_begin, arg_end);

  std::vector<char> envname;
  refalrts::FnResult envname_res =
    string_from_seq(envname, envname_b, envname_e);

  if (envname_res != refalrts::cSuccess) {
    return envname_res;
  }

  refalrts::reset_allocator(vm);
  const char *envres = getenv(& envname[0]);

  if (envres != 0) {
    refalrts::Iter env_begin;
    refalrts::Iter env_end;

    refalrts::alloc_string(vm, env_begin, env_end, envres);
    refalrts::splice_evar(arg_begin, env_begin, env_end);
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 15983 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetEnv("GetEnv", 0U, 0U, func_GetEnv);


static refalrts::FnResult func_System(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2289 "Library.ref"
  refalrts::Iter command_b = 0;
  refalrts::Iter command_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(command_b, command_e, arg_begin, arg_end);

  std::vector<char> command;
  refalrts::FnResult command_res =
    string_from_seq(command, command_b, command_e);

  if (command_res != refalrts::cSuccess) {
    return command_res;
  }

  fflush(stdout);
  fflush(stderr);

  int ret = refalrts::api::system(&command[0]);

  refalrts::reset_allocator(vm);
  if (ret < 0) {
    refalrts::Iter minus = 0;
    refalrts::alloc_char(vm, minus, '-');
    refalrts::splice_elem(arg_begin, minus);

    ret = -ret;
  }

  refalrts::reinit_number(arg_begin, ret);

  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 16026 "Library.cpp"
}

static refalrts::NativeReference nat_ref_System("System", 0U, 0U, func_System);


static refalrts::FnResult func_Exit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2332 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  int sign = +1;

  if (refalrts::char_left('+', content_b, content_e)) {
    sign = +1;
  } else if (refalrts::char_left('-', content_b, content_e)) {
    sign = -1;
  }

  refalrts::Iter pretcode = 0;
  if (
    ! refalrts::svar_left(pretcode, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || refalrts::cDataNumber != pretcode->tag
    || refalrts::dangerous_state(vm)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::set_return_code(vm, sign * static_cast<int>(pretcode->number_info));
  return refalrts::cExit;
#line 16062 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Exit("Exit", 0U, 0U, func_Exit);

#line 2365 "Library.ref"
namespace cookie_ns {

enum CloseMode { cCloseMode_Silent, cCloseMode_Fail };

extern refalrts::FnResult close(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end, CloseMode mode
);

}  // namespace cookie_ns
#line 16078 "Library.cpp"

static refalrts::FnResult func_Close(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2379 "Library.ref"
  return cookie_ns::close(
    vm, identifiers, arg_begin, arg_end, cookie_ns::cCloseMode_Silent
  );
#line 16089 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Close("Close", 0U, 0U, func_Close);

#line 2386 "Library.ref"
refalrts::FnResult cookie_ns::close(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end, CloseMode mode
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
  switch (mode) {
  case cookie_ns::cCloseMode_Silent:
    if (handle) {
      if (! release_file_handle(vm, pfile_handle)) {
        return refalrts::cRecognitionImpossible;
      }
    }
    break;

  case cookie_ns::cCloseMode_Fail:
    if (! handle) {
      return refalrts::cRecognitionImpossible;
    }

    if (! release_file_handle(vm, pfile_handle)) {
      return refalrts::cRecognitionImpossible;
    }
    break;

  default:
    refalrts_switch_default_violation(mode);
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
}
#line 16138 "Library.cpp"

static refalrts::FnResult func_ExistFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2440 "Library.ref"
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

  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 16172 "Library.cpp"
}

static refalrts::NativeReference nat_ref_ExistFile("ExistFile", 0U, 0U, func_ExistFile);


static refalrts::FnResult func_GetCurrentDirectory(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2475 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  char directory[FILENAME_MAX + 1] = { '\0' };

  if (! refalrts::api::get_current_directory(directory, sizeof(directory))) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::Iter directory_b = 0, directory_e = 0;
  refalrts::alloc_string(vm, directory_b, directory_e, directory);
  refalrts::splice_evar(arg_begin, directory_b, directory_e);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);

  return refalrts::cSuccess;
#line 16203 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetCurrentDirectory("GetCurrentDirectory", 0U, 0U, func_GetCurrentDirectory);


static refalrts::FnResult func_RemoveFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2506 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter filename_b = content_b;
  refalrts::Iter filename_e = content_e;

  char filename[FILENAME_MAX + 1] = { '\0' };
  // возвращаемое значение не проверяем для совместимости с РЕФАЛом-5
  refalrts::read_chars(filename, FILENAME_MAX, filename_b, filename_e);

  const char *error_message = "";
  refalrts::RefalIdentifier i_result = USE_IDENT(False);

  if (! refalrts::empty_seq(filename_b, filename_e)) {
    error_message = "File name is too long.";
  } else {
    errno = 0;
    int result = remove(filename);

    if (result == 0) {
      i_result = USE_IDENT(True);
    } else {
      error_message = strerror(errno);
    }
  }

  refalrts::Iter error_b = 0, error_e = 0;
  refalrts::alloc_string(vm, error_b, error_e, error_message);
  refalrts::reinit_ident(arg_begin, i_result);
  refalrts::reinit_open_bracket(pfunc_name);
  refalrts::reinit_close_bracket(arg_end);
  refalrts::splice_evar(arg_end, error_b, error_e);
  refalrts::splice_to_freelist(vm, content_b, content_e);
  refalrts::link_brackets(pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 16252 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RemoveFile("RemoveFile", 0U, 0U, func_RemoveFile);


static refalrts::FnResult func_Implodeu_Ext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2552 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  std::vector<char> ident_str;
  refalrts::FnResult res = string_from_seq(ident_str, content_b, content_e);

  if (res != refalrts::cSuccess) {
    return res;
  }

  refalrts::RefalIdentifier ident = refalrts::ident_implode(vm, &ident_str[0]);

  if (! ident) {
    return refalrts::cIdentTableLimit;
  }

  refalrts::reinit_ident(arg_begin, ident);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);

  return refalrts::cSuccess;
#line 16286 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Implodeu_Ext("Implode_Ext", 0U, 0U, func_Implodeu_Ext);


static refalrts::FnResult func_Explodeu_Ext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Explode_Ext/4 s.Compound#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Compound#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & __Step-Start/7 >/8 Tile{ AsIs: </0 Reuse: & Explode/4 AsIs: s.Compound#1/5 AsIs: >/1 } </9 & __Step-End/10 >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Explode]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Explodeu_Ext("Explode_Ext", 0U, 0U, func_Explodeu_Ext);

#line 2590 "Library.ref"
namespace {

refalrts::GlobalRef<clock_t> g_time_elapsed_edge;

}  // unnamed namespace
#line 16347 "Library.cpp"

static refalrts::FnResult func_TimeElapsed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2599 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  bool make_edge = refalrts::number_left(0, content_b, content_e) != 0;

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  const double fClocksPerSec = CLOCKS_PER_SEC;
  clock_t now = clock();
  double time_elapsed = (now - g_time_elapsed_edge.ref(vm)) / fClocksPerSec;

  char str_time_elapsed[
    DBL_MAX_10_EXP + 1 /* maximum digits before point */
    + 1 /* point */
    + 6 /* default digits after point for sprintf */
    + 1 /* last '\0' */
    + 10 /* just in case */
  ] = { '\0' };

  sprintf(str_time_elapsed, "%f", time_elapsed);

  refalrts::alloc_string(vm, content_b, content_e, str_time_elapsed);

  if (make_edge) {
    g_time_elapsed_edge.ref(vm) = now;
  }

  refalrts::splice_evar(arg_begin, content_b, content_e);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 16387 "Library.cpp"
}

static refalrts::NativeReference nat_ref_TimeElapsed("TimeElapsed", 0U, 0U, func_TimeElapsed);


static refalrts::FnResult func_Compare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Compare/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Compare/4 s.First#1/7 s.Second#1/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.First#1: 7
    //DEBUG: s.Second#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compare-Digits/4 AsIs: s.First#1/7 AsIs: s.Second#1/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Comparem_Digits]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare/4 e.ArithmArg#1/2 >/1
  // closed e.ArithmArg#1 as range 2
  //DEBUG: e.ArithmArg#1: 2
  //2: e.ArithmArg#1
  //10: e.ArithmArg#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Compare_S2C1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_NormArithmArg]);
  refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </5 & Compare$2?1/9 (/12 e.First#2/10 )/13 e.Second#2/7 >/6
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.First#2 as range 10
    // closed e.Second#2 as range 7
    //DEBUG: e.ArithmArg#1: 2
    //DEBUG: e.First#2: 10
    //DEBUG: e.Second#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare/4 e.ArithmArg#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: </5 Reuse: & Compare-Normed/9 AsIs: (/12 AsIs: e.First#2/10 AsIs: )/13 AsIs: e.Second#2/7 AsIs: >/6 } Tile{ ]] }
    refalrts::update_name(context[9], functions[efunc_Comparem_Normed]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[5], context[6]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Compare("Compare", 0U, 0U, func_Compare);


static refalrts::FnResult func_Comparem_Normed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Compare-Normed/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compare-Normed/4 (/7 s.new#1/9 e.new#2/5 )/8 s.new#3/10 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Compare-Normed/4 (/7 '+'/9 e.new#5/11 )/8 s.new#6/10 e.new#7/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::char_term( '+', context[9] ) )
      continue;
    // closed e.new#5 as range 11
    // closed e.new#7 as range 13
    do {
      // </0 & Compare-Normed/4 (/7 '+'/9 e.First#1/15 )/8 '+'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '+', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '+'/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compare-Nat/4 AsIs: (/7 } Tile{ AsIs: e.First#1/15 } Tile{ HalfReuse: )/10 AsIs: e.Second#1/17 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Comparem_Nat]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compare-Normed/4 (/7 '+'/9 e.First#1/15 )/8 '-'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '-', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 '+'/9 e.First#1/15 )/8 '-'/10 e.Second#1/17 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '+'/1 ]] }
      refalrts::reinit_char(context[1], '+');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compare-Normed/4 (/7 '+'/9 e.First#1/15 )/8 0/10 >/1
    context[15] = context[11];
    context[16] = context[12];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.First#1 as range 15
    //DEBUG: e.First#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 '+'/9 e.First#1/15 )/8 0/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '+'/1 ]] }
    refalrts::reinit_char(context[1], '+');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Compare-Normed/4 (/7 '-'/9 e.new#5/11 )/8 s.new#6/10 e.new#7/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::char_term( '-', context[9] ) )
      continue;
    // closed e.new#5 as range 11
    // closed e.new#7 as range 13
    do {
      // </0 & Compare-Normed/4 (/7 '-'/9 e.First#1/15 )/8 '+'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '+', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 '-'/9 e.First#1/15 )/8 '+'/10 e.Second#1/17 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '-'/1 ]] }
      refalrts::reinit_char(context[1], '-');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compare-Normed/4 (/7 '-'/9 e.First#1/15 )/8 '-'/10 e.Second#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::char_term( '-', context[10] ) )
        continue;
      // closed e.First#1 as range 15
      // closed e.Second#1 as range 17
      //DEBUG: e.First#1: 15
      //DEBUG: e.Second#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '-'/9 {REMOVED TILE} {REMOVED TILE} '-'/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compare-Nat/4 AsIs: (/7 } Tile{ AsIs: e.Second#1/17 } Tile{ AsIs: )/8 } Tile{ AsIs: e.First#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Comparem_Nat]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compare-Normed/4 (/7 '-'/9 e.First#1/15 )/8 0/10 >/1
    context[15] = context[11];
    context[16] = context[12];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.First#1 as range 15
    //DEBUG: e.First#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 '-'/9 e.First#1/15 )/8 0/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '-'/1 ]] }
    refalrts::reinit_char(context[1], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare-Normed/4 (/7 0/9 )/8 s.new#5/10 e.new#6/2 >/1
  if( ! refalrts::number_term( 0UL, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & Compare-Normed/4 (/7 0/9 )/8 '+'/10 e.Second#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::char_term( '+', context[10] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 0/9 )/8 '+'/10 e.Second#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '-'/1 ]] }
    refalrts::reinit_char(context[1], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Compare-Normed/4 (/7 0/9 )/8 '-'/10 e.Second#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::char_term( '-', context[10] ) )
      continue;
    // closed e.Second#1 as range 11
    //DEBUG: e.Second#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 0/9 )/8 '-'/10 e.Second#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '+'/1 ]] }
    refalrts::reinit_char(context[1], '+');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare-Normed/4 (/7 0/9 )/8 0/10 >/1
  if( ! refalrts::number_term( 0UL, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Compare-Normed/4 (/7 0/9 )/8 0/10 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
  refalrts::reinit_char(context[1], '0');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Comparem_Normed("Compare-Normed", 2948557630U, 3778842242U, func_Comparem_Normed);


static refalrts::FnResult func_Comparem_Nat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Compare-Nat/4 (/7 e.First#1/5 )/8 e.Second#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.First#1 as range 5
  // closed e.Second#1 as range 2
  //DEBUG: e.First#1: 5
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compare-Align/4 AsIs: (/7 } (/9 )/10 Tile{ AsIs: e.First#1/5 } )/11 (/12 Tile{ AsIs: )/8 AsIs: e.Second#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Comparem_Align]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Comparem_Nat("Compare-Nat", 2948557630U, 3778842242U, func_Comparem_Nat);


static refalrts::FnResult func_Comparem_Align(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Compare-Align/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compare-Align/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 (/15 e.new#3/13 )/16 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  // closed e.new#3 as range 13
  // closed e.new#4 as range 2
  do {
    // </0 & Compare-Align/4 (/7 (/11 e.new#5/17 )/12 s.new#6/25 e.new#7/19 )/8 (/15 e.new#8/21 )/16 e.new#9/23 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.new#5 as range 17
    // closed e.new#8 as range 21
    // closed e.new#9 as range 23
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & Compare-Align/4 (/7 (/11 e.First-L#1/26 )/12 s.First-Dig#1/25 e.First-R#1/28 )/8 (/15 e.Second-L#1/30 )/16 s.Second-Dig#1/34 e.Second-R#1/32 >/1
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      // closed e.First-L#1 as range 26
      // closed e.First-R#1 as range 28
      // closed e.Second-L#1 as range 30
      if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
        continue;
      // closed e.Second-R#1 as range 32
      //DEBUG: s.First-Dig#1: 25
      //DEBUG: e.First-L#1: 26
      //DEBUG: e.First-R#1: 28
      //DEBUG: e.Second-L#1: 30
      //DEBUG: s.Second-Dig#1: 34
      //DEBUG: e.Second-R#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.First-Dig#1/25 {REMOVED TILE} {REMOVED TILE} s.Second-Dig#1/34 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Compare-Align/4 AsIs: (/7 AsIs: (/11 AsIs: e.First-L#1/26 HalfReuse: s.First-Dig1 #25/12 } )/35 Tile{ AsIs: e.First-R#1/28 } Tile{ AsIs: )/8 AsIs: (/15 AsIs: e.Second-L#1/30 HalfReuse: s.Second-Dig1 #34/16 } )/36 Tile{ AsIs: e.Second-R#1/32 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::reinit_svar( context[12], context[25] );
      refalrts::reinit_svar( context[16], context[34] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[36] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[8], context[16] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::splice_to_freelist_open( vm, context[12], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compare-Align/4 (/7 (/11 e.First-L#1/26 )/12 s.First-Dig#1/25 e.First-R#1/28 )/8 (/15 e.Second-L#1/30 )/16 >/1
    context[26] = context[17];
    context[27] = context[18];
    context[28] = context[19];
    context[29] = context[20];
    context[30] = context[21];
    context[31] = context[22];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.First-L#1 as range 26
    // closed e.First-R#1 as range 28
    // closed e.Second-L#1 as range 30
    //DEBUG: s.First-Dig#1: 25
    //DEBUG: e.First-L#1: 26
    //DEBUG: e.First-R#1: 28
    //DEBUG: e.Second-L#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Align/4 (/7 (/11 e.First-L#1/26 )/12 s.First-Dig#1/25 e.First-R#1/28 )/8 (/15 e.Second-L#1/30 )/16 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '+'/1 ]] }
    refalrts::reinit_char(context[1], '+');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare-Align/4 (/7 (/11 e.new#5/9 )/12 )/8 (/15 e.new#6/13 )/16 e.new#7/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  // closed e.new#6 as range 13
  // closed e.new#7 as range 2
  do {
    // </0 & Compare-Align/4 (/7 (/11 e.First-L#1/17 )/12 )/8 (/15 e.Second-L#1/19 )/16 s.Second-Dig#1/23 e.Second-R#1/21 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.First-L#1 as range 17
    // closed e.Second-L#1 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    // closed e.Second-R#1 as range 21
    //DEBUG: e.First-L#1: 17
    //DEBUG: e.Second-L#1: 19
    //DEBUG: s.Second-Dig#1: 23
    //DEBUG: e.Second-R#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-Align/4 (/7 (/11 e.First-L#1/17 )/12 )/8 (/15 e.Second-L#1/19 )/16 s.Second-Dig#1/23 e.Second-R#1/21 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '-'/1 ]] }
    refalrts::reinit_char(context[1], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare-Align/4 (/7 (/11 s.First-Dig#1/17 e.First#1/9 )/12 )/8 (/15 s.Second-Dig#1/18 e.Second#1/13 )/16 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.First#1 as range 9
  if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Second#1 as range 13
  //DEBUG: s.First-Dig#1: 17
  //DEBUG: e.First#1: 9
  //DEBUG: s.Second-Dig#1: 18
  //DEBUG: e.Second#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Second-Dig#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compare-ByDigits/4 HalfReuse: </7 HalfReuse: & Compare-Digits/11 AsIs: s.First-Dig#1/17 } Tile{ HalfReuse: s.Second-Dig1 #18/12 HalfReuse: >/8 AsIs: (/15 } Tile{ AsIs: e.First#1/9 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Second#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Comparem_ByDigits]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_Comparem_Digits]);
  refalrts::reinit_svar( context[12], context[18] );
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Comparem_Align("Compare-Align", 2948557630U, 3778842242U, func_Comparem_Align);


static refalrts::FnResult func_Comparem_ByDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Compare-ByDigits/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compare-ByDigits/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & Compare-ByDigits/4 '0'/5 (/8 e.new#4/10 )/9 e.new#5/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::char_term( '0', context[5] ) )
      continue;
    // closed e.new#4 as range 10
    // closed e.new#5 as range 12
    do {
      // </0 & Compare-ByDigits/4 '0'/5 (/8 s.First-Dig#1/18 e.First#1/14 )/9 s.Second-Dig#1/19 e.Second#1/16 >/1
      context[14] = context[10];
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      // closed e.First#1 as range 14
      if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
        continue;
      // closed e.Second#1 as range 16
      //DEBUG: s.First-Dig#1: 18
      //DEBUG: e.First#1: 14
      //DEBUG: s.Second-Dig#1: 19
      //DEBUG: e.Second#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Compare-ByDigits/4 HalfReuse: </5 HalfReuse: & Compare-Digits/8 AsIs: s.First-Dig#1/18 } Tile{ AsIs: s.Second-Dig#1/19 } >/20 (/21 Tile{ AsIs: e.First#1/14 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Second#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[8], functions[efunc_Comparem_Digits]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[21], context[9] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compare-ByDigits/4 '0'/5 (/8 )/9 >/1
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Compare-ByDigits/4 '0'/5 (/8 )/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char(context[1], '0');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compare-ByDigits/4 s.Compare-Res#1/5 (/8 e.First#1/6 )/9 e.Second#1/2 >/1
  // closed e.First#1 as range 6
  // closed e.Second#1 as range 2
  //DEBUG: s.Compare-Res#1: 5
  //DEBUG: e.First#1: 6
  //DEBUG: e.Second#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Compare-ByDigits/4 s.Compare-Res#1/5 (/8 e.First#1/6 )/9 e.Second#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Compare-Res1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Comparem_ByDigits("Compare-ByDigits", 2948557630U, 3778842242U, func_Comparem_ByDigits);


static refalrts::FnResult func_Comparem_Digits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2691 "Library.ref"
  ARITHM_PRELUDE

  char res = first < second ? '-' : first > second ? '+' : '0';

  refalrts::reinit_char(arg_begin, res);
  refalrts::splice_to_freelist(vm, pFunc, arg_end);
  return refalrts::cSuccess;
#line 17169 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Comparem_Digits("Compare-Digits", 2948557630U, 3778842242U, func_Comparem_Digits);


static refalrts::FnResult func_DeSysfun(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DeSysfun/4 e.FileName#1/2 (/7 s.Width#1/9 e.ObjectExpression#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.FileName#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ObjectExpression#1 as range 5
  //DEBUG: e.FileName#1: 2
  //DEBUG: s.Width#1: 9
  //DEBUG: e.ObjectExpression#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & __Step-Start/11 >/12 Tile{ AsIs: </0 Reuse: & Sysfun-Xxout/4 AsIs: e.FileName#1/2 AsIs: (/7 AsIs: s.Width#1/9 AsIs: e.ObjectExpression#1/5 AsIs: )/8 AsIs: >/1 } </13 & __Step-End/14 >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Stepm_End]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Sysfunm_Xxout]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DeSysfun("DeSysfun", 0U, 0U, func_DeSysfun);

#line 2726 "Library.ref"
namespace {

class RndGen {
  /*
    See D. E. Knuth, The Art of Computer Programming,
    Volume 2, chapter 3.2.2, program A
  */
public:
  typedef refalrts::RefalNumber UInt;

  enum {
    cMaxVal = ~(UInt(0)),
    cMinDelay = 24,
    cMaxDelay = 55,
  };

  RndGen();

  UInt next_value() {
    m_y[m_k] = m_y[m_k] + m_y[m_j];
    UInt result = m_y[m_k];
    m_k = (m_k + cMaxDelay - 1) % cMaxDelay;
    m_j = (m_j + cMaxDelay - 1) % cMaxDelay;
    return result;
  }

  UInt next_in_range(UInt max);

private:
  /*
    Variable names from Knuth.
  */
  int m_k;
  int m_j;
  UInt m_y[cMaxDelay];
};

RndGen::RndGen()
  : m_k(cMaxDelay - 1), m_j(cMinDelay - 1)
{
  UInt seed = static_cast<UInt>(time(NULL));

  for (size_t i = 0; i < cMaxDelay; ++i) {
    seed = seed * 1103515245 + 12345;
    m_y[i] = seed;
  }
}

RndGen::UInt RndGen::next_in_range(RndGen::UInt max) {
  if (0 == max) {
    return 0;
  } else if (cMaxVal == max) {
    return next_value();
  } else {
    ++max;

    const UInt cBucketSize = cMaxVal / max;
    const UInt cInvalid = cBucketSize * max;
    UInt val;

    do {
      val = next_value();
    } while(val > cInvalid);

    return val / cBucketSize;
  }
}

refalrts::GlobalRef<RndGen*> g_gen;

bool positive_digit_arg(
  refalrts::Iter& pfunc_name, refalrts::RefalNumber& value,
  refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
  refalrts::Iter content_b = 0, content_e = 0;
  pfunc_name = refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  // don't check return value
  refalrts::char_left('+', content_b, content_e);

  refalrts::Iter pnumber = 0;
  if (
    refalrts::svar_left(pnumber, content_b, content_e)
    && refalrts::empty_seq(content_b, content_e)
    && refalrts::cDataNumber == pnumber->tag
  ) {
    value = pnumber->number_info;
    return true;
  } else {
    return false;
  }
}

}  // unnamed namespace
#line 17328 "Library.cpp"

static refalrts::FnResult func_Random(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2824 "Library.ref"
  refalrts::Iter pfunc_name = 0;
  refalrts::RefalNumber max = 0;

  if (! positive_digit_arg(pfunc_name, max, arg_begin, arg_end)) {
    return refalrts::cRecognitionImpossible;
  }

  max = g_gen.ref(vm)->next_in_range(max);

  if (0 == max) {
    max = 1;
  }

  refalrts::reset_allocator(vm);
  bool zero = true;
  for (size_t i = 0; i < static_cast<size_t>(max); ++i) {
    refalrts::RefalNumber digit = g_gen.ref(vm)->next_value();
    if (digit != 0 || ! zero) {
      zero = false;

      refalrts::Iter dummy = 0;
      refalrts::alloc_number(vm, dummy, digit);
    }
  }

  if (zero) {
    refalrts::Iter dummy = 0;
    refalrts::alloc_number(vm, dummy, 0);
  }

  refalrts::splice_from_freelist(vm, arg_begin);
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);

  return refalrts::cSuccess;
#line 17370 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Random("Random", 0U, 0U, func_Random);


static refalrts::FnResult func_RandomDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2869 "Library.ref"
  refalrts::Iter pfunc_name = 0;
  refalrts::RefalNumber max = 0;

  if (! positive_digit_arg(pfunc_name, max, arg_begin, arg_end)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber digit = g_gen.ref(vm)->next_in_range(max);

  refalrts::reinit_number(arg_begin, digit);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);

  return refalrts::cSuccess;
#line 17395 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RandomDigit("RandomDigit", 0U, 0U, func_RandomDigit);


static refalrts::FnResult func_Write(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Write/4 s.FileNo#1/5 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnyExpression#1 as range 2
  //DEBUG: s.FileNo#1: 5
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-Start/4 } >/6 </7 & Autoopen/8 'w'/9 Tile{ AsIs: s.FileNo#1/5 } >/10 </11 & Write-Aux/12 </13 & ZeroHandle/14 s.FileNo#1/5/15 # stderr/16 >/17 Tile{ AsIs: e.AnyExpression#1/2 } >/18 </19 & __Step-End/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Autoopen]);
  refalrts::alloc_char(vm, context[9], 'w');
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Writem_Aux]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ZeroHandle]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_stderr]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_u_u_Stepm_End]);
  refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Start]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Write("Write", 0U, 0U, func_Write);


static refalrts::FnResult func_Writem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2899 "Library.ref"
  return cookie_ns::fwrite_line(
    vm, identifiers, arg_begin, arg_end, cookie_ns::cFlags_NoEOL
  );
#line 17475 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Writem_Aux("Write-Aux", 2948557630U, 3778842242U, func_Writem_Aux);


static refalrts::FnResult func_ListOfBuiltin(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 307 elems
  refalrts::Iter context[307];
  refalrts::zeros( context, 307 );
  // </0 & ListOfBuiltin/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: 1/4 HalfReuse: # Mu/1 } # special/5 )/6 (/7 2/8 # Add/9 # regular/10 )/11 (/12 3/13 # Arg/14 # regular/15 )/16 (/17 4/18 # Br/19 # regular/20 )/21 (/22 5/23 # Card/24 # regular/25 )/26 (/27 6/28 # Chr/29 # regular/30 )/31 (/32 7/33 # Cp/34 # regular/35 )/36 (/37 8/38 # Dg/39 # regular/40 )/41 (/42 9/43 # Dgall/44 # regular/45 )/46 (/47 10/48 # Div/49 # regular/50 )/51 (/52 11/53 # Divmod/54 # regular/55 )/56 (/57 12/58 # Explode/59 # regular/60 )/61 (/62 13/63 # First/64 # regular/65 )/66 (/67 14/68 # Get/69 # regular/70 )/71 (/72 15/73 # Implode/74 # regular/75 )/76 (/77 16/78 # Last/79 # regular/80 )/81 (/82 17/83 # Lenw/84 # regular/85 )/86 (/87 18/88 # Lower/89 # regular/90 )/91 (/92 19/93 # Mod/94 # regular/95 )/96 (/97 20/98 # Mul/99 # regular/100 )/101 (/102 21/103 # Numb/104 # regular/105 )/106 (/107 22/108 # Open/109 # regular/110 )/111 (/112 23/113 # Ord/114 # regular/115 )/116 (/117 24/118 # Print/119 # regular/120 )/121 (/122 25/123 # Prout/124 # regular/125 )/126 (/127 26/128 # Put/129 # regular/130 )/131 (/132 27/133 # Putout/134 # regular/135 )/136 (/137 28/138 # Rp/139 # regular/140 )/141 (/142 29/143 # Step/144 # regular/145 )/146 (/147 30/148 # Sub/149 # regular/150 )/151 (/152 31/153 # Symb/154 # regular/155 )/156 (/157 32/158 # Time/159 # regular/160 )/161 (/162 33/163 # Type/164 # regular/165 )/166 (/167 34/168 # Upper/169 # regular/170 )/171 (/172 35/173 # Sysfun/174 # regular/175 )/176 (/177 45/178 # Freeze/179 # regular/180 )/181 (/182 46/183 # Freezer/184 # regular/185 )/186 (/187 47/188 # Dn/189 # regular/190 )/191 (/192 48/193 # Up/194 # special/195 )/196 (/197 49/198 # Ev-met/199 # special/200 )/201 (/202 50/203 # Residue/204 # special/205 )/206 (/207 51/208 # GetEnv/209 # regular/210 )/211 (/212 52/213 # System/214 # regular/215 )/216 (/217 53/218 # Exit/219 # regular/220 )/221 (/222 54/223 # Close/224 # regular/225 )/226 (/227 55/228 # ExistFile/229 # regular/230 )/231 (/232 56/233 # GetCurrentDirectory/234 # regular/235 )/236 (/237 57/238 # RemoveFile/239 # regular/240 )/241 (/242 58/243 # Implode_Ext/244 # regular/245 )/246 (/247 59/248 # Explode_Ext/249 # regular/250 )/251 (/252 60/253 # TimeElapsed/254 # regular/255 )/256 (/257 61/258 # Compare/259 # regular/260 )/261 (/262 62/263 # DeSysfun/264 # regular/265 )/266 (/267 63/268 # XMLParse/269 # regular/270 )/271 (/272 64/273 # Random/274 # regular/275 )/276 (/277 65/278 # RandomDigit/279 # regular/280 )/281 (/282 66/283 # Write/284 # regular/285 )/286 (/287 67/288 # ListOfBuiltin/289 # regular/290 )/291 (/292 68/293 # SizeOf/294 # regular/295 )/296 (/297 69/298 # GetPID/299 # regular/300 )/301 (/302 71/303 # GetPPID/304 # regular/305 )/306 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_special]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_number(vm, context[8], 2UL);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Add]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_number(vm, context[13], 3UL);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_Arg]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_number(vm, context[18], 4UL);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Br]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_number(vm, context[23], 5UL);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_Card]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_number(vm, context[28], 6UL);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_Chr]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_number(vm, context[33], 7UL);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_Cp]);
  refalrts::alloc_ident(vm, context[35], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_number(vm, context[38], 8UL);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Dg]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_number(vm, context[43], 9UL);
  refalrts::alloc_ident(vm, context[44], identifiers[ident_Dgall]);
  refalrts::alloc_ident(vm, context[45], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_open_bracket(vm, context[47]);
  refalrts::alloc_number(vm, context[48], 10UL);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_Div]);
  refalrts::alloc_ident(vm, context[50], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_number(vm, context[53], 11UL);
  refalrts::alloc_ident(vm, context[54], identifiers[ident_Divmod]);
  refalrts::alloc_ident(vm, context[55], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[56]);
  refalrts::alloc_open_bracket(vm, context[57]);
  refalrts::alloc_number(vm, context[58], 12UL);
  refalrts::alloc_ident(vm, context[59], identifiers[ident_Explode]);
  refalrts::alloc_ident(vm, context[60], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_open_bracket(vm, context[62]);
  refalrts::alloc_number(vm, context[63], 13UL);
  refalrts::alloc_ident(vm, context[64], identifiers[ident_First]);
  refalrts::alloc_ident(vm, context[65], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[66]);
  refalrts::alloc_open_bracket(vm, context[67]);
  refalrts::alloc_number(vm, context[68], 14UL);
  refalrts::alloc_ident(vm, context[69], identifiers[ident_Get]);
  refalrts::alloc_ident(vm, context[70], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::alloc_open_bracket(vm, context[72]);
  refalrts::alloc_number(vm, context[73], 15UL);
  refalrts::alloc_ident(vm, context[74], identifiers[ident_Implode]);
  refalrts::alloc_ident(vm, context[75], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[76]);
  refalrts::alloc_open_bracket(vm, context[77]);
  refalrts::alloc_number(vm, context[78], 16UL);
  refalrts::alloc_ident(vm, context[79], identifiers[ident_Last]);
  refalrts::alloc_ident(vm, context[80], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[81]);
  refalrts::alloc_open_bracket(vm, context[82]);
  refalrts::alloc_number(vm, context[83], 17UL);
  refalrts::alloc_ident(vm, context[84], identifiers[ident_Lenw]);
  refalrts::alloc_ident(vm, context[85], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[86]);
  refalrts::alloc_open_bracket(vm, context[87]);
  refalrts::alloc_number(vm, context[88], 18UL);
  refalrts::alloc_ident(vm, context[89], identifiers[ident_Lower]);
  refalrts::alloc_ident(vm, context[90], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[91]);
  refalrts::alloc_open_bracket(vm, context[92]);
  refalrts::alloc_number(vm, context[93], 19UL);
  refalrts::alloc_ident(vm, context[94], identifiers[ident_Mod]);
  refalrts::alloc_ident(vm, context[95], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[96]);
  refalrts::alloc_open_bracket(vm, context[97]);
  refalrts::alloc_number(vm, context[98], 20UL);
  refalrts::alloc_ident(vm, context[99], identifiers[ident_Mul]);
  refalrts::alloc_ident(vm, context[100], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[101]);
  refalrts::alloc_open_bracket(vm, context[102]);
  refalrts::alloc_number(vm, context[103], 21UL);
  refalrts::alloc_ident(vm, context[104], identifiers[ident_Numb]);
  refalrts::alloc_ident(vm, context[105], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[106]);
  refalrts::alloc_open_bracket(vm, context[107]);
  refalrts::alloc_number(vm, context[108], 22UL);
  refalrts::alloc_ident(vm, context[109], identifiers[ident_Open]);
  refalrts::alloc_ident(vm, context[110], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[111]);
  refalrts::alloc_open_bracket(vm, context[112]);
  refalrts::alloc_number(vm, context[113], 23UL);
  refalrts::alloc_ident(vm, context[114], identifiers[ident_Ord]);
  refalrts::alloc_ident(vm, context[115], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[116]);
  refalrts::alloc_open_bracket(vm, context[117]);
  refalrts::alloc_number(vm, context[118], 24UL);
  refalrts::alloc_ident(vm, context[119], identifiers[ident_Print]);
  refalrts::alloc_ident(vm, context[120], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[121]);
  refalrts::alloc_open_bracket(vm, context[122]);
  refalrts::alloc_number(vm, context[123], 25UL);
  refalrts::alloc_ident(vm, context[124], identifiers[ident_Prout]);
  refalrts::alloc_ident(vm, context[125], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[126]);
  refalrts::alloc_open_bracket(vm, context[127]);
  refalrts::alloc_number(vm, context[128], 26UL);
  refalrts::alloc_ident(vm, context[129], identifiers[ident_Put]);
  refalrts::alloc_ident(vm, context[130], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[131]);
  refalrts::alloc_open_bracket(vm, context[132]);
  refalrts::alloc_number(vm, context[133], 27UL);
  refalrts::alloc_ident(vm, context[134], identifiers[ident_Putout]);
  refalrts::alloc_ident(vm, context[135], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[136]);
  refalrts::alloc_open_bracket(vm, context[137]);
  refalrts::alloc_number(vm, context[138], 28UL);
  refalrts::alloc_ident(vm, context[139], identifiers[ident_Rp]);
  refalrts::alloc_ident(vm, context[140], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[141]);
  refalrts::alloc_open_bracket(vm, context[142]);
  refalrts::alloc_number(vm, context[143], 29UL);
  refalrts::alloc_ident(vm, context[144], identifiers[ident_Step]);
  refalrts::alloc_ident(vm, context[145], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[146]);
  refalrts::alloc_open_bracket(vm, context[147]);
  refalrts::alloc_number(vm, context[148], 30UL);
  refalrts::alloc_ident(vm, context[149], identifiers[ident_Sub]);
  refalrts::alloc_ident(vm, context[150], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[151]);
  refalrts::alloc_open_bracket(vm, context[152]);
  refalrts::alloc_number(vm, context[153], 31UL);
  refalrts::alloc_ident(vm, context[154], identifiers[ident_Symb]);
  refalrts::alloc_ident(vm, context[155], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[156]);
  refalrts::alloc_open_bracket(vm, context[157]);
  refalrts::alloc_number(vm, context[158], 32UL);
  refalrts::alloc_ident(vm, context[159], identifiers[ident_Time]);
  refalrts::alloc_ident(vm, context[160], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[161]);
  refalrts::alloc_open_bracket(vm, context[162]);
  refalrts::alloc_number(vm, context[163], 33UL);
  refalrts::alloc_ident(vm, context[164], identifiers[ident_Type]);
  refalrts::alloc_ident(vm, context[165], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[166]);
  refalrts::alloc_open_bracket(vm, context[167]);
  refalrts::alloc_number(vm, context[168], 34UL);
  refalrts::alloc_ident(vm, context[169], identifiers[ident_Upper]);
  refalrts::alloc_ident(vm, context[170], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[171]);
  refalrts::alloc_open_bracket(vm, context[172]);
  refalrts::alloc_number(vm, context[173], 35UL);
  refalrts::alloc_ident(vm, context[174], identifiers[ident_Sysfun]);
  refalrts::alloc_ident(vm, context[175], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[176]);
  refalrts::alloc_open_bracket(vm, context[177]);
  refalrts::alloc_number(vm, context[178], 45UL);
  refalrts::alloc_ident(vm, context[179], identifiers[ident_Freeze]);
  refalrts::alloc_ident(vm, context[180], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[181]);
  refalrts::alloc_open_bracket(vm, context[182]);
  refalrts::alloc_number(vm, context[183], 46UL);
  refalrts::alloc_ident(vm, context[184], identifiers[ident_Freezer]);
  refalrts::alloc_ident(vm, context[185], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[186]);
  refalrts::alloc_open_bracket(vm, context[187]);
  refalrts::alloc_number(vm, context[188], 47UL);
  refalrts::alloc_ident(vm, context[189], identifiers[ident_Dn]);
  refalrts::alloc_ident(vm, context[190], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[191]);
  refalrts::alloc_open_bracket(vm, context[192]);
  refalrts::alloc_number(vm, context[193], 48UL);
  refalrts::alloc_ident(vm, context[194], identifiers[ident_Up]);
  refalrts::alloc_ident(vm, context[195], identifiers[ident_special]);
  refalrts::alloc_close_bracket(vm, context[196]);
  refalrts::alloc_open_bracket(vm, context[197]);
  refalrts::alloc_number(vm, context[198], 49UL);
  refalrts::alloc_ident(vm, context[199], identifiers[ident_Evm_met]);
  refalrts::alloc_ident(vm, context[200], identifiers[ident_special]);
  refalrts::alloc_close_bracket(vm, context[201]);
  refalrts::alloc_open_bracket(vm, context[202]);
  refalrts::alloc_number(vm, context[203], 50UL);
  refalrts::alloc_ident(vm, context[204], identifiers[ident_Residue]);
  refalrts::alloc_ident(vm, context[205], identifiers[ident_special]);
  refalrts::alloc_close_bracket(vm, context[206]);
  refalrts::alloc_open_bracket(vm, context[207]);
  refalrts::alloc_number(vm, context[208], 51UL);
  refalrts::alloc_ident(vm, context[209], identifiers[ident_GetEnv]);
  refalrts::alloc_ident(vm, context[210], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[211]);
  refalrts::alloc_open_bracket(vm, context[212]);
  refalrts::alloc_number(vm, context[213], 52UL);
  refalrts::alloc_ident(vm, context[214], identifiers[ident_System]);
  refalrts::alloc_ident(vm, context[215], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[216]);
  refalrts::alloc_open_bracket(vm, context[217]);
  refalrts::alloc_number(vm, context[218], 53UL);
  refalrts::alloc_ident(vm, context[219], identifiers[ident_Exit]);
  refalrts::alloc_ident(vm, context[220], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[221]);
  refalrts::alloc_open_bracket(vm, context[222]);
  refalrts::alloc_number(vm, context[223], 54UL);
  refalrts::alloc_ident(vm, context[224], identifiers[ident_Close]);
  refalrts::alloc_ident(vm, context[225], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[226]);
  refalrts::alloc_open_bracket(vm, context[227]);
  refalrts::alloc_number(vm, context[228], 55UL);
  refalrts::alloc_ident(vm, context[229], identifiers[ident_ExistFile]);
  refalrts::alloc_ident(vm, context[230], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[231]);
  refalrts::alloc_open_bracket(vm, context[232]);
  refalrts::alloc_number(vm, context[233], 56UL);
  refalrts::alloc_ident(vm, context[234], identifiers[ident_GetCurrentDirectory]);
  refalrts::alloc_ident(vm, context[235], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[236]);
  refalrts::alloc_open_bracket(vm, context[237]);
  refalrts::alloc_number(vm, context[238], 57UL);
  refalrts::alloc_ident(vm, context[239], identifiers[ident_RemoveFile]);
  refalrts::alloc_ident(vm, context[240], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[241]);
  refalrts::alloc_open_bracket(vm, context[242]);
  refalrts::alloc_number(vm, context[243], 58UL);
  refalrts::alloc_ident(vm, context[244], identifiers[ident_Implodeu_Ext]);
  refalrts::alloc_ident(vm, context[245], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[246]);
  refalrts::alloc_open_bracket(vm, context[247]);
  refalrts::alloc_number(vm, context[248], 59UL);
  refalrts::alloc_ident(vm, context[249], identifiers[ident_Explodeu_Ext]);
  refalrts::alloc_ident(vm, context[250], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[251]);
  refalrts::alloc_open_bracket(vm, context[252]);
  refalrts::alloc_number(vm, context[253], 60UL);
  refalrts::alloc_ident(vm, context[254], identifiers[ident_TimeElapsed]);
  refalrts::alloc_ident(vm, context[255], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[256]);
  refalrts::alloc_open_bracket(vm, context[257]);
  refalrts::alloc_number(vm, context[258], 61UL);
  refalrts::alloc_ident(vm, context[259], identifiers[ident_Compare]);
  refalrts::alloc_ident(vm, context[260], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[261]);
  refalrts::alloc_open_bracket(vm, context[262]);
  refalrts::alloc_number(vm, context[263], 62UL);
  refalrts::alloc_ident(vm, context[264], identifiers[ident_DeSysfun]);
  refalrts::alloc_ident(vm, context[265], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[266]);
  refalrts::alloc_open_bracket(vm, context[267]);
  refalrts::alloc_number(vm, context[268], 63UL);
  refalrts::alloc_ident(vm, context[269], identifiers[ident_XMLParse]);
  refalrts::alloc_ident(vm, context[270], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[271]);
  refalrts::alloc_open_bracket(vm, context[272]);
  refalrts::alloc_number(vm, context[273], 64UL);
  refalrts::alloc_ident(vm, context[274], identifiers[ident_Random]);
  refalrts::alloc_ident(vm, context[275], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[276]);
  refalrts::alloc_open_bracket(vm, context[277]);
  refalrts::alloc_number(vm, context[278], 65UL);
  refalrts::alloc_ident(vm, context[279], identifiers[ident_RandomDigit]);
  refalrts::alloc_ident(vm, context[280], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[281]);
  refalrts::alloc_open_bracket(vm, context[282]);
  refalrts::alloc_number(vm, context[283], 66UL);
  refalrts::alloc_ident(vm, context[284], identifiers[ident_Write]);
  refalrts::alloc_ident(vm, context[285], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[286]);
  refalrts::alloc_open_bracket(vm, context[287]);
  refalrts::alloc_number(vm, context[288], 67UL);
  refalrts::alloc_ident(vm, context[289], identifiers[ident_ListOfBuiltin]);
  refalrts::alloc_ident(vm, context[290], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[291]);
  refalrts::alloc_open_bracket(vm, context[292]);
  refalrts::alloc_number(vm, context[293], 68UL);
  refalrts::alloc_ident(vm, context[294], identifiers[ident_SizeOf]);
  refalrts::alloc_ident(vm, context[295], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[296]);
  refalrts::alloc_open_bracket(vm, context[297]);
  refalrts::alloc_number(vm, context[298], 69UL);
  refalrts::alloc_ident(vm, context[299], identifiers[ident_GetPID]);
  refalrts::alloc_ident(vm, context[300], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[301]);
  refalrts::alloc_open_bracket(vm, context[302]);
  refalrts::alloc_number(vm, context[303], 71UL);
  refalrts::alloc_ident(vm, context[304], identifiers[ident_GetPPID]);
  refalrts::alloc_ident(vm, context[305], identifiers[ident_regular]);
  refalrts::alloc_close_bracket(vm, context[306]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::reinit_ident(context[1], identifiers[ident_Mu]);
  refalrts::link_brackets( context[302], context[306] );
  refalrts::link_brackets( context[297], context[301] );
  refalrts::link_brackets( context[292], context[296] );
  refalrts::link_brackets( context[287], context[291] );
  refalrts::link_brackets( context[282], context[286] );
  refalrts::link_brackets( context[277], context[281] );
  refalrts::link_brackets( context[272], context[276] );
  refalrts::link_brackets( context[267], context[271] );
  refalrts::link_brackets( context[262], context[266] );
  refalrts::link_brackets( context[257], context[261] );
  refalrts::link_brackets( context[252], context[256] );
  refalrts::link_brackets( context[247], context[251] );
  refalrts::link_brackets( context[242], context[246] );
  refalrts::link_brackets( context[237], context[241] );
  refalrts::link_brackets( context[232], context[236] );
  refalrts::link_brackets( context[227], context[231] );
  refalrts::link_brackets( context[222], context[226] );
  refalrts::link_brackets( context[217], context[221] );
  refalrts::link_brackets( context[212], context[216] );
  refalrts::link_brackets( context[207], context[211] );
  refalrts::link_brackets( context[202], context[206] );
  refalrts::link_brackets( context[197], context[201] );
  refalrts::link_brackets( context[192], context[196] );
  refalrts::link_brackets( context[187], context[191] );
  refalrts::link_brackets( context[182], context[186] );
  refalrts::link_brackets( context[177], context[181] );
  refalrts::link_brackets( context[172], context[176] );
  refalrts::link_brackets( context[167], context[171] );
  refalrts::link_brackets( context[162], context[166] );
  refalrts::link_brackets( context[157], context[161] );
  refalrts::link_brackets( context[152], context[156] );
  refalrts::link_brackets( context[147], context[151] );
  refalrts::link_brackets( context[142], context[146] );
  refalrts::link_brackets( context[137], context[141] );
  refalrts::link_brackets( context[132], context[136] );
  refalrts::link_brackets( context[127], context[131] );
  refalrts::link_brackets( context[122], context[126] );
  refalrts::link_brackets( context[117], context[121] );
  refalrts::link_brackets( context[112], context[116] );
  refalrts::link_brackets( context[107], context[111] );
  refalrts::link_brackets( context[102], context[106] );
  refalrts::link_brackets( context[97], context[101] );
  refalrts::link_brackets( context[92], context[96] );
  refalrts::link_brackets( context[87], context[91] );
  refalrts::link_brackets( context[82], context[86] );
  refalrts::link_brackets( context[77], context[81] );
  refalrts::link_brackets( context[72], context[76] );
  refalrts::link_brackets( context[67], context[71] );
  refalrts::link_brackets( context[62], context[66] );
  refalrts::link_brackets( context[57], context[61] );
  refalrts::link_brackets( context[52], context[56] );
  refalrts::link_brackets( context[47], context[51] );
  refalrts::link_brackets( context[42], context[46] );
  refalrts::link_brackets( context[37], context[41] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::link_brackets( context[27], context[31] );
  refalrts::link_brackets( context[22], context[26] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[0], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[306] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ListOfBuiltin("ListOfBuiltin", 0U, 0U, func_ListOfBuiltin);


static refalrts::FnResult func_SizeOf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 2986 "Library.ref"
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter ptype = 0;
  if (
    ! refalrts::svar_left(ptype, content_b, content_e)
    || refalrts::cDataChar != ptype->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber result;

  switch (ptype->char_info) {
    case 'c': result = sizeof(char); break;
    case 's': result = sizeof(short); break;
    case 'i': result = sizeof(int); break;
    case 'l': result = sizeof(long); break;
    case 'p': result = sizeof(char *); break;

    default:
      return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, result);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 17914 "Library.cpp"
}

static refalrts::NativeReference nat_ref_SizeOf("SizeOf", 0U, 0U, func_SizeOf);

#line 3023 "Library.ref"
namespace cookie_ns {

refalrts::FnResult return_pid(
  refalrts::VM *vm,
  refalrts::RefalNumber pid, refalrts::Iter arg_begin, refalrts::Iter arg_end
);

}  // namespace cookie_ns
#line 17928 "Library.cpp"

static refalrts::FnResult func_GetPID(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3035 "Library.ref"
  return cookie_ns::return_pid(
    vm, refalrts::api::get_pid(), arg_begin, arg_end
  );
#line 17939 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetPID("GetPID", 0U, 0U, func_GetPID);

#line 3042 "Library.ref"
refalrts::FnResult cookie_ns::return_pid(
  refalrts::VM *vm,
  refalrts::RefalNumber pid, refalrts::Iter arg_begin, refalrts::Iter arg_end
) {
  refalrts::Iter content_b = 0, content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, pid);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
}
#line 17961 "Library.cpp"

static refalrts::FnResult func_GetPPID(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3066 "Library.ref"
  return cookie_ns::return_pid(
    vm, refalrts::api::get_ppid(), arg_begin, arg_end
  );
#line 17972 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetPPID("GetPPID", 0U, 0U, func_GetPPID);


static refalrts::FnResult func_FClose(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3087 "Library.ref"
  return cookie_ns::close(
    vm, identifiers, arg_begin, arg_end, cookie_ns::cCloseMode_Fail
  );
#line 17987 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FClose("FClose", 0U, 0U, func_FClose);


static refalrts::FnResult func_gen_FOpen_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FileNameChar#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Open/4 AsIs: t.Mode#1/5 } Tile{ HalfReuse: s.FreeHandle2 #12/1 } Tile{ HalfReuse: s.FileNameChar1 #7/10 AsIs: e.FileName#1/8 HalfReuse: >/11 AsIs: s.FreeHandle#2/12 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Open]);
  refalrts::reinit_svar( context[1], context[12] );
  refalrts::reinit_svar( context[10], context[7] );
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FOpen_A1("FOpen=1", 2948557630U, 3778842242U, func_gen_FOpen_A1);


static refalrts::FnResult func_FOpen(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 Tile{ HalfReuse: [*]/0 Reuse: & FOpen=1/4 AsIs: t.Mode#1/5 AsIs: s.FileNameChar#1/7 } (/9 Tile{ AsIs: e.FileName#1/2 } )/10 {*}/11 </12 & GetFreeHandle/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_GetFreeHandle]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FOpen_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FOpen("FOpen", 0U, 0U, func_FOpen);


static refalrts::FnResult func_FReadLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FReadLine/4 s.FileNo#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileNo#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } s.FileNo#1/5/6 Tile{ AsIs: </0 Reuse: & Get-Aux/4 AsIs: s.FileNo#1/5 AsIs: >/1 ]] }
  refalrts::copy_stvar(vm, context[6], context[5]);
  refalrts::update_name(context[4], functions[efunc_Getm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FReadLine("FReadLine", 0U, 0U, func_FReadLine);


static refalrts::FnResult func_FWriteLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3122 "Library.ref"
  return cookie_ns::fwrite_line(
    vm, identifiers, arg_begin, arg_end, cookie_ns::cFlags_ReturnHandle
  );
#line 18156 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteLine("FWriteLine", 0U, 0U, func_FWriteLine);


static refalrts::FnResult func_GetFreeHandle(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3135 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  if (! refalrts::empty_seq(content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalNumber free_file = 1;
  while (free_file < cMaxFileHandles && g_file_handles.ref(vm, free_file) != 0) {
    ++free_file;
  }

  if (free_file == cMaxFileHandles) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, free_file);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 18189 "Library.cpp"
}

static refalrts::NativeReference nat_ref_GetFreeHandle("GetFreeHandle", 2948557630U, 3778842242U, func_GetFreeHandle);


static refalrts::FnResult func_ReadLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ReadLine/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Get/4 HalfReuse: # stdin/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_Get]);
  refalrts::reinit_ident(context[1], identifiers[ident_stdin]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadLine("ReadLine", 0U, 0U, func_ReadLine);


static refalrts::FnResult func_WriteLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & WriteLine/4 e.AnyExpression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyExpression#1 as range 2
  //DEBUG: e.AnyExpression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Putout/0 HalfReuse: # stdout/4 AsIs: e.AnyExpression#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Putout]);
  refalrts::reinit_ident(context[4], identifiers[ident_stdout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteLine("WriteLine", 0U, 0U, func_WriteLine);


static refalrts::FnResult func_gen_IntFromStr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & IntFromStr\1/4 (/7 e.MacroDigits#2/5 s.LastDigit#2/9 )/8 e.Rest#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Rest#2 as range 2
  if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MacroDigits#2 as range 5
  //DEBUG: e.Rest#2: 2
  //DEBUG: s.LastDigit#2: 9
  //DEBUG: e.MacroDigits#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.MacroDigits#2/5 s.LastDigit#2/9 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: s.LastDigit2 #9/4 } Tile{ AsIs: e.Rest#2/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Success]);
  refalrts::reinit_svar( context[4], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IntFromStr_L1("IntFromStr\\1", 2948557630U, 3778842242U, func_gen_IntFromStr_L1);


static refalrts::FnResult func_gen_IntFromStr_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & IntFromStr\2/4 e.Rest#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rest#2 as range 2
  //DEBUG: e.Rest#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & IntFromStr\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ AsIs: e.Rest#2/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IntFromStr_L2("IntFromStr\\2", 2948557630U, 3778842242U, func_gen_IntFromStr_L2);


static refalrts::FnResult func_IntFromStr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & IntFromStr/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoNumb/6 & IntFromStr\1/7 & IntFromStr\2/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoNumb]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_IntFromStr_L1]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_IntFromStr_L2]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IntFromStr("IntFromStr", 0U, 0U, func_IntFromStr);


static refalrts::FnResult func_StrFromInt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3205 "Library.ref"
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

  refalrts::reset_allocator(vm);
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
    refalrts::alloc_chars(
      vm, num_begin, num_end, cur_digit, unsigned(lim_digit - cur_digit)
    );

    refalrts::splice_evar(arg_begin, num_begin, num_end);
  } else {
    refalrts::reinit_char(arg_begin, '0');
    begin_splice = pfunc_name;
  }

  refalrts::splice_to_freelist(vm, begin_splice, arg_end);

  return refalrts::cSuccess;
#line 18441 "Library.cpp"
}

static refalrts::NativeReference nat_ref_StrFromInt("StrFromInt", 0U, 0U, func_StrFromInt);

#line 3260 "Library.ref"
namespace cookie_ns {

bool compare(refalrts::Iter left, refalrts::Iter right);

} // namespace cookie_ns
#line 18452 "Library.cpp"

static refalrts::FnResult func_SymbCompare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3269 "Library.ref"
  refalrts::Iter pX = 0, pY = 0;
  refalrts::Iter pFunc = refalrts::call_left(pX, pY, arg_begin, arg_end);

  if (pX->next != pY) {
    return refalrts::cRecognitionImpossible;
  }

  if (! cookie_ns::compare(pX, pY)) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(vm, arg_begin, pFunc);
  refalrts::splice_to_freelist(vm, pY, arg_end);
  return refalrts::cSuccess;
#line 18474 "Library.cpp"
}

static refalrts::NativeReference nat_ref_SymbCompare("SymbCompare", 0U, 0U, func_SymbCompare);

#line 3287 "Library.ref"
namespace cookie_ns {

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

} // namespace cookie_ns

bool cookie_ns::compare(refalrts::Iter left, refalrts::Iter right) {
  int rank[refalrts::cData_COUNT] = { 0 };

  rank[refalrts::cDataNumber] = 5;
  rank[refalrts::cDataChar] = 4;
  rank[refalrts::cDataFunction] = 3;
  rank[refalrts::cDataIdentifier] = 2;
  rank[refalrts::cDataFile] = 1;

  if (! rank[left->tag] || ! rank[right->tag]) {
    return false;
  }

  char order;

  if (rank[left->tag] > rank[right->tag]) {
    order = '>';
  } else if (rank[left->tag] < rank[right->tag]) {
    order = '<';
  } else {
    assert(left->tag == right->tag);

    switch(left->tag) {
      case refalrts::cDataNumber:
        order = compare_char(left->number_info, right->number_info);
        break;

      case refalrts::cDataChar:
        order = compare_char(left->char_info, right->char_info);
        break;

      case refalrts::cDataFunction:
        {
          refalrts::RefalFunction *fl = left->function_info;
          refalrts::RefalFunction *fr = right->function_info;

          const refalrts::RefalFuncName *fln = refalrts::function_name(fl);
          const refalrts::RefalFuncName *frn = refalrts::function_name(fr);

          order = strcmp_char(fln->name, frn->name);
          if (order == '=') {
            order = compare_char(fln->cookie1, frn->cookie1);
          }
          if (order == '=') {
            order = compare_char(fln->cookie2, frn->cookie2);
          }
          if (order == '=') {
            order = compare_char(fl, fr);
          }
        }
        break;

      case refalrts::cDataIdentifier:
        order =
          strcmp_char(left->ident_info->name(), right->ident_info->name());
        break;

      case refalrts::cDataFile:
        order = compare_char(left->file_info, right->file_info);
        break;

      default:
        refalrts_switch_default_violation(left->tag);
    }
  }

  refalrts::reinit_char(left, order);
  return true;
}
#line 18575 "Library.cpp"

static refalrts::FnResult func_FWriteBytes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3393 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (! file_handle_left(identifiers, pfile_handle, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
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

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 18623 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FWriteBytes("FWriteBytes", 0U, 0U, func_FWriteBytes);


static refalrts::FnResult func_FReadBytes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3447 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter pcount_bytes = 0;

  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || ! refalrts::svar_left(pcount_bytes, content_b, content_e)
    || refalrts::cDataNumber != pcount_bytes->tag
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reset_allocator(vm);

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
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
    refalrts::alloc_number(vm, end, value);

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
  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 18689 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FReadBytes("FReadBytes", 0U, 0U, func_FReadBytes);


static refalrts::FnResult func_FTell(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3510 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;

  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
  if (! handle) {
    return refalrts::cRecognitionImpossible;
  }

  long int pos = ftell(handle);

  if (pos == -1L) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::reinit_number(arg_begin, static_cast<refalrts::RefalNumber>(pos));
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 18729 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FTell("FTell", 0U, 0U, func_FTell);


static refalrts::FnResult func_FSeek(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3553 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pfile_handle = 0;
  refalrts::Iter porigin = 0;
  refalrts::Iter psign = 0;
  refalrts::Iter poffset = 0;

  if (
    ! file_handle_left(identifiers, pfile_handle, content_b, content_e)
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

  FILE *handle = extract_file_handle(vm, identifiers, pfile_handle);
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

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 18796 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FSeek("FSeek", 0U, 0U, func_FSeek);


static refalrts::FnResult func_RenameFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3617 "Library.ref"
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
  unsigned source_len =
    refalrts::read_chars(source, FILENAME_MAX, source_b, source_e);

  if (! refalrts::empty_seq(source_b, source_e) || source_len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  char target[FILENAME_MAX + 1] = { '\0' };
  unsigned target_len =
    refalrts::read_chars(target, FILENAME_MAX, target_b, target_e);

  if (! refalrts::empty_seq(target_b, target_e) || target_len == 0) {
    return refalrts::cRecognitionImpossible;
  }

  int result = rename(source, target);

  refalrts::RefalIdentifier i_result =
    result == 0 ? USE_IDENT(True) : USE_IDENT(False);

  refalrts::reinit_ident(arg_begin, i_result);
  refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
  return refalrts::cSuccess;
#line 18850 "Library.cpp"
}

static refalrts::NativeReference nat_ref_RenameFile("RenameFile", 0U, 0U, func_RenameFile);


static refalrts::FnResult func_Modulem_Load(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3674 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  char module_name[FILENAME_MAX + 1] = { '\0' };
  unsigned module_name_len =
    refalrts::read_chars(module_name, FILENAME_MAX, content_b, content_e);

  if (
    ! refalrts::empty_seq(content_b, content_e)
    || module_name_len == 0
    || refalrts::dangerous_state(vm)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::FnResult result;
  refalrts::RefalFunction *module =
    refalrts::load_module_rep(vm, arg_end, module_name, 0, 0, result);

  if (refalrts::cSuccess != result) {
    return result;
  }

  if (module != 0) {
    refalrts::Iter pSuccess = 0;
    refalrts::Iter pHandle = 0;

    refalrts::alloc_ident(vm, pSuccess, USE_IDENT(Success));
    refalrts::alloc_name(vm, pHandle, module);
    refalrts::splice_elem(arg_begin, pSuccess);
    refalrts::splice_elem(arg_begin, pHandle);
  } else {
    refalrts::Iter pFails = 0;
    refalrts::alloc_ident(vm, pFails, USE_IDENT(Fails));
    refalrts::splice_elem(arg_begin, pFails);
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 18902 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Modulem_Load("Module-Load", 0U, 0U, func_Modulem_Load);


static refalrts::FnResult func_Modulem_Unload(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3722 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter pHandle = 0;
  if (
    ! refalrts::svar_right(pHandle, content_b, content_e)
    || ! refalrts::empty_seq(content_b, content_e)
    || pHandle->tag != refalrts::cDataFunction
    || refalrts::dangerous_state(vm)
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::FnResult result;
  bool success =
    refalrts::unload_module(vm, arg_end, pHandle->function_info, result);

  if (refalrts::cSuccess != result) {
    return result;
  }

  if (! success) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 18942 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Modulem_Unload("Module-Unload", 0U, 0U, func_Modulem_Unload);

#line 3766 "Library.ref"
namespace cookie_ns {

enum HandleExType {
  cHandleExType_Current,
  cHandleExType_Global,
  cHandleExType_CurrentAndGlobal,
  cHandleExType_Value,
};

bool module_handle_ex_left(
  const refalrts::RefalIdentifier *identifiers,
  HandleExType& type,
  refalrts::Iter& sModuleHandleEx,
  refalrts::Iter& content_b,
  refalrts::Iter& content_e
);

bool cookie_left(
  refalrts::UInt32& cookie1,
  refalrts::UInt32& cookie2,
  refalrts::Iter& content_b,
  refalrts::Iter& content_e
);

refalrts::RefalFunction *function_for_module(
  refalrts::VM *vm,
  HandleExType type,
  const char *func_name,
  refalrts::UInt32 cookie1,
  refalrts::UInt32 cookie2,
  refalrts::Iter sModuleHandleEx
);

}  // namespace cookie_ns
#line 18982 "Library.cpp"

static refalrts::FnResult func_Modulem_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3804 "Library.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  cookie_ns::HandleExType type = cookie_ns::cHandleExType_Value;
  refalrts::Iter sModuleHandleEx = 0;
  if (
    ! cookie_ns::module_handle_ex_left(
      identifiers, type, sModuleHandleEx, content_b, content_e
    )
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::UInt32 cookie1 = 0, cookie2 = 0;
  if (! cookie_ns::cookie_left(cookie1, cookie2, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  std::vector<char> func_name_vect;
  refalrts::Iter sFunctionName = 0;
  refalrts::Iter eFunctionName_b = 0, eFunctionName_e = 0;
  refalrts::Iter end_garbage;
  if (
    refalrts::svar_left(sFunctionName, content_b, content_e)
    && sFunctionName->tag == refalrts::cDataIdentifier
  ) {
    const char *func_name_cstr = sFunctionName->ident_info->name();
    size_t len = strlen(func_name_cstr);
    func_name_vect.assign(func_name_cstr, func_name_cstr + len + 1);
    end_garbage = sFunctionName;
  } else if (
    end_garbage = refalrts::brackets_left(
      eFunctionName_b, eFunctionName_e, content_b, content_e
    ),
    end_garbage != 0
  ) {
    refalrts::FnResult res = string_from_seq(
      func_name_vect, eFunctionName_b, eFunctionName_e
    );
    if (res != refalrts::cSuccess) {
      return res;
    }
    end_garbage = end_garbage->link_info;
  } else {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::RefalFunction *result = cookie_ns::function_for_module(
    vm, type, &func_name_vect[0], cookie1, cookie2, sModuleHandleEx
  );

  if (! result) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::update_name(pfunc_name, result);
  refalrts::Iter begin_garbage = sModuleHandleEx;
  refalrts::splice_to_freelist(vm, begin_garbage, end_garbage);
  refalrts::push_stack(vm, arg_end);
  refalrts::push_stack(vm, arg_begin);
  return refalrts::cSuccess;
#line 19053 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Modulem_Mu("Module-Mu", 0U, 0U, func_Modulem_Mu);

#line 3871 "Library.ref"
bool cookie_ns::module_handle_ex_left(
  const refalrts::RefalIdentifier *identifiers,
  cookie_ns::HandleExType& type,
  refalrts::Iter& sModuleHandleEx,
  refalrts::Iter& content_b,
  refalrts::Iter& content_e
) {
  if (
    ! refalrts::svar_left(sModuleHandleEx, content_b, content_e)
    && sModuleHandleEx->tag != refalrts::cDataFunction
    && ! refalrts::ident_term(USE_IDENT(GLOBAL), sModuleHandleEx)
    && ! refalrts::ident_term(USE_IDENT(CURRENT), sModuleHandleEx)
    && ! refalrts::ident_term(USE_IDENT(CURRENTm_ANDm_GLOBAL), sModuleHandleEx)
  ) {
    return false;
  }

  if (refalrts::ident_term(USE_IDENT(GLOBAL), sModuleHandleEx)) {
    type = cookie_ns::cHandleExType_Global;
  } else if (refalrts::ident_term(USE_IDENT(CURRENT), sModuleHandleEx)) {
    type = cookie_ns::cHandleExType_Current;
  } else if (
    refalrts::ident_term(USE_IDENT(CURRENTm_ANDm_GLOBAL), sModuleHandleEx)
  ) {
    type = cookie_ns::cHandleExType_CurrentAndGlobal;
  } else {
    type = cookie_ns::cHandleExType_Value;
  }

  return true;
}

bool cookie_ns::cookie_left(
  refalrts::UInt32& cookie1,
  refalrts::UInt32& cookie2,
  refalrts::Iter& content_b,
  refalrts::Iter& content_e
) {
  cookie1 = 0;
  cookie2 = 0;
  if (
    ! refalrts::empty_seq(content_b, content_e)
    && content_b->tag == refalrts::cDataNumber
  ) {
    refalrts::Iter sCookie1 = 0, sCookie2 = 0;
    if (
      refalrts::svar_left(sCookie1, content_b, content_e)
      && refalrts::svar_left(sCookie2, content_b, content_e)
      && sCookie2->tag == refalrts::cDataNumber
    ) {
      cookie1 = sCookie1->number_info;
      cookie2 = sCookie2->number_info;
    } else {
      return false;
    }
  }
  return true;
}

refalrts::RefalFunction *cookie_ns::function_for_module(
  refalrts::VM *vm,
  cookie_ns::HandleExType type,
  const char *func_name_cstr,
  refalrts::UInt32 cookie1,
  refalrts::UInt32 cookie2,
  refalrts::Iter sModuleHandleEx
) {
  const refalrts::RefalFuncName func_name(func_name_cstr, cookie1, cookie2);
  refalrts::Module *current = refalrts::current_module(vm);
  refalrts::RefalFunction *result = 0;

  switch (type) {
    case cookie_ns::cHandleExType_Global:
      result = refalrts::lookup_function_in_domain(vm, func_name);
      break;

    case cookie_ns::cHandleExType_Current:
      result = refalrts::lookup_function_in_module(current, func_name);
      break;

    case cookie_ns::cHandleExType_CurrentAndGlobal:
      result = refalrts::lookup_function_in_module(current, func_name);
      if (! result) {
        result = refalrts::lookup_function_in_domain(vm, func_name);
      }
      break;

    case cookie_ns::cHandleExType_Value:
      {
        refalrts::Module *module =
          refalrts::module_from_function_rep(sModuleHandleEx->function_info);
        result = refalrts::lookup_function_in_module(module, func_name);
      }
      break;

    default:
      refalrts_switch_default_violation(type);
  }

  return result;
}
#line 19160 "Library.cpp"
#line 3982 "Library.ref"
namespace cookie_ns {

refalrts::FnResult find_function(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end,
  bool fail_down
);

}  // namespace cookie_ns
#line 19171 "Library.cpp"

static refalrts::FnResult func_Modulem_LookupFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 3995 "Library.ref"
  return cookie_ns::find_function(vm, identifiers, arg_begin, arg_end, false);
#line 19180 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Modulem_LookupFunction("Module-LookupFunction", 0U, 0U, func_Modulem_LookupFunction);

#line 4000 "Library.ref"

refalrts::FnResult cookie_ns::find_function(
  refalrts::VM *vm, const refalrts::RefalIdentifier *identifiers,
  refalrts::Iter arg_begin, refalrts::Iter arg_end,
  bool fail_down
) {
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter pfunc_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  cookie_ns::HandleExType type = cookie_ns::cHandleExType_Value;
  refalrts::Iter sModuleHandleEx = 0;
  if (
    ! cookie_ns::module_handle_ex_left(
      identifiers, type, sModuleHandleEx, content_b, content_e
    )
  ) {
    return refalrts::cRecognitionImpossible;
  }

  refalrts::UInt32 cookie1 = 0, cookie2 = 0;
  if (! cookie_ns::cookie_left(cookie1, cookie2, content_b, content_e)) {
    return refalrts::cRecognitionImpossible;
  }

  std::vector<char> func_name_vect;
  refalrts::Iter sFunctionName = 0;
  if (content_b->tag == refalrts::cDataIdentifier) {
    refalrts::svar_left(sFunctionName, content_b, content_e);
    const char *func_name_cstr = sFunctionName->ident_info->name();
    size_t len = strlen(func_name_cstr);
    func_name_vect.assign(func_name_cstr, func_name_cstr + len + 1);
  } else {
    refalrts::FnResult res =
      string_from_seq(func_name_vect, content_b, content_e);
    if (res != refalrts::cSuccess) {
      return res;
    }
  }

  refalrts::RefalFunction *result = cookie_ns::function_for_module(
    vm, type, &func_name_vect[0], cookie1, cookie2, sModuleHandleEx
  );

  if (result != 0) {
    if (fail_down) {
      refalrts::reinit_name(arg_begin, result);
      refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
    } else {
      refalrts::reinit_ident(arg_begin, USE_IDENT(Success));
      refalrts::update_name(pfunc_name, result);
      refalrts::splice_to_freelist(vm, sModuleHandleEx, arg_end);
    }
  } else {
    if (fail_down) {
      return refalrts::cRecognitionImpossible;
    } else {
      refalrts::reinit_ident(arg_begin, USE_IDENT(Fails));
      refalrts::splice_to_freelist(vm, pfunc_name, arg_end);
    }
  }

  return refalrts::cSuccess;
}
#line 19251 "Library.cpp"

static refalrts::FnResult func_Modulem_FunctionPtr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 4074 "Library.ref"
  return cookie_ns::find_function(vm, identifiers, arg_begin, arg_end, true);
#line 19260 "Library.cpp"
}

static refalrts::NativeReference nat_ref_Modulem_FunctionPtr("Module-FunctionPtr", 0U, 0U, func_Modulem_FunctionPtr);


static refalrts::FnResult func_INIT(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 4080 "Library.ref"
  // 1. Дескрипторы файлов
  for (size_t i = 0; i < cMaxFileHandles; ++i) {
    g_file_handles.ref(vm, i) = 0;      // на всякий случай
  }

  // 2. Точный счётчик шагов
  const unsigned long init_and_go_steps = 2;
  cookie_ns::g_correction.ref(vm) = cookie_ns::raw_step(vm) + init_and_go_steps;
  cookie_ns::g_start_step.ref(vm) = 0;

  // 3. Время запуска программы для TimeElapsed
  g_time_elapsed_edge.ref(vm) = clock();

  // 4. Генератор случайных чисел
  g_gen.ref(vm) = new RndGen();

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 19290 "Library.cpp"
}

static refalrts::NativeReference nat_ref_INIT("INIT", 2948557630U, 3778842242U, func_INIT);


static refalrts::FnResult func_FINAL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 4103 "Library.ref"
  // 4. Генератор случайных чисел
  delete g_gen.ref(vm);
  g_gen.ref(vm) = 0;

  // 3. Время запуска программы для TimeElapsed
  //   (нет финализации)

  // 2. Точный счётчик шагов
  //   (нет финализации)

  // 1. Дескрипторы файлов
  for (size_t i = 0; i < cMaxFileHandles; ++i) {
    if (g_file_handles.ref(vm, i) != 0) {
      fclose(g_file_handles.ref(vm, i));
      g_file_handles.ref(vm, i) = 0;    // на всякий случай
    }
  }

  refalrts::splice_to_freelist(vm, arg_begin, arg_end);
  return refalrts::cSuccess;
#line 19322 "Library.cpp"
}

static refalrts::NativeReference nat_ref_FINAL("FINAL", 2948557630U, 3778842242U, func_FINAL);


//End of file
