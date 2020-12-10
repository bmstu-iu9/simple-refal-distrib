// This file automatically generated from 'LowLevelRASL.ref'
// Don't edit! Edit 'LowLevelRASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_921140344_2615648301
#define COOKIE1_ 921140344U
#define COOKIE2_ 2615648301U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_gen_Apply_Z3 = 4,
  efunc_gen_Apply_Z0 = 5,
  efunc_Reduce = 6,
  efunc_gen_Reduce_S1A1 = 7,
  efunc_gen_Apply_Z2 = 8,
  efunc_Apply = 9,
  efunc_DoMapAccum = 10,
  efunc_gen_DoMapAccum_S1A1 = 11,
  efunc_Add = 12,
  efunc_Sub = 13,
  efunc_Fetch = 14,
  efunc_Pipe = 15,
  efunc_gen_Pipe_S2L1 = 16,
  efunc_gen_Pipe_S3L1 = 17,
  efunc_LowLevelRASLm_Native = 18,
  efunc_LowLevelRASLm_RASL = 19,
  efunc_gen_Map_Z1 = 20,
  efunc_gen_LowLevelRASL_A5 = 21,
  efunc_gen_DoMapAccum_Z1 = 22,
  efunc_gen_LowLevelRASL_A4 = 23,
  efunc_SelectConstantsOutliner = 24,
  efunc_gen_LowLevelRASL_A3 = 25,
  efunc_gen_LowLevelRASL_A2 = 26,
  efunc_gen_Map_Z2 = 27,
  efunc_gen_MapAccum_Z1 = 28,
  efunc_Canonize = 29,
  efunc_gen_LowLevelRASL_A1 = 30,
  efunc_HashLittle2m_Chars = 31,
  efunc_DisplayName = 32,
  efunc_gen_CharFromScopeClass_D2 = 33,
  efunc_gen_Map_Z3 = 34,
  efunc_OutlineConstantsm_WithNative = 35,
  efunc_OutlineConstantsm_RASLOnly = 36,
  efunc_gen_OutlineConstantsm_WithNative_S2A2 = 37,
  efunc_gen_DoMapAccum_Z2 = 38,
  efunc_gen_OutlineConstantsm_WithNative_S2A1 = 39,
  efunc_gen_UpdateFuncTable_A1 = 40,
  efunc_UpdateTable = 41,
  efunc_gen_UpdateFuncTable_D1 = 42,
  efunc_gen_OutlineConstantsm_WithNative_S3A1 = 43,
  efunc_gen_OutlineConstantsm_WithNative_S4A1 = 44,
  efunc_gen_DoMapAccum_Z3 = 45,
  efunc_gen_OutlineConstantsm_WithNative_S5C1 = 46,
  efunc_OneOf = 47,
  efunc_gen_OutlineConstantsm_WithNative_S5A2 = 48,
  efunc_UpdateFuncTable = 49,
  efunc_gen_OutlineConstantsm_WithNative_S6A1 = 50,
  efunc_gen_UpdateIdentTable_A1 = 51,
  efunc_gen_UpdateIdentTable_D1 = 52,
  efunc_gen_OutlineConstantsm_RASLOnly_S1A1 = 53,
  efunc_gen_OutlineConstantsm_RASLOnly_S3A1 = 54,
  efunc_gen_OutlineConstantsm_Metatable_L1A2 = 55,
  efunc_gen_OutlineConstantsm_OneCommand_S1A1 = 56,
  efunc_gen_OutlineConstantsm_OneCommand_S2A1 = 57,
  efunc_gen_OutlineConstantsm_OneCommand_S3A1 = 58,
  efunc_gen_OutlineConstantsm_OneCommand_S4A1 = 59,
  efunc_gen_OutlineConstantsm_OneCommand_S5A1 = 60,
  efunc_gen_OutlineConstantsm_OneCommand_S6A1 = 61,
  efunc_gen_OutlineConstantsm_OneCommand_S7A1 = 62,
  efunc_gen_OutlineConstantsm_OneCommand_S8A1 = 63,
  efunc_gen_OutlineConstantsm_OneCommand_S9A1 = 64,
  efunc_gen_OutlineConstantsm_OneCommand_S10A1 = 65,
  efunc_Mu = 66,
  efunc_Up = 67,
  efunc_Evm_met = 68,
  efunc_Residue = 69,
  efunc_u_u_Metau_Residue = 70,
  efunc_MapAccum = 71,
  efunc_UnBracket = 72,
  efunc_DelAccumulator = 73,
  efunc_Inc = 74,
  efunc_Dec = 75,
  efunc_LowLevelRASL = 76,
  efunc_CalcDigest = 77,
  efunc_HashFuncName = 78,
  efunc_CharFromScopeClass = 79,
  efunc_SetScopeIDs = 80,
  efunc_SetScopeIDsm_Commands = 81,
  efunc_SetScopeIDsm_Command = 82,
  efunc_SetScopeIDsm_Patch = 83,
  efunc_OutlineConstantsm_Metatable = 84,
  efunc_OutlineConstantsm_Commands = 85,
  efunc_OutlineConstantsm_OneCommand = 86,
  efunc_UpdateIdentTable = 87,
  efunc_MarkFunctionGenMode = 88,
  efunc_gen_Apply_Z4 = 89,
  efunc_gen_Map_Z4 = 90,
  efunc_gen_Map_Z5 = 91,
  efunc_gen_MarkFunctionGenMode_D5 = 92,
  efunc_gen_MarkFunctionGenMode_Z0 = 93,
  efunc_gen_Map_Z0 = 94,
  efunc_gen_DoMapAccum_S1A1Z1 = 95,
  efunc_gen_DoMapAccum_Z0 = 96,
  efunc_gen_SetScopeIDs_Z0 = 97,
  efunc_gen_DoMapAccum_Z4 = 98,
  efunc_gen_MapAccum_Z0 = 99,
  efunc_gen_CalcDigest_Z0 = 100,
  efunc_gen_SetScopeIDsm_Command_Z0 = 101,
  efunc_gen_DoMapAccum_S1A1Z2 = 102,
  efunc_gen_OutlineConstantsm_OneCommand_Z0 = 103,
  efunc_gen_DoMapAccum_S1A1Z3 = 104,
  efunc_gen_OutlineConstantsm_Metatable_L1A1 = 105,
  efunc_gen_OutlineConstantsm_Metatable_L1D1 = 106,
  efunc_gen_OutlineConstantsm_Metatable_L1Z0 = 107,
  efunc_gen_DoMapAccum_S1A1Z0 = 108,
  efunc_gen_DoMapAccum_S1A1Z4 = 109,
  efunc_gen_CalcDigest_D10 = 110,
};


enum ident {
  ident_UnitName = 0,
  ident_Function = 1,
  ident_GNm_Entry = 2,
  ident_GNm_Local = 3,
  ident_CmdNativeFunction = 4,
  ident_CmdMetatable = 5,
  ident_CmdEnum = 6,
  ident_CmdSwap = 7,
  ident_CmdConditionFunc = 8,
  ident_CmdDeclaration = 9,
  ident_CmdDefineIdent = 10,
  ident_CmdEmitNativeCode = 11,
  ident_CmdNumber = 12,
  ident_Cookie1 = 13,
  ident_Cookie2 = 14,
  ident_CmdNumberSave = 15,
  ident_CmdCreateElem = 16,
  ident_ElNumber = 17,
  ident_CmdSentence = 18,
  ident_CmdOpenELoop = 19,
  ident_AlgLeft = 20,
  ident_NativeBlock = 21,
  ident_True = 22,
  ident_CmdName = 23,
  ident_CmdNameSave = 24,
  ident_ElName = 25,
  ident_CmdADT = 26,
  ident_CmdADTSave = 27,
  ident_CmdIdent = 28,
  ident_CmdIdentSave = 29,
  ident_ElIdent = 30,
  ident_OnlyInterpret = 31,
  ident_Functionm_ToRASL = 32,
  ident_OnlyDirect = 33,
  ident_Functionm_ToNative = 34,
  ident_CmdConditionFuncm_ToRASL = 35,
  ident_CmdConditionFuncm_ToNative = 36,
  ident_Mu = 37,
  ident_Up = 38,
  ident_Evm_met = 39,
  ident_Residue = 40,
  ident_u_u_Metau_Residue = 41,
  ident_Apply = 42,
  ident_Map = 43,
  ident_Reduce = 44,
  ident_Fetch = 45,
  ident_MapAccum = 46,
  ident_DoMapAccum = 47,
  ident_UnBracket = 48,
  ident_DelAccumulator = 49,
  ident_Inc = 50,
  ident_Dec = 51,
  ident_Pipe = 52,
  ident_LowLevelRASL = 53,
  ident_Canonize = 54,
  ident_CalcDigest = 55,
  ident_HashFuncName = 56,
  ident_CharFromScopeClass = 57,
  ident_SetScopeIDs = 58,
  ident_SetScopeIDsm_Commands = 59,
  ident_SetScopeIDsm_Command = 60,
  ident_SetScopeIDsm_Patch = 61,
  ident_SelectConstantsOutliner = 62,
  ident_OutlineConstantsm_WithNative = 63,
  ident_OutlineConstantsm_RASLOnly = 64,
  ident_OutlineConstantsm_Metatable = 65,
  ident_OutlineConstantsm_Commands = 66,
  ident_OutlineConstantsm_OneCommand = 67,
  ident_UpdateFuncTable = 68,
  ident_UpdateIdentTable = 69,
  ident_UpdateTable = 70,
  ident_MarkFunctionGenMode = 71,
  ident_Symbol = 72,
  ident_Identifier = 73,
  ident_Name = 74,
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
  res = refalrts::splice_elem( res, context[8] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
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


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument#1 as range 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.Argument#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7
  //DEBUG: e.Argument#1: 2
  //DEBUG: t.Closure#1: 9
  //DEBUG: e.Bounded#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


static refalrts::FnResult func_Map(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Map/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map/4 s.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Next#1: 9
      //DEBUG: s.Fn#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Next#1/9 } & $table/13 >/14 </15 & Map/16 s.Fn#1/5/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[13], functions[efunc_d_table]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map/4 (/5 t.#0/15 e.0#0/13 )/6 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0#0 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 15
      //DEBUG: e.0#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Apply_Z3]);
      refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
      refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map/15 t.Fn#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Map("Map", COOKIE1_, COOKIE2_, func_Map);


static refalrts::FnResult func_gen_Reduce_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Reduce$1=1/4 t.Fn#1/5 (/9 e.Tail#1/7 )/10 t.Acc#2/11 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Tail#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Tail#1: 7
  //DEBUG: t.Acc#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/11 } Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Reduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1("Reduce$1=1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Reduce/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 9
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reduce("Reduce", COOKIE1_, COOKIE2_, func_Reduce);


static refalrts::FnResult func_Fetch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Apply]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Fetch("Fetch", COOKIE1_, COOKIE2_, func_Fetch);


static refalrts::FnResult func_MapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", COOKIE1_, COOKIE2_, func_MapAccum);


static refalrts::FnResult func_gen_DoMapAccum_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum$1=1/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 e.Tail#1/11 )/14 t.Acc#2/15 e.StepScanned#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#2 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 11
  //DEBUG: t.Acc#2: 15
  //DEBUG: e.StepScanned#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#2/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1("DoMapAccum$1=1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1);


static refalrts::FnResult func_DoMapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoMapAccum/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
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
  // closed e.new#3 as range 9
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/13 )/12 t.Next#1/17 e.Tail#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 15
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 17
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply@2/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Apply_Z2]);
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", COOKIE1_, COOKIE2_, func_DoMapAccum);


static refalrts::FnResult func_UnBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", COOKIE1_, COOKIE2_, func_UnBracket);


static refalrts::FnResult func_DelAccumulator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Acc#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", COOKIE1_, COOKIE2_, func_DelAccumulator);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Inc/4 e.Num#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Dec/4 s.Num#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dec/4 e.Num#1/2 >/1
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num#1/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dec("Dec", COOKIE1_, COOKIE2_, func_Dec);


static refalrts::FnResult func_gen_Pipe_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pipe$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2
  //DEBUG: t.Func#1: 5
  //DEBUG: e.Funcs#1: 7
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Apply]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_name(context[9], functions[efunc_Pipe]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1);


static refalrts::FnResult func_gen_Pipe_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pipe$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S3L1);


static refalrts::FnResult func_Pipe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Pipe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Pipe/4 t.Func#1/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func#1/7 e.Funcs#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs#1 as range 9
    //DEBUG: t.Func#1: 7
    //DEBUG: e.Funcs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func#1/7 } (/11 Tile{ AsIs: e.Funcs#1/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1]);
    refalrts::reinit_unwrapped_closure(context[1], context[0]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Pipe$3\1/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S3L1]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_gen_LowLevelRASL_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & LowLevelRASL=5/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 t.Tables#5/8 e.Items#6/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#6 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: t.Tables#5: 8
  //DEBUG: e.Items#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: t.Tables#5/8 AsIs: e.Items#6/2 AsIs: >/1 } </10 & LowLevelRASL-Native/11 s.Hash1#2/6/12 s.Hash2#2/7/13 t.Tables#5/8/14 e.Items#6/2/16 >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_LowLevelRASLm_Native]);
  refalrts::copy_stvar(vm, context[12], context[6]);
  refalrts::copy_stvar(vm, context[13], context[7]);
  refalrts::copy_evar(vm, context[14], context[15], context[8], context[9]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_LowLevelRASLm_RASL]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A5("LowLevelRASL=5", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A5);


static refalrts::FnResult func_gen_LowLevelRASL_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & LowLevelRASL=4/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 t.Tables#5/9 e.Items#5/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#5 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: t.Tables#5: 9
  //DEBUG: e.Items#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=5/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 } Tile{ AsIs: t.Tables#5/9 } </11 & Map@1/12 Tile{ AsIs: s.GenMode#1/8 } Tile{ AsIs: e.Items#5/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A4("LowLevelRASL=4", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A4);


static refalrts::FnResult func_gen_LowLevelRASL_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL=3/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 s.OutlineConstants#4/9 e.Items#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#4 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: s.OutlineConstants#4: 9
  //DEBUG: e.Items#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=4/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: s.GenMode#1/8 } </10 & DoMapAccum@1/11 Tile{ AsIs: s.OutlineConstants#4/9 } (/12 (/13 0/14 )/15 (/16 0/17 )/18 )/19 (/20 )/21 Tile{ AsIs: e.Items#4/2 } >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[21] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A3("LowLevelRASL=3", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A3);


static refalrts::FnResult func_gen_LowLevelRASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & LowLevelRASL=2/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 e.Items#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#3 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: e.Items#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=3/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: s.GenMode#1/8 } </9 & SelectConstantsOutliner/10 Tile{ AsIs: e.Items#3/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_SelectConstantsOutliner]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A2("LowLevelRASL=2", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A2);


static refalrts::FnResult func_gen_LowLevelRASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL=1/4 s.DebugInfo#1/5 s.GenMode#1/6 (/9 s.Hash1#2/11 s.Hash2#2/12 )/10 e.Items#2/2 >/1
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
  // closed e.Items#2 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.GenMode#1: 6
  //DEBUG: e.Items#2: 2
  //DEBUG: s.Hash1#2: 11
  //DEBUG: s.Hash2#2: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=2/4 AsIs: s.DebugInfo#1/5 } Tile{ AsIs: s.Hash1#2/11 AsIs: s.Hash2#2/12 HalfReuse: s.GenMode1 #6/10 } </13 Tile{ HalfReuse: & Map@2/9 } s.Hash1#2/11/14 s.Hash2#2/12/15 Tile{ AsIs: e.Items#2/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::copy_stvar(vm, context[14], context[11]);
  refalrts::copy_stvar(vm, context[15], context[12]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A2]);
  refalrts::reinit_svar( context[10], context[6] );
  refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[10] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A1("LowLevelRASL=1", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A1);


static refalrts::FnResult func_LowLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL/4 s.GenMode#1/5 s.DebugInfo#1/6 (/9 e.SrcName#1/7 )/10 e.ProgramElements#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.GenMode#1: 5
  //DEBUG: s.DebugInfo#1: 6
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=1/4 } Tile{ AsIs: s.DebugInfo#1/6 HalfReuse: s.GenMode1 #5/9 } </11 & MapAccum@1/12 (/13 4001567069/14 291363191/15 )/16 (/17 # UnitName/18 </19 & Canonize/20 Tile{ AsIs: e.SrcName#1/7 } >/21 Tile{ AsIs: )/10 AsIs: e.ProgramElements#1/2 AsIs: >/1 } >/22 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 4001567069UL);
  refalrts::alloc_number(vm, context[15], 291363191UL);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_UnitName]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Canonize]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[17], context[10] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASL("LowLevelRASL", 0U, 0U, func_LowLevelRASL);


static refalrts::FnResult func_Canonize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Canonize/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Canonize/4 e.Canonized#1/7 '\\'/11 e.NotCanonized#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::char_left( '\\', context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.NotCanonized#1 as range 9
      //DEBUG: e.Canonized#1: 7
      //DEBUG: e.NotCanonized#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/7 } Tile{ HalfReuse: '/'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Canonize/11 AsIs: e.NotCanonized#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[4], '/');
      refalrts::reinit_name(context[11], functions[efunc_Canonize]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Canonize/4 e.Canonized#1/2 >/1
  // closed e.Canonized#1 as range 2
  //DEBUG: e.Canonized#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Canonize/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Canonize("Canonize", COOKIE1_, COOKIE2_, func_Canonize);


static refalrts::FnResult func_CalcDigest(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & CalcDigest/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcDigest/4 (/7 s.new#1/13 s.new#2/14 )/8 (/11 s.new#3/15 e.new#4/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # UnitName/15 e.SrcName#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[15] ) )
      continue;
    // closed e.SrcName#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: e.SrcName#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } e.SrcName#1/16/18 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # UnitName/15 AsIs: e.SrcName#1/16 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CalcDigest/4 (/7 s.new#5/13 s.new#6/14 )/8 (/11 s.new#7/15 s.new#8/18 e.new#9/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new#9 as range 16
    do {
      // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 s.new#12/15 s.new#13/18 (/23 e.new#14/21 )/24 e.new#15/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.new#14 as range 21
      // closed e.new#15 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.new#16/13 s.new#17/14 )/8 (/11 # Function/15 s.new#18/18 (/23 e.new#20/25 )/24 e.new#19/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[15] ) )
          continue;
        // closed e.new#20 as range 25
        // closed e.new#19 as range 27
        do {
          // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # Function/15 # GN-Entry/18 (/23 e.Name#1/29 )/24 e.Commands#1/31 )/12 >/1
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
            continue;
          // closed e.Name#1 as range 29
          // closed e.Commands#1 as range 31
          //DEBUG: s.Hash1#1: 13
          //DEBUG: s.Hash2#1: 14
          //DEBUG: e.Name#1: 29
          //DEBUG: e.Commands#1: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/33 </34 & DisplayName/35 e.Name#1/29/36 >/38 'R'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Commands#1/31 AsIs: )/12 } Tile{ ]] }
          refalrts::alloc_char(vm, context[33], 'E');
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[36], context[37], context[29], context[30]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_char(vm, context[39], 'R');
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[34] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[8], context[12] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[33], context[39] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # Function/15 # GN-Local/18 (/23 e.Name#1/29 )/24 e.Commands#1/31 )/12 >/1
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
            continue;
          // closed e.Name#1 as range 29
          // closed e.Commands#1 as range 31
          //DEBUG: s.Hash1#1: 13
          //DEBUG: s.Hash2#1: 14
          //DEBUG: e.Name#1: 29
          //DEBUG: e.Commands#1: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/33 </34 & DisplayName/35 e.Name#1/29/36 >/38 'R'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Commands#1/31 AsIs: )/12 } Tile{ ]] }
          refalrts::alloc_char(vm, context[33], 'L');
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[36], context[37], context[29], context[30]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_char(vm, context[39], 'R');
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[34] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[8], context[12] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[33], context[39] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # Function/15 s.ScopeClass#1/18 (/23 e.Name#1/29 )/24 e.Commands#1/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        // closed e.Name#1 as range 29
        // closed e.Commands#1 as range 31
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 29
        //DEBUG: e.Commands#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </33 & CharFromScopeClass*2/34 s.ScopeClass#1/18/35 >/36 </37 & DisplayName/38 e.Name#1/29/39 Tile{ AsIs: >/1 } 'R'/41 >/42 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Commands#1/31 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_CharFromScopeClass_D2]);
        refalrts::copy_stvar(vm, context[35], context[18]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[39], context[40], context[29], context[30]);
        refalrts::alloc_char(vm, context[41], 'R');
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[33], context[38] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.new#16/13 s.new#17/14 )/8 (/11 # CmdNativeFunction/15 s.new#18/18 (/23 e.new#21/25 )/24 t.new#19/29 e.new#20/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[15] ) )
          continue;
        // closed e.new#21 as range 25
        context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
        if( ! context[30] )
          continue;
        // closed e.new#20 as range 27
        do {
          // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdNativeFunction/15 # GN-Entry/18 (/23 e.Name#1/31 )/24 t.SrcPos#1/29 e.Code#1/33 )/12 >/1
          context[31] = context[25];
          context[32] = context[26];
          context[33] = context[27];
          context[34] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
            continue;
          // closed e.Name#1 as range 31
          // closed e.Code#1 as range 33
          //DEBUG: t.SrcPos#1: 29
          //DEBUG: s.Hash1#1: 13
          //DEBUG: s.Hash2#1: 14
          //DEBUG: e.Name#1: 31
          //DEBUG: e.Code#1: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/35 </36 & DisplayName/37 e.Name#1/31/38 >/40 'N'/41 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name#1/31 AsIs: )/24 AsIs: t.SrcPos#1/29 AsIs: e.Code#1/33 AsIs: )/12 } Tile{ ]] }
          refalrts::alloc_char(vm, context[35], 'E');
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[38], context[39], context[31], context[32]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::alloc_char(vm, context[41], 'N');
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[36] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[8], context[12] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[35], context[41] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdNativeFunction/15 # GN-Local/18 (/23 e.Name#1/31 )/24 t.SrcPos#1/29 e.Code#1/33 )/12 >/1
          context[31] = context[25];
          context[32] = context[26];
          context[33] = context[27];
          context[34] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
            continue;
          // closed e.Name#1 as range 31
          // closed e.Code#1 as range 33
          //DEBUG: t.SrcPos#1: 29
          //DEBUG: s.Hash1#1: 13
          //DEBUG: s.Hash2#1: 14
          //DEBUG: e.Name#1: 31
          //DEBUG: e.Code#1: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/35 </36 & DisplayName/37 e.Name#1/31/38 >/40 'N'/41 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name#1/31 AsIs: )/24 AsIs: t.SrcPos#1/29 AsIs: e.Code#1/33 AsIs: )/12 } Tile{ ]] }
          refalrts::alloc_char(vm, context[35], 'L');
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[38], context[39], context[31], context[32]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::alloc_char(vm, context[41], 'N');
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[36] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[8], context[12] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[35], context[41] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdNativeFunction/15 s.ScopeClass#1/18 (/23 e.Name#1/31 )/24 t.SrcPos#1/29 e.Code#1/33 )/12 >/1
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        // closed e.Name#1 as range 31
        // closed e.Code#1 as range 33
        //DEBUG: t.SrcPos#1: 29
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 31
        //DEBUG: e.Code#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </35 & CharFromScopeClass*2/36 s.ScopeClass#1/18/37 Tile{ AsIs: >/1 } </38 & DisplayName/39 e.Name#1/31/40 >/42 'N'/43 >/44 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/31 AsIs: )/24 AsIs: t.SrcPos#1/29 AsIs: e.Code#1/33 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_gen_CharFromScopeClass_D2]);
        refalrts::copy_stvar(vm, context[37], context[18]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[40], context[41], context[31], context[32]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::alloc_char(vm, context[43], 'N');
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[38], context[44] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[35], context[37] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.new#16/13 s.new#17/14 )/8 (/11 # CmdMetatable/15 s.new#18/18 (/23 e.new#20/25 )/24 e.new#19/27 )/12 >/1
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[19];
      context[28] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[15] ) )
        continue;
      // closed e.new#20 as range 25
      // closed e.new#19 as range 27
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdMetatable/15 # GN-Entry/18 (/23 e.Name#1/29 )/24 e.Metatable#1/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name#1 as range 29
        // closed e.Metatable#1 as range 31
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 29
        //DEBUG: e.Metatable#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/33 </34 & DisplayName/35 e.Name#1/29/36 >/38 'T'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Metatable#1/31 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[33], 'E');
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[36], context[37], context[29], context[30]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_char(vm, context[39], 'T');
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[33], context[39] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdMetatable/15 # GN-Local/18 (/23 e.Name#1/29 )/24 e.Metatable#1/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name#1 as range 29
        // closed e.Metatable#1 as range 31
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 29
        //DEBUG: e.Metatable#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/33 </34 & DisplayName/35 e.Name#1/29/36 >/38 'T'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Metatable#1/31 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[33], 'L');
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[36], context[37], context[29], context[30]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_char(vm, context[39], 'T');
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[33], context[39] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdMetatable/15 s.ScopeClass#1/18 (/23 e.Name#1/29 )/24 e.Metatable#1/31 )/12 >/1
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      context[32] = context[28];
      // closed e.Name#1 as range 29
      // closed e.Metatable#1 as range 31
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 29
      //DEBUG: e.Metatable#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </33 & CharFromScopeClass*2/34 s.ScopeClass#1/18/35 >/36 </37 & DisplayName/38 e.Name#1/29/39 Tile{ AsIs: >/1 } 'T'/41 >/42 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/29 AsIs: )/24 AsIs: e.Metatable#1/31 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_CharFromScopeClass_D2]);
      refalrts::copy_stvar(vm, context[35], context[18]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_name(vm, context[38], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[39], context[40], context[29], context[30]);
      refalrts::alloc_char(vm, context[41], 'T');
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 # CmdEnum/15 s.new#12/18 e.new#13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[15] ) )
        continue;
      // closed e.new#13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEnum/15 # GN-Entry/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'E'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: # GN-Entry/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'E');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'E');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEnum/15 # GN-Local/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'E'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: # GN-Local/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'L');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'E');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEnum/15 s.ScopeClass#1/18 e.Name#1/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name#1 as range 21
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass#1/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name#1/21/28 >/30 'E'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_CharFromScopeClass_D2]);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[28], context[29], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_char(vm, context[31], 'E');
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 # CmdSwap/15 s.new#12/18 e.new#13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[15] ) )
        continue;
      // closed e.new#13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdSwap/15 # GN-Entry/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'S'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: # GN-Entry/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'E');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'S');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdSwap/15 # GN-Local/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'S'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: # GN-Local/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'L');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'S');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdSwap/15 s.ScopeClass#1/18 e.Name#1/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name#1 as range 21
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass#1/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name#1/21/28 >/30 'S'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_CharFromScopeClass_D2]);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[28], context[29], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_char(vm, context[31], 'S');
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 # CmdConditionFunc/15 s.new#12/18 e.new#13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[15] ) )
        continue;
      // closed e.new#13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdConditionFunc/15 # GN-Entry/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'C'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: # GN-Entry/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'E');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'C');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdConditionFunc/15 # GN-Local/18 e.Name#1/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name#1 as range 21
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: e.Name#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'C'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: # GN-Local/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'L');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
        refalrts::alloc_char(vm, context[28], 'C');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdConditionFunc/15 s.ScopeClass#1/18 e.Name#1/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name#1 as range 21
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass#1/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name#1/21/28 >/30 'C'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_CharFromScopeClass_D2]);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[28], context[29], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_char(vm, context[31], 'C');
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 # CmdDeclaration/15 s.new#12/18 e.new#13/19 )/12 >/1
    context[19] = context[16];
    context[20] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[15] ) )
      continue;
    // closed e.new#13 as range 19
    do {
      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDeclaration/15 # GN-Entry/18 e.Name#1/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
        continue;
      // closed e.Name#1 as range 21
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: e.Name#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'E'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'D'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: # GN-Entry/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_char(vm, context[23], 'E');
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
      refalrts::alloc_char(vm, context[28], 'D');
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDeclaration/15 # GN-Local/18 e.Name#1/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
        continue;
      // closed e.Name#1 as range 21
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: e.Name#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } 'L'/23 </24 & DisplayName/25 e.Name#1/21/26 Tile{ AsIs: >/1 } 'D'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: # GN-Local/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_char(vm, context[23], 'L');
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_DisplayName]);
      refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
      refalrts::alloc_char(vm, context[28], 'D');
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDeclaration/15 s.ScopeClass#1/18 e.Name#1/21 )/12 >/1
    context[21] = context[19];
    context[22] = context[20];
    // closed e.Name#1 as range 21
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass#1/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name#1/21/28 >/30 'D'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/21 AsIs: )/12 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_CharFromScopeClass_D2]);
    refalrts::copy_stvar(vm, context[25], context[18]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_DisplayName]);
    refalrts::copy_evar(vm, context[28], context[29], context[21], context[22]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_char(vm, context[31], 'D');
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[26], context[32] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDefineIdent/15 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[15] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdDefineIdent/15 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEmitNativeCode/15 t.SrcPos#1/16 e.Code#1/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[15] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 9
  //DEBUG: s.Hash1#1: 13
  //DEBUG: s.Hash2#1: 14
  //DEBUG: t.SrcPos#1: 16
  //DEBUG: e.Code#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/15 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcDigest("CalcDigest", COOKIE1_, COOKIE2_, func_CalcDigest);


static refalrts::FnResult func_HashFuncName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & HashFuncName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HashFuncName/4 s.new#1/5 s.new#2/6 s.new#3/7 e.new#4/2 s.new#5/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & HashFuncName/4 s.Hash1#1/5 s.Hash2#1/6 # GN-Entry/7 e.Name#1/9 s.Sign#1/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[7] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Sign#1: 8
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: 'E'/7 } </11 & DisplayName/12 Tile{ AsIs: e.Name#1/9 } >/13 Tile{ AsIs: s.Sign#1/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_HashLittle2m_Chars]);
    refalrts::reinit_char(context[7], 'E');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HashFuncName/4 s.Hash1#1/5 s.Hash2#1/6 # GN-Local/7 e.Name#1/9 s.Sign#1/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[7] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Sign#1: 8
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: 'L'/7 } </11 & DisplayName/12 Tile{ AsIs: e.Name#1/9 } >/13 Tile{ AsIs: s.Sign#1/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_HashLittle2m_Chars]);
    refalrts::reinit_char(context[7], 'L');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HashFuncName/4 s.Hash1#1/5 s.Hash2#1/6 s.ScopeClass#1/7 e.Name#1/2 s.Sign#1/8 >/1
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: s.Sign#1: 8
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } </9 & CharFromScopeClass*2/10 Tile{ AsIs: s.ScopeClass#1/7 } >/11 </12 & DisplayName/13 Tile{ AsIs: e.Name#1/2 } >/14 Tile{ AsIs: s.Sign#1/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_CharFromScopeClass_D2]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_HashLittle2m_Chars]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HashFuncName("HashFuncName", COOKIE1_, COOKIE2_, func_HashFuncName);


static refalrts::FnResult func_CharFromScopeClass(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CharFromScopeClass/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CharFromScopeClass/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CharFromScopeClass/4 # GN-Entry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Entry/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'E'/1 ]] }
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CharFromScopeClass/4 # GN-Local/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Local/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'L'/1 ]] }
  refalrts::reinit_char(context[1], 'L');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromScopeClass("CharFromScopeClass", COOKIE1_, COOKIE2_, func_CharFromScopeClass);


static refalrts::FnResult func_SetScopeIDs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SetScopeIDs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # Function/11 s.ScopeClass#1/12 (/15 e.Name#1/13 )/16 e.Commands#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Function], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Name#1 as range 13
    // closed e.Commands#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 13
    //DEBUG: e.Commands#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/11 AsIs: s.ScopeClass#1/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Commands#1/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherItem#1/7 >/1
  //DEBUG: t.OtherItem#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDs("SetScopeIDs", COOKIE1_, COOKIE2_, func_SetScopeIDs);


static refalrts::FnResult func_SetScopeIDsm_Commands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & SetScopeIDs-Commands/4 s.Hash1#1/5 s.Hash2#1/6 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Commands("SetScopeIDs-Commands", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Commands);


static refalrts::FnResult func_SetScopeIDsm_Command(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & SetScopeIDs-Command/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs-Command/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs-Command/4 s.new#4/5 s.new#5/6 (/7 s.new#6/11 e.new#7/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#7 as range 9
    do {
      // </0 & SetScopeIDs-Command/4 s.new#8/5 s.new#9/6 (/7 s.new#10/11 e.new#11/12 s.new#12/16 s.new#13/15 s.new#14/14 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#11 as range 12
      do {
        // </0 & SetScopeIDs-Command/4 s.new#15/5 s.new#16/6 (/7 # CmdNumber/11 s.new#19/16 s.new#18/15 s.new#17/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumber/11 s.Direction#1/16 s.BracketNum#1/15 # Cookie1/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
            continue;
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 16
          //DEBUG: s.BracketNum#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction#1/16 AsIs: s.BracketNum#1/15 HalfReuse: s.Hash11 #5/14 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_svar( context[14], context[5] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumber/11 s.Direction#1/16 s.BracketNum#1/15 # Cookie2/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
            continue;
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 16
          //DEBUG: s.BracketNum#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction#1/16 AsIs: s.BracketNum#1/15 HalfReuse: s.Hash21 #6/14 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_svar( context[14], context[6] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumber/11 s.Direction#1/16 s.BracketNum#1/15 s.Number#1/14 )/8 >/1
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Direction#1: 16
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.Number#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction#1/16 AsIs: s.BracketNum#1/15 AsIs: s.Number#1/14 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.new#15/5 s.new#16/6 (/7 s.new#17/11 s.new#21/19 s.new#20/16 s.new#19/15 s.new#18/14 )/8 >/1
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      do {
        // </0 & SetScopeIDs-Command/4 s.new#22/5 s.new#23/6 (/7 # CmdNumberSave/11 s.new#27/19 s.new#26/16 s.new#25/15 s.new#24/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[11] ) )
          continue;
        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumberSave/11 s.Direction#1/19 s.BracketNum#1/16 s.SaveOffset#1/15 # Cookie1/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
            continue;
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 19
          //DEBUG: s.BracketNum#1: 16
          //DEBUG: s.SaveOffset#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction#1/19 AsIs: s.BracketNum#1/16 AsIs: s.SaveOffset#1/15 HalfReuse: s.Hash11 #5/14 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_svar( context[14], context[5] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumberSave/11 s.Direction#1/19 s.BracketNum#1/16 s.SaveOffset#1/15 # Cookie2/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
            continue;
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 19
          //DEBUG: s.BracketNum#1: 16
          //DEBUG: s.SaveOffset#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction#1/19 AsIs: s.BracketNum#1/16 AsIs: s.SaveOffset#1/15 HalfReuse: s.Hash21 #6/14 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_svar( context[14], context[6] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumberSave/11 s.Direction#1/19 s.BracketNum#1/16 s.SaveOffset#1/15 s.Number#1/14 )/8 >/1
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Direction#1: 19
        //DEBUG: s.BracketNum#1: 16
        //DEBUG: s.SaveOffset#1: 15
        //DEBUG: s.Number#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction#1/19 AsIs: s.BracketNum#1/16 AsIs: s.SaveOffset#1/15 AsIs: s.Number#1/14 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.new#22/5 s.new#23/6 (/7 # CmdCreateElem/11 s.new#26/19 s.new#25/16 # ElNumber/15 s.new#24/14 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[15] ) )
        continue;
      do {
        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdCreateElem/11 s.CreateMode#1/19 s.ElemNo#1/16 # ElNumber/15 # Cookie1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
          continue;
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.CreateMode#1: 19
        //DEBUG: s.ElemNo#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode#1/19 AsIs: s.ElemNo#1/16 AsIs: # ElNumber/15 HalfReuse: s.Hash11 #5/14 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_svar( context[14], context[5] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdCreateElem/11 s.CreateMode#1/19 s.ElemNo#1/16 # ElNumber/15 # Cookie2/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
          continue;
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.CreateMode#1: 19
        //DEBUG: s.ElemNo#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode#1/19 AsIs: s.ElemNo#1/16 AsIs: # ElNumber/15 HalfReuse: s.Hash21 #6/14 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_svar( context[14], context[6] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdCreateElem/11 s.CreateMode#1/19 s.ElemNo#1/16 # ElNumber/15 s.Number#1/14 )/8 >/1
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: s.CreateMode#1: 19
      //DEBUG: s.ElemNo#1: 16
      //DEBUG: s.Number#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode#1/19 AsIs: s.ElemNo#1/16 AsIs: # ElNumber/15 AsIs: s.Number#1/14 AsIs: )/8 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdSentence/11 e.SubCommands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.SubCommands#1 as range 12
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.SubCommands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSentence/11 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/15 s.VarNumber#1/16 e.SubCommands#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[11] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_AlgLeft], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.SubCommands#1 as range 12
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.BracketNum#1: 15
    //DEBUG: s.VarNumber#1: 16
    //DEBUG: e.SubCommands#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/14 AsIs: s.BracketNum#1/15 AsIs: s.VarNumber#1/16 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherCommand#1/7 >/1
  //DEBUG: t.OtherCommand#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Command("SetScopeIDs-Command", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Command);


static refalrts::FnResult func_SetScopeIDsm_Patch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & SetScopeIDs-Patch/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs-Patch/4 s.new#1/5 s.new#2/6 s.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash11 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash21 #6/1 ]] }
    refalrts::reinit_svar( context[1], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 >/1
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.Number#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #7/1 ]] }
  refalrts::reinit_svar( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Patch("SetScopeIDs-Patch", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Patch);


static refalrts::FnResult func_SelectConstantsOutliner(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & SelectConstantsOutliner/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & SelectConstantsOutliner/4 e.Items-B#1/7 (/13 # NativeBlock/15 t.SrcPos#1/16 e.Code#1/11 )/14 e.Items-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_NativeBlock], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Items-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Code#1 as range 11
      //DEBUG: e.Items-B#1: 7
      //DEBUG: e.Items-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Code#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B#1/7 AsIs: (/13 AsIs: # NativeBlock/15 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/11 AsIs: )/14 } Tile{ AsIs: e.Items-E#1/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_WithNative]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SelectConstantsOutliner/4 e.Items-B#1/7 (/13 # CmdNativeFunction/15 s.ScopeClass#1/16 (/19 e.Name#1/17 )/20 t.SrcPos#1/21 e.Code#1/11 )/14 e.Items-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_CmdNativeFunction], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Items-E#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      context[22] = refalrts::tvar_left( context[21], context[11], context[12] );
      if( ! context[22] )
        continue;
      // closed e.Code#1 as range 11
      //DEBUG: e.Items-B#1: 7
      //DEBUG: e.Items-E#1: 9
      //DEBUG: s.ScopeClass#1: 16
      //DEBUG: e.Name#1: 17
      //DEBUG: t.SrcPos#1: 21
      //DEBUG: e.Code#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B#1/7 AsIs: (/13 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass#1/16 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: t.SrcPos#1/21 AsIs: e.Code#1/11 AsIs: )/14 } Tile{ AsIs: e.Items-E#1/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_WithNative]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SelectConstantsOutliner/4 e.Items#1/2 >/1
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & SelectConstantsOutliner/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & OutlineConstants-RASLOnly/0 } Tile{ AsIs: e.Items#1/2 } Tile{ ]] }
  refalrts::reinit_name(context[0], functions[efunc_OutlineConstantsm_RASLOnly]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SelectConstantsOutliner("SelectConstantsOutliner", COOKIE1_, COOKIE2_, func_SelectConstantsOutliner);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-WithNative$2=2/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#3/10 e.Commands#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#3 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#3: 10
  //DEBUG: e.Commands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Commands#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S2A2("OutlineConstants-WithNative$2=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S2A2);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OutlineConstants-WithNative$2=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.Commands#1/10 )/13 t.Tables#2/14 s.Id#2/16 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
  // closed e.Name#1 as range 6
  // closed e.Commands#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.Commands#1: 10
  //DEBUG: t.Tables#2: 14
  //DEBUG: s.Id#2: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$2=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 HalfReuse: </12 } Tile{ HalfReuse: & DoMapAccum@2/13 AsIs: t.Tables#2/14 } (/17 )/18 Tile{ AsIs: e.Commands#1/10 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S2A2]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[13], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S2A1("OutlineConstants-WithNative$2=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S2A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OutlineConstants-WithNative$3=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.SrcPos#1/10 (/14 e.Code#1/12 )/15 t.Tables#2/16 s.Id#2/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Code#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 12
  //DEBUG: t.Tables#2: 16
  //DEBUG: s.Id#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/14 {REMOVED TILE} )/15 {REMOVED TILE} s.Id#2/18 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/16 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdNativeFunction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S3A1("OutlineConstants-WithNative$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S3A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-WithNative$4=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Metatable#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Metatable#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Metatable#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdMetatable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S4A1("OutlineConstants-WithNative$4=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S4A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S5A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-WithNative$5=2/4 s.Definition#1/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 t.Tables#3/11 s.Id#3/13 >/1
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
  // closed e.Name#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Definition#1: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: t.Tables#3: 11
  //DEBUG: s.Id#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.ScopeClass#1/6 {REMOVED TILE} {REMOVED TILE} s.Id#3/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#3/11 } Tile{ HalfReuse: (/4 AsIs: s.Definition#1/5 } Tile{ HalfReuse: s.ScopeClass1 #6/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::link_brackets( context[4], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S5A2("OutlineConstants-WithNative$5=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S5A2);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & OutlineConstants-WithNative$6=1/4 t.Tables#2/5 s.Id#2/7 >/1
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
  //DEBUG: t.Tables#2: 5
  //DEBUG: s.Id#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative$6=1/4 {REMOVED TILE} s.Id#2/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S6A1("OutlineConstants-WithNative$6=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S6A1);


static refalrts::FnResult func_OutlineConstantsm_WithNative(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & OutlineConstants-WithNative/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-WithNative/4 t.new#1/10 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # UnitName/9 e.SrcName#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[9] ) )
      continue;
    // closed e.SrcName#1 as range 12
    //DEBUG: t.Tables#1: 10
    //DEBUG: e.SrcName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/10 AsIs: (/7 AsIs: # UnitName/9 AsIs: e.SrcName#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OutlineConstants-WithNative/4 t.new#4/10 (/7 s.new#5/9 s.new#6/14 e.new#7/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & OutlineConstants-WithNative/4 t.new#8/10 (/7 s.new#9/9 s.new#10/14 (/19 e.new#11/17 )/20 e.new#12/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new#11 as range 17
      // closed e.new#12 as range 15
      do {
        // </0 & OutlineConstants-WithNative/4 t.new#13/10 (/7 # Function/9 s.new#14/14 (/19 e.new#16/21 )/20 e.new#15/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
          continue;
        // closed e.new#16 as range 21
        // closed e.new#15 as range 23
        do {
          // </0 & OutlineConstants-WithNative/4 (/10 t.#0/31 t.0#0/33 )/11 (/7 # Function/9 s.ScopeClass#1/14 (/19 e.Name#1/25 )/20 e.Commands#1/27 )/8 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = 0;
          context[30] = 0;
          if( ! refalrts::brackets_term( context[29], context[30], context[10] ) )
            continue;
          // closed e.Name#1 as range 25
          // closed e.Commands#1 as range 27
          context[32] = refalrts::tvar_left( context[31], context[29], context[30] );
          if( ! context[32] )
            continue;
          context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
          if( ! context[34] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: s.ScopeClass#1: 14
          //DEBUG: e.Name#1: 25
          //DEBUG: e.Commands#1: 27
          //DEBUG: t.#0: 31
          //DEBUG: t.0#0: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$2=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/25 AsIs: )/20 } (/35 Tile{ AsIs: e.Commands#1/27 } )/36 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0#0/33 HalfReuse: </11 } Tile{ HalfReuse: & UpdateTable/10 AsIs: t.#0/31 } e.Name#1/25/37 >/39 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[35]);
          refalrts::alloc_close_bracket(vm, context[36]);
          refalrts::copy_evar(vm, context[37], context[38], context[25], context[26]);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S2A1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_UpdateTable]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[11] );
          refalrts::link_brackets( context[35], context[36] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[10], context[32] );
          res = refalrts::splice_evar( res, context[33], context[11] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[7], context[20] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # Function/9 s.ScopeClass#1/14 (/19 e.Name#1/25 )/20 e.Commands#1/27 )/8 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        // closed e.Name#1 as range 25
        // closed e.Commands#1 as range 27
        //DEBUG: t.Tables#1: 10
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 25
        //DEBUG: e.Commands#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$2=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/25 AsIs: )/20 } (/29 Tile{ AsIs: e.Commands#1/27 } )/30 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/10 } e.Name#1/25/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S2A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[7], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-WithNative/4 t.new#13/10 (/7 # CmdNativeFunction/9 s.new#14/14 (/19 e.new#17/21 )/20 t.new#15/25 e.new#16/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[9] ) )
          continue;
        // closed e.new#17 as range 21
        context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
        if( ! context[26] )
          continue;
        // closed e.new#16 as range 23
        do {
          // </0 & OutlineConstants-WithNative/4 (/10 t.#0/33 t.0#0/35 )/11 (/7 # CmdNativeFunction/9 s.ScopeClass#1/14 (/19 e.Name#1/27 )/20 t.SrcPos#1/25 e.Code#1/29 )/8 >/1
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          context[30] = context[24];
          context[31] = 0;
          context[32] = 0;
          if( ! refalrts::brackets_term( context[31], context[32], context[10] ) )
            continue;
          // closed e.Name#1 as range 27
          // closed e.Code#1 as range 29
          context[34] = refalrts::tvar_left( context[33], context[31], context[32] );
          if( ! context[34] )
            continue;
          context[36] = refalrts::tvar_left( context[35], context[31], context[32] );
          if( ! context[36] )
            continue;
          if( ! refalrts::empty_seq( context[31], context[32] ) )
            continue;
          //DEBUG: t.SrcPos#1: 25
          //DEBUG: s.ScopeClass#1: 14
          //DEBUG: e.Name#1: 27
          //DEBUG: e.Code#1: 29
          //DEBUG: t.#0: 33
          //DEBUG: t.0#0: 35

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$3=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/27 AsIs: )/20 AsIs: t.SrcPos#1/25 } (/37 Tile{ AsIs: e.Code#1/29 } )/38 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0#0/35 HalfReuse: </11 } Tile{ HalfReuse: & UpdateTable/10 AsIs: t.#0/33 } e.Name#1/27/39 >/41 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[37]);
          refalrts::alloc_close_bracket(vm, context[38]);
          refalrts::copy_evar(vm, context[39], context[40], context[27], context[28]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S3A1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_UpdateTable]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[11] );
          refalrts::link_brackets( context[37], context[38] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[10], context[34] );
          res = refalrts::splice_evar( res, context[35], context[11] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_evar( res, context[7], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdNativeFunction/9 s.ScopeClass#1/14 (/19 e.Name#1/27 )/20 t.SrcPos#1/25 e.Code#1/29 )/8 >/1
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        // closed e.Name#1 as range 27
        // closed e.Code#1 as range 29
        //DEBUG: t.Tables#1: 10
        //DEBUG: t.SrcPos#1: 25
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 27
        //DEBUG: e.Code#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$3=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/27 AsIs: )/20 AsIs: t.SrcPos#1/25 } (/31 Tile{ AsIs: e.Code#1/29 } )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/10 } e.Name#1/27/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::copy_evar(vm, context[33], context[34], context[27], context[28]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S3A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[7], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdMetatable/9 s.ScopeClass#1/14 (/19 e.Name#1/21 )/20 e.Metatable#1/23 )/8 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[15];
      context[24] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[9] ) )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Metatable#1 as range 23
      //DEBUG: t.Tables#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 21
      //DEBUG: e.Metatable#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$4=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/21 AsIs: )/20 } Tile{ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables#1/10 } (/25 )/26 Tile{ AsIs: e.Metatable#1/23 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S4A1]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 s.Definition#1/9 s.ScopeClass#1/14 e.Name#1/15 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    // closed e.Name#1 as range 15
    //DEBUG: t.Tables#1: 10
    //DEBUG: s.Definition#1: 9
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //9: s.Definition#1
    //10: t.Tables#1
    //14: s.ScopeClass#1
    //15: e.Name#1
    //22: s.Definition#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_OutlineConstantsm_WithNative_S5C1]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_CmdEnum]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdSwap]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdConditionFunc]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdDeclaration]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & OutlineConstants-WithNative$5?1/21 # True/22 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = refalrts::ident_left( identifiers[ident_True], context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.Tables#1: 10
      //DEBUG: s.Definition#1: 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/22 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$5=2/4 } Tile{ AsIs: s.Definition#1/9 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/8 AsIs: </17 Reuse: & UpdateFuncTable/21 } Tile{ AsIs: t.Tables#1/10 } e.Name#1/15/23 Tile{ AsIs: >/18 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S5A2]);
      refalrts::update_name(context[21], functions[efunc_UpdateFuncTable]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[8], context[21] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OutlineConstants-WithNative/4 t.new#4/10 (/7 # CmdDefineIdent/9 e.new#5/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[9] ) )
      continue;
    // closed e.new#5 as range 12
    do {
      // </0 & OutlineConstants-WithNative/4 (/10 t.#0/18 t.0#0/20 )/11 (/7 # CmdDefineIdent/9 e.Name#1/14 )/8 >/1
      context[14] = context[12];
      context[15] = context[13];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_term( context[16], context[17], context[10] ) )
        continue;
      // closed e.Name#1 as range 14
      context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
      if( ! context[19] )
        continue;
      context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //DEBUG: e.Name#1: 14
      //DEBUG: t.#0: 18
      //DEBUG: t.0#0: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$6=1/4 HalfReuse: </10 } Tile{ HalfReuse: & UpdateIdentTable=1/9 } Tile{ AsIs: t.#0/18 } Tile{ HalfReuse: </11 HalfReuse: & UpdateTable/7 } Tile{ AsIs: t.0#0/20 } Tile{ AsIs: e.Name#1/14 } >/22 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S6A1]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[9], functions[efunc_gen_UpdateIdentTable_A1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[7], functions[efunc_UpdateTable]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[11], context[7] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdDefineIdent/9 e.Name#1/14 )/8 >/1
    context[14] = context[12];
    context[15] = context[13];
    // closed e.Name#1 as range 14
    //DEBUG: t.Tables#1: 10
    //DEBUG: e.Name#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$6=1/4 } Tile{ HalfReuse: </7 HalfReuse: & UpdateIdentTable*1/9 } Tile{ AsIs: t.Tables#1/10 } Tile{ AsIs: e.Name#1/14 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S6A1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_gen_UpdateIdentTable_D1]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/12 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.Tables#1: 10
  //DEBUG: t.SrcPos#1: 12
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/10 AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos#1/12 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_WithNative("OutlineConstants-WithNative", COOKIE1_, COOKIE2_, func_OutlineConstantsm_WithNative);


static refalrts::FnResult func_gen_OutlineConstantsm_RASLOnly_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-RASLOnly$1=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_RASLOnly_S1A1("OutlineConstants-RASLOnly$1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_RASLOnly_S1A1);


static refalrts::FnResult func_gen_OutlineConstantsm_RASLOnly_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-RASLOnly$3=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Metatable#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Metatable#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Metatable#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdMetatable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_RASLOnly_S3A1("OutlineConstants-RASLOnly$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_RASLOnly_S3A1);


static refalrts::FnResult func_OutlineConstantsm_RASLOnly(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & OutlineConstants-RASLOnly/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-RASLOnly/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-RASLOnly/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # Function/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Commands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Name#1 as range 15
      // closed e.Commands#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Commands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$1=1/11 AsIs: s.ScopeClass#1/14 AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables#1/5 } (/19 )/20 Tile{ AsIs: e.Commands#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_RASLOnly_S1A1]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[7], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # CmdDefineIdent/11 e.Name#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} (/7 # CmdDefineIdent/11 e.Name#1/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # CmdMetatable/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Metatable#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 15
    // closed e.Metatable#1 as range 12
    //DEBUG: t.Tables#1: 5
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Metatable#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$3=1/11 AsIs: s.ScopeClass#1/14 AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables#1/5 } (/19 )/20 Tile{ AsIs: e.Metatable#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_RASLOnly_S3A1]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 t.OtherItem#1/7 >/1
  //DEBUG: t.Tables#1: 5
  //DEBUG: t.OtherItem#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_RASLOnly("OutlineConstants-RASLOnly", COOKIE1_, COOKIE2_, func_OutlineConstantsm_RASLOnly);


static refalrts::FnResult func_gen_OutlineConstantsm_Metatable_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OutlineConstants-Metatable\1=2/4 s.IdentId#3/5 t.Tables#4/6 s.FuncId#4/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.IdentId#3: 5
  //DEBUG: t.Tables#4: 6
  //DEBUG: s.FuncId#4: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#4/6 } Tile{ HalfReuse: (/4 AsIs: s.IdentId#3/5 } Tile{ AsIs: s.FuncId#4/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_Metatable_L1A2("OutlineConstants-Metatable\\1=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_Metatable_L1A2);


static refalrts::FnResult func_gen_OutlineConstantsm_Metatable_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & OutlineConstants-Metatable\1=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.Function#2/12 )/8 (/9 t.#0/16 t.0#0/18 )/10 s.IdentId#3/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[9] ) )
      continue;
    // closed e.Function#2 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.IdentId#3: 11
    //DEBUG: e.Function#2: 12
    //DEBUG: t.#0: 16
    //DEBUG: t.0#0: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentId#3/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-Metatable\1=2/4 HalfReuse: s.IdentId3 #11/7 } </20 & UpdateFuncTable=1/21 Tile{ AsIs: t.0#0/18 } Tile{ HalfReuse: </8 HalfReuse: & UpdateTable/9 AsIs: t.#0/16 } Tile{ AsIs: e.Function#2/12 } Tile{ HalfReuse: >/10 } >/22 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_UpdateFuncTable_A1]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1A2]);
    refalrts::reinit_svar( context[7], context[11] );
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[9], functions[efunc_UpdateTable]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[17] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.Function#2/5 )/8 t.Tables#3/9 s.IdentId#3/11 >/1
  // closed e.Function#2 as range 5
  //DEBUG: t.Tables#3: 9
  //DEBUG: s.IdentId#3: 11
  //DEBUG: e.Function#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentId#3/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-Metatable\1=2/4 HalfReuse: s.IdentId3 #11/7 } </12 Tile{ HalfReuse: & UpdateFuncTable*1/8 AsIs: t.Tables#3/9 } Tile{ AsIs: e.Function#2/5 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1A2]);
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::reinit_name(context[8], functions[efunc_gen_UpdateFuncTable_D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_Metatable_L1A1("OutlineConstants-Metatable\\1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_Metatable_L1A1);


static refalrts::FnResult func_OutlineConstantsm_Metatable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OutlineConstants-Metatable/4 t.Tables#1/5 e.Metatable#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#1 as range 2
  //DEBUG: t.Tables#1: 5
  //DEBUG: e.Metatable#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables#1/5 } (/7 )/8 Tile{ AsIs: e.Metatable#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_Metatable("OutlineConstants-Metatable", COOKIE1_, COOKIE2_, func_OutlineConstantsm_Metatable);


static refalrts::FnResult func_OutlineConstantsm_Commands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OutlineConstants-Commands/4 t.Tables#1/5 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: t.Tables#1: 5
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables#1/5 } (/7 )/8 Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_Commands("OutlineConstants-Commands", COOKIE1_, COOKIE2_, func_OutlineConstantsm_Commands);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$1=1/4 s.Direction#1/5 s.BracketNum#1/6 (/9 e.Func#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
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
  // closed e.Func#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: e.Func#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdName/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 HalfReuse: s.Id2 #13/9 AsIs: e.Func#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdName]);
  refalrts::reinit_svar( context[9], context[13] );
  refalrts::link_brackets( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S1A1("OutlineConstants-OneCommand$1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S1A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$2=1/4 s.Direction#1/5 s.BracketNum#1/6 s.SaveOffset#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.SaveOffset#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNameSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.SaveOffset#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdNameSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S2A1("OutlineConstants-OneCommand$2=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S2A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$3=1/4 s.CreateMode#1/5 s.ElemNo#1/6 (/9 e.Func#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
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
  // closed e.Func#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode#1: 5
  //DEBUG: s.ElemNo#1: 6
  //DEBUG: e.Func#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode#1/5 AsIs: s.ElemNo#1/6 HalfReuse: # ElName/9 } Tile{ AsIs: s.Id#2/13 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
  refalrts::reinit_ident(context[9], identifiers[ident_ElName]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S3A1("OutlineConstants-OneCommand$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S3A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$4=1/4 s.Direction#1/5 s.BracketNum#1/6 s.InnerBrackets#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.InnerBrackets#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADT/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.InnerBrackets#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdADT]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S4A1("OutlineConstants-OneCommand$4=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S4A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$5=1/4 s.Direction#1/5 s.BracketNum#1/6 s.InnerBrackets#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.InnerBrackets#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADTSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.InnerBrackets#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdADTSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S5A1("OutlineConstants-OneCommand$5=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S5A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$6=1/4 s.Direction#1/5 s.BracketNum#1/6 (/9 e.Ident#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
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
  // closed e.Ident#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: e.Ident#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdent/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 HalfReuse: s.Id2 #13/9 AsIs: e.Ident#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdIdent]);
  refalrts::reinit_svar( context[9], context[13] );
  refalrts::link_brackets( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S6A1("OutlineConstants-OneCommand$6=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S6A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$7=1/4 s.Direction#1/5 s.BracketNum#1/6 s.SaveOffset#1/7 (/10 e.Ident#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Ident#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.SaveOffset#1: 7
  //DEBUG: e.Ident#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdentSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.SaveOffset#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Ident#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdIdentSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S7A1("OutlineConstants-OneCommand$7=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S7A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S8A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$8=1/4 s.CreateMode#1/5 s.ElemNo#1/6 (/9 e.Ident#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
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
  // closed e.Ident#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode#1: 5
  //DEBUG: s.ElemNo#1: 6
  //DEBUG: e.Ident#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode#1/5 AsIs: s.ElemNo#1/6 HalfReuse: # ElIdent/9 } Tile{ AsIs: s.Id#2/13 } Tile{ AsIs: e.Ident#1/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
  refalrts::reinit_ident(context[9], identifiers[ident_ElIdent]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S8A1("OutlineConstants-OneCommand$8=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S8A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S9A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OutlineConstants-OneCommand$9=1/4 t.Tables#2/5 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: t.Tables#2: 5
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/5 } Tile{ HalfReuse: (/0 HalfReuse: # CmdSentence/4 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdSentence]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S9A1("OutlineConstants-OneCommand$9=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S9A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S10A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OutlineConstants-OneCommand$10=1/4 s.BracketNum#1/5 s.VarNumber#1/6 t.Tables#2/7 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: s.BracketNum#1: 5
  //DEBUG: s.VarNumber#1: 6
  //DEBUG: t.Tables#2: 7
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/7 } (/9 Tile{ HalfReuse: # CmdOpenELoop/0 HalfReuse: # AlgLeft/4 AsIs: s.BracketNum#1/5 AsIs: s.VarNumber#1/6 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::reinit_ident(context[0], identifiers[ident_CmdOpenELoop]);
  refalrts::reinit_ident(context[4], identifiers[ident_AlgLeft]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S10A1("OutlineConstants-OneCommand$10=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S10A1);


static refalrts::FnResult func_OutlineConstantsm_OneCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & OutlineConstants-OneCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-OneCommand/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-OneCommand/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & OutlineConstants-OneCommand/4 t.new#6/5 (/7 s.new#7/11 s.new#8/14 s.new#9/15 e.new#10/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      // closed e.new#10 as range 12
      do {
        // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 # CmdName/11 s.new#12/14 s.new#13/15 e.new#14/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdName], context[11] ) )
          continue;
        // closed e.new#14 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/22 t.0#0/24 )/6 (/7 # CmdName/11 s.Direction#1/14 s.BracketNum#1/15 e.Func#1/18 )/8 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[5] ) )
            continue;
          // closed e.Func#1 as range 18
          context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
          if( ! context[23] )
            continue;
          context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
          if( ! context[25] )
            continue;
          if( ! refalrts::empty_seq( context[20], context[21] ) )
            continue;
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: e.Func#1: 18
          //DEBUG: t.#0: 22
          //DEBUG: t.0#0: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Direction#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-OneCommand$1=1/4 HalfReuse: s.Direction1 #14/5 } Tile{ AsIs: s.BracketNum#1/15 } (/26 Tile{ AsIs: e.Func#1/18 } Tile{ AsIs: )/6 HalfReuse: </7 HalfReuse: & UpdateFuncTable=1/11 } Tile{ AsIs: t.0#0/24 } </27 & UpdateTable/28 Tile{ AsIs: t.#0/22 } e.Func#1/18/29 >/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[26]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_UpdateTable]);
          refalrts::copy_evar(vm, context[29], context[30], context[18], context[19]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_OneCommand_S1A1]);
          refalrts::reinit_svar( context[5], context[14] );
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_UpdateFuncTable_A1]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[27] );
          refalrts::link_brackets( context[26], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[6], context[11] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdName/11 s.Direction#1/14 s.BracketNum#1/15 e.Func#1/18 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e.Func#1 as range 18
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: e.Func#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$1=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 } (/20 e.Func#1/18/21 )/23 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::copy_evar(vm, context[21], context[22], context[18], context[19]);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S1A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[20], context[23] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/18 e.new#16/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new#16 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdNameSave/11 s.new#18/14 s.new#19/15 s.new#20/18 e.new#21/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[11] ) )
            continue;
          // closed e.new#21 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdNameSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Func#1/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func#1 as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.Direction#1: 14
            //DEBUG: s.BracketNum#1: 15
            //DEBUG: s.SaveOffset#1: 18
            //DEBUG: e.Func#1: 21
            //DEBUG: t.#0: 25
            //DEBUG: t.0#0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$2=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/29 e.Func#1/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0#0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t.#0/25 } Tile{ AsIs: e.Func#1/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[29]);
            refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
            refalrts::alloc_close_bracket(vm, context[32]);
            refalrts::alloc_close_call(vm, context[33]);
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S2A1]);
            refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
            refalrts::reinit_open_call(context[6]);
            refalrts::reinit_name(context[5], functions[efunc_UpdateTable]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[7] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[6] );
            refalrts::link_brackets( context[29], context[32] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_elem( res, context[33] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[5], context[26] );
            res = refalrts::splice_evar( res, context[27], context[6] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[29], context[32] );
            res = refalrts::splice_evar( res, context[7], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdNameSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Func#1/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func#1 as range 21
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.SaveOffset#1: 18
          //DEBUG: e.Func#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$2=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/23 e.Func#1/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[23]);
          refalrts::copy_evar(vm, context[24], context[25], context[21], context[22]);
          refalrts::alloc_close_bracket(vm, context[26]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S2A1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[23], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[23], context[26] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdCreateElem/11 s.new#18/14 s.new#19/15 # ElName/18 e.new#20/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_ElName], context[18] ) )
            continue;
          // closed e.new#20 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElName/18 e.Func#1/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func#1 as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.CreateMode#1: 14
            //DEBUG: s.ElemNo#1: 15
            //DEBUG: e.Func#1: 21
            //DEBUG: t.#0: 25
            //DEBUG: t.0#0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$3=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Func#1/21 AsIs: )/8 HalfReuse: </1 } Tile{ HalfReuse: & UpdateFuncTable=1/0 } Tile{ AsIs: t.0#0/27 } Tile{ HalfReuse: </4 HalfReuse: & UpdateTable/5 AsIs: t.#0/25 } e.Func#1/21/29 Tile{ HalfReuse: >/6 } >/31 >/32 Tile{ ]] }
            refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
            refalrts::alloc_close_call(vm, context[31]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S3A1]);
            refalrts::reinit_open_bracket(context[18]);
            refalrts::reinit_open_call(context[1]);
            refalrts::reinit_name(context[0], functions[efunc_gen_UpdateFuncTable_A1]);
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[5], functions[efunc_UpdateTable]);
            refalrts::reinit_close_call(context[6]);
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[7] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[4] );
            refalrts::link_brackets( context[18], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[31], context[32] );
            res = refalrts::splice_elem( res, context[6] );
            res = refalrts::splice_evar( res, context[29], context[30] );
            res = refalrts::splice_evar( res, context[4], context[26] );
            res = refalrts::splice_evar( res, context[27], context[28] );
            res = refalrts::splice_elem( res, context[0] );
            res = refalrts::splice_evar( res, context[7], context[1] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElName/18 e.Func#1/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func#1 as range 21
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.CreateMode#1: 14
          //DEBUG: s.ElemNo#1: 15
          //DEBUG: e.Func#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$3=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Func#1/21 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/5 } e.Func#1/21/23 Tile{ HalfReuse: >/0 } >/25 Tile{ ]] }
          refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S3A1]);
          refalrts::reinit_open_bracket(context[18]);
          refalrts::reinit_open_call(context[1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
          refalrts::reinit_close_call(context[0]);
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[1] );
          refalrts::link_brackets( context[18], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_elem( res, context[25] );
          res = refalrts::splice_elem( res, context[0] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[4], context[6] );
          res = refalrts::splice_evar( res, context[7], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdADT/11 s.new#18/14 s.new#19/15 s.new#20/18 e.new#21/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[11] ) )
            continue;
          // closed e.new#21 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdADT/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func#1 as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.Direction#1: 14
            //DEBUG: s.BracketNum#1: 15
            //DEBUG: s.InnerBrackets#1: 18
            //DEBUG: e.Func#1: 21
            //DEBUG: t.#0: 25
            //DEBUG: t.0#0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$4=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/29 e.Func#1/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0#0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t.#0/25 } Tile{ AsIs: e.Func#1/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[29]);
            refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
            refalrts::alloc_close_bracket(vm, context[32]);
            refalrts::alloc_close_call(vm, context[33]);
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S4A1]);
            refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
            refalrts::reinit_open_call(context[6]);
            refalrts::reinit_name(context[5], functions[efunc_UpdateTable]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[7] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[6] );
            refalrts::link_brackets( context[29], context[32] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_elem( res, context[33] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[5], context[26] );
            res = refalrts::splice_evar( res, context[27], context[6] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[29], context[32] );
            res = refalrts::splice_evar( res, context[7], context[18] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdADT/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func#1 as range 21
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.InnerBrackets#1: 18
          //DEBUG: e.Func#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$4=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/23 e.Func#1/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[23]);
          refalrts::copy_evar(vm, context[24], context[25], context[21], context[22]);
          refalrts::alloc_close_bracket(vm, context[26]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S4A1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[23], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[23], context[26] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdADTSave/11 s.new#18/14 s.new#19/15 s.new#20/18 e.new#21/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[11] ) )
          continue;
        // closed e.new#21 as range 19
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdADTSave/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
            continue;
          // closed e.Func#1 as range 21
          context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
          if( ! context[26] )
            continue;
          context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.InnerBrackets#1: 18
          //DEBUG: e.Func#1: 21
          //DEBUG: t.#0: 25
          //DEBUG: t.0#0: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$5=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/29 e.Func#1/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0#0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t.#0/25 } Tile{ AsIs: e.Func#1/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[29]);
          refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_close_call(vm, context[33]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S5A1]);
          refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_name(context[5], functions[efunc_UpdateTable]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[29], context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[5], context[26] );
          res = refalrts::splice_evar( res, context[27], context[6] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[29], context[32] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdADTSave/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Func#1 as range 21
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.InnerBrackets#1: 18
        //DEBUG: e.Func#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$5=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/23 e.Func#1/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::copy_evar(vm, context[24], context[25], context[21], context[22]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S5A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[23], context[26] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 # CmdIdent/11 s.new#12/14 s.new#13/15 e.new#14/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[11] ) )
          continue;
        // closed e.new#14 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/22 t.0#0/24 )/6 (/7 # CmdIdent/11 s.Direction#1/14 s.BracketNum#1/15 e.Ident#1/18 )/8 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[5] ) )
            continue;
          // closed e.Ident#1 as range 18
          context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
          if( ! context[23] )
            continue;
          context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
          if( ! context[25] )
            continue;
          if( ! refalrts::empty_seq( context[20], context[21] ) )
            continue;
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: e.Ident#1: 18
          //DEBUG: t.#0: 22
          //DEBUG: t.0#0: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Direction#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-OneCommand$6=1/4 HalfReuse: s.Direction1 #14/5 } Tile{ AsIs: s.BracketNum#1/15 } (/26 Tile{ AsIs: e.Ident#1/18 } Tile{ AsIs: )/6 HalfReuse: </7 HalfReuse: & UpdateIdentTable=1/11 } Tile{ AsIs: t.#0/22 } </27 & UpdateTable/28 Tile{ AsIs: t.0#0/24 } e.Ident#1/18/29 >/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[26]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_UpdateTable]);
          refalrts::copy_evar(vm, context[29], context[30], context[18], context[19]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_OneCommand_S6A1]);
          refalrts::reinit_svar( context[5], context[14] );
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_UpdateIdentTable_A1]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[27] );
          refalrts::link_brackets( context[26], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[6], context[11] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdIdent/11 s.Direction#1/14 s.BracketNum#1/15 e.Ident#1/18 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e.Ident#1 as range 18
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: e.Ident#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$6=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 } (/20 e.Ident#1/18/21 )/23 Tile{ AsIs: </0 Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Ident#1/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::copy_evar(vm, context[21], context[22], context[18], context[19]);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S6A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateIdentTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[20], context[23] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/18 e.new#16/16 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
        continue;
      // closed e.new#16 as range 16
      do {
        // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdIdentSave/11 s.new#18/14 s.new#19/15 s.new#20/18 e.new#21/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[11] ) )
          continue;
        // closed e.new#21 as range 19
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdIdentSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Ident#1/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
            continue;
          // closed e.Ident#1 as range 21
          context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
          if( ! context[26] )
            continue;
          context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.SaveOffset#1: 18
          //DEBUG: e.Ident#1: 21
          //DEBUG: t.#0: 25
          //DEBUG: t.0#0: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$7=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/29 e.Ident#1/21/30 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & UpdateIdentTable=1/5 AsIs: t.#0/25 } Tile{ HalfReuse: </6 } & UpdateTable/32 Tile{ AsIs: t.0#0/27 } Tile{ AsIs: e.Ident#1/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[29]);
          refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
          refalrts::alloc_name(vm, context[32], functions[efunc_UpdateTable]);
          refalrts::alloc_close_call(vm, context[33]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S7A1]);
          refalrts::reinit_close_bracket(context[0]);
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_gen_UpdateIdentTable_A1]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[29], context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_elem( res, context[6] );
          res = refalrts::splice_evar( res, context[0], context[26] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_elem( res, context[29] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdIdentSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Ident#1/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Ident#1 as range 21
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.SaveOffset#1: 18
        //DEBUG: e.Ident#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$7=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/23 e.Ident#1/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Ident#1/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::copy_evar(vm, context[24], context[25], context[21], context[22]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S7A1]);
        refalrts::update_name(context[4], functions[efunc_gen_UpdateIdentTable_D1]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[23], context[26] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-OneCommand/4 t.new#17/5 (/7 # CmdCreateElem/11 s.new#18/14 s.new#19/15 # ElIdent/18 e.new#20/19 )/8 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[18] ) )
        continue;
      // closed e.new#20 as range 19
      do {
        // </0 & OutlineConstants-OneCommand/4 (/5 t.#0/25 t.0#0/27 )/6 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElIdent/18 e.Ident#1/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        context[23] = 0;
        context[24] = 0;
        if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
          continue;
        // closed e.Ident#1 as range 21
        context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
        if( ! context[26] )
          continue;
        context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: s.CreateMode#1: 14
        //DEBUG: s.ElemNo#1: 15
        //DEBUG: e.Ident#1: 21
        //DEBUG: t.#0: 25
        //DEBUG: t.0#0: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$8=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Ident#1/21 AsIs: )/8 HalfReuse: </1 } Tile{ HalfReuse: & UpdateIdentTable=1/5 AsIs: t.#0/25 } Tile{ AsIs: </0 Reuse: & UpdateTable/4 } Tile{ AsIs: t.0#0/27 } e.Ident#1/21/29 Tile{ HalfReuse: >/6 } >/31 >/32 Tile{ ]] }
        refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S8A1]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[5], functions[efunc_gen_UpdateIdentTable_A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateTable]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[26] );
        res = refalrts::splice_evar( res, context[7], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElIdent/18 e.Ident#1/21 )/8 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Ident#1 as range 21
      //DEBUG: t.Tables#1: 5
      //DEBUG: s.CreateMode#1: 14
      //DEBUG: s.ElemNo#1: 15
      //DEBUG: e.Ident#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$8=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Ident#1/21 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables#1/5 } e.Ident#1/21/23 Tile{ HalfReuse: >/0 } >/25 Tile{ ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S8A1]);
      refalrts::reinit_open_bracket(context[18]);
      refalrts::reinit_open_call(context[1]);
      refalrts::update_name(context[4], functions[efunc_gen_UpdateIdentTable_D1]);
      refalrts::reinit_close_call(context[0]);
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[18], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[4], context[6] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdSentence/11 e.Commands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.Commands#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: e.Commands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & OutlineConstants-OneCommand$9=1/15 Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables#1/5 AsIs: (/7 HalfReuse: )/11 AsIs: e.Commands#1/12 HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_gen_OutlineConstantsm_OneCommand_S9A1]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/15 s.VarNumber#1/16 e.Commands#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[11] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_AlgLeft], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.Commands#1 as range 12
    //DEBUG: t.Tables#1: 5
    //DEBUG: s.BracketNum#1: 15
    //DEBUG: s.VarNumber#1: 16
    //DEBUG: e.Commands#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: & OutlineConstants-OneCommand$10=1/14 AsIs: s.BracketNum#1/15 AsIs: s.VarNumber#1/16 } Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables#1/5 AsIs: (/7 HalfReuse: )/11 } Tile{ AsIs: e.Commands#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::reinit_name(context[14], functions[efunc_gen_OutlineConstantsm_OneCommand_S10A1]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 t.OtherCommand#1/7 >/1
  //DEBUG: t.Tables#1: 5
  //DEBUG: t.OtherCommand#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-OneCommand/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 AsIs: t.OtherCommand#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_OneCommand("OutlineConstants-OneCommand", COOKIE1_, COOKIE2_, func_OutlineConstantsm_OneCommand);


static refalrts::FnResult func_gen_UpdateFuncTable_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UpdateFuncTable=1/4 t.IdentTable#1/5 t.FuncTable#2/7 s.Id#2/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.IdentTable#1: 5
  //DEBUG: t.FuncTable#2: 7
  //DEBUG: s.Id#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: t.FuncTable#2/7 } Tile{ AsIs: t.IdentTable#1/5 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: s.Id2 #9/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateFuncTable_A1("UpdateFuncTable=1", COOKIE1_, COOKIE2_, func_gen_UpdateFuncTable_A1);


static refalrts::FnResult func_UpdateFuncTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & UpdateFuncTable/4 (/7 t.FuncTable#1/9 t.IdentTable#1/11 )/8 e.Name#1/2 >/1
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
  // closed e.Name#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 2
  //DEBUG: t.FuncTable#1: 9
  //DEBUG: t.IdentTable#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.IdentTable#1/11 HalfReuse: </8 } Tile{ HalfReuse: & UpdateTable/7 AsIs: t.FuncTable#1/9 } Tile{ AsIs: e.Name#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[7], functions[efunc_UpdateTable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[11], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateFuncTable("UpdateFuncTable", COOKIE1_, COOKIE2_, func_UpdateFuncTable);


static refalrts::FnResult func_gen_UpdateIdentTable_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UpdateIdentTable=1/4 t.FuncTable#1/5 t.IdentTable#2/7 s.Id#2/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.FuncTable#1: 5
  //DEBUG: t.IdentTable#2: 7
  //DEBUG: s.Id#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.FuncTable#1/5 AsIs: t.IdentTable#2/7 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: s.Id2 #9/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::link_brackets( context[4], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[0] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateIdentTable_A1("UpdateIdentTable=1", COOKIE1_, COOKIE2_, func_gen_UpdateIdentTable_A1);


static refalrts::FnResult func_UpdateIdentTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & UpdateIdentTable/4 (/7 t.FuncTable#1/9 t.IdentTable#1/11 )/8 e.Name#1/2 >/1
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
  // closed e.Name#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 2
  //DEBUG: t.FuncTable#1: 9
  //DEBUG: t.IdentTable#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateIdentTable=1/4 } Tile{ AsIs: t.FuncTable#1/9 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & UpdateTable/8 } Tile{ AsIs: t.IdentTable#1/11 } Tile{ AsIs: e.Name#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateIdentTable_A1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_UpdateTable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateIdentTable("UpdateIdentTable", COOKIE1_, COOKIE2_, func_UpdateIdentTable);


static refalrts::FnResult func_UpdateTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & UpdateTable/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateTable/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
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
    // </0 & UpdateTable/4 (/7 s.NextId#1/9 e.Names-B#1/14 (/20 s.Id#1/24 e.Name#1/22 )/21 e.Names-E#1/16 )/8 e.Name#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Name#1 as range 12
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[10];
      context[17] = context[11];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      if( ! refalrts::repeated_evar_right( vm, context[22], context[23], context[12], context[13], context[18], context[19] ) )
        continue;
      // closed e.Names-E#1 as range 16
      if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: s.NextId#1: 9
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Names-B#1: 14
      //DEBUG: e.Names-E#1: 16
      //DEBUG: s.Id#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UpdateTable/4 {REMOVED TILE} e.Name#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.NextId#1/9 AsIs: e.Names-B#1/14 AsIs: (/20 AsIs: s.Id#1/24 AsIs: e.Name#1/22 AsIs: )/21 AsIs: e.Names-E#1/16 AsIs: )/8 } Tile{ HalfReuse: s.Id1 #24/1 ]] }
      refalrts::reinit_svar( context[1], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateTable/4 (/7 s.NextId#1/9 e.Names#1/5 )/8 e.Name#1/2 >/1
  // closed e.Names#1 as range 5
  // closed e.Name#1 as range 2
  //DEBUG: s.NextId#1: 9
  //DEBUG: e.Names#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 AsIs: s.NextId#1/9 } >/11 Tile{ AsIs: e.Names#1/5 } (/12 Tile{ HalfReuse: s.NextId1 #9/8 AsIs: e.Name#1/2 HalfReuse: )/1 } )/13 s.NextId#1/9/14 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_stvar(vm, context[14], context[9]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[7], 1UL);
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateTable("UpdateTable", COOKIE1_, COOKIE2_, func_UpdateTable);


static refalrts::FnResult func_MarkFunctionGenMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & MarkFunctionGenMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkFunctionGenMode/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & MarkFunctionGenMode/4 s.new#4/9 (/7 s.new#5/10 s.new#6/13 e.new#7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & MarkFunctionGenMode/4 s.new#8/9 (/7 # Function/10 s.new#9/13 (/18 e.new#10/16 )/19 e.new#11/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.new#10 as range 16
      // closed e.new#11 as range 14
      do {
        // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # Function/10 s.ScopeClass#1/13 (/18 e.Name#1/20 )/19 e.Commands#1/22 )/8 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[14];
        context[23] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
          continue;
        // closed e.Name#1 as range 20
        // closed e.Commands#1 as range 22
        //DEBUG: s.ScopeClass#1: 13
        //DEBUG: e.Name#1: 20
        //DEBUG: e.Commands#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/10 AsIs: s.ScopeClass#1/13 AsIs: (/18 AsIs: e.Name#1/20 AsIs: )/19 AsIs: e.Commands#1/22 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[10], identifiers[ident_Functionm_ToRASL]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # Function/10 s.ScopeClass#1/13 (/18 e.Name#1/20 )/19 e.Commands#1/22 )/8 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[14];
      context[23] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
        continue;
      // closed e.Name#1 as range 20
      // closed e.Commands#1 as range 22
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 20
      //DEBUG: e.Commands#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/10 AsIs: s.ScopeClass#1/13 AsIs: (/18 AsIs: e.Name#1/20 AsIs: )/19 AsIs: e.Commands#1/22 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[10], identifiers[ident_Functionm_ToNative]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkFunctionGenMode/4 s.new#8/9 (/7 # CmdConditionFunc/10 s.new#9/13 e.new#10/14 )/8 >/1
    context[14] = context[11];
    context[15] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[10] ) )
      continue;
    // closed e.new#10 as range 14
    do {
      // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # CmdConditionFunc/10 s.ScopeClass#1/13 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToRASL/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/16 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[10], identifiers[ident_CmdConditionFuncm_ToRASL]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # CmdConditionFunc/10 s.ScopeClass#1/13 e.Name#1/16 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToNative/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/16 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[10], identifiers[ident_CmdConditionFuncm_ToNative]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkFunctionGenMode/4 s.GenMode#1/9 (/7 s.Type#1/10 e.Info#1/5 )/8 >/1
  // closed e.Info#1 as range 5
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Type#1: 10
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 s.GenMode#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type#1/10 AsIs: e.Info#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkFunctionGenMode("MarkFunctionGenMode", COOKIE1_, COOKIE2_, func_MarkFunctionGenMode);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@2/4 t.new#1/5 t.new#2/7 t.new#3/9 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Apply@2/4 s.Fn#1/5 t.Acc#1/7 t.Next#1/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Fn#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@2/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 t.Acc#1/7 t.Next#1/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@2/4 t.dyn#0/5 t.Acc#1/7 t.Next#1/9 >/1
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: t.Next#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z2("Apply@2", COOKIE1_, COOKIE2_, func_gen_Apply_Z2);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@1/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@1/4 s.new#6/5 (/8 s.new#7/14 e.new#8/12 )/9 e.new#9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & Map@1/4 s.new#10/5 (/8 s.new#11/14 s.new#12/19 e.new#13/15 )/9 e.new#14/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        // closed e.new#14 as range 17
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        // closed e.new#13 as range 15
        do {
          // </0 & Map@1/4 s.new#15/5 (/8 # Function/14 s.new#16/19 (/26 e.new#17/24 )/27 e.new#18/20 )/9 e.new#19/22 >/1
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Function], context[14] ) )
            continue;
          context[24] = 0;
          context[25] = 0;
          context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
          if( ! context[26] )
            continue;
          refalrts::bracket_pointers(context[26], context[27]);
          // closed e.new#17 as range 24
          // closed e.new#18 as range 20
          // closed e.new#19 as range 22
          do {
            // </0 & Map@1/4 # OnlyInterpret/5 (/8 # Function/14 s.ScopeClass#1/19 (/26 e.3#0/28 )/27 e.2#0/30 )/9 e.Tail#1/32 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[20];
            context[31] = context[21];
            context[32] = context[22];
            context[33] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[5] ) )
              continue;
            // closed e.3#0 as range 28
            // closed e.2#0 as range 30
            // closed e.Tail#1 as range 32
            //DEBUG: s.ScopeClass#1: 19
            //DEBUG: e.3#0: 28
            //DEBUG: e.2#0: 30
            //DEBUG: e.Tail#1: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyInterpret/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # Function-ToRASL/14 AsIs: s.ScopeClass#1/19 AsIs: (/26 AsIs: e.3#0/28 AsIs: )/27 AsIs: e.2#0/30 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: >/1 ]] }
            refalrts::update_ident(context[14], identifiers[ident_Functionm_ToRASL]);
            refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[8], context[9] );
            refalrts::link_brackets( context[26], context[27] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[8], context[9] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@1/4 # OnlyDirect/5 (/8 # Function/14 s.ScopeClass#1/19 (/26 e.3#0/28 )/27 e.2#0/30 )/9 e.Tail#1/32 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[20];
          context[31] = context[21];
          context[32] = context[22];
          context[33] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[5] ) )
            continue;
          // closed e.3#0 as range 28
          // closed e.2#0 as range 30
          // closed e.Tail#1 as range 32
          //DEBUG: s.ScopeClass#1: 19
          //DEBUG: e.3#0: 28
          //DEBUG: e.2#0: 30
          //DEBUG: e.Tail#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyDirect/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # Function-ToNative/14 AsIs: s.ScopeClass#1/19 AsIs: (/26 AsIs: e.3#0/28 AsIs: )/27 AsIs: e.2#0/30 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[14], identifiers[ident_Functionm_ToNative]);
          refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[8], context[9] );
          refalrts::link_brackets( context[26], context[27] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[8], context[9] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 s.new#15/5 (/8 # CmdConditionFunc/14 s.new#16/19 e.new#17/20 )/9 e.new#18/22 >/1
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[14] ) )
          continue;
        // closed e.new#17 as range 20
        // closed e.new#18 as range 22
        do {
          // </0 & Map@1/4 # OnlyInterpret/5 (/8 # CmdConditionFunc/14 s.ScopeClass#1/19 e.1#0/24 )/9 e.Tail#1/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[5] ) )
            continue;
          // closed e.1#0 as range 24
          // closed e.Tail#1 as range 26
          //DEBUG: s.ScopeClass#1: 19
          //DEBUG: e.1#0: 24
          //DEBUG: e.Tail#1: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyInterpret/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # CmdConditionFunc-ToRASL/14 AsIs: s.ScopeClass#1/19 AsIs: e.1#0/24 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Tail#1/26 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[14], identifiers[ident_CmdConditionFuncm_ToRASL]);
          refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[8], context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[8], context[9] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 # OnlyDirect/5 (/8 # CmdConditionFunc/14 s.ScopeClass#1/19 e.1#0/24 )/9 e.Tail#1/26 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[5] ) )
          continue;
        // closed e.1#0 as range 24
        // closed e.Tail#1 as range 26
        //DEBUG: s.ScopeClass#1: 19
        //DEBUG: e.1#0: 24
        //DEBUG: e.Tail#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyDirect/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # CmdConditionFunc-ToNative/14 AsIs: s.ScopeClass#1/19 AsIs: e.1#0/24 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.Tail#1/26 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[14], identifiers[ident_CmdConditionFuncm_ToNative]);
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 s.GenMode#1/5 (/8 s.Type#1/14 e.0#0/15 )/9 e.Tail#1/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      // closed e.0#0 as range 15
      // closed e.Tail#1 as range 17
      //DEBUG: s.GenMode#1: 5
      //DEBUG: s.Type#1: 14
      //DEBUG: e.0#0: 15
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: s.Type#1/14 AsIs: e.0#0/15 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.GenMode#1/5 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 s.GenMode#1/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.GenMode#1: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 AsIs: s.GenMode#1/5 AsIs: t.Next#1/8 } >/12 </13 & Map@1/14 s.GenMode#1/5/15 Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_MarkFunctionGenMode_D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 s.GenMode#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.GenMode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.GenMode#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.GenMode#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.GenMode#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & MarkFunctionGenMode@0/7 Tile{ AsIs: s.GenMode#1/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_MarkFunctionGenMode_Z0]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 s.new#1/5 t.new#2/6 (/10 e.new#3/8 )/11 e.new#4/2 >/1
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
  // closed e.new#3 as range 8
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum@1/4 s.OutlineConstants#4/5 t.Acc#1/6 (/10 e.Scanned#1/12 )/11 t.Next#1/16 e.Tail#1/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Scanned#1 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 14
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.OutlineConstants#4: 5
    //DEBUG: e.Scanned#1: 12
    //DEBUG: t.Next#1: 16
    //DEBUG: e.Tail#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: s.OutlineConstants#4/5 } Tile{ AsIs: (/10 AsIs: e.Scanned#1/12 AsIs: )/11 } (/18 Tile{ AsIs: e.Tail#1/14 } )/19 </20 & __Meta_Mu/21 s.OutlineConstants#4/5/22 Tile{ AsIs: t.Acc#1/6 } Tile{ AsIs: t.Next#1/16 } & $table/23 >/24 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_u_u_Metau_Mu]);
    refalrts::copy_stvar(vm, context[22], context[5]);
    refalrts::alloc_name(vm, context[23], functions[efunc_d_table]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 s.OutlineConstants#4/5 t.Acc#1/6 (/10 e.Scanned#1/12 )/11 >/1
    context[12] = context[8];
    context[13] = context[9];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 12
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.OutlineConstants#4: 5
    //DEBUG: e.Scanned#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.OutlineConstants#4/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/6 } Tile{ AsIs: e.Scanned#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 s.OutlineConstants#4/5 t.acc#0/6 (/10 e.scanned#0/8 )/11 e.items#0/2 >/1
  // closed e.scanned#0 as range 8
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 6
  //DEBUG: s.OutlineConstants#4: 5
  //DEBUG: e.scanned#0: 8
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 AsIs: s.OutlineConstants#4/5 AsIs: t.acc#0/6 AsIs: (/10 AsIs: e.scanned#0/8 AsIs: )/11 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@2/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 (/9 # Function/15 s.ScopeClass#1/16 (/19 e.3#0/17 )/20 e.2#0/13 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = refalrts::ident_left( identifiers[ident_Function], context[13], context[14] );
      if( ! context[15] )
        continue;
      // closed e.Tail#1 as range 11
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.3#0 as range 17
      // closed e.2#0 as range 13
      //DEBUG: s.Hash1#2: 5
      //DEBUG: s.Hash2#2: 6
      //DEBUG: e.Tail#1: 11
      //DEBUG: s.ScopeClass#1: 16
      //DEBUG: e.3#0: 17
      //DEBUG: e.2#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function/15 AsIs: s.ScopeClass#1/16 AsIs: (/19 AsIs: e.3#0/17 AsIs: )/20 } </21 & Map@3/22 s.Hash1#2/5/23 s.Hash2#2/6/24 Tile{ AsIs: e.2#0/13 } >/25 Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#2/5 AsIs: s.Hash2#2/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z3]);
      refalrts::copy_stvar(vm, context[23], context[5]);
      refalrts::copy_stvar(vm, context[24], context[6]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[9], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Hash1#2: 5
    //DEBUG: s.Hash2#2: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/9 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#2/5 AsIs: s.Hash2#2/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1#2: 5
    //DEBUG: s.Hash2#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Hash1#2: 5
  //DEBUG: s.Hash2#2: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs@0/4 AsIs: s.Hash1#2/5 AsIs: s.Hash2#2/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_SetScopeIDs_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@1/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: t.Acc#1/5 } (/9 )/10 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CalcDigest@0/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcDigest_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@3/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@3/4 s.new#8/5 s.new#9/6 (/9 s.new#10/15 e.new#11/13 )/10 e.new#12/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#12 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#11 as range 13
      do {
        // </0 & Map@3/4 s.new#13/5 s.new#14/6 (/9 s.new#15/15 e.new#16/16 s.new#17/22 s.new#18/21 s.new#19/20 )/10 e.new#20/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        // closed e.new#20 as range 18
        if( ! refalrts::svar_right( context[20], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_right( context[21], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_right( context[22], context[16], context[17] ) )
          continue;
        // closed e.new#16 as range 16
        do {
          // </0 & Map@3/4 s.new#21/5 s.new#22/6 (/9 # CmdNumber/15 s.new#25/22 s.new#24/21 s.new#23/20 )/10 e.new#26/23 >/1
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[15] ) )
            continue;
          if( ! refalrts::empty_seq( context[16], context[17] ) )
            continue;
          // closed e.new#26 as range 23
          do {
            // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumber/15 s.Direction#1/22 s.BracketNum#1/21 # Cookie1/20 )/10 e.Tail#1/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
              continue;
            // closed e.Tail#1 as range 25
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.Direction#1: 22
            //DEBUG: s.BracketNum#1: 21
            //DEBUG: e.Tail#1: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction#1/22 AsIs: s.BracketNum#1/21 HalfReuse: s.Hash11 #5/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[20], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumber/15 s.Direction#1/22 s.BracketNum#1/21 # Cookie2/20 )/10 e.Tail#1/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
              continue;
            // closed e.Tail#1 as range 25
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.Direction#1: 22
            //DEBUG: s.BracketNum#1: 21
            //DEBUG: e.Tail#1: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction#1/22 AsIs: s.BracketNum#1/21 HalfReuse: s.Hash21 #6/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[20], context[6] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumber/15 s.Direction#1/22 s.BracketNum#1/21 s.Number#1/20 )/10 e.Tail#1/25 >/1
          context[25] = context[23];
          context[26] = context[24];
          // closed e.Tail#1 as range 25
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 22
          //DEBUG: s.BracketNum#1: 21
          //DEBUG: s.Number#1: 20
          //DEBUG: e.Tail#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction#1/22 AsIs: s.BracketNum#1/21 AsIs: s.Number#1/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 s.new#21/5 s.new#22/6 (/9 s.new#23/15 s.new#27/27 s.new#26/22 s.new#25/21 s.new#24/20 )/10 e.new#28/25 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[19];
        // closed e.new#28 as range 25
        if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        do {
          // </0 & Map@3/4 s.new#29/5 s.new#30/6 (/9 # CmdNumberSave/15 s.new#34/27 s.new#33/22 s.new#32/21 s.new#31/20 )/10 e.new#35/28 >/1
          context[28] = context[25];
          context[29] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[15] ) )
            continue;
          // closed e.new#35 as range 28
          do {
            // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumberSave/15 s.Direction#1/27 s.BracketNum#1/22 s.SaveOffset#1/21 # Cookie1/20 )/10 e.Tail#1/30 >/1
            context[30] = context[28];
            context[31] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
              continue;
            // closed e.Tail#1 as range 30
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.Direction#1: 27
            //DEBUG: s.BracketNum#1: 22
            //DEBUG: s.SaveOffset#1: 21
            //DEBUG: e.Tail#1: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/22 AsIs: s.SaveOffset#1/21 HalfReuse: s.Hash11 #5/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[20], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumberSave/15 s.Direction#1/27 s.BracketNum#1/22 s.SaveOffset#1/21 # Cookie2/20 )/10 e.Tail#1/30 >/1
            context[30] = context[28];
            context[31] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
              continue;
            // closed e.Tail#1 as range 30
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.Direction#1: 27
            //DEBUG: s.BracketNum#1: 22
            //DEBUG: s.SaveOffset#1: 21
            //DEBUG: e.Tail#1: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/22 AsIs: s.SaveOffset#1/21 HalfReuse: s.Hash21 #6/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_svar( context[20], context[6] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[9], context[10] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNumberSave/15 s.Direction#1/27 s.BracketNum#1/22 s.SaveOffset#1/21 s.Number#1/20 )/10 e.Tail#1/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          // closed e.Tail#1 as range 30
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.Direction#1: 27
          //DEBUG: s.BracketNum#1: 22
          //DEBUG: s.SaveOffset#1: 21
          //DEBUG: s.Number#1: 20
          //DEBUG: e.Tail#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction#1/27 AsIs: s.BracketNum#1/22 AsIs: s.SaveOffset#1/21 AsIs: s.Number#1/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 s.new#29/5 s.new#30/6 (/9 # CmdCreateElem/15 s.new#33/27 s.new#32/22 # ElNumber/21 s.new#31/20 )/10 e.new#34/28 >/1
        context[28] = context[25];
        context[29] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[15] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[21] ) )
          continue;
        // closed e.new#34 as range 28
        do {
          // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdCreateElem/15 s.CreateMode#1/27 s.ElemNo#1/22 # ElNumber/21 # Cookie1/20 )/10 e.Tail#1/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
            continue;
          // closed e.Tail#1 as range 30
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.CreateMode#1: 27
          //DEBUG: s.ElemNo#1: 22
          //DEBUG: e.Tail#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode#1/27 AsIs: s.ElemNo#1/22 AsIs: # ElNumber/21 HalfReuse: s.Hash11 #5/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_svar( context[20], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdCreateElem/15 s.CreateMode#1/27 s.ElemNo#1/22 # ElNumber/21 # Cookie2/20 )/10 e.Tail#1/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
            continue;
          // closed e.Tail#1 as range 30
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.CreateMode#1: 27
          //DEBUG: s.ElemNo#1: 22
          //DEBUG: e.Tail#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode#1/27 AsIs: s.ElemNo#1/22 AsIs: # ElNumber/21 HalfReuse: s.Hash21 #6/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_svar( context[20], context[6] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdCreateElem/15 s.CreateMode#1/27 s.ElemNo#1/22 # ElNumber/21 s.Number#1/20 )/10 e.Tail#1/30 >/1
        context[30] = context[28];
        context[31] = context[29];
        // closed e.Tail#1 as range 30
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.CreateMode#1: 27
        //DEBUG: s.ElemNo#1: 22
        //DEBUG: s.Number#1: 20
        //DEBUG: e.Tail#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode#1/27 AsIs: s.ElemNo#1/22 AsIs: # ElNumber/21 AsIs: s.Number#1/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdSentence/15 e.0#0/16 )/10 e.Tail#1/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[15] ) )
          continue;
        // closed e.0#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: e.0#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdSentence/15 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.0#0/16 } >/20 )/21 </22 & Map@3/23 s.Hash1#1/5/24 Tile{ HalfReuse: s.Hash21 #6/10 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z3]);
        refalrts::copy_stvar(vm, context[24], context[5]);
        refalrts::reinit_svar( context[10], context[6] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::link_brackets( context[9], context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[20], context[24] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[9], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdOpenELoop/15 # AlgLeft/20 s.BracketNum#1/21 s.VarNumber#1/22 e.3#0/16 )/10 e.Tail#1/18 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[15] ) )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_AlgLeft], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Tail#1 as range 18
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[16], context[17] ) )
        continue;
      // closed e.3#0 as range 16
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.Tail#1: 18
      //DEBUG: s.BracketNum#1: 21
      //DEBUG: s.VarNumber#1: 22
      //DEBUG: e.3#0: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/15 AsIs: # AlgLeft/20 AsIs: s.BracketNum#1/21 AsIs: s.VarNumber#1/22 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.3#0/16 } >/23 )/24 </25 & Map@3/26 s.Hash1#1/5/27 Tile{ HalfReuse: s.Hash21 #6/10 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z3]);
      refalrts::copy_stvar(vm, context[27], context[5]);
      refalrts::reinit_svar( context[10], context[6] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[9], context[24] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[23], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[9], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/9 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs-Command@0/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_SetScopeIDsm_Command_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@2/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & DoMapAccum@2/4 t.new#8/5 (/9 e.new#12/17 )/10 (/15 s.new#9/23 e.new#10/21 )/16 e.new#11/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.new#12 as range 17
      // closed e.new#11 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new#10 as range 21
      do {
        // </0 & DoMapAccum@2/4 t.new#13/5 (/9 e.new#19/24 )/10 (/15 s.new#14/23 s.new#15/30 s.new#16/31 e.new#17/26 )/16 e.new#18/28 >/1
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[19];
        context[29] = context[20];
        // closed e.new#19 as range 24
        // closed e.new#18 as range 28
        if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
          continue;
        if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
          continue;
        // closed e.new#17 as range 26
        do {
          // </0 & DoMapAccum@2/4 t.new#20/5 (/9 e.new#25/32 )/10 (/15 # CmdName/23 s.new#21/30 s.new#22/31 e.new#23/34 )/16 e.new#24/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_CmdName], context[23] ) )
            continue;
          // closed e.new#25 as range 32
          // closed e.new#23 as range 34
          // closed e.new#24 as range 36
          do {
            // </0 & DoMapAccum@2/4 (/5 t.#0/46 t.0#0/48 )/6 (/9 e.Scanned#1/38 )/10 (/15 # CmdName/23 s.Direction#1/30 s.BracketNum#1/31 e.2#0/40 )/16 e.Tail#1/42 >/1
            context[38] = context[32];
            context[39] = context[33];
            context[40] = context[34];
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = 0;
            context[45] = 0;
            if( ! refalrts::brackets_term( context[44], context[45], context[5] ) )
              continue;
            // closed e.Scanned#1 as range 38
            // closed e.2#0 as range 40
            // closed e.Tail#1 as range 42
            context[47] = refalrts::tvar_left( context[46], context[44], context[45] );
            if( ! context[47] )
              continue;
            context[49] = refalrts::tvar_left( context[48], context[44], context[45] );
            if( ! context[49] )
              continue;
            if( ! refalrts::empty_seq( context[44], context[45] ) )
              continue;
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: e.Scanned#1: 38
            //DEBUG: e.2#0: 40
            //DEBUG: e.Tail#1: 42
            //DEBUG: t.#0: 46
            //DEBUG: t.0#0: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@2/6 AsIs: (/9 AsIs: e.Scanned#1/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/42 } )/50 </51 Tile{ HalfReuse: & OutlineConstants-OneCommand$1=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 } (/52 Tile{ AsIs: e.2#0/40 } Tile{ AsIs: )/16 } </53 & UpdateFuncTable=1/54 Tile{ AsIs: t.0#0/48 } Tile{ HalfReuse: </4 HalfReuse: & UpdateTable/5 AsIs: t.#0/46 } e.2#0/40/55 >/57 >/58 >/59 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_open_bracket(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_gen_UpdateFuncTable_A1]);
            refalrts::copy_evar(vm, context[55], context[56], context[40], context[41]);
            refalrts::alloc_close_call(vm, context[57]);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::reinit_name(context[6], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S1A1]);
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[5], functions[efunc_UpdateTable]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[4] );
            refalrts::link_brackets( context[52], context[16] );
            refalrts::link_brackets( context[15], context[50] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[57], context[59] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            res = refalrts::splice_evar( res, context[4], context[47] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[23], context[31] );
            res = refalrts::splice_evar( res, context[50], context[51] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_evar( res, context[6], context[15] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/38 )/10 (/15 # CmdName/23 s.Direction#1/30 s.BracketNum#1/31 e.2#0/40 )/16 e.Tail#1/42 >/1
          context[38] = context[32];
          context[39] = context[33];
          context[40] = context[34];
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          // closed e.Scanned#1 as range 38
          // closed e.2#0 as range 40
          // closed e.Tail#1 as range 42
          //DEBUG: t.Acc#1: 5
          //DEBUG: s.Direction#1: 30
          //DEBUG: s.BracketNum#1: 31
          //DEBUG: e.Scanned#1: 38
          //DEBUG: e.2#0: 40
          //DEBUG: e.Tail#1: 42

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/42 } )/44 </45 Tile{ HalfReuse: & OutlineConstants-OneCommand$1=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 } (/46 Tile{ AsIs: e.2#0/40 } Tile{ AsIs: )/16 } </47 & UpdateFuncTable*1/48 Tile{ AsIs: t.Acc#1/5 } e.2#0/40/49 >/51 >/52 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[44]);
          refalrts::alloc_open_call(vm, context[45]);
          refalrts::alloc_open_bracket(vm, context[46]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_gen_UpdateFuncTable_D1]);
          refalrts::copy_evar(vm, context[49], context[50], context[40], context[41]);
          refalrts::alloc_close_call(vm, context[51]);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S1A1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[47] );
          refalrts::link_brackets( context[46], context[16] );
          refalrts::link_brackets( context[15], context[44] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[51], context[52] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[5], context[6] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_elem( res, context[46] );
          res = refalrts::splice_evar( res, context[23], context[31] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[9], context[15] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 t.new#20/5 (/9 e.new#27/32 )/10 (/15 s.new#21/23 s.new#22/30 s.new#23/31 s.new#24/38 e.new#25/34 )/16 e.new#26/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          // closed e.new#27 as range 32
          // closed e.new#26 as range 36
          if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
            continue;
          // closed e.new#25 as range 34
          do {
            // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#34/39 )/10 (/15 # CmdNameSave/23 s.new#29/30 s.new#30/31 s.new#31/38 e.new#32/41 )/16 e.new#33/43 >/1
            context[39] = context[32];
            context[40] = context[33];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[36];
            context[44] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[23] ) )
              continue;
            // closed e.new#34 as range 39
            // closed e.new#32 as range 41
            // closed e.new#33 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdNameSave/23 s.Direction#1/30 s.BracketNum#1/31 s.SaveOffset#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              context[48] = context[42];
              context[49] = context[43];
              context[50] = context[44];
              context[51] = 0;
              context[52] = 0;
              if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
                continue;
              // closed e.Scanned#1 as range 45
              // closed e.3#0 as range 47
              // closed e.Tail#1 as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.Direction#1: 30
              //DEBUG: s.BracketNum#1: 31
              //DEBUG: s.SaveOffset#1: 38
              //DEBUG: e.Scanned#1: 45
              //DEBUG: e.3#0: 47
              //DEBUG: e.Tail#1: 49
              //DEBUG: t.#0: 53
              //DEBUG: t.0#0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$2=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.SaveOffset#1/38 } (/57 Tile{ AsIs: e.3#0/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0#0/55 } </60 & UpdateTable/61 Tile{ AsIs: t.#0/53 } e.3#0/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
              refalrts::alloc_open_bracket(vm, context[57]);
              refalrts::alloc_open_call(vm, context[58]);
              refalrts::alloc_name(vm, context[59], functions[efunc_gen_UpdateFuncTable_A1]);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_UpdateTable]);
              refalrts::copy_evar(vm, context[62], context[63], context[47], context[48]);
              refalrts::alloc_close_call(vm, context[64]);
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::alloc_close_call(vm, context[66]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
              refalrts::reinit_open_call(context[15]);
              refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S2A1]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[66] );
              refalrts::push_stack( vm, context[15] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[58] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[60] );
              refalrts::link_brackets( context[57], context[16] );
              refalrts::link_brackets( context[9], context[10] );
              refalrts::link_brackets( context[5], context[6] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[64], context[66] );
              res = refalrts::splice_evar( res, context[62], context[63] );
              res = refalrts::splice_evar( res, context[53], context[54] );
              res = refalrts::splice_evar( res, context[60], context[61] );
              res = refalrts::splice_evar( res, context[55], context[56] );
              res = refalrts::splice_evar( res, context[58], context[59] );
              res = refalrts::splice_elem( res, context[16] );
              res = refalrts::splice_evar( res, context[47], context[48] );
              res = refalrts::splice_elem( res, context[57] );
              res = refalrts::splice_evar( res, context[10], context[38] );
              res = refalrts::splice_evar( res, context[49], context[50] );
              res = refalrts::splice_evar( res, context[6], context[9] );
              res = refalrts::splice_evar( res, context[45], context[46] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdNameSave/23 s.Direction#1/30 s.BracketNum#1/31 s.SaveOffset#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned#1 as range 45
            // closed e.3#0 as range 47
            // closed e.Tail#1 as range 49
            //DEBUG: t.Acc#1: 5
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: s.SaveOffset#1: 38
            //DEBUG: e.Scanned#1: 45
            //DEBUG: e.3#0: 47
            //DEBUG: e.Tail#1: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$2=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.SaveOffset#1/38 } (/52 Tile{ AsIs: e.3#0/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[51]);
            refalrts::alloc_open_bracket(vm, context[52]);
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_open_call(vm, context[54]);
            refalrts::alloc_name(vm, context[55], functions[efunc_gen_UpdateFuncTable_D1]);
            refalrts::copy_evar(vm, context[56], context[57], context[47], context[48]);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S2A1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[54] );
            refalrts::link_brackets( context[52], context[53] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[51], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_evar( res, context[56], context[57] );
            res = refalrts::splice_evar( res, context[5], context[6] );
            res = refalrts::splice_evar( res, context[53], context[55] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[10], context[38] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_elem( res, context[9] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_elem( res, context[51] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#33/39 )/10 (/15 # CmdCreateElem/23 s.new#29/30 s.new#30/31 # ElName/38 e.new#31/41 )/16 e.new#32/43 >/1
            context[39] = context[32];
            context[40] = context[33];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[36];
            context[44] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[23] ) )
              continue;
            if( ! refalrts::ident_term( identifiers[ident_ElName], context[38] ) )
              continue;
            // closed e.new#33 as range 39
            // closed e.new#31 as range 41
            // closed e.new#32 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode#1/30 s.ElemNo#1/31 # ElName/38 e.3#0/47 )/16 e.Tail#1/49 >/1
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              context[48] = context[42];
              context[49] = context[43];
              context[50] = context[44];
              context[51] = 0;
              context[52] = 0;
              if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
                continue;
              // closed e.Scanned#1 as range 45
              // closed e.3#0 as range 47
              // closed e.Tail#1 as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.CreateMode#1: 30
              //DEBUG: s.ElemNo#1: 31
              //DEBUG: e.Scanned#1: 45
              //DEBUG: e.3#0: 47
              //DEBUG: e.Tail#1: 49
              //DEBUG: t.#0: 53
              //DEBUG: t.0#0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$3=1/23 AsIs: s.CreateMode#1/30 AsIs: s.ElemNo#1/31 HalfReuse: (/38 AsIs: e.3#0/47 AsIs: )/16 } </57 & UpdateFuncTable=1/58 Tile{ AsIs: t.0#0/55 } </59 & UpdateTable/60 Tile{ AsIs: t.#0/53 } e.3#0/47/61 >/63 >/64 >/65 Tile{ AsIs: >/1 ]] }
              refalrts::alloc_open_call(vm, context[57]);
              refalrts::alloc_name(vm, context[58], functions[efunc_gen_UpdateFuncTable_A1]);
              refalrts::alloc_open_call(vm, context[59]);
              refalrts::alloc_name(vm, context[60], functions[efunc_UpdateTable]);
              refalrts::copy_evar(vm, context[61], context[62], context[47], context[48]);
              refalrts::alloc_close_call(vm, context[63]);
              refalrts::alloc_close_call(vm, context[64]);
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
              refalrts::reinit_open_call(context[15]);
              refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S3A1]);
              refalrts::reinit_open_bracket(context[38]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[15] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[57] );
              refalrts::push_stack( vm, context[63] );
              refalrts::push_stack( vm, context[59] );
              refalrts::link_brackets( context[38], context[16] );
              refalrts::link_brackets( context[9], context[10] );
              refalrts::link_brackets( context[5], context[6] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[63], context[65] );
              res = refalrts::splice_evar( res, context[61], context[62] );
              res = refalrts::splice_evar( res, context[53], context[54] );
              res = refalrts::splice_evar( res, context[59], context[60] );
              res = refalrts::splice_evar( res, context[55], context[56] );
              res = refalrts::splice_evar( res, context[57], context[58] );
              res = refalrts::splice_evar( res, context[10], context[16] );
              res = refalrts::splice_evar( res, context[49], context[50] );
              res = refalrts::splice_evar( res, context[6], context[9] );
              res = refalrts::splice_evar( res, context[45], context[46] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode#1/30 s.ElemNo#1/31 # ElName/38 e.3#0/47 )/16 e.Tail#1/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned#1 as range 45
            // closed e.3#0 as range 47
            // closed e.Tail#1 as range 49
            //DEBUG: t.Acc#1: 5
            //DEBUG: s.CreateMode#1: 30
            //DEBUG: s.ElemNo#1: 31
            //DEBUG: e.Scanned#1: 45
            //DEBUG: e.3#0: 47
            //DEBUG: e.Tail#1: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } )/52 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$3=1/23 AsIs: s.CreateMode#1/30 AsIs: s.ElemNo#1/31 HalfReuse: (/38 AsIs: e.3#0/47 AsIs: )/16 } </53 & UpdateFuncTable*1/54 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/55 >/57 >/58 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[51]);
            refalrts::alloc_close_bracket(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_gen_UpdateFuncTable_D1]);
            refalrts::copy_evar(vm, context[55], context[56], context[47], context[48]);
            refalrts::alloc_close_call(vm, context[57]);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S3A1]);
            refalrts::reinit_open_bracket(context[38]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[53] );
            refalrts::link_brackets( context[38], context[16] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[51], context[52] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[57], context[58] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            res = refalrts::splice_evar( res, context[5], context[6] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_elem( res, context[9] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_elem( res, context[51] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#34/39 )/10 (/15 # CmdADT/23 s.new#29/30 s.new#30/31 s.new#31/38 e.new#32/41 )/16 e.new#33/43 >/1
            context[39] = context[32];
            context[40] = context[33];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[36];
            context[44] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[23] ) )
              continue;
            // closed e.new#34 as range 39
            // closed e.new#32 as range 41
            // closed e.new#33 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdADT/23 s.Direction#1/30 s.BracketNum#1/31 s.InnerBrackets#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              context[48] = context[42];
              context[49] = context[43];
              context[50] = context[44];
              context[51] = 0;
              context[52] = 0;
              if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
                continue;
              // closed e.Scanned#1 as range 45
              // closed e.3#0 as range 47
              // closed e.Tail#1 as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.Direction#1: 30
              //DEBUG: s.BracketNum#1: 31
              //DEBUG: s.InnerBrackets#1: 38
              //DEBUG: e.Scanned#1: 45
              //DEBUG: e.3#0: 47
              //DEBUG: e.Tail#1: 49
              //DEBUG: t.#0: 53
              //DEBUG: t.0#0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$4=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.InnerBrackets#1/38 } (/57 Tile{ AsIs: e.3#0/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0#0/55 } </60 & UpdateTable/61 Tile{ AsIs: t.#0/53 } e.3#0/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
              refalrts::alloc_open_bracket(vm, context[57]);
              refalrts::alloc_open_call(vm, context[58]);
              refalrts::alloc_name(vm, context[59], functions[efunc_gen_UpdateFuncTable_A1]);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_UpdateTable]);
              refalrts::copy_evar(vm, context[62], context[63], context[47], context[48]);
              refalrts::alloc_close_call(vm, context[64]);
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::alloc_close_call(vm, context[66]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
              refalrts::reinit_open_call(context[15]);
              refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S4A1]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[66] );
              refalrts::push_stack( vm, context[15] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[58] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[60] );
              refalrts::link_brackets( context[57], context[16] );
              refalrts::link_brackets( context[9], context[10] );
              refalrts::link_brackets( context[5], context[6] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[64], context[66] );
              res = refalrts::splice_evar( res, context[62], context[63] );
              res = refalrts::splice_evar( res, context[53], context[54] );
              res = refalrts::splice_evar( res, context[60], context[61] );
              res = refalrts::splice_evar( res, context[55], context[56] );
              res = refalrts::splice_evar( res, context[58], context[59] );
              res = refalrts::splice_elem( res, context[16] );
              res = refalrts::splice_evar( res, context[47], context[48] );
              res = refalrts::splice_elem( res, context[57] );
              res = refalrts::splice_evar( res, context[10], context[38] );
              res = refalrts::splice_evar( res, context[49], context[50] );
              res = refalrts::splice_evar( res, context[6], context[9] );
              res = refalrts::splice_evar( res, context[45], context[46] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdADT/23 s.Direction#1/30 s.BracketNum#1/31 s.InnerBrackets#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned#1 as range 45
            // closed e.3#0 as range 47
            // closed e.Tail#1 as range 49
            //DEBUG: t.Acc#1: 5
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: s.InnerBrackets#1: 38
            //DEBUG: e.Scanned#1: 45
            //DEBUG: e.3#0: 47
            //DEBUG: e.Tail#1: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$4=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.InnerBrackets#1/38 } (/52 Tile{ AsIs: e.3#0/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[51]);
            refalrts::alloc_open_bracket(vm, context[52]);
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_open_call(vm, context[54]);
            refalrts::alloc_name(vm, context[55], functions[efunc_gen_UpdateFuncTable_D1]);
            refalrts::copy_evar(vm, context[56], context[57], context[47], context[48]);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S4A1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[54] );
            refalrts::link_brackets( context[52], context[53] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[51], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_evar( res, context[56], context[57] );
            res = refalrts::splice_evar( res, context[5], context[6] );
            res = refalrts::splice_evar( res, context[53], context[55] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[10], context[38] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_elem( res, context[9] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_elem( res, context[51] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#34/39 )/10 (/15 # CmdADTSave/23 s.new#29/30 s.new#30/31 s.new#31/38 e.new#32/41 )/16 e.new#33/43 >/1
          context[39] = context[32];
          context[40] = context[33];
          context[41] = context[34];
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[23] ) )
            continue;
          // closed e.new#34 as range 39
          // closed e.new#32 as range 41
          // closed e.new#33 as range 43
          do {
            // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdADTSave/23 s.Direction#1/30 s.BracketNum#1/31 s.InnerBrackets#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            context[51] = 0;
            context[52] = 0;
            if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
              continue;
            // closed e.Scanned#1 as range 45
            // closed e.3#0 as range 47
            // closed e.Tail#1 as range 49
            context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
            if( ! context[54] )
              continue;
            context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
            if( ! context[56] )
              continue;
            if( ! refalrts::empty_seq( context[51], context[52] ) )
              continue;
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: s.InnerBrackets#1: 38
            //DEBUG: e.Scanned#1: 45
            //DEBUG: e.3#0: 47
            //DEBUG: e.Tail#1: 49
            //DEBUG: t.#0: 53
            //DEBUG: t.0#0: 55

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$5=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.InnerBrackets#1/38 } (/57 Tile{ AsIs: e.3#0/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0#0/55 } </60 & UpdateTable/61 Tile{ AsIs: t.#0/53 } e.3#0/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[57]);
            refalrts::alloc_open_call(vm, context[58]);
            refalrts::alloc_name(vm, context[59], functions[efunc_gen_UpdateFuncTable_A1]);
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[61], functions[efunc_UpdateTable]);
            refalrts::copy_evar(vm, context[62], context[63], context[47], context[48]);
            refalrts::alloc_close_call(vm, context[64]);
            refalrts::alloc_close_call(vm, context[65]);
            refalrts::alloc_close_call(vm, context[66]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S5A1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[64] );
            refalrts::push_stack( vm, context[60] );
            refalrts::link_brackets( context[57], context[16] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[64], context[66] );
            res = refalrts::splice_evar( res, context[62], context[63] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[57] );
            res = refalrts::splice_evar( res, context[10], context[38] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[6], context[9] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdADTSave/23 s.Direction#1/30 s.BracketNum#1/31 s.InnerBrackets#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
          context[45] = context[39];
          context[46] = context[40];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          // closed e.Scanned#1 as range 45
          // closed e.3#0 as range 47
          // closed e.Tail#1 as range 49
          //DEBUG: t.Acc#1: 5
          //DEBUG: s.Direction#1: 30
          //DEBUG: s.BracketNum#1: 31
          //DEBUG: s.InnerBrackets#1: 38
          //DEBUG: e.Scanned#1: 45
          //DEBUG: e.3#0: 47
          //DEBUG: e.Tail#1: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$5=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.InnerBrackets#1/38 } (/52 Tile{ AsIs: e.3#0/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[51]);
          refalrts::alloc_open_bracket(vm, context[52]);
          refalrts::alloc_close_bracket(vm, context[53]);
          refalrts::alloc_open_call(vm, context[54]);
          refalrts::alloc_name(vm, context[55], functions[efunc_gen_UpdateFuncTable_D1]);
          refalrts::copy_evar(vm, context[56], context[57], context[47], context[48]);
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S5A1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[54] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[51], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_evar( res, context[5], context[6] );
          res = refalrts::splice_evar( res, context[53], context[55] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_elem( res, context[52] );
          res = refalrts::splice_evar( res, context[10], context[38] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_elem( res, context[51] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 t.new#20/5 (/9 e.new#25/32 )/10 (/15 # CmdIdent/23 s.new#21/30 s.new#22/31 e.new#23/34 )/16 e.new#24/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[23] ) )
            continue;
          // closed e.new#25 as range 32
          // closed e.new#23 as range 34
          // closed e.new#24 as range 36
          do {
            // </0 & DoMapAccum@2/4 (/5 t.#0/46 t.0#0/48 )/6 (/9 e.Scanned#1/38 )/10 (/15 # CmdIdent/23 s.Direction#1/30 s.BracketNum#1/31 e.2#0/40 )/16 e.Tail#1/42 >/1
            context[38] = context[32];
            context[39] = context[33];
            context[40] = context[34];
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = 0;
            context[45] = 0;
            if( ! refalrts::brackets_term( context[44], context[45], context[5] ) )
              continue;
            // closed e.Scanned#1 as range 38
            // closed e.2#0 as range 40
            // closed e.Tail#1 as range 42
            context[47] = refalrts::tvar_left( context[46], context[44], context[45] );
            if( ! context[47] )
              continue;
            context[49] = refalrts::tvar_left( context[48], context[44], context[45] );
            if( ! context[49] )
              continue;
            if( ! refalrts::empty_seq( context[44], context[45] ) )
              continue;
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: e.Scanned#1: 38
            //DEBUG: e.2#0: 40
            //DEBUG: e.Tail#1: 42
            //DEBUG: t.#0: 46
            //DEBUG: t.0#0: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@2/6 AsIs: (/9 AsIs: e.Scanned#1/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/42 } )/50 </51 Tile{ HalfReuse: & OutlineConstants-OneCommand$6=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 } (/52 Tile{ AsIs: e.2#0/40 } Tile{ AsIs: )/16 } Tile{ HalfReuse: </4 HalfReuse: & UpdateIdentTable=1/5 AsIs: t.#0/46 } </53 & UpdateTable/54 Tile{ AsIs: t.0#0/48 } e.2#0/40/55 >/57 >/58 >/59 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_open_bracket(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_UpdateTable]);
            refalrts::copy_evar(vm, context[55], context[56], context[40], context[41]);
            refalrts::alloc_close_call(vm, context[57]);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::reinit_name(context[6], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S6A1]);
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[5], functions[efunc_gen_UpdateIdentTable_A1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[4] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[53] );
            refalrts::link_brackets( context[52], context[16] );
            refalrts::link_brackets( context[15], context[50] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[57], context[59] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[4], context[47] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[23], context[31] );
            res = refalrts::splice_evar( res, context[50], context[51] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_evar( res, context[6], context[15] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/38 )/10 (/15 # CmdIdent/23 s.Direction#1/30 s.BracketNum#1/31 e.2#0/40 )/16 e.Tail#1/42 >/1
          context[38] = context[32];
          context[39] = context[33];
          context[40] = context[34];
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          // closed e.Scanned#1 as range 38
          // closed e.2#0 as range 40
          // closed e.Tail#1 as range 42
          //DEBUG: t.Acc#1: 5
          //DEBUG: s.Direction#1: 30
          //DEBUG: s.BracketNum#1: 31
          //DEBUG: e.Scanned#1: 38
          //DEBUG: e.2#0: 40
          //DEBUG: e.Tail#1: 42

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/42 } )/44 </45 Tile{ HalfReuse: & OutlineConstants-OneCommand$6=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 } (/46 Tile{ AsIs: e.2#0/40 } Tile{ AsIs: )/16 } </47 & UpdateIdentTable*1/48 Tile{ AsIs: t.Acc#1/5 } e.2#0/40/49 >/51 >/52 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[44]);
          refalrts::alloc_open_call(vm, context[45]);
          refalrts::alloc_open_bracket(vm, context[46]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_gen_UpdateIdentTable_D1]);
          refalrts::copy_evar(vm, context[49], context[50], context[40], context[41]);
          refalrts::alloc_close_call(vm, context[51]);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S6A1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[47] );
          refalrts::link_brackets( context[46], context[16] );
          refalrts::link_brackets( context[15], context[44] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[51], context[52] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[5], context[6] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_elem( res, context[46] );
          res = refalrts::splice_evar( res, context[23], context[31] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[9], context[15] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 t.new#20/5 (/9 e.new#27/32 )/10 (/15 s.new#21/23 s.new#22/30 s.new#23/31 s.new#24/38 e.new#25/34 )/16 e.new#26/36 >/1
        context[32] = context[24];
        context[33] = context[25];
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        // closed e.new#27 as range 32
        // closed e.new#26 as range 36
        if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
          continue;
        // closed e.new#25 as range 34
        do {
          // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#34/39 )/10 (/15 # CmdIdentSave/23 s.new#29/30 s.new#30/31 s.new#31/38 e.new#32/41 )/16 e.new#33/43 >/1
          context[39] = context[32];
          context[40] = context[33];
          context[41] = context[34];
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[23] ) )
            continue;
          // closed e.new#34 as range 39
          // closed e.new#32 as range 41
          // closed e.new#33 as range 43
          do {
            // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdIdentSave/23 s.Direction#1/30 s.BracketNum#1/31 s.SaveOffset#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            context[51] = 0;
            context[52] = 0;
            if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
              continue;
            // closed e.Scanned#1 as range 45
            // closed e.3#0 as range 47
            // closed e.Tail#1 as range 49
            context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
            if( ! context[54] )
              continue;
            context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
            if( ! context[56] )
              continue;
            if( ! refalrts::empty_seq( context[51], context[52] ) )
              continue;
            //DEBUG: s.Direction#1: 30
            //DEBUG: s.BracketNum#1: 31
            //DEBUG: s.SaveOffset#1: 38
            //DEBUG: e.Scanned#1: 45
            //DEBUG: e.3#0: 47
            //DEBUG: e.Tail#1: 49
            //DEBUG: t.#0: 53
            //DEBUG: t.0#0: 55

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$7=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.SaveOffset#1/38 } (/57 Tile{ AsIs: e.3#0/47 } Tile{ AsIs: )/16 } </58 & UpdateIdentTable=1/59 Tile{ AsIs: t.#0/53 } </60 & UpdateTable/61 Tile{ AsIs: t.0#0/55 } e.3#0/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[57]);
            refalrts::alloc_open_call(vm, context[58]);
            refalrts::alloc_name(vm, context[59], functions[efunc_gen_UpdateIdentTable_A1]);
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[61], functions[efunc_UpdateTable]);
            refalrts::copy_evar(vm, context[62], context[63], context[47], context[48]);
            refalrts::alloc_close_call(vm, context[64]);
            refalrts::alloc_close_call(vm, context[65]);
            refalrts::alloc_close_call(vm, context[66]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S7A1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[15] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[64] );
            refalrts::push_stack( vm, context[60] );
            refalrts::link_brackets( context[57], context[16] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[64], context[66] );
            res = refalrts::splice_evar( res, context[62], context[63] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_elem( res, context[16] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[57] );
            res = refalrts::splice_evar( res, context[10], context[38] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[6], context[9] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdIdentSave/23 s.Direction#1/30 s.BracketNum#1/31 s.SaveOffset#1/38 e.3#0/47 )/16 e.Tail#1/49 >/1
          context[45] = context[39];
          context[46] = context[40];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          // closed e.Scanned#1 as range 45
          // closed e.3#0 as range 47
          // closed e.Tail#1 as range 49
          //DEBUG: t.Acc#1: 5
          //DEBUG: s.Direction#1: 30
          //DEBUG: s.BracketNum#1: 31
          //DEBUG: s.SaveOffset#1: 38
          //DEBUG: e.Scanned#1: 45
          //DEBUG: e.3#0: 47
          //DEBUG: e.Tail#1: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$7=1/23 AsIs: s.Direction#1/30 AsIs: s.BracketNum#1/31 AsIs: s.SaveOffset#1/38 } (/52 Tile{ AsIs: e.3#0/47 } )/53 </54 & UpdateIdentTable*1/55 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[51]);
          refalrts::alloc_open_bracket(vm, context[52]);
          refalrts::alloc_close_bracket(vm, context[53]);
          refalrts::alloc_open_call(vm, context[54]);
          refalrts::alloc_name(vm, context[55], functions[efunc_gen_UpdateIdentTable_D1]);
          refalrts::copy_evar(vm, context[56], context[57], context[47], context[48]);
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S7A1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[54] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[51], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_evar( res, context[5], context[6] );
          res = refalrts::splice_evar( res, context[53], context[55] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_elem( res, context[52] );
          res = refalrts::splice_evar( res, context[10], context[38] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_elem( res, context[51] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 t.new#28/5 (/9 e.new#33/39 )/10 (/15 # CmdCreateElem/23 s.new#29/30 s.new#30/31 # ElIdent/38 e.new#31/41 )/16 e.new#32/43 >/1
        context[39] = context[32];
        context[40] = context[33];
        context[41] = context[34];
        context[42] = context[35];
        context[43] = context[36];
        context[44] = context[37];
        if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[23] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[38] ) )
          continue;
        // closed e.new#33 as range 39
        // closed e.new#31 as range 41
        // closed e.new#32 as range 43
        do {
          // </0 & DoMapAccum@2/4 (/5 t.#0/53 t.0#0/55 )/6 (/9 e.Scanned#1/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode#1/30 s.ElemNo#1/31 # ElIdent/38 e.3#0/47 )/16 e.Tail#1/49 >/1
          context[45] = context[39];
          context[46] = context[40];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = 0;
          context[52] = 0;
          if( ! refalrts::brackets_term( context[51], context[52], context[5] ) )
            continue;
          // closed e.Scanned#1 as range 45
          // closed e.3#0 as range 47
          // closed e.Tail#1 as range 49
          context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
          if( ! context[54] )
            continue;
          context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
          if( ! context[56] )
            continue;
          if( ! refalrts::empty_seq( context[51], context[52] ) )
            continue;
          //DEBUG: s.CreateMode#1: 30
          //DEBUG: s.ElemNo#1: 31
          //DEBUG: e.Scanned#1: 45
          //DEBUG: e.3#0: 47
          //DEBUG: e.Tail#1: 49
          //DEBUG: t.#0: 53
          //DEBUG: t.0#0: 55

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$8=1/23 AsIs: s.CreateMode#1/30 AsIs: s.ElemNo#1/31 HalfReuse: (/38 AsIs: e.3#0/47 AsIs: )/16 } </57 & UpdateIdentTable=1/58 Tile{ AsIs: t.#0/53 } </59 & UpdateTable/60 Tile{ AsIs: t.0#0/55 } e.3#0/47/61 >/63 >/64 >/65 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[57]);
          refalrts::alloc_name(vm, context[58], functions[efunc_gen_UpdateIdentTable_A1]);
          refalrts::alloc_open_call(vm, context[59]);
          refalrts::alloc_name(vm, context[60], functions[efunc_UpdateTable]);
          refalrts::copy_evar(vm, context[61], context[62], context[47], context[48]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::alloc_close_call(vm, context[64]);
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S8A1]);
          refalrts::reinit_open_bracket(context[38]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[64] );
          refalrts::push_stack( vm, context[57] );
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[59] );
          refalrts::link_brackets( context[38], context[16] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[63], context[65] );
          res = refalrts::splice_evar( res, context[61], context[62] );
          res = refalrts::splice_evar( res, context[55], context[56] );
          res = refalrts::splice_evar( res, context[59], context[60] );
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[57], context[58] );
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[6], context[9] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode#1/30 s.ElemNo#1/31 # ElIdent/38 e.3#0/47 )/16 e.Tail#1/49 >/1
        context[45] = context[39];
        context[46] = context[40];
        context[47] = context[41];
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[44];
        // closed e.Scanned#1 as range 45
        // closed e.3#0 as range 47
        // closed e.Tail#1 as range 49
        //DEBUG: t.Acc#1: 5
        //DEBUG: s.CreateMode#1: 30
        //DEBUG: s.ElemNo#1: 31
        //DEBUG: e.Scanned#1: 45
        //DEBUG: e.3#0: 47
        //DEBUG: e.Tail#1: 49

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned#1/45 } )/52 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$8=1/23 AsIs: s.CreateMode#1/30 AsIs: s.ElemNo#1/31 HalfReuse: (/38 AsIs: e.3#0/47 AsIs: )/16 } </53 & UpdateIdentTable*1/54 Tile{ AsIs: t.Acc#1/5 } e.3#0/47/55 >/57 >/58 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_open_call(vm, context[53]);
        refalrts::alloc_name(vm, context[54], functions[efunc_gen_UpdateIdentTable_D1]);
        refalrts::copy_evar(vm, context[55], context[56], context[47], context[48]);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::alloc_close_call(vm, context[58]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[23], functions[efunc_gen_OutlineConstantsm_OneCommand_S8A1]);
        refalrts::reinit_open_bracket(context[38]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[53] );
        refalrts::link_brackets( context[38], context[16] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[51], context[52] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[57], context[58] );
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[10], context[16] );
        res = refalrts::splice_evar( res, context[49], context[50] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_elem( res, context[51] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/24 )/10 (/15 # CmdSentence/23 e.0#0/26 )/16 e.Tail#1/28 >/1
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[23] ) )
          continue;
        // closed e.Scanned#1 as range 24
        // closed e.0#0 as range 26
        // closed e.Tail#1 as range 28
        //DEBUG: t.Acc#1: 5
        //DEBUG: e.Scanned#1: 24
        //DEBUG: e.0#0: 26
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </30 & DoMapAccum$1=1@2/31 Tile{ AsIs: (/9 AsIs: e.Scanned#1/24 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/28 } )/32 </33 & OutlineConstants-OneCommand$9=1/34 Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc#1/5 } (/35 Tile{ HalfReuse: )/23 AsIs: e.0#0/26 HalfReuse: >/16 } >/36 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_OutlineConstantsm_OneCommand_S9A1]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::reinit_close_call(context[16]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[35], context[23] );
        refalrts::link_brackets( context[15], context[32] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[23], context[16] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[32], context[34] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[9], context[15] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/24 )/10 (/15 # CmdOpenELoop/23 # AlgLeft/30 s.BracketNum#1/31 s.VarNumber#1/32 e.3#0/26 )/16 e.Tail#1/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[23] ) )
        continue;
      context[30] = refalrts::ident_left( identifiers[ident_AlgLeft], context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Scanned#1 as range 24
      // closed e.Tail#1 as range 28
      if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
        continue;
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      // closed e.3#0 as range 26
      //DEBUG: t.Acc#1: 5
      //DEBUG: e.Scanned#1: 24
      //DEBUG: e.Tail#1: 28
      //DEBUG: s.BracketNum#1: 31
      //DEBUG: s.VarNumber#1: 32
      //DEBUG: e.3#0: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 & DoMapAccum$1=1@2/34 Tile{ AsIs: (/9 AsIs: e.Scanned#1/24 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/28 } )/35 Tile{ HalfReuse: </23 HalfReuse: & OutlineConstants-OneCommand$10=1/30 AsIs: s.BracketNum#1/31 AsIs: s.VarNumber#1/32 } Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc#1/5 } (/36 Tile{ AsIs: )/16 } Tile{ AsIs: e.3#0/26 } >/37 >/38 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_DoMapAccum_S1A1Z2]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[30], functions[efunc_gen_OutlineConstantsm_OneCommand_S10A1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[16] );
      refalrts::link_brackets( context[15], context[35] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[23], context[32] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc#1/5 AsIs: (/9 } Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: t.Next#1/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & OutlineConstants-OneCommand@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_OneCommand_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & DoMapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@3/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@3/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & DoMapAccum@3/4 t.new#8/5 (/9 e.new#12/17 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.new#9/23 )/26 (/31 # Symbol/33 # Name/34 e.new#10/29 )/32 )/16 e.new#11/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_Symbol], context[23], context[24] );
      if( ! context[27] )
        continue;
      context[28] = refalrts::ident_left( identifiers[ident_Identifier], context[23], context[24] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[21], context[22] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Symbol], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = refalrts::ident_left( identifiers[ident_Name], context[29], context[30] );
      if( ! context[34] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#12 as range 17
      // closed e.new#9 as range 23
      // closed e.new#10 as range 29
      // closed e.new#11 as range 19
      do {
        // </0 & DoMapAccum@3/4 (/5 t.#0/45 t.0#0/47 )/6 (/9 e.Scanned#1/35 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.5#0/37 )/26 (/31 # Symbol/33 # Name/34 e.7#0/39 )/32 )/16 e.Tail#1/41 >/1
        context[35] = context[17];
        context[36] = context[18];
        context[37] = context[23];
        context[38] = context[24];
        context[39] = context[29];
        context[40] = context[30];
        context[41] = context[19];
        context[42] = context[20];
        context[43] = 0;
        context[44] = 0;
        if( ! refalrts::brackets_term( context[43], context[44], context[5] ) )
          continue;
        // closed e.Scanned#1 as range 35
        // closed e.5#0 as range 37
        // closed e.7#0 as range 39
        // closed e.Tail#1 as range 41
        context[46] = refalrts::tvar_left( context[45], context[43], context[44] );
        if( ! context[46] )
          continue;
        context[48] = refalrts::tvar_left( context[47], context[43], context[44] );
        if( ! context[48] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        //DEBUG: e.Scanned#1: 35
        //DEBUG: e.5#0: 37
        //DEBUG: e.7#0: 39
        //DEBUG: e.Tail#1: 41
        //DEBUG: t.#0: 45
        //DEBUG: t.0#0: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@3/6 AsIs: (/9 AsIs: e.Scanned#1/35 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/41 } Tile{ AsIs: )/26 HalfReuse: </31 HalfReuse: & OutlineConstants-Metatable\1=1/33 HalfReuse: (/34 AsIs: e.7#0/39 AsIs: )/32 HalfReuse: </16 } Tile{ HalfReuse: & UpdateIdentTable=1/5 AsIs: t.#0/45 } </49 Tile{ Reuse: & UpdateTable/4 } Tile{ AsIs: t.0#0/47 } Tile{ AsIs: e.5#0/37 } Tile{ HalfReuse: >/25 HalfReuse: >/27 HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[49]);
        refalrts::reinit_name(context[6], functions[efunc_gen_DoMapAccum_S1A1Z3]);
        refalrts::reinit_open_call(context[31]);
        refalrts::reinit_name(context[33], functions[efunc_gen_OutlineConstantsm_Metatable_L1A1]);
        refalrts::reinit_open_bracket(context[34]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[5], functions[efunc_gen_UpdateIdentTable_A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateTable]);
        refalrts::reinit_close_call(context[25]);
        refalrts::reinit_close_call(context[27]);
        refalrts::reinit_close_call(context[28]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[49] );
        refalrts::link_brackets( context[34], context[32] );
        refalrts::link_brackets( context[15], context[26] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[28] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_elem( res, context[4] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[5], context[46] );
        res = refalrts::splice_evar( res, context[26], context[16] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[6], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@3/4 t.Acc#1/5 (/9 e.Scanned#1/35 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.5#0/37 )/26 (/31 # Symbol/33 # Name/34 e.7#0/39 )/32 )/16 e.Tail#1/41 >/1
      context[35] = context[17];
      context[36] = context[18];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = context[29];
      context[40] = context[30];
      context[41] = context[19];
      context[42] = context[20];
      // closed e.Scanned#1 as range 35
      // closed e.5#0 as range 37
      // closed e.7#0 as range 39
      // closed e.Tail#1 as range 41
      //DEBUG: t.Acc#1: 5
      //DEBUG: e.Scanned#1: 35
      //DEBUG: e.5#0: 37
      //DEBUG: e.7#0: 39
      //DEBUG: e.Tail#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/35 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/41 } Tile{ AsIs: )/26 HalfReuse: </31 HalfReuse: & OutlineConstants-Metatable\1=1/33 HalfReuse: (/34 AsIs: e.7#0/39 AsIs: )/32 HalfReuse: </16 } Tile{ HalfReuse: & UpdateIdentTable*1/28 } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.5#0/37 } Tile{ HalfReuse: >/25 HalfReuse: >/27 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z3]);
      refalrts::reinit_open_call(context[31]);
      refalrts::reinit_name(context[33], functions[efunc_gen_OutlineConstantsm_Metatable_L1A1]);
      refalrts::reinit_open_bracket(context[34]);
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[28], functions[efunc_gen_UpdateIdentTable_D1]);
      refalrts::reinit_close_call(context[25]);
      refalrts::reinit_close_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[34], context[32] );
      refalrts::link_brackets( context[15], context[26] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[26], context[16] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@3/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & OutlineConstants-Metatable\1*1/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_OutlineConstantsm_Metatable_L1D1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@3/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@3/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@3/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & OutlineConstants-Metatable\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z3("DoMapAccum@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z3);


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@3/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    //DEBUG: t.X#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/9 AsIs: t.X#0/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@3/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.X#0: 7
    //DEBUG: e.X#0: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@3/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z3("Apply@3", COOKIE1_, COOKIE2_, func_gen_Apply_Z3);


static refalrts::FnResult func_gen_Apply_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/11 AsIs: t.X#0/9 AsIs: t.X0#0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@4/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded#1 as range 13
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: e.X#0: 11
    //DEBUG: t.Closure#1: 15
    //DEBUG: e.Bounded#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 9
  //DEBUG: t.X0#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@4/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@4/4 (/7 s.new#6/13 s.new#7/18 e.new#8/14 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#9 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#8 as range 14
        do {
          // </0 & Map@4/4 (/7 # Function/13 s.ScopeClass#1/18 (/25 e.3#0/23 )/26 e.2#0/19 )/8 e.Tail#1/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
            continue;
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::brackets_left( context[23], context[24], context[19], context[20] );
          if( ! context[25] )
            continue;
          refalrts::bracket_pointers(context[25], context[26]);
          // closed e.3#0 as range 23
          // closed e.2#0 as range 19
          // closed e.Tail#1 as range 21
          //DEBUG: s.ScopeClass#1: 18
          //DEBUG: e.3#0: 23
          //DEBUG: e.2#0: 19
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/13 AsIs: s.ScopeClass#1/18 AsIs: (/25 AsIs: e.3#0/23 AsIs: )/26 AsIs: e.2#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[13], identifiers[ident_Functionm_ToRASL]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@4/4 (/7 # CmdConditionFunc/13 s.ScopeClass#1/18 e.1#0/19 )/8 e.Tail#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[13] ) )
          continue;
        // closed e.1#0 as range 19
        // closed e.Tail#1 as range 21
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.1#0: 19
        //DEBUG: e.Tail#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToRASL/13 AsIs: s.ScopeClass#1/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncm_ToRASL]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 s.Type#1/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Type#1: 13
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type#1/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 } # OnlyInterpret/11 Tile{ AsIs: t.Next#1/7 } >/12 </13 & Map@4/14 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[11], identifiers[ident_OnlyInterpret]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_MarkFunctionGenMode_D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@0/6 (/7 & MarkFunctionGenMode@0/8 Tile{ HalfReuse: # OnlyInterpret/0 HalfReuse: )/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_MarkFunctionGenMode_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_OnlyInterpret]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@5/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@5/4 (/7 s.new#6/13 s.new#7/18 e.new#8/14 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#9 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#8 as range 14
        do {
          // </0 & Map@5/4 (/7 # Function/13 s.ScopeClass#1/18 (/25 e.3#0/23 )/26 e.2#0/19 )/8 e.Tail#1/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
            continue;
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::brackets_left( context[23], context[24], context[19], context[20] );
          if( ! context[25] )
            continue;
          refalrts::bracket_pointers(context[25], context[26]);
          // closed e.3#0 as range 23
          // closed e.2#0 as range 19
          // closed e.Tail#1 as range 21
          //DEBUG: s.ScopeClass#1: 18
          //DEBUG: e.3#0: 23
          //DEBUG: e.2#0: 19
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/13 AsIs: s.ScopeClass#1/18 AsIs: (/25 AsIs: e.3#0/23 AsIs: )/26 AsIs: e.2#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[13], identifiers[ident_Functionm_ToNative]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 # CmdConditionFunc/13 s.ScopeClass#1/18 e.1#0/19 )/8 e.Tail#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[13] ) )
          continue;
        // closed e.1#0 as range 19
        // closed e.Tail#1 as range 21
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.1#0: 19
        //DEBUG: e.Tail#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToNative/13 AsIs: s.ScopeClass#1/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncm_ToNative]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 s.Type#1/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Type#1: 13
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type#1/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 } # OnlyDirect/11 Tile{ AsIs: t.Next#1/7 } >/12 </13 & Map@5/14 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[11], identifiers[ident_OnlyDirect]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z5]);
    refalrts::update_name(context[4], functions[efunc_gen_MarkFunctionGenMode_D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@0/6 (/7 & MarkFunctionGenMode@0/8 Tile{ HalfReuse: # OnlyDirect/0 HalfReuse: )/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_MarkFunctionGenMode_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_OnlyDirect]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 s.OutlineConstants#4/5 (/8 e.Scanned0#1/14 )/9 (/12 e.Tail0#1/16 )/13 t.Acc#2/20 e.StepScanned#2/18 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Scanned0#1 as range 14
    // closed e.Tail0#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.StepScanned#2 as range 18
    //DEBUG: s.OutlineConstants#4: 5
    //DEBUG: e.Scanned0#1: 14
    //DEBUG: e.Tail0#1: 16
    //DEBUG: t.Acc#2: 20
    //DEBUG: e.StepScanned#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.OutlineConstants#4/5 } Tile{ AsIs: t.Acc#2/20 } Tile{ AsIs: (/12 } Tile{ AsIs: e.Scanned0#1/14 } Tile{ AsIs: e.StepScanned#2/18 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Tail0#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 s.OutlineConstants#4/5 (/8 e.Scanned0#1/6 )/9 (/12 e.Tail0#1/10 )/13 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 6
  // closed e.Tail0#1 as range 10
  // closed e.dyn#0 as range 2
  //DEBUG: s.OutlineConstants#4: 5
  //DEBUG: e.Scanned0#1: 6
  //DEBUG: e.Tail0#1: 10
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 AsIs: s.OutlineConstants#4/5 AsIs: (/8 AsIs: e.Scanned0#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Tail0#1/10 AsIs: )/13 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 78 elems
  refalrts::Iter context[78];
  refalrts::zeros( context, 78 );
  // </0 & DoMapAccum@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@4/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@4/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & DoMapAccum@4/4 (/5 s.new#8/25 s.new#9/26 )/6 (/9 e.new#13/17 )/10 (/15 s.new#10/27 e.new#11/23 )/16 e.new#12/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[5] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
        continue;
      // closed e.new#13 as range 17
      // closed e.new#12 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
        continue;
      // closed e.new#11 as range 23
      do {
        // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/28 )/10 (/15 # UnitName/27 e.3#0/30 )/16 e.Tail#1/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_UnitName], context[27] ) )
          continue;
        // closed e.Scanned#1 as range 28
        // closed e.3#0 as range 30
        // closed e.Tail#1 as range 32
        //DEBUG: s.Hash1#1: 25
        //DEBUG: s.Hash2#1: 26
        //DEBUG: e.Scanned#1: 28
        //DEBUG: e.3#0: 30
        //DEBUG: e.Tail#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/28 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail#1/32 } )/34 (/35 </36 & HashLittle2-Chars/37 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 } e.3#0/30/38 >/40 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # UnitName/27 AsIs: e.3#0/30 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_HashLittle2m_Chars]);
        refalrts::copy_evar(vm, context[38], context[39], context[30], context[31]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[35], context[10] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[9], context[34] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[10], context[16] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[34], context[37] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[6], context[9] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoMapAccum@4/4 (/5 s.new#14/25 s.new#15/26 )/6 (/9 e.new#20/28 )/10 (/15 s.new#16/27 s.new#17/34 e.new#18/30 )/16 e.new#19/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new#20 as range 28
        // closed e.new#19 as range 32
        if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
          continue;
        // closed e.new#18 as range 30
        do {
          // </0 & DoMapAccum@4/4 (/5 s.new#21/25 s.new#22/26 )/6 (/9 e.new#28/35 )/10 (/15 s.new#23/27 s.new#24/34 (/43 e.new#25/41 )/44 e.new#26/37 )/16 e.new#27/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          context[41] = 0;
          context[42] = 0;
          context[43] = refalrts::brackets_left( context[41], context[42], context[37], context[38] );
          if( ! context[43] )
            continue;
          refalrts::bracket_pointers(context[43], context[44]);
          // closed e.new#28 as range 35
          // closed e.new#25 as range 41
          // closed e.new#26 as range 37
          // closed e.new#27 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.new#29/25 s.new#30/26 )/6 (/9 e.new#35/45 )/10 (/15 # Function/27 s.new#31/34 (/43 e.new#33/47 )/44 e.new#32/49 )/16 e.new#34/51 >/1
            context[45] = context[35];
            context[46] = context[36];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[37];
            context[50] = context[38];
            context[51] = context[39];
            context[52] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_Function], context[27] ) )
              continue;
            // closed e.new#35 as range 45
            // closed e.new#33 as range 47
            // closed e.new#32 as range 49
            // closed e.new#34 as range 51
            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # Function/27 # GN-Entry/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
              context[53] = context[45];
              context[54] = context[46];
              context[55] = context[47];
              context[56] = context[48];
              context[57] = context[49];
              context[58] = context[50];
              context[59] = context[51];
              context[60] = context[52];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
                continue;
              // closed e.Scanned#1 as range 53
              // closed e.6#0 as range 55
              // closed e.5#0 as range 57
              // closed e.Tail#1 as range 59
              //DEBUG: s.Hash1#1: 25
              //DEBUG: s.Hash2#1: 26
              //DEBUG: e.Scanned#1: 53
              //DEBUG: e.6#0: 55
              //DEBUG: e.5#0: 57
              //DEBUG: e.Tail#1: 59

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/67 e.6#0/55/68 >/70 'R'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_close_bracket(vm, context[61]);
              refalrts::alloc_open_bracket(vm, context[62]);
              refalrts::alloc_close_bracket(vm, context[63]);
              refalrts::alloc_open_bracket(vm, context[64]);
              refalrts::alloc_open_call(vm, context[65]);
              refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
              refalrts::alloc_name(vm, context[67], functions[efunc_DisplayName]);
              refalrts::copy_evar(vm, context[68], context[69], context[55], context[56]);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::alloc_char(vm, context[71], 'R');
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
              refalrts::reinit_char(context[6], 'E');
              refalrts::reinit_open_call(context[9]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[16] );
              refalrts::link_brackets( context[43], context[44] );
              refalrts::link_brackets( context[64], context[10] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[9] );
              refalrts::link_brackets( context[62], context[63] );
              refalrts::link_brackets( context[5], context[61] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[10], context[16] );
              res = refalrts::splice_evar( res, context[67], context[72] );
              res = refalrts::splice_evar( res, context[25], context[9] );
              res = refalrts::splice_evar( res, context[63], context[66] );
              res = refalrts::splice_evar( res, context[59], context[60] );
              res = refalrts::splice_evar( res, context[61], context[62] );
              res = refalrts::splice_evar( res, context[53], context[54] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # Function/27 # GN-Local/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
              context[53] = context[45];
              context[54] = context[46];
              context[55] = context[47];
              context[56] = context[48];
              context[57] = context[49];
              context[58] = context[50];
              context[59] = context[51];
              context[60] = context[52];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
                continue;
              // closed e.Scanned#1 as range 53
              // closed e.6#0 as range 55
              // closed e.5#0 as range 57
              // closed e.Tail#1 as range 59
              //DEBUG: s.Hash1#1: 25
              //DEBUG: s.Hash2#1: 26
              //DEBUG: e.Scanned#1: 53
              //DEBUG: e.6#0: 55
              //DEBUG: e.5#0: 57
              //DEBUG: e.Tail#1: 59

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/67 e.6#0/55/68 >/70 'R'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_close_bracket(vm, context[61]);
              refalrts::alloc_open_bracket(vm, context[62]);
              refalrts::alloc_close_bracket(vm, context[63]);
              refalrts::alloc_open_bracket(vm, context[64]);
              refalrts::alloc_open_call(vm, context[65]);
              refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
              refalrts::alloc_name(vm, context[67], functions[efunc_DisplayName]);
              refalrts::copy_evar(vm, context[68], context[69], context[55], context[56]);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::alloc_char(vm, context[71], 'R');
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
              refalrts::reinit_char(context[6], 'L');
              refalrts::reinit_open_call(context[9]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[16] );
              refalrts::link_brackets( context[43], context[44] );
              refalrts::link_brackets( context[64], context[10] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[9] );
              refalrts::link_brackets( context[62], context[63] );
              refalrts::link_brackets( context[5], context[61] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[10], context[16] );
              res = refalrts::splice_evar( res, context[67], context[72] );
              res = refalrts::splice_evar( res, context[25], context[9] );
              res = refalrts::splice_evar( res, context[63], context[66] );
              res = refalrts::splice_evar( res, context[59], context[60] );
              res = refalrts::splice_evar( res, context[61], context[62] );
              res = refalrts::splice_evar( res, context[53], context[54] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # Function/27 s.ScopeClass#1/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
            context[53] = context[45];
            context[54] = context[46];
            context[55] = context[47];
            context[56] = context[48];
            context[57] = context[49];
            context[58] = context[50];
            context[59] = context[51];
            context[60] = context[52];
            // closed e.Scanned#1 as range 53
            // closed e.6#0 as range 55
            // closed e.5#0 as range 57
            // closed e.Tail#1 as range 59
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: s.ScopeClass#1: 34
            //DEBUG: e.Scanned#1: 53
            //DEBUG: e.6#0: 55
            //DEBUG: e.5#0: 57
            //DEBUG: e.Tail#1: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/67 >/68 </69 & DisplayName/70 e.6#0/55/71 >/73 'R'/74 >/75 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: s.ScopeClass#1/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[61]);
            refalrts::alloc_open_bracket(vm, context[62]);
            refalrts::alloc_close_bracket(vm, context[63]);
            refalrts::alloc_open_bracket(vm, context[64]);
            refalrts::alloc_open_call(vm, context[65]);
            refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
            refalrts::copy_stvar(vm, context[67], context[34]);
            refalrts::alloc_close_call(vm, context[68]);
            refalrts::alloc_open_call(vm, context[69]);
            refalrts::alloc_name(vm, context[70], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[71], context[72], context[55], context[56]);
            refalrts::alloc_close_call(vm, context[73]);
            refalrts::alloc_char(vm, context[74], 'R');
            refalrts::alloc_close_call(vm, context[75]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_open_call(context[6]);
            refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[43], context[44] );
            refalrts::link_brackets( context[64], context[10] );
            refalrts::push_stack( vm, context[75] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[73] );
            refalrts::push_stack( vm, context[69] );
            refalrts::push_stack( vm, context[68] );
            refalrts::push_stack( vm, context[6] );
            refalrts::link_brackets( context[62], context[63] );
            refalrts::link_brackets( context[5], context[61] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[67], context[75] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[63], context[66] );
            res = refalrts::splice_evar( res, context[59], context[60] );
            res = refalrts::splice_evar( res, context[61], context[62] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@4/4 (/5 s.new#29/25 s.new#30/26 )/6 (/9 e.new#36/45 )/10 (/15 # CmdNativeFunction/27 s.new#31/34 (/43 e.new#34/47 )/44 t.new#32/53 e.new#33/49 )/16 e.new#35/51 >/1
            context[45] = context[35];
            context[46] = context[36];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[37];
            context[50] = context[38];
            context[51] = context[39];
            context[52] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[27] ) )
              continue;
            // closed e.new#36 as range 45
            // closed e.new#34 as range 47
            // closed e.new#35 as range 51
            context[54] = refalrts::tvar_left( context[53], context[49], context[50] );
            if( ! context[54] )
              continue;
            // closed e.new#33 as range 49
            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/55 )/10 (/15 # CmdNativeFunction/27 # GN-Entry/34 (/43 e.6#0/57 )/44 t.4#0/53 e.7#0/59 )/16 e.Tail#1/61 >/1
              context[55] = context[45];
              context[56] = context[46];
              context[57] = context[47];
              context[58] = context[48];
              context[59] = context[49];
              context[60] = context[50];
              context[61] = context[51];
              context[62] = context[52];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
                continue;
              // closed e.Scanned#1 as range 55
              // closed e.6#0 as range 57
              // closed e.7#0 as range 59
              // closed e.Tail#1 as range 61
              //DEBUG: t.4#0: 53
              //DEBUG: s.Hash1#1: 25
              //DEBUG: s.Hash2#1: 26
              //DEBUG: e.Scanned#1: 55
              //DEBUG: e.6#0: 57
              //DEBUG: e.7#0: 59
              //DEBUG: e.Tail#1: 61

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/55 } )/63 (/64 Tile{ AsIs: e.Tail#1/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/69 e.6#0/57/70 >/72 'N'/73 >/74 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6#0/57 AsIs: )/44 AsIs: t.4#0/53 AsIs: e.7#0/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_close_bracket(vm, context[63]);
              refalrts::alloc_open_bracket(vm, context[64]);
              refalrts::alloc_close_bracket(vm, context[65]);
              refalrts::alloc_open_bracket(vm, context[66]);
              refalrts::alloc_open_call(vm, context[67]);
              refalrts::alloc_name(vm, context[68], functions[efunc_HashLittle2m_Chars]);
              refalrts::alloc_name(vm, context[69], functions[efunc_DisplayName]);
              refalrts::copy_evar(vm, context[70], context[71], context[57], context[58]);
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::alloc_char(vm, context[73], 'N');
              refalrts::alloc_close_call(vm, context[74]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
              refalrts::reinit_char(context[6], 'E');
              refalrts::reinit_open_call(context[9]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[16] );
              refalrts::link_brackets( context[43], context[44] );
              refalrts::link_brackets( context[66], context[10] );
              refalrts::push_stack( vm, context[74] );
              refalrts::push_stack( vm, context[67] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[9] );
              refalrts::link_brackets( context[64], context[65] );
              refalrts::link_brackets( context[5], context[63] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[10], context[16] );
              res = refalrts::splice_evar( res, context[69], context[74] );
              res = refalrts::splice_evar( res, context[25], context[9] );
              res = refalrts::splice_evar( res, context[65], context[68] );
              res = refalrts::splice_evar( res, context[61], context[62] );
              res = refalrts::splice_evar( res, context[63], context[64] );
              res = refalrts::splice_evar( res, context[55], context[56] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/55 )/10 (/15 # CmdNativeFunction/27 # GN-Local/34 (/43 e.6#0/57 )/44 t.4#0/53 e.7#0/59 )/16 e.Tail#1/61 >/1
              context[55] = context[45];
              context[56] = context[46];
              context[57] = context[47];
              context[58] = context[48];
              context[59] = context[49];
              context[60] = context[50];
              context[61] = context[51];
              context[62] = context[52];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
                continue;
              // closed e.Scanned#1 as range 55
              // closed e.6#0 as range 57
              // closed e.7#0 as range 59
              // closed e.Tail#1 as range 61
              //DEBUG: t.4#0: 53
              //DEBUG: s.Hash1#1: 25
              //DEBUG: s.Hash2#1: 26
              //DEBUG: e.Scanned#1: 55
              //DEBUG: e.6#0: 57
              //DEBUG: e.7#0: 59
              //DEBUG: e.Tail#1: 61

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/55 } )/63 (/64 Tile{ AsIs: e.Tail#1/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/69 e.6#0/57/70 >/72 'N'/73 >/74 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6#0/57 AsIs: )/44 AsIs: t.4#0/53 AsIs: e.7#0/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_close_bracket(vm, context[63]);
              refalrts::alloc_open_bracket(vm, context[64]);
              refalrts::alloc_close_bracket(vm, context[65]);
              refalrts::alloc_open_bracket(vm, context[66]);
              refalrts::alloc_open_call(vm, context[67]);
              refalrts::alloc_name(vm, context[68], functions[efunc_HashLittle2m_Chars]);
              refalrts::alloc_name(vm, context[69], functions[efunc_DisplayName]);
              refalrts::copy_evar(vm, context[70], context[71], context[57], context[58]);
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::alloc_char(vm, context[73], 'N');
              refalrts::alloc_close_call(vm, context[74]);
              refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
              refalrts::reinit_char(context[6], 'L');
              refalrts::reinit_open_call(context[9]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[16] );
              refalrts::link_brackets( context[43], context[44] );
              refalrts::link_brackets( context[66], context[10] );
              refalrts::push_stack( vm, context[74] );
              refalrts::push_stack( vm, context[67] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[9] );
              refalrts::link_brackets( context[64], context[65] );
              refalrts::link_brackets( context[5], context[63] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[10], context[16] );
              res = refalrts::splice_evar( res, context[69], context[74] );
              res = refalrts::splice_evar( res, context[25], context[9] );
              res = refalrts::splice_evar( res, context[65], context[68] );
              res = refalrts::splice_evar( res, context[61], context[62] );
              res = refalrts::splice_evar( res, context[63], context[64] );
              res = refalrts::splice_evar( res, context[55], context[56] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/55 )/10 (/15 # CmdNativeFunction/27 s.ScopeClass#1/34 (/43 e.6#0/57 )/44 t.4#0/53 e.7#0/59 )/16 e.Tail#1/61 >/1
            context[55] = context[45];
            context[56] = context[46];
            context[57] = context[47];
            context[58] = context[48];
            context[59] = context[49];
            context[60] = context[50];
            context[61] = context[51];
            context[62] = context[52];
            // closed e.Scanned#1 as range 55
            // closed e.6#0 as range 57
            // closed e.7#0 as range 59
            // closed e.Tail#1 as range 61
            //DEBUG: t.4#0: 53
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: s.ScopeClass#1: 34
            //DEBUG: e.Scanned#1: 55
            //DEBUG: e.6#0: 57
            //DEBUG: e.7#0: 59
            //DEBUG: e.Tail#1: 61

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/55 } )/63 (/64 Tile{ AsIs: e.Tail#1/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/69 >/70 </71 & DisplayName/72 e.6#0/57/73 >/75 'N'/76 >/77 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: s.ScopeClass#1/34 AsIs: (/43 AsIs: e.6#0/57 AsIs: )/44 AsIs: t.4#0/53 AsIs: e.7#0/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[63]);
            refalrts::alloc_open_bracket(vm, context[64]);
            refalrts::alloc_close_bracket(vm, context[65]);
            refalrts::alloc_open_bracket(vm, context[66]);
            refalrts::alloc_open_call(vm, context[67]);
            refalrts::alloc_name(vm, context[68], functions[efunc_HashLittle2m_Chars]);
            refalrts::copy_stvar(vm, context[69], context[34]);
            refalrts::alloc_close_call(vm, context[70]);
            refalrts::alloc_open_call(vm, context[71]);
            refalrts::alloc_name(vm, context[72], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[73], context[74], context[57], context[58]);
            refalrts::alloc_close_call(vm, context[75]);
            refalrts::alloc_char(vm, context[76], 'N');
            refalrts::alloc_close_call(vm, context[77]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_open_call(context[6]);
            refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[43], context[44] );
            refalrts::link_brackets( context[66], context[10] );
            refalrts::push_stack( vm, context[77] );
            refalrts::push_stack( vm, context[67] );
            refalrts::push_stack( vm, context[75] );
            refalrts::push_stack( vm, context[71] );
            refalrts::push_stack( vm, context[70] );
            refalrts::push_stack( vm, context[6] );
            refalrts::link_brackets( context[64], context[65] );
            refalrts::link_brackets( context[5], context[63] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[69], context[77] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[65], context[68] );
            res = refalrts::splice_evar( res, context[61], context[62] );
            res = refalrts::splice_evar( res, context[63], context[64] );
            res = refalrts::splice_evar( res, context[55], context[56] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@4/4 (/5 s.new#29/25 s.new#30/26 )/6 (/9 e.new#35/45 )/10 (/15 # CmdMetatable/27 s.new#31/34 (/43 e.new#33/47 )/44 e.new#32/49 )/16 e.new#34/51 >/1
          context[45] = context[35];
          context[46] = context[36];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[37];
          context[50] = context[38];
          context[51] = context[39];
          context[52] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[27] ) )
            continue;
          // closed e.new#35 as range 45
          // closed e.new#33 as range 47
          // closed e.new#32 as range 49
          // closed e.new#34 as range 51
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # CmdMetatable/27 # GN-Entry/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
            context[53] = context[45];
            context[54] = context[46];
            context[55] = context[47];
            context[56] = context[48];
            context[57] = context[49];
            context[58] = context[50];
            context[59] = context[51];
            context[60] = context[52];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 53
            // closed e.6#0 as range 55
            // closed e.5#0 as range 57
            // closed e.Tail#1 as range 59
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 53
            //DEBUG: e.6#0: 55
            //DEBUG: e.5#0: 57
            //DEBUG: e.Tail#1: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/67 e.6#0/55/68 >/70 'T'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[61]);
            refalrts::alloc_open_bracket(vm, context[62]);
            refalrts::alloc_close_bracket(vm, context[63]);
            refalrts::alloc_open_bracket(vm, context[64]);
            refalrts::alloc_open_call(vm, context[65]);
            refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[67], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[68], context[69], context[55], context[56]);
            refalrts::alloc_close_call(vm, context[70]);
            refalrts::alloc_char(vm, context[71], 'T');
            refalrts::alloc_close_call(vm, context[72]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'E');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[43], context[44] );
            refalrts::link_brackets( context[64], context[10] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[70] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[62], context[63] );
            refalrts::link_brackets( context[5], context[61] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[67], context[72] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[63], context[66] );
            res = refalrts::splice_evar( res, context[59], context[60] );
            res = refalrts::splice_evar( res, context[61], context[62] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # CmdMetatable/27 # GN-Local/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
            context[53] = context[45];
            context[54] = context[46];
            context[55] = context[47];
            context[56] = context[48];
            context[57] = context[49];
            context[58] = context[50];
            context[59] = context[51];
            context[60] = context[52];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 53
            // closed e.6#0 as range 55
            // closed e.5#0 as range 57
            // closed e.Tail#1 as range 59
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 53
            //DEBUG: e.6#0: 55
            //DEBUG: e.5#0: 57
            //DEBUG: e.Tail#1: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/67 e.6#0/55/68 >/70 'T'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[61]);
            refalrts::alloc_open_bracket(vm, context[62]);
            refalrts::alloc_close_bracket(vm, context[63]);
            refalrts::alloc_open_bracket(vm, context[64]);
            refalrts::alloc_open_call(vm, context[65]);
            refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[67], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[68], context[69], context[55], context[56]);
            refalrts::alloc_close_call(vm, context[70]);
            refalrts::alloc_char(vm, context[71], 'T');
            refalrts::alloc_close_call(vm, context[72]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'L');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[43], context[44] );
            refalrts::link_brackets( context[64], context[10] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[70] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[62], context[63] );
            refalrts::link_brackets( context[5], context[61] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[67], context[72] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[63], context[66] );
            res = refalrts::splice_evar( res, context[59], context[60] );
            res = refalrts::splice_evar( res, context[61], context[62] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/53 )/10 (/15 # CmdMetatable/27 s.ScopeClass#1/34 (/43 e.6#0/55 )/44 e.5#0/57 )/16 e.Tail#1/59 >/1
          context[53] = context[45];
          context[54] = context[46];
          context[55] = context[47];
          context[56] = context[48];
          context[57] = context[49];
          context[58] = context[50];
          context[59] = context[51];
          context[60] = context[52];
          // closed e.Scanned#1 as range 53
          // closed e.6#0 as range 55
          // closed e.5#0 as range 57
          // closed e.Tail#1 as range 59
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: s.ScopeClass#1: 34
          //DEBUG: e.Scanned#1: 53
          //DEBUG: e.6#0: 55
          //DEBUG: e.5#0: 57
          //DEBUG: e.Tail#1: 59

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/53 } )/61 (/62 Tile{ AsIs: e.Tail#1/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/67 >/68 </69 & DisplayName/70 e.6#0/55/71 >/73 'T'/74 >/75 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: s.ScopeClass#1/34 AsIs: (/43 AsIs: e.6#0/55 AsIs: )/44 AsIs: e.5#0/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::alloc_open_bracket(vm, context[62]);
          refalrts::alloc_close_bracket(vm, context[63]);
          refalrts::alloc_open_bracket(vm, context[64]);
          refalrts::alloc_open_call(vm, context[65]);
          refalrts::alloc_name(vm, context[66], functions[efunc_HashLittle2m_Chars]);
          refalrts::copy_stvar(vm, context[67], context[34]);
          refalrts::alloc_close_call(vm, context[68]);
          refalrts::alloc_open_call(vm, context[69]);
          refalrts::alloc_name(vm, context[70], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[71], context[72], context[55], context[56]);
          refalrts::alloc_close_call(vm, context[73]);
          refalrts::alloc_char(vm, context[74], 'T');
          refalrts::alloc_close_call(vm, context[75]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[43], context[44] );
          refalrts::link_brackets( context[64], context[10] );
          refalrts::push_stack( vm, context[75] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[73] );
          refalrts::push_stack( vm, context[69] );
          refalrts::push_stack( vm, context[68] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[62], context[63] );
          refalrts::link_brackets( context[5], context[61] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[67], context[75] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[63], context[66] );
          res = refalrts::splice_evar( res, context[59], context[60] );
          res = refalrts::splice_evar( res, context[61], context[62] );
          res = refalrts::splice_evar( res, context[53], context[54] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 (/5 s.new#21/25 s.new#22/26 )/6 (/9 e.new#26/35 )/10 (/15 # CmdEnum/27 s.new#23/34 e.new#24/37 )/16 e.new#25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[27] ) )
            continue;
          // closed e.new#26 as range 35
          // closed e.new#24 as range 37
          // closed e.new#25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdEnum/27 # GN-Entry/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'E'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: # GN-Entry/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'E');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'E');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdEnum/27 # GN-Local/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'E'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: # GN-Local/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'E');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'L');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdEnum/27 s.ScopeClass#1/34 e.4#0/43 )/16 e.Tail#1/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned#1 as range 41
          // closed e.4#0 as range 43
          // closed e.Tail#1 as range 45
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: s.ScopeClass#1: 34
          //DEBUG: e.Scanned#1: 41
          //DEBUG: e.4#0: 43
          //DEBUG: e.Tail#1: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/53 >/54 </55 & DisplayName/56 e.4#0/43/57 >/59 'E'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: s.ScopeClass#1/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
          refalrts::copy_stvar(vm, context[53], context[34]);
          refalrts::alloc_close_call(vm, context[54]);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[57], context[58], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_char(vm, context[60], 'E');
          refalrts::alloc_close_call(vm, context[61]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[50], context[10] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[54] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[5], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[53], context[61] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[49], context[52] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 (/5 s.new#21/25 s.new#22/26 )/6 (/9 e.new#26/35 )/10 (/15 # CmdSwap/27 s.new#23/34 e.new#24/37 )/16 e.new#25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[27] ) )
            continue;
          // closed e.new#26 as range 35
          // closed e.new#24 as range 37
          // closed e.new#25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdSwap/27 # GN-Entry/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'S'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: # GN-Entry/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'S');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'E');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdSwap/27 # GN-Local/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'S'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: # GN-Local/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'S');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'L');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdSwap/27 s.ScopeClass#1/34 e.4#0/43 )/16 e.Tail#1/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned#1 as range 41
          // closed e.4#0 as range 43
          // closed e.Tail#1 as range 45
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: s.ScopeClass#1: 34
          //DEBUG: e.Scanned#1: 41
          //DEBUG: e.4#0: 43
          //DEBUG: e.Tail#1: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/53 >/54 </55 & DisplayName/56 e.4#0/43/57 >/59 'S'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: s.ScopeClass#1/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
          refalrts::copy_stvar(vm, context[53], context[34]);
          refalrts::alloc_close_call(vm, context[54]);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[57], context[58], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_char(vm, context[60], 'S');
          refalrts::alloc_close_call(vm, context[61]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[50], context[10] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[54] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[5], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[53], context[61] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[49], context[52] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 (/5 s.new#21/25 s.new#22/26 )/6 (/9 e.new#26/35 )/10 (/15 # CmdConditionFunc/27 s.new#23/34 e.new#24/37 )/16 e.new#25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[27] ) )
            continue;
          // closed e.new#26 as range 35
          // closed e.new#24 as range 37
          // closed e.new#25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdConditionFunc/27 # GN-Entry/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'C'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: # GN-Entry/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'C');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'E');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdConditionFunc/27 # GN-Local/34 e.4#0/43 )/16 e.Tail#1/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned#1 as range 41
            // closed e.4#0 as range 43
            // closed e.Tail#1 as range 45
            //DEBUG: s.Hash1#1: 25
            //DEBUG: s.Hash2#1: 26
            //DEBUG: e.Scanned#1: 41
            //DEBUG: e.4#0: 43
            //DEBUG: e.Tail#1: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'C'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: # GN-Local/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[47]);
            refalrts::alloc_open_bracket(vm, context[48]);
            refalrts::alloc_close_bracket(vm, context[49]);
            refalrts::alloc_open_bracket(vm, context[50]);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
            refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
            refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_char(vm, context[57], 'C');
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
            refalrts::reinit_char(context[6], 'L');
            refalrts::reinit_open_call(context[9]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[50], context[10] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[9] );
            refalrts::link_brackets( context[48], context[49] );
            refalrts::link_brackets( context[5], context[47] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[53], context[58] );
            res = refalrts::splice_evar( res, context[25], context[9] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdConditionFunc/27 s.ScopeClass#1/34 e.4#0/43 )/16 e.Tail#1/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned#1 as range 41
          // closed e.4#0 as range 43
          // closed e.Tail#1 as range 45
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: s.ScopeClass#1: 34
          //DEBUG: e.Scanned#1: 41
          //DEBUG: e.4#0: 43
          //DEBUG: e.Tail#1: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/53 >/54 </55 & DisplayName/56 e.4#0/43/57 >/59 'C'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: s.ScopeClass#1/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
          refalrts::copy_stvar(vm, context[53], context[34]);
          refalrts::alloc_close_call(vm, context[54]);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[57], context[58], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_char(vm, context[60], 'C');
          refalrts::alloc_close_call(vm, context[61]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_open_call(context[6]);
          refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[50], context[10] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[54] );
          refalrts::push_stack( vm, context[6] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[5], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[53], context[61] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[49], context[52] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@4/4 (/5 s.new#21/25 s.new#22/26 )/6 (/9 e.new#26/35 )/10 (/15 # CmdDeclaration/27 s.new#23/34 e.new#24/37 )/16 e.new#25/39 >/1
        context[35] = context[28];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[31];
        context[39] = context[32];
        context[40] = context[33];
        if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[27] ) )
          continue;
        // closed e.new#26 as range 35
        // closed e.new#24 as range 37
        // closed e.new#25 as range 39
        do {
          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdDeclaration/27 # GN-Entry/34 e.4#0/43 )/16 e.Tail#1/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
            continue;
          // closed e.Scanned#1 as range 41
          // closed e.4#0 as range 43
          // closed e.Tail#1 as range 45
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: e.Scanned#1: 41
          //DEBUG: e.4#0: 43
          //DEBUG: e.Tail#1: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'D'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: # GN-Entry/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
          refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[56]);
          refalrts::alloc_char(vm, context[57], 'D');
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_char(context[6], 'E');
          refalrts::reinit_open_call(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[50], context[10] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[9] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[5], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[53], context[58] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[49], context[52] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdDeclaration/27 # GN-Local/34 e.4#0/43 )/16 e.Tail#1/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
            continue;
          // closed e.Scanned#1 as range 41
          // closed e.4#0 as range 43
          // closed e.Tail#1 as range 45
          //DEBUG: s.Hash1#1: 25
          //DEBUG: s.Hash2#1: 26
          //DEBUG: e.Scanned#1: 41
          //DEBUG: e.4#0: 43
          //DEBUG: e.Tail#1: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4#0/43/54 >/56 'D'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: # GN-Local/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
          refalrts::alloc_name(vm, context[53], functions[efunc_DisplayName]);
          refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[56]);
          refalrts::alloc_char(vm, context[57], 'D');
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
          refalrts::reinit_char(context[6], 'L');
          refalrts::reinit_open_call(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[50], context[10] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[9] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[5], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_evar( res, context[53], context[58] );
          res = refalrts::splice_evar( res, context[25], context[9] );
          res = refalrts::splice_evar( res, context[49], context[52] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/41 )/10 (/15 # CmdDeclaration/27 s.ScopeClass#1/34 e.4#0/43 )/16 e.Tail#1/45 >/1
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        context[46] = context[40];
        // closed e.Scanned#1 as range 41
        // closed e.4#0 as range 43
        // closed e.Tail#1 as range 45
        //DEBUG: s.Hash1#1: 25
        //DEBUG: s.Hash2#1: 26
        //DEBUG: s.ScopeClass#1: 34
        //DEBUG: e.Scanned#1: 41
        //DEBUG: e.4#0: 43
        //DEBUG: e.Tail#1: 45

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned#1/41 } )/47 (/48 Tile{ AsIs: e.Tail#1/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass#1/34/53 >/54 </55 & DisplayName/56 e.4#0/43/57 >/59 'D'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: s.ScopeClass#1/34 AsIs: e.4#0/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[52], functions[efunc_HashLittle2m_Chars]);
        refalrts::copy_stvar(vm, context[53], context[34]);
        refalrts::alloc_close_call(vm, context[54]);
        refalrts::alloc_open_call(vm, context[55]);
        refalrts::alloc_name(vm, context[56], functions[efunc_DisplayName]);
        refalrts::copy_evar(vm, context[57], context[58], context[43], context[44]);
        refalrts::alloc_close_call(vm, context[59]);
        refalrts::alloc_char(vm, context[60], 'D');
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
        refalrts::reinit_open_call(context[6]);
        refalrts::reinit_name(context[9], functions[efunc_gen_CharFromScopeClass_D2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[50], context[10] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[59] );
        refalrts::push_stack( vm, context[55] );
        refalrts::push_stack( vm, context[54] );
        refalrts::push_stack( vm, context[6] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[5], context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[10], context[16] );
        res = refalrts::splice_evar( res, context[53], context[61] );
        res = refalrts::splice_evar( res, context[25], context[9] );
        res = refalrts::splice_evar( res, context[49], context[52] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/28 )/10 (/15 # CmdDefineIdent/27 e.3#0/30 )/16 e.Tail#1/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[27] ) )
          continue;
        // closed e.Scanned#1 as range 28
        // closed e.3#0 as range 30
        // closed e.Tail#1 as range 32
        //DEBUG: s.Hash1#1: 25
        //DEBUG: s.Hash2#1: 26
        //DEBUG: e.Scanned#1: 28
        //DEBUG: e.3#0: 30
        //DEBUG: e.Tail#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/28 HalfReuse: (/10 HalfReuse: # CmdDefineIdent/15 } Tile{ AsIs: e.3#0/30 } Tile{ HalfReuse: )/27 } Tile{ AsIs: )/16 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdDefineIdent]);
        refalrts::reinit_close_bracket(context[27]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[16] );
        refalrts::link_brackets( context[10], context[27] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@4/4 (/5 s.Hash1#1/25 s.Hash2#1/26 )/6 (/9 e.Scanned#1/28 )/10 (/15 # CmdEmitNativeCode/27 t.2#0/34 e.4#0/30 )/16 e.Tail#1/32 >/1
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[27] ) )
        continue;
      // closed e.Scanned#1 as range 28
      // closed e.Tail#1 as range 32
      context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.4#0 as range 30
      //DEBUG: s.Hash1#1: 25
      //DEBUG: s.Hash2#1: 26
      //DEBUG: e.Scanned#1: 28
      //DEBUG: e.Tail#1: 32
      //DEBUG: t.2#0: 34
      //DEBUG: e.4#0: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: s.Hash1#1/25 AsIs: s.Hash2#1/26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/28 HalfReuse: (/10 HalfReuse: # CmdEmitNativeCode/15 } Tile{ AsIs: t.2#0/34 } Tile{ AsIs: e.4#0/30 } Tile{ HalfReuse: )/27 } Tile{ AsIs: )/16 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdEmitNativeCode]);
      refalrts::reinit_close_bracket(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[16] );
      refalrts::link_brackets( context[10], context[27] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@4/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & CalcDigest*10/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_CalcDigest_D10]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@4/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@4/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@4/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & CalcDigest@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcDigest_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z4("DoMapAccum@4", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z4);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & OutlineConstants-OneCommand@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_OneCommand_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z2("DoMapAccum$1=1@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z2);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@3/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@3/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@3/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & OutlineConstants-Metatable\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z3("DoMapAccum$1=1@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z3);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@4/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@4/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@4/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & CalcDigest@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcDigest_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z4("DoMapAccum$1=1@4", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z4);


//End of file
