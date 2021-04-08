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
  // </0 & Mu/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & __Meta_Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 AsIs: >/1 ]] }
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
  // </0 & Apply/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply/4 s.Fn/5 e.Argument/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument as range 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.Argument: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.Argument/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
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

  // </0 & Apply/4 (/5 t.Closure/9 e.Bounded/7 )/6 e.Argument/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded as range 7
  //DEBUG: e.Argument: 2
  //DEBUG: t.Closure: 9
  //DEBUG: e.Bounded: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure/9 } Tile{ AsIs: e.Bounded/7 } Tile{ AsIs: e.Argument/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Map/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map/4 s.Fn/5 t.Next/9 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail as range 11
      //DEBUG: t.Next: 9
      //DEBUG: s.Fn: 5
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: t.Next/9 } & $table/13 >/14 </15 & Map/16 s.Fn/5/17 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
      // </0 & Map/4 (/5 t./15 e.0/13 )/6 t.Next/9 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0 as range 13
      //DEBUG: t.Next: 9
      //DEBUG: e.Tail: 11
      //DEBUG: t.: 15
      //DEBUG: e.0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t./15/19 e.0/13/21 Tile{ AsIs: t.Next/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t./15 AsIs: e.0/13 AsIs: )/6 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map/4 t.Fn/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Fn: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn/5 AsIs: t.Next/9 } >/13 </14 & Map/15 t.Fn/5/16 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map/4 t.Fn/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn/5 >/1 {REMOVED TILE}
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
  // </0 & Reduce$1=1/4 t.Fn/5 (/9 e.Tail/7 )/10 t.Acc$a/11 >/1
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
  // closed e.Tail as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5
  //DEBUG: e.Tail: 7
  //DEBUG: t.Acc$a: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn/5 } Tile{ AsIs: t.Acc$a/11 } Tile{ AsIs: e.Tail/7 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Reduce/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce/4 t.new1/5 t.new2/7 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Reduce/4 t.Fn/5 t.Acc/7 t.Next/11 e.Tail/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail as range 9
    //DEBUG: t.Fn: 5
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 11
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn/5/15 (/17 Tile{ AsIs: e.Tail/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn/5 AsIs: t.Acc/7 AsIs: t.Next/11 } >/19 Tile{ AsIs: >/1 ]] }
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

  // </0 & Reduce/4 t.Fn/5 t.Acc/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/7 } Tile{ ]] }
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
  // </0 & Fetch/4 e.Argument/2 t.Function/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument as range 2
  //DEBUG: t.Function: 5
  //DEBUG: e.Argument: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function/5 } Tile{ AsIs: e.Argument/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & MapAccum/4 t.Fn/5 t.Acc/7 e.Tail/2 >/1
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
  // closed e.Tail as range 2
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn/5 AsIs: t.Acc/7 } (/9 )/10 Tile{ AsIs: e.Tail/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1/4 t.Fn/5 (/9 e.Scanned/7 )/10 (/13 e.Tail/11 )/14 t.Acc$a/15 e.StepScanned/2 >/1
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
  // closed e.Scanned as range 7
  // closed e.Tail as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned as range 2
  //DEBUG: t.Fn: 5
  //DEBUG: e.Scanned: 7
  //DEBUG: e.Tail: 11
  //DEBUG: t.Acc$a: 15
  //DEBUG: e.StepScanned: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn/5 } Tile{ AsIs: t.Acc$a/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned/7 } Tile{ AsIs: e.StepScanned/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum/4 t.new1/5 t.new2/7 (/11 e.new3/9 )/12 e.new4/2 >/1
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
  // closed e.new3 as range 9
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn/5 t.Acc/7 (/11 e.Scanned/13 )/12 t.Next/17 e.Tail/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail as range 15
    //DEBUG: t.Fn: 5
    //DEBUG: t.Acc: 7
    //DEBUG: e.Scanned: 13
    //DEBUG: t.Next: 17
    //DEBUG: e.Tail: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn/5 } Tile{ AsIs: (/11 AsIs: e.Scanned/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail/15 } )/20 </21 & Apply@2/22 t.Fn/5/23 Tile{ AsIs: t.Acc/7 } Tile{ AsIs: t.Next/17 } >/25 Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum/4 t.Fn/5 t.Acc/7 (/11 e.Scanned/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned as range 9
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7
  //DEBUG: e.Scanned: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/7 } Tile{ AsIs: e.Scanned/9 } Tile{ ]] }
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
  // </0 & UnBracket/4 (/7 e.Expr/5 )/8 >/1
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
  // closed e.Expr as range 5
  //DEBUG: e.Expr: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr/5 } Tile{ ]] }
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
  // </0 & DelAccumulator/4 t.Acc/5 e.Tail/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail as range 2
  //DEBUG: t.Acc: 5
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail/2 } Tile{ ]] }
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
  // </0 & Inc/4 e.Num/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num as range 2
  //DEBUG: e.Num: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num/2 AsIs: >/1 ]] }
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
  // </0 & Dec/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Dec/4 s.Num/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
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

  // </0 & Dec/4 e.Num/2 >/1
  // closed e.Num as range 2
  //DEBUG: e.Num: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
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
  // </0 & Pipe$2\1/4 t.Func/5 (/9 e.Funcs/7 )/10 e.Arg/2 >/1
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
  // closed e.Funcs as range 7
  // closed e.Arg as range 2
  //DEBUG: t.Func: 5
  //DEBUG: e.Funcs: 7
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func/5 } Tile{ AsIs: e.Arg/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Pipe$3\1/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg/2 } Tile{ ]] }
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
  // </0 & Pipe/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Pipe/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Pipe/4 t.Func/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func/7 e.Funcs/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs as range 9
    //DEBUG: t.Func: 7
    //DEBUG: e.Funcs: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func/7 } (/11 Tile{ AsIs: e.Funcs/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
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
  // </0 & LowLevelRASL=5/4 s.DebugInfo/5 s.Hash1/6 s.Hash2/7 t.Tables/8 e.Items$d/2 >/1
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
  // closed e.Items$d as range 2
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.Hash1: 6
  //DEBUG: s.Hash2: 7
  //DEBUG: t.Tables: 8
  //DEBUG: e.Items$d: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL/4 AsIs: s.DebugInfo/5 AsIs: s.Hash1/6 AsIs: s.Hash2/7 AsIs: t.Tables/8 AsIs: e.Items$d/2 AsIs: >/1 } </10 & LowLevelRASL-Native/11 s.Hash1/6/12 s.Hash2/7/13 t.Tables/8/14 e.Items$d/2/16 >/18 Tile{ ]] }
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
  // </0 & LowLevelRASL=4/4 s.DebugInfo/5 s.Hash1/6 s.Hash2/7 s.GenMode/8 t.Tables/9 e.Items$c/2 >/1
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
  // closed e.Items$c as range 2
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.Hash1: 6
  //DEBUG: s.Hash2: 7
  //DEBUG: s.GenMode: 8
  //DEBUG: t.Tables: 9
  //DEBUG: e.Items$c: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=5/4 AsIs: s.DebugInfo/5 AsIs: s.Hash1/6 AsIs: s.Hash2/7 } Tile{ AsIs: t.Tables/9 } </11 & Map@1/12 Tile{ AsIs: s.GenMode/8 } Tile{ AsIs: e.Items$c/2 } >/13 Tile{ AsIs: >/1 ]] }
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
  // </0 & LowLevelRASL=3/4 s.DebugInfo/5 s.Hash1/6 s.Hash2/7 s.GenMode/8 s.OutlineConstants/9 e.Items$b/2 >/1
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
  // closed e.Items$b as range 2
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.Hash1: 6
  //DEBUG: s.Hash2: 7
  //DEBUG: s.GenMode: 8
  //DEBUG: s.OutlineConstants: 9
  //DEBUG: e.Items$b: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=4/4 AsIs: s.DebugInfo/5 AsIs: s.Hash1/6 AsIs: s.Hash2/7 AsIs: s.GenMode/8 } </10 & DoMapAccum@1/11 Tile{ AsIs: s.OutlineConstants/9 } (/12 (/13 0/14 )/15 (/16 0/17 )/18 )/19 (/20 )/21 Tile{ AsIs: e.Items$b/2 } >/22 Tile{ AsIs: >/1 ]] }
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
  // </0 & LowLevelRASL=2/4 s.DebugInfo/5 s.Hash1/6 s.Hash2/7 s.GenMode/8 e.Items$a/2 >/1
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
  // closed e.Items$a as range 2
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.Hash1: 6
  //DEBUG: s.Hash2: 7
  //DEBUG: s.GenMode: 8
  //DEBUG: e.Items$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=3/4 AsIs: s.DebugInfo/5 AsIs: s.Hash1/6 AsIs: s.Hash2/7 AsIs: s.GenMode/8 } </9 & SelectConstantsOutliner/10 Tile{ AsIs: e.Items$a/2 } >/11 Tile{ AsIs: >/1 ]] }
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
  // </0 & LowLevelRASL=1/4 s.DebugInfo/5 s.GenMode/6 (/9 s.Hash1/11 s.Hash2/12 )/10 e.Items/2 >/1
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
  // closed e.Items as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.GenMode: 6
  //DEBUG: e.Items: 2
  //DEBUG: s.Hash1: 11
  //DEBUG: s.Hash2: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=2/4 AsIs: s.DebugInfo/5 } Tile{ AsIs: s.Hash1/11 AsIs: s.Hash2/12 HalfReuse: s.GenMode6 /10 } </13 Tile{ HalfReuse: & Map@2/9 } s.Hash1/11/14 s.Hash2/12/15 Tile{ AsIs: e.Items/2 } >/16 Tile{ AsIs: >/1 ]] }
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
  // </0 & LowLevelRASL/4 s.GenMode/5 s.DebugInfo/6 (/9 e.SrcName/7 )/10 e.ProgramElements/2 >/1
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
  // closed e.SrcName as range 7
  // closed e.ProgramElements as range 2
  //DEBUG: s.GenMode: 5
  //DEBUG: s.DebugInfo: 6
  //DEBUG: e.SrcName: 7
  //DEBUG: e.ProgramElements: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=1/4 } Tile{ AsIs: s.DebugInfo/6 HalfReuse: s.GenMode5 /9 } </11 & MapAccum@1/12 (/13 4001567069/14 291363191/15 )/16 (/17 # UnitName/18 </19 & Canonize/20 Tile{ AsIs: e.SrcName/7 } >/21 Tile{ AsIs: )/10 AsIs: e.ProgramElements/2 AsIs: >/1 } >/22 Tile{ ]] }
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
  // </0 & Canonize/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Canonize/4 e.Canonized/7 '\\'/11 e.NotCanonized/9 >/1
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
      // closed e.NotCanonized as range 9
      //DEBUG: e.Canonized: 7
      //DEBUG: e.NotCanonized: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized/7 } Tile{ HalfReuse: '/'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Canonize/11 AsIs: e.NotCanonized/9 AsIs: >/1 ]] }
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

  // </0 & Canonize/4 e.Canonized/2 >/1
  // closed e.Canonized as range 2
  //DEBUG: e.Canonized: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Canonize/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized/2 } Tile{ ]] }
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
  // </0 & CalcDigest/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CalcDigest/4 (/7 s.new1/13 s.new2/14 )/8 (/11 s.new3/15 e.new4/9 )/12 >/1
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
  // closed e.new4 as range 9
  do {
    // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # UnitName/15 e.SrcName/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[15] ) )
      continue;
    // closed e.SrcName as range 16
    //DEBUG: s.Hash1: 13
    //DEBUG: s.Hash2: 14
    //DEBUG: e.SrcName: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } e.SrcName/16/18 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # UnitName/15 AsIs: e.SrcName/16 AsIs: )/12 } Tile{ ]] }
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
    // </0 & CalcDigest/4 (/7 s.new5/13 s.new6/14 )/8 (/11 s.new7/15 s.new8/18 e.new9/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new9 as range 16
    do {
      // </0 & CalcDigest/4 (/7 s.new10/13 s.new11/14 )/8 (/11 s.new12/15 s.new13/18 (/23 e.new14/21 )/24 e.new15/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.new14 as range 21
      // closed e.new15 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.new16/13 s.new17/14 )/8 (/11 # Function/15 s.new18/18 (/23 e.new20/25 )/24 e.new19/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[15] ) )
          continue;
        // closed e.new20 as range 25
        // closed e.new19 as range 27
        do {
          // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # Function/15 # GN-Entry/18 (/23 e.Name/29 )/24 e.Commands/31 )/12 >/1
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
            continue;
          // closed e.Name as range 29
          // closed e.Commands as range 31
          //DEBUG: s.Hash1: 13
          //DEBUG: s.Hash2: 14
          //DEBUG: e.Name: 29
          //DEBUG: e.Commands: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/33 </34 & DisplayName/35 e.Name/29/36 >/38 'R'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Commands/31 AsIs: )/12 } Tile{ ]] }
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
          // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # Function/15 # GN-Local/18 (/23 e.Name/29 )/24 e.Commands/31 )/12 >/1
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
            continue;
          // closed e.Name as range 29
          // closed e.Commands as range 31
          //DEBUG: s.Hash1: 13
          //DEBUG: s.Hash2: 14
          //DEBUG: e.Name: 29
          //DEBUG: e.Commands: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/33 </34 & DisplayName/35 e.Name/29/36 >/38 'R'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Commands/31 AsIs: )/12 } Tile{ ]] }
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

        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # Function/15 s.ScopeClass/18 (/23 e.Name/29 )/24 e.Commands/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        // closed e.Name as range 29
        // closed e.Commands as range 31
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: s.ScopeClass: 18
        //DEBUG: e.Name: 29
        //DEBUG: e.Commands: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </33 & CharFromScopeClass*2/34 s.ScopeClass/18/35 >/36 </37 & DisplayName/38 e.Name/29/39 Tile{ AsIs: >/1 } 'R'/41 >/42 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: s.ScopeClass/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Commands/31 AsIs: )/12 } Tile{ ]] }
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
        // </0 & CalcDigest/4 (/7 s.new16/13 s.new17/14 )/8 (/11 # CmdNativeFunction/15 s.new18/18 (/23 e.new21/25 )/24 t.new19/29 e.new20/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[15] ) )
          continue;
        // closed e.new21 as range 25
        context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
        if( ! context[30] )
          continue;
        // closed e.new20 as range 27
        do {
          // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdNativeFunction/15 # GN-Entry/18 (/23 e.Name/31 )/24 t.SrcPos/29 e.Code/33 )/12 >/1
          context[31] = context[25];
          context[32] = context[26];
          context[33] = context[27];
          context[34] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
            continue;
          // closed e.Name as range 31
          // closed e.Code as range 33
          //DEBUG: t.SrcPos: 29
          //DEBUG: s.Hash1: 13
          //DEBUG: s.Hash2: 14
          //DEBUG: e.Name: 31
          //DEBUG: e.Code: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/35 </36 & DisplayName/37 e.Name/31/38 >/40 'N'/41 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name/31 AsIs: )/24 AsIs: t.SrcPos/29 AsIs: e.Code/33 AsIs: )/12 } Tile{ ]] }
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
          // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdNativeFunction/15 # GN-Local/18 (/23 e.Name/31 )/24 t.SrcPos/29 e.Code/33 )/12 >/1
          context[31] = context[25];
          context[32] = context[26];
          context[33] = context[27];
          context[34] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
            continue;
          // closed e.Name as range 31
          // closed e.Code as range 33
          //DEBUG: t.SrcPos: 29
          //DEBUG: s.Hash1: 13
          //DEBUG: s.Hash2: 14
          //DEBUG: e.Name: 31
          //DEBUG: e.Code: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/35 </36 & DisplayName/37 e.Name/31/38 >/40 'N'/41 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name/31 AsIs: )/24 AsIs: t.SrcPos/29 AsIs: e.Code/33 AsIs: )/12 } Tile{ ]] }
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

        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdNativeFunction/15 s.ScopeClass/18 (/23 e.Name/31 )/24 t.SrcPos/29 e.Code/33 )/12 >/1
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        // closed e.Name as range 31
        // closed e.Code as range 33
        //DEBUG: t.SrcPos: 29
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: s.ScopeClass: 18
        //DEBUG: e.Name: 31
        //DEBUG: e.Code: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </35 & CharFromScopeClass*2/36 s.ScopeClass/18/37 Tile{ AsIs: >/1 } </38 & DisplayName/39 e.Name/31/40 >/42 'N'/43 >/44 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass/18 AsIs: (/23 AsIs: e.Name/31 AsIs: )/24 AsIs: t.SrcPos/29 AsIs: e.Code/33 AsIs: )/12 } Tile{ ]] }
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

      // </0 & CalcDigest/4 (/7 s.new16/13 s.new17/14 )/8 (/11 # CmdMetatable/15 s.new18/18 (/23 e.new20/25 )/24 e.new19/27 )/12 >/1
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[19];
      context[28] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[15] ) )
        continue;
      // closed e.new20 as range 25
      // closed e.new19 as range 27
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdMetatable/15 # GN-Entry/18 (/23 e.Name/29 )/24 e.Metatable/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name as range 29
        // closed e.Metatable as range 31
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 29
        //DEBUG: e.Metatable: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/33 </34 & DisplayName/35 e.Name/29/36 >/38 'T'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: # GN-Entry/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Metatable/31 AsIs: )/12 } Tile{ ]] }
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
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdMetatable/15 # GN-Local/18 (/23 e.Name/29 )/24 e.Metatable/31 )/12 >/1
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name as range 29
        // closed e.Metatable as range 31
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 29
        //DEBUG: e.Metatable: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/33 </34 & DisplayName/35 e.Name/29/36 >/38 'T'/39 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: # GN-Local/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Metatable/31 AsIs: )/12 } Tile{ ]] }
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

      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdMetatable/15 s.ScopeClass/18 (/23 e.Name/29 )/24 e.Metatable/31 )/12 >/1
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      context[32] = context[28];
      // closed e.Name as range 29
      // closed e.Metatable as range 31
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: s.ScopeClass: 18
      //DEBUG: e.Name: 29
      //DEBUG: e.Metatable: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </33 & CharFromScopeClass*2/34 s.ScopeClass/18/35 >/36 </37 & DisplayName/38 e.Name/29/39 Tile{ AsIs: >/1 } 'T'/41 >/42 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: s.ScopeClass/18 AsIs: (/23 AsIs: e.Name/29 AsIs: )/24 AsIs: e.Metatable/31 AsIs: )/12 } Tile{ ]] }
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
      // </0 & CalcDigest/4 (/7 s.new10/13 s.new11/14 )/8 (/11 # CmdEnum/15 s.new12/18 e.new13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[15] ) )
        continue;
      // closed e.new13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdEnum/15 # GN-Entry/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'E'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: # GN-Entry/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdEnum/15 # GN-Local/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'E'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: # GN-Local/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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

      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdEnum/15 s.ScopeClass/18 e.Name/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name as range 21
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: s.ScopeClass: 18
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name/21/28 >/30 'E'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: s.ScopeClass/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
      // </0 & CalcDigest/4 (/7 s.new10/13 s.new11/14 )/8 (/11 # CmdSwap/15 s.new12/18 e.new13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[15] ) )
        continue;
      // closed e.new13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdSwap/15 # GN-Entry/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'S'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: # GN-Entry/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdSwap/15 # GN-Local/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'S'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: # GN-Local/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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

      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdSwap/15 s.ScopeClass/18 e.Name/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name as range 21
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: s.ScopeClass: 18
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name/21/28 >/30 'S'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: s.ScopeClass/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
      // </0 & CalcDigest/4 (/7 s.new10/13 s.new11/14 )/8 (/11 # CmdConditionFunc/15 s.new12/18 e.new13/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[15] ) )
        continue;
      // closed e.new13 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdConditionFunc/15 # GN-Entry/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'C'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: # GN-Entry/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
        // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdConditionFunc/15 # GN-Local/18 e.Name/21 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
          continue;
        // closed e.Name as range 21
        //DEBUG: s.Hash1: 13
        //DEBUG: s.Hash2: 14
        //DEBUG: e.Name: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'C'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: # GN-Local/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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

      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdConditionFunc/15 s.ScopeClass/18 e.Name/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Name as range 21
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: s.ScopeClass: 18
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name/21/28 >/30 'C'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: s.ScopeClass/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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

    // </0 & CalcDigest/4 (/7 s.new10/13 s.new11/14 )/8 (/11 # CmdDeclaration/15 s.new12/18 e.new13/19 )/12 >/1
    context[19] = context[16];
    context[20] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[15] ) )
      continue;
    // closed e.new13 as range 19
    do {
      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdDeclaration/15 # GN-Entry/18 e.Name/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[18] ) )
        continue;
      // closed e.Name as range 21
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'E'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'D'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: # GN-Entry/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
      // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdDeclaration/15 # GN-Local/18 e.Name/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[18] ) )
        continue;
      // closed e.Name as range 21
      //DEBUG: s.Hash1: 13
      //DEBUG: s.Hash2: 14
      //DEBUG: e.Name: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } 'L'/23 </24 & DisplayName/25 e.Name/21/26 Tile{ AsIs: >/1 } 'D'/28 >/29 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: # GN-Local/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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

    // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdDeclaration/15 s.ScopeClass/18 e.Name/21 )/12 >/1
    context[21] = context[19];
    context[22] = context[20];
    // closed e.Name as range 21
    //DEBUG: s.Hash1: 13
    //DEBUG: s.Hash2: 14
    //DEBUG: s.ScopeClass: 18
    //DEBUG: e.Name: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 } </23 & CharFromScopeClass*2/24 s.ScopeClass/18/25 Tile{ AsIs: >/1 } </26 & DisplayName/27 e.Name/21/28 >/30 'D'/31 >/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: s.ScopeClass/18 AsIs: e.Name/21 AsIs: )/12 } Tile{ ]] }
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
    // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdDefineIdent/15 e.Name/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[15] ) )
      continue;
    // closed e.Name as range 16
    //DEBUG: s.Hash1: 13
    //DEBUG: s.Hash2: 14
    //DEBUG: e.Name: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdDefineIdent/15 AsIs: e.Name/16 AsIs: )/12 } Tile{ ]] }
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

  // </0 & CalcDigest/4 (/7 s.Hash1/13 s.Hash2/14 )/8 (/11 # CmdEmitNativeCode/15 t.SrcPos/16 e.Code/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[15] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code as range 9
  //DEBUG: s.Hash1: 13
  //DEBUG: s.Hash2: 14
  //DEBUG: t.SrcPos: 16
  //DEBUG: e.Code: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1/13 AsIs: s.Hash2/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/15 AsIs: t.SrcPos/16 AsIs: e.Code/9 AsIs: )/12 } Tile{ ]] }
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
  // </0 & HashFuncName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & HashFuncName/4 s.new1/5 s.new2/6 s.new3/7 e.new4/2 s.new5/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & HashFuncName/4 s.Hash1/5 s.Hash2/6 # GN-Entry/7 e.Name/9 s.Sign/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[7] ) )
      continue;
    // closed e.Name as range 9
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: s.Sign: 8
    //DEBUG: e.Name: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 HalfReuse: 'E'/7 } </11 & DisplayName/12 Tile{ AsIs: e.Name/9 } >/13 Tile{ AsIs: s.Sign/8 AsIs: >/1 ]] }
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
    // </0 & HashFuncName/4 s.Hash1/5 s.Hash2/6 # GN-Local/7 e.Name/9 s.Sign/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[7] ) )
      continue;
    // closed e.Name as range 9
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: s.Sign: 8
    //DEBUG: e.Name: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 HalfReuse: 'L'/7 } </11 & DisplayName/12 Tile{ AsIs: e.Name/9 } >/13 Tile{ AsIs: s.Sign/8 AsIs: >/1 ]] }
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

  // </0 & HashFuncName/4 s.Hash1/5 s.Hash2/6 s.ScopeClass/7 e.Name/2 s.Sign/8 >/1
  // closed e.Name as range 2
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: s.ScopeClass: 7
  //DEBUG: s.Sign: 8
  //DEBUG: e.Name: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } </9 & CharFromScopeClass*2/10 Tile{ AsIs: s.ScopeClass/7 } >/11 </12 & DisplayName/13 Tile{ AsIs: e.Name/2 } >/14 Tile{ AsIs: s.Sign/8 AsIs: >/1 ]] }
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
  // </0 & CharFromScopeClass/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CharFromScopeClass/4 s.new1/5 >/1
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
  // </0 & SetScopeIDs/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetScopeIDs/4 s.new1/5 s.new2/6 t.new3/7 >/1
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
    // </0 & SetScopeIDs/4 s.Hash1/5 s.Hash2/6 (/7 # Function/11 s.ScopeClass/12 (/15 e.Name/13 )/16 e.Commands/9 )/8 >/1
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
    // closed e.Name as range 13
    // closed e.Commands as range 9
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: s.ScopeClass: 12
    //DEBUG: e.Name: 13
    //DEBUG: e.Commands: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/11 AsIs: s.ScopeClass/12 AsIs: (/15 AsIs: e.Name/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Commands/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
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

  // </0 & SetScopeIDs/4 s.Hash1/5 s.Hash2/6 t.OtherItem/7 >/1
  //DEBUG: t.OtherItem: 7
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem/7 } Tile{ ]] }
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
  // </0 & SetScopeIDs-Commands/4 s.Hash1/5 s.Hash2/6 e.Commands/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 AsIs: e.Commands/2 AsIs: >/1 ]] }
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
  // </0 & SetScopeIDs-Command/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetScopeIDs-Command/4 s.new1/5 s.new2/6 t.new3/7 >/1
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
    // </0 & SetScopeIDs-Command/4 s.new4/5 s.new5/6 (/7 s.new6/11 e.new7/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new7 as range 9
    do {
      // </0 & SetScopeIDs-Command/4 s.new8/5 s.new9/6 (/7 s.new10/11 e.new11/12 s.new12/16 s.new13/15 s.new14/14 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
        continue;
      // closed e.new11 as range 12
      do {
        // </0 & SetScopeIDs-Command/4 s.new15/5 s.new16/6 (/7 # CmdNumber/11 s.new19/16 s.new18/15 s.new17/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumber/11 s.Direction/16 s.BracketNum/15 # Cookie1/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
            continue;
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 16
          //DEBUG: s.BracketNum: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction/16 AsIs: s.BracketNum/15 HalfReuse: s.Hash15 /14 AsIs: )/8 } Tile{ ]] }
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
          // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumber/11 s.Direction/16 s.BracketNum/15 # Cookie2/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
            continue;
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 16
          //DEBUG: s.BracketNum: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction/16 AsIs: s.BracketNum/15 HalfReuse: s.Hash26 /14 AsIs: )/8 } Tile{ ]] }
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

        // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumber/11 s.Direction/16 s.BracketNum/15 s.Number/14 )/8 >/1
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: s.Direction: 16
        //DEBUG: s.BracketNum: 15
        //DEBUG: s.Number: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumber/11 AsIs: s.Direction/16 AsIs: s.BracketNum/15 AsIs: s.Number/14 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.new15/5 s.new16/6 (/7 s.new17/11 s.new21/19 s.new20/16 s.new19/15 s.new18/14 )/8 >/1
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      do {
        // </0 & SetScopeIDs-Command/4 s.new22/5 s.new23/6 (/7 # CmdNumberSave/11 s.new27/19 s.new26/16 s.new25/15 s.new24/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[11] ) )
          continue;
        do {
          // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumberSave/11 s.Direction/19 s.BracketNum/16 s.SaveOffset/15 # Cookie1/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
            continue;
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 19
          //DEBUG: s.BracketNum: 16
          //DEBUG: s.SaveOffset: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction/19 AsIs: s.BracketNum/16 AsIs: s.SaveOffset/15 HalfReuse: s.Hash15 /14 AsIs: )/8 } Tile{ ]] }
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
          // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumberSave/11 s.Direction/19 s.BracketNum/16 s.SaveOffset/15 # Cookie2/14 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
            continue;
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 19
          //DEBUG: s.BracketNum: 16
          //DEBUG: s.SaveOffset: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction/19 AsIs: s.BracketNum/16 AsIs: s.SaveOffset/15 HalfReuse: s.Hash26 /14 AsIs: )/8 } Tile{ ]] }
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

        // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdNumberSave/11 s.Direction/19 s.BracketNum/16 s.SaveOffset/15 s.Number/14 )/8 >/1
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: s.Direction: 19
        //DEBUG: s.BracketNum: 16
        //DEBUG: s.SaveOffset: 15
        //DEBUG: s.Number: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction/19 AsIs: s.BracketNum/16 AsIs: s.SaveOffset/15 AsIs: s.Number/14 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.new22/5 s.new23/6 (/7 # CmdCreateElem/11 s.new26/19 s.new25/16 # ElNumber/15 s.new24/14 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[15] ) )
        continue;
      do {
        // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdCreateElem/11 s.CreateMode/19 s.ElemNo/16 # ElNumber/15 # Cookie1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[14] ) )
          continue;
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: s.CreateMode: 19
        //DEBUG: s.ElemNo: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode/19 AsIs: s.ElemNo/16 AsIs: # ElNumber/15 HalfReuse: s.Hash15 /14 AsIs: )/8 } Tile{ ]] }
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
        // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdCreateElem/11 s.CreateMode/19 s.ElemNo/16 # ElNumber/15 # Cookie2/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[14] ) )
          continue;
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: s.CreateMode: 19
        //DEBUG: s.ElemNo: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode/19 AsIs: s.ElemNo/16 AsIs: # ElNumber/15 HalfReuse: s.Hash26 /14 AsIs: )/8 } Tile{ ]] }
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

      // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdCreateElem/11 s.CreateMode/19 s.ElemNo/16 # ElNumber/15 s.Number/14 )/8 >/1
      //DEBUG: s.Hash1: 5
      //DEBUG: s.Hash2: 6
      //DEBUG: s.CreateMode: 19
      //DEBUG: s.ElemNo: 16
      //DEBUG: s.Number: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode/19 AsIs: s.ElemNo/16 AsIs: # ElNumber/15 AsIs: s.Number/14 AsIs: )/8 } Tile{ ]] }
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
      // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdSentence/11 e.SubCommands/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.SubCommands as range 12
      //DEBUG: s.Hash1: 5
      //DEBUG: s.Hash2: 6
      //DEBUG: e.SubCommands: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSentence/11 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.SubCommands/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
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

    // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum/15 s.VarNumber/16 e.SubCommands/12 )/8 >/1
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
    // closed e.SubCommands as range 12
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: s.BracketNum: 15
    //DEBUG: s.VarNumber: 16
    //DEBUG: e.SubCommands: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/14 AsIs: s.BracketNum/15 AsIs: s.VarNumber/16 } Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.SubCommands/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
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

  // </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 t.OtherCommand/7 >/1
  //DEBUG: t.OtherCommand: 7
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1/5 s.Hash2/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand/7 } Tile{ ]] }
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
  // </0 & SetScopeIDs-Patch/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetScopeIDs-Patch/4 s.new1/5 s.new2/6 s.new3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 # Cookie1/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[7] ) )
      continue;
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 # Cookie1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash15 /1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 # Cookie2/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[7] ) )
      continue;
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 # Cookie2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash26 /1 ]] }
    refalrts::reinit_svar( context[1], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 s.Number/7 >/1
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: s.Number: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1/5 s.Hash2/6 s.Number/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number7 /1 ]] }
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
  // </0 & SelectConstantsOutliner/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & SelectConstantsOutliner/4 e.Items-B/7 (/13 # NativeBlock/15 t.SrcPos/16 e.Code/11 )/14 e.Items-E/9 >/1
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
      // closed e.Items-E as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Code as range 11
      //DEBUG: e.Items-B: 7
      //DEBUG: e.Items-E: 9
      //DEBUG: t.SrcPos: 16
      //DEBUG: e.Code: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B/7 AsIs: (/13 AsIs: # NativeBlock/15 AsIs: t.SrcPos/16 AsIs: e.Code/11 AsIs: )/14 } Tile{ AsIs: e.Items-E/9 } Tile{ ]] }
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
    // </0 & SelectConstantsOutliner/4 e.Items-B/7 (/13 # CmdNativeFunction/15 s.ScopeClass/16 (/19 e.Name/17 )/20 t.SrcPos/21 e.Code/11 )/14 e.Items-E/9 >/1
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
      // closed e.Items-E as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name as range 17
      context[22] = refalrts::tvar_left( context[21], context[11], context[12] );
      if( ! context[22] )
        continue;
      // closed e.Code as range 11
      //DEBUG: e.Items-B: 7
      //DEBUG: e.Items-E: 9
      //DEBUG: s.ScopeClass: 16
      //DEBUG: e.Name: 17
      //DEBUG: t.SrcPos: 21
      //DEBUG: e.Code: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B/7 AsIs: (/13 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass/16 AsIs: (/19 AsIs: e.Name/17 AsIs: )/20 AsIs: t.SrcPos/21 AsIs: e.Code/11 AsIs: )/14 } Tile{ AsIs: e.Items-E/9 } Tile{ ]] }
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

  // </0 & SelectConstantsOutliner/4 e.Items/2 >/1
  // closed e.Items as range 2
  //DEBUG: e.Items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & SelectConstantsOutliner/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & OutlineConstants-RASLOnly/0 } Tile{ AsIs: e.Items/2 } Tile{ ]] }
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
  // </0 & OutlineConstants-WithNative$2=2/4 s.ScopeClass/5 (/8 e.Name/6 )/9 t.Tables$b/10 e.Commands$a/2 >/1
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
  // closed e.Name as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands$a as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: t.Tables$b: 10
  //DEBUG: e.Commands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$b/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 } Tile{ AsIs: e.Commands$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-WithNative$2=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 (/12 e.Commands/10 )/13 t.Tables$a/14 s.Id/16 >/1
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
  // closed e.Name as range 6
  // closed e.Commands as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: e.Commands: 10
  //DEBUG: t.Tables$a: 14
  //DEBUG: s.Id: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$2=2/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 HalfReuse: </12 } Tile{ HalfReuse: & DoMapAccum@2/13 AsIs: t.Tables$a/14 } (/17 )/18 Tile{ AsIs: e.Commands/10 } >/19 Tile{ AsIs: >/1 ]] }
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
  // </0 & OutlineConstants-WithNative$3=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 t.SrcPos/10 (/14 e.Code/12 )/15 t.Tables$a/16 s.Id/18 >/1
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
  // closed e.Name as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Code as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: t.SrcPos: 10
  //DEBUG: e.Code: 12
  //DEBUG: t.Tables$a: 16
  //DEBUG: s.Id: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/14 {REMOVED TILE} )/15 {REMOVED TILE} s.Id/18 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/16 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 AsIs: t.SrcPos/10 } Tile{ AsIs: e.Code/12 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-WithNative$4=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 t.Tables$a/10 e.Metatable$a/2 >/1
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
  // closed e.Name as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable$a as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: t.Tables$a: 10
  //DEBUG: e.Metatable$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 } Tile{ AsIs: e.Metatable$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-WithNative$5=2/4 s.Definition/5 s.ScopeClass/6 (/9 e.Name/7 )/10 t.Tables$a/11 s.Id/13 >/1
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
  // closed e.Name as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Definition: 5
  //DEBUG: s.ScopeClass: 6
  //DEBUG: e.Name: 7
  //DEBUG: t.Tables$a: 11
  //DEBUG: s.Id: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.ScopeClass/6 {REMOVED TILE} {REMOVED TILE} s.Id/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/11 } Tile{ HalfReuse: (/4 AsIs: s.Definition/5 } Tile{ HalfReuse: s.ScopeClass6 /9 AsIs: e.Name/7 AsIs: )/10 } Tile{ ]] }
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
  // </0 & OutlineConstants-WithNative$6=1/4 t.Tables$a/5 s.Id/7 >/1
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
  //DEBUG: t.Tables$a: 5
  //DEBUG: s.Id: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative$6=1/4 {REMOVED TILE} s.Id/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/5 } Tile{ ]] }
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
  // </0 & OutlineConstants-WithNative/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OutlineConstants-WithNative/4 t.new1/10 (/7 s.new2/9 e.new3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # UnitName/9 e.SrcName/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[9] ) )
      continue;
    // closed e.SrcName as range 12
    //DEBUG: t.Tables: 10
    //DEBUG: e.SrcName: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables/10 AsIs: (/7 AsIs: # UnitName/9 AsIs: e.SrcName/12 AsIs: )/8 } Tile{ ]] }
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
    // </0 & OutlineConstants-WithNative/4 t.new4/10 (/7 s.new5/9 s.new6/14 e.new7/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new7 as range 12
    do {
      // </0 & OutlineConstants-WithNative/4 t.new8/10 (/7 s.new9/9 s.new10/14 (/19 e.new11/17 )/20 e.new12/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new11 as range 17
      // closed e.new12 as range 15
      do {
        // </0 & OutlineConstants-WithNative/4 t.new13/10 (/7 # Function/9 s.new14/14 (/19 e.new16/21 )/20 e.new15/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
          continue;
        // closed e.new16 as range 21
        // closed e.new15 as range 23
        do {
          // </0 & OutlineConstants-WithNative/4 (/10 t./31 t.0/33 )/11 (/7 # Function/9 s.ScopeClass/14 (/19 e.Name/25 )/20 e.Commands/27 )/8 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = 0;
          context[30] = 0;
          if( ! refalrts::brackets_term( context[29], context[30], context[10] ) )
            continue;
          // closed e.Name as range 25
          // closed e.Commands as range 27
          context[32] = refalrts::tvar_left( context[31], context[29], context[30] );
          if( ! context[32] )
            continue;
          context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
          if( ! context[34] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: s.ScopeClass: 14
          //DEBUG: e.Name: 25
          //DEBUG: e.Commands: 27
          //DEBUG: t.: 31
          //DEBUG: t.0: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$2=1/9 AsIs: s.ScopeClass/14 AsIs: (/19 AsIs: e.Name/25 AsIs: )/20 } (/35 Tile{ AsIs: e.Commands/27 } )/36 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0/33 HalfReuse: </11 } Tile{ HalfReuse: & UpdateTable/10 AsIs: t./31 } e.Name/25/37 >/39 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # Function/9 s.ScopeClass/14 (/19 e.Name/25 )/20 e.Commands/27 )/8 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        // closed e.Name as range 25
        // closed e.Commands as range 27
        //DEBUG: t.Tables: 10
        //DEBUG: s.ScopeClass: 14
        //DEBUG: e.Name: 25
        //DEBUG: e.Commands: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$2=1/9 AsIs: s.ScopeClass/14 AsIs: (/19 AsIs: e.Name/25 AsIs: )/20 } (/29 Tile{ AsIs: e.Commands/27 } )/30 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/10 } e.Name/25/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
        // </0 & OutlineConstants-WithNative/4 t.new13/10 (/7 # CmdNativeFunction/9 s.new14/14 (/19 e.new17/21 )/20 t.new15/25 e.new16/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[9] ) )
          continue;
        // closed e.new17 as range 21
        context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
        if( ! context[26] )
          continue;
        // closed e.new16 as range 23
        do {
          // </0 & OutlineConstants-WithNative/4 (/10 t./33 t.0/35 )/11 (/7 # CmdNativeFunction/9 s.ScopeClass/14 (/19 e.Name/27 )/20 t.SrcPos/25 e.Code/29 )/8 >/1
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          context[30] = context[24];
          context[31] = 0;
          context[32] = 0;
          if( ! refalrts::brackets_term( context[31], context[32], context[10] ) )
            continue;
          // closed e.Name as range 27
          // closed e.Code as range 29
          context[34] = refalrts::tvar_left( context[33], context[31], context[32] );
          if( ! context[34] )
            continue;
          context[36] = refalrts::tvar_left( context[35], context[31], context[32] );
          if( ! context[36] )
            continue;
          if( ! refalrts::empty_seq( context[31], context[32] ) )
            continue;
          //DEBUG: t.SrcPos: 25
          //DEBUG: s.ScopeClass: 14
          //DEBUG: e.Name: 27
          //DEBUG: e.Code: 29
          //DEBUG: t.: 33
          //DEBUG: t.0: 35

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$3=1/9 AsIs: s.ScopeClass/14 AsIs: (/19 AsIs: e.Name/27 AsIs: )/20 AsIs: t.SrcPos/25 } (/37 Tile{ AsIs: e.Code/29 } )/38 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0/35 HalfReuse: </11 } Tile{ HalfReuse: & UpdateTable/10 AsIs: t./33 } e.Name/27/39 >/41 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # CmdNativeFunction/9 s.ScopeClass/14 (/19 e.Name/27 )/20 t.SrcPos/25 e.Code/29 )/8 >/1
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        // closed e.Name as range 27
        // closed e.Code as range 29
        //DEBUG: t.Tables: 10
        //DEBUG: t.SrcPos: 25
        //DEBUG: s.ScopeClass: 14
        //DEBUG: e.Name: 27
        //DEBUG: e.Code: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$3=1/9 AsIs: s.ScopeClass/14 AsIs: (/19 AsIs: e.Name/27 AsIs: )/20 AsIs: t.SrcPos/25 } (/31 Tile{ AsIs: e.Code/29 } )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/10 } e.Name/27/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

      // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # CmdMetatable/9 s.ScopeClass/14 (/19 e.Name/21 )/20 e.Metatable/23 )/8 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[15];
      context[24] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[9] ) )
        continue;
      // closed e.Name as range 21
      // closed e.Metatable as range 23
      //DEBUG: t.Tables: 10
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.Name: 21
      //DEBUG: e.Metatable: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$4=1/9 AsIs: s.ScopeClass/14 AsIs: (/19 AsIs: e.Name/21 AsIs: )/20 } Tile{ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables/10 } (/25 )/26 Tile{ AsIs: e.Metatable/23 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

    // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 s.Definition/9 s.ScopeClass/14 e.Name/15 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    // closed e.Name as range 15
    //DEBUG: t.Tables: 10
    //DEBUG: s.Definition: 9
    //DEBUG: s.ScopeClass: 14
    //DEBUG: e.Name: 15
    //9: s.Definition
    //10: t.Tables
    //14: s.ScopeClass
    //15: e.Name
    //22: s.Definition

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
      //DEBUG: t.Tables: 10
      //DEBUG: s.Definition: 9
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.Name: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/22 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$5=2/4 } Tile{ AsIs: s.Definition/9 AsIs: s.ScopeClass/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name/15 } Tile{ AsIs: )/8 AsIs: </17 Reuse: & UpdateFuncTable/21 } Tile{ AsIs: t.Tables/10 } e.Name/15/23 Tile{ AsIs: >/18 AsIs: >/1 ]] }
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
    // </0 & OutlineConstants-WithNative/4 t.new4/10 (/7 # CmdDefineIdent/9 e.new5/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[9] ) )
      continue;
    // closed e.new5 as range 12
    do {
      // </0 & OutlineConstants-WithNative/4 (/10 t./18 t.0/20 )/11 (/7 # CmdDefineIdent/9 e.Name/14 )/8 >/1
      context[14] = context[12];
      context[15] = context[13];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_term( context[16], context[17], context[10] ) )
        continue;
      // closed e.Name as range 14
      context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
      if( ! context[19] )
        continue;
      context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //DEBUG: e.Name: 14
      //DEBUG: t.: 18
      //DEBUG: t.0: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$6=1/4 HalfReuse: </10 } Tile{ HalfReuse: & UpdateIdentTable=1/9 } Tile{ AsIs: t./18 } Tile{ HalfReuse: </11 HalfReuse: & UpdateTable/7 } Tile{ AsIs: t.0/20 } Tile{ AsIs: e.Name/14 } >/22 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

    // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # CmdDefineIdent/9 e.Name/14 )/8 >/1
    context[14] = context[12];
    context[15] = context[13];
    // closed e.Name as range 14
    //DEBUG: t.Tables: 10
    //DEBUG: e.Name: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$6=1/4 } Tile{ HalfReuse: </7 HalfReuse: & UpdateIdentTable*1/9 } Tile{ AsIs: t.Tables/10 } Tile{ AsIs: e.Name/14 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

  // </0 & OutlineConstants-WithNative/4 t.Tables/10 (/7 # CmdEmitNativeCode/9 t.SrcPos/12 e.Code/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code as range 5
  //DEBUG: t.Tables: 10
  //DEBUG: t.SrcPos: 12
  //DEBUG: e.Code: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables/10 AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos/12 AsIs: e.Code/5 AsIs: )/8 } Tile{ ]] }
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
  // </0 & OutlineConstants-RASLOnly$1=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 t.Tables$a/10 e.Commands$a/2 >/1
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
  // closed e.Name as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands$a as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: t.Tables$a: 10
  //DEBUG: e.Commands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 } Tile{ AsIs: e.Commands$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-RASLOnly$3=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 t.Tables$a/10 e.Metatable$a/2 >/1
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
  // closed e.Name as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable$a as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: t.Tables$a: 10
  //DEBUG: e.Metatable$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 } Tile{ AsIs: e.Metatable$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-RASLOnly/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OutlineConstants-RASLOnly/4 t.new1/5 t.new2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-RASLOnly/4 t.new3/5 (/7 s.new4/11 e.new5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new5 as range 9
    do {
      // </0 & OutlineConstants-RASLOnly/4 t.Tables/5 (/7 # Function/11 s.ScopeClass/14 (/17 e.Name/15 )/18 e.Commands/12 )/8 >/1
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
      // closed e.Name as range 15
      // closed e.Commands as range 12
      //DEBUG: t.Tables: 5
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.Name: 15
      //DEBUG: e.Commands: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$1=1/11 AsIs: s.ScopeClass/14 AsIs: (/17 AsIs: e.Name/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables/5 } (/19 )/20 Tile{ AsIs: e.Commands/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
      // </0 & OutlineConstants-RASLOnly/4 t.Tables/5 (/7 # CmdDefineIdent/11 e.Name/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[11] ) )
        continue;
      // closed e.Name as range 12
      //DEBUG: t.Tables: 5
      //DEBUG: e.Name: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} (/7 # CmdDefineIdent/11 e.Name/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables/5 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-RASLOnly/4 t.Tables/5 (/7 # CmdMetatable/11 s.ScopeClass/14 (/17 e.Name/15 )/18 e.Metatable/12 )/8 >/1
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
    // closed e.Name as range 15
    // closed e.Metatable as range 12
    //DEBUG: t.Tables: 5
    //DEBUG: s.ScopeClass: 14
    //DEBUG: e.Name: 15
    //DEBUG: e.Metatable: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$3=1/11 AsIs: s.ScopeClass/14 AsIs: (/17 AsIs: e.Name/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables/5 } (/19 )/20 Tile{ AsIs: e.Metatable/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

  // </0 & OutlineConstants-RASLOnly/4 t.Tables/5 t.OtherItem/7 >/1
  //DEBUG: t.Tables: 5
  //DEBUG: t.OtherItem: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables/5 AsIs: t.OtherItem/7 } Tile{ ]] }
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
  // </0 & OutlineConstants-Metatable\1=2/4 s.IdentId/5 t.Tables$c/6 s.FuncId/8 >/1
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
  //DEBUG: s.IdentId: 5
  //DEBUG: t.Tables$c: 6
  //DEBUG: s.FuncId: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$c/6 } Tile{ HalfReuse: (/4 AsIs: s.IdentId/5 } Tile{ AsIs: s.FuncId/8 HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-Metatable\1=1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.new1/5 )/8 t.new2/9 s.new3/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.Function/12 )/8 (/9 t./16 t.0/18 )/10 s.IdentId/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[9] ) )
      continue;
    // closed e.Function as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.IdentId: 11
    //DEBUG: e.Function: 12
    //DEBUG: t.: 16
    //DEBUG: t.0: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentId/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-Metatable\1=2/4 HalfReuse: s.IdentId11 /7 } </20 & UpdateFuncTable=1/21 Tile{ AsIs: t.0/18 } Tile{ HalfReuse: </8 HalfReuse: & UpdateTable/9 AsIs: t./16 } Tile{ AsIs: e.Function/12 } Tile{ HalfReuse: >/10 } >/22 Tile{ AsIs: >/1 ]] }
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

  // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.Function/5 )/8 t.Tables$b/9 s.IdentId/11 >/1
  // closed e.Function as range 5
  //DEBUG: t.Tables$b: 9
  //DEBUG: s.IdentId: 11
  //DEBUG: e.Function: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentId/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-Metatable\1=2/4 HalfReuse: s.IdentId11 /7 } </12 Tile{ HalfReuse: & UpdateFuncTable*1/8 AsIs: t.Tables$b/9 } Tile{ AsIs: e.Function/5 } >/13 Tile{ AsIs: >/1 ]] }
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
  // </0 & OutlineConstants-Metatable/4 t.Tables/5 e.Metatable/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable as range 2
  //DEBUG: t.Tables: 5
  //DEBUG: e.Metatable: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Tables/5 } (/7 )/8 Tile{ AsIs: e.Metatable/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & OutlineConstants-Commands/4 t.Tables/5 e.Commands/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: t.Tables: 5
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables/5 } (/7 )/8 Tile{ AsIs: e.Commands/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & OutlineConstants-OneCommand$1=1/4 s.Direction/5 s.BracketNum/6 (/9 e.Func/7 )/10 t.Tables$a/11 s.Id/13 >/1
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
  // closed e.Func as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: e.Func: 7
  //DEBUG: t.Tables$a: 11
  //DEBUG: s.Id: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdName/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 HalfReuse: s.Id13 /9 AsIs: e.Func/7 AsIs: )/10 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$2=1/4 s.Direction/5 s.BracketNum/6 s.SaveOffset/7 (/10 e.Func/8 )/11 t.Tables$a/12 s.Id/14 >/1
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
  // closed e.Func as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: s.SaveOffset: 7
  //DEBUG: e.Func: 8
  //DEBUG: t.Tables$a: 12
  //DEBUG: s.Id: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNameSave/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 AsIs: s.SaveOffset/7 HalfReuse: s.Id14 /10 AsIs: e.Func/8 AsIs: )/11 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$3=1/4 s.CreateMode/5 s.ElemNo/6 (/9 e.Func/7 )/10 t.Tables$a/11 s.Id/13 >/1
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
  // closed e.Func as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode: 5
  //DEBUG: s.ElemNo: 6
  //DEBUG: e.Func: 7
  //DEBUG: t.Tables$a: 11
  //DEBUG: s.Id: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode/5 AsIs: s.ElemNo/6 HalfReuse: # ElName/9 } Tile{ AsIs: s.Id/13 } Tile{ AsIs: e.Func/7 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-OneCommand$4=1/4 s.Direction/5 s.BracketNum/6 s.InnerBrackets/7 (/10 e.Func/8 )/11 t.Tables$a/12 s.Id/14 >/1
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
  // closed e.Func as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: s.InnerBrackets: 7
  //DEBUG: e.Func: 8
  //DEBUG: t.Tables$a: 12
  //DEBUG: s.Id: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADT/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 AsIs: s.InnerBrackets/7 HalfReuse: s.Id14 /10 AsIs: e.Func/8 AsIs: )/11 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$5=1/4 s.Direction/5 s.BracketNum/6 s.InnerBrackets/7 (/10 e.Func/8 )/11 t.Tables$a/12 s.Id/14 >/1
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
  // closed e.Func as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: s.InnerBrackets: 7
  //DEBUG: e.Func: 8
  //DEBUG: t.Tables$a: 12
  //DEBUG: s.Id: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADTSave/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 AsIs: s.InnerBrackets/7 HalfReuse: s.Id14 /10 AsIs: e.Func/8 AsIs: )/11 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$6=1/4 s.Direction/5 s.BracketNum/6 (/9 e.Ident/7 )/10 t.Tables$a/11 s.Id/13 >/1
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
  // closed e.Ident as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: e.Ident: 7
  //DEBUG: t.Tables$a: 11
  //DEBUG: s.Id: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdent/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 HalfReuse: s.Id13 /9 AsIs: e.Ident/7 AsIs: )/10 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$7=1/4 s.Direction/5 s.BracketNum/6 s.SaveOffset/7 (/10 e.Ident/8 )/11 t.Tables$a/12 s.Id/14 >/1
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
  // closed e.Ident as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction: 5
  //DEBUG: s.BracketNum: 6
  //DEBUG: s.SaveOffset: 7
  //DEBUG: e.Ident: 8
  //DEBUG: t.Tables$a: 12
  //DEBUG: s.Id: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdentSave/4 AsIs: s.Direction/5 AsIs: s.BracketNum/6 AsIs: s.SaveOffset/7 HalfReuse: s.Id14 /10 AsIs: e.Ident/8 AsIs: )/11 } Tile{ ]] }
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
  // </0 & OutlineConstants-OneCommand$8=1/4 s.CreateMode/5 s.ElemNo/6 (/9 e.Ident/7 )/10 t.Tables$a/11 s.Id/13 >/1
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
  // closed e.Ident as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode: 5
  //DEBUG: s.ElemNo: 6
  //DEBUG: e.Ident: 7
  //DEBUG: t.Tables$a: 11
  //DEBUG: s.Id: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode/5 AsIs: s.ElemNo/6 HalfReuse: # ElIdent/9 } Tile{ AsIs: s.Id/13 } Tile{ AsIs: e.Ident/7 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-OneCommand$9=1/4 t.Tables$a/5 e.Commands$a/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands$a as range 2
  //DEBUG: t.Tables$a: 5
  //DEBUG: e.Commands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/5 } Tile{ HalfReuse: (/0 HalfReuse: # CmdSentence/4 } Tile{ AsIs: e.Commands$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-OneCommand$10=1/4 s.BracketNum/5 s.VarNumber/6 t.Tables$a/7 e.Commands$a/2 >/1
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
  // closed e.Commands$a as range 2
  //DEBUG: s.BracketNum: 5
  //DEBUG: s.VarNumber: 6
  //DEBUG: t.Tables$a: 7
  //DEBUG: e.Commands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables$a/7 } (/9 Tile{ HalfReuse: # CmdOpenELoop/0 HalfReuse: # AlgLeft/4 AsIs: s.BracketNum/5 AsIs: s.VarNumber/6 } Tile{ AsIs: e.Commands$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  // </0 & OutlineConstants-OneCommand/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OutlineConstants-OneCommand/4 t.new1/5 t.new2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-OneCommand/4 t.new3/5 (/7 s.new4/11 e.new5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new5 as range 9
    do {
      // </0 & OutlineConstants-OneCommand/4 t.new6/5 (/7 s.new7/11 s.new8/14 s.new9/15 e.new10/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      // closed e.new10 as range 12
      do {
        // </0 & OutlineConstants-OneCommand/4 t.new11/5 (/7 # CmdName/11 s.new12/14 s.new13/15 e.new14/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdName], context[11] ) )
          continue;
        // closed e.new14 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t./22 t.0/24 )/6 (/7 # CmdName/11 s.Direction/14 s.BracketNum/15 e.Func/18 )/8 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[5] ) )
            continue;
          // closed e.Func as range 18
          context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
          if( ! context[23] )
            continue;
          context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
          if( ! context[25] )
            continue;
          if( ! refalrts::empty_seq( context[20], context[21] ) )
            continue;
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: e.Func: 18
          //DEBUG: t.: 22
          //DEBUG: t.0: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Direction/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-OneCommand$1=1/4 HalfReuse: s.Direction14 /5 } Tile{ AsIs: s.BracketNum/15 } (/26 Tile{ AsIs: e.Func/18 } Tile{ AsIs: )/6 HalfReuse: </7 HalfReuse: & UpdateFuncTable=1/11 } Tile{ AsIs: t.0/24 } </27 & UpdateTable/28 Tile{ AsIs: t./22 } e.Func/18/29 >/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdName/11 s.Direction/14 s.BracketNum/15 e.Func/18 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e.Func as range 18
        //DEBUG: t.Tables: 5
        //DEBUG: s.Direction: 14
        //DEBUG: s.BracketNum: 15
        //DEBUG: e.Func: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$1=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 } (/20 e.Func/18/21 )/23 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Func/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
        // </0 & OutlineConstants-OneCommand/4 t.new11/5 (/7 s.new12/11 s.new13/14 s.new14/15 s.new15/18 e.new16/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new16 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdNameSave/11 s.new18/14 s.new19/15 s.new20/18 e.new21/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[11] ) )
            continue;
          // closed e.new21 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdNameSave/11 s.Direction/14 s.BracketNum/15 s.SaveOffset/18 e.Func/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.Direction: 14
            //DEBUG: s.BracketNum: 15
            //DEBUG: s.SaveOffset: 18
            //DEBUG: e.Func: 21
            //DEBUG: t.: 25
            //DEBUG: t.0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$2=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.SaveOffset/18 } (/29 e.Func/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t./25 } Tile{ AsIs: e.Func/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

          // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdNameSave/11 s.Direction/14 s.BracketNum/15 s.SaveOffset/18 e.Func/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func as range 21
          //DEBUG: t.Tables: 5
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: s.SaveOffset: 18
          //DEBUG: e.Func: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$2=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.SaveOffset/18 } (/23 e.Func/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Func/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
          // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdCreateElem/11 s.new18/14 s.new19/15 # ElName/18 e.new20/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_ElName], context[18] ) )
            continue;
          // closed e.new20 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdCreateElem/11 s.CreateMode/14 s.ElemNo/15 # ElName/18 e.Func/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.CreateMode: 14
            //DEBUG: s.ElemNo: 15
            //DEBUG: e.Func: 21
            //DEBUG: t.: 25
            //DEBUG: t.0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$3=1/11 AsIs: s.CreateMode/14 AsIs: s.ElemNo/15 HalfReuse: (/18 AsIs: e.Func/21 AsIs: )/8 HalfReuse: </1 } Tile{ HalfReuse: & UpdateFuncTable=1/0 } Tile{ AsIs: t.0/27 } Tile{ HalfReuse: </4 HalfReuse: & UpdateTable/5 AsIs: t./25 } e.Func/21/29 Tile{ HalfReuse: >/6 } >/31 >/32 Tile{ ]] }
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

          // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdCreateElem/11 s.CreateMode/14 s.ElemNo/15 # ElName/18 e.Func/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func as range 21
          //DEBUG: t.Tables: 5
          //DEBUG: s.CreateMode: 14
          //DEBUG: s.ElemNo: 15
          //DEBUG: e.Func: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$3=1/11 AsIs: s.CreateMode/14 AsIs: s.ElemNo/15 HalfReuse: (/18 AsIs: e.Func/21 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/5 } e.Func/21/23 Tile{ HalfReuse: >/0 } >/25 Tile{ ]] }
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
          // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdADT/11 s.new18/14 s.new19/15 s.new20/18 e.new21/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[11] ) )
            continue;
          // closed e.new21 as range 19
          do {
            // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdADT/11 s.Direction/14 s.BracketNum/15 s.InnerBrackets/18 e.Func/21 )/8 >/1
            context[21] = context[19];
            context[22] = context[20];
            context[23] = 0;
            context[24] = 0;
            if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
              continue;
            // closed e.Func as range 21
            context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
            if( ! context[26] )
              continue;
            context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
            if( ! context[28] )
              continue;
            if( ! refalrts::empty_seq( context[23], context[24] ) )
              continue;
            //DEBUG: s.Direction: 14
            //DEBUG: s.BracketNum: 15
            //DEBUG: s.InnerBrackets: 18
            //DEBUG: e.Func: 21
            //DEBUG: t.: 25
            //DEBUG: t.0: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$4=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.InnerBrackets/18 } (/29 e.Func/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t./25 } Tile{ AsIs: e.Func/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

          // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdADT/11 s.Direction/14 s.BracketNum/15 s.InnerBrackets/18 e.Func/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Func as range 21
          //DEBUG: t.Tables: 5
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: s.InnerBrackets: 18
          //DEBUG: e.Func: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$4=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.InnerBrackets/18 } (/23 e.Func/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Func/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdADTSave/11 s.new18/14 s.new19/15 s.new20/18 e.new21/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[11] ) )
          continue;
        // closed e.new21 as range 19
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdADTSave/11 s.Direction/14 s.BracketNum/15 s.InnerBrackets/18 e.Func/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
            continue;
          // closed e.Func as range 21
          context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
          if( ! context[26] )
            continue;
          context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: s.InnerBrackets: 18
          //DEBUG: e.Func: 21
          //DEBUG: t.: 25
          //DEBUG: t.0: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$5=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.InnerBrackets/18 } (/29 e.Func/21/30 )/32 Tile{ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.0/27 HalfReuse: </6 } Tile{ HalfReuse: & UpdateTable/5 AsIs: t./25 } Tile{ AsIs: e.Func/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdADTSave/11 s.Direction/14 s.BracketNum/15 s.InnerBrackets/18 e.Func/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Func as range 21
        //DEBUG: t.Tables: 5
        //DEBUG: s.Direction: 14
        //DEBUG: s.BracketNum: 15
        //DEBUG: s.InnerBrackets: 18
        //DEBUG: e.Func: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$5=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.InnerBrackets/18 } (/23 e.Func/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Func/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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
        // </0 & OutlineConstants-OneCommand/4 t.new11/5 (/7 # CmdIdent/11 s.new12/14 s.new13/15 e.new14/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[11] ) )
          continue;
        // closed e.new14 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t./22 t.0/24 )/6 (/7 # CmdIdent/11 s.Direction/14 s.BracketNum/15 e.Ident/18 )/8 >/1
          context[18] = context[16];
          context[19] = context[17];
          context[20] = 0;
          context[21] = 0;
          if( ! refalrts::brackets_term( context[20], context[21], context[5] ) )
            continue;
          // closed e.Ident as range 18
          context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
          if( ! context[23] )
            continue;
          context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
          if( ! context[25] )
            continue;
          if( ! refalrts::empty_seq( context[20], context[21] ) )
            continue;
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: e.Ident: 18
          //DEBUG: t.: 22
          //DEBUG: t.0: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Direction/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-OneCommand$6=1/4 HalfReuse: s.Direction14 /5 } Tile{ AsIs: s.BracketNum/15 } (/26 Tile{ AsIs: e.Ident/18 } Tile{ AsIs: )/6 HalfReuse: </7 HalfReuse: & UpdateIdentTable=1/11 } Tile{ AsIs: t./22 } </27 & UpdateTable/28 Tile{ AsIs: t.0/24 } e.Ident/18/29 >/31 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdIdent/11 s.Direction/14 s.BracketNum/15 e.Ident/18 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        // closed e.Ident as range 18
        //DEBUG: t.Tables: 5
        //DEBUG: s.Direction: 14
        //DEBUG: s.BracketNum: 15
        //DEBUG: e.Ident: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$6=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 } (/20 e.Ident/18/21 )/23 Tile{ AsIs: </0 Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Ident/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

      // </0 & OutlineConstants-OneCommand/4 t.new11/5 (/7 s.new12/11 s.new13/14 s.new14/15 s.new15/18 e.new16/16 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
        continue;
      // closed e.new16 as range 16
      do {
        // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdIdentSave/11 s.new18/14 s.new19/15 s.new20/18 e.new21/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[11] ) )
          continue;
        // closed e.new21 as range 19
        do {
          // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdIdentSave/11 s.Direction/14 s.BracketNum/15 s.SaveOffset/18 e.Ident/21 )/8 >/1
          context[21] = context[19];
          context[22] = context[20];
          context[23] = 0;
          context[24] = 0;
          if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
            continue;
          // closed e.Ident as range 21
          context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
          if( ! context[26] )
            continue;
          context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: s.Direction: 14
          //DEBUG: s.BracketNum: 15
          //DEBUG: s.SaveOffset: 18
          //DEBUG: e.Ident: 21
          //DEBUG: t.: 25
          //DEBUG: t.0: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$7=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.SaveOffset/18 } (/29 e.Ident/21/30 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & UpdateIdentTable=1/5 AsIs: t./25 } Tile{ HalfReuse: </6 } & UpdateTable/32 Tile{ AsIs: t.0/27 } Tile{ AsIs: e.Ident/21 } >/33 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

        // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdIdentSave/11 s.Direction/14 s.BracketNum/15 s.SaveOffset/18 e.Ident/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Ident as range 21
        //DEBUG: t.Tables: 5
        //DEBUG: s.Direction: 14
        //DEBUG: s.BracketNum: 15
        //DEBUG: s.SaveOffset: 18
        //DEBUG: e.Ident: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$7=1/11 AsIs: s.Direction/14 AsIs: s.BracketNum/15 AsIs: s.SaveOffset/18 } (/23 e.Ident/21/24 )/26 Tile{ AsIs: </0 Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables/5 } Tile{ AsIs: e.Ident/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

      // </0 & OutlineConstants-OneCommand/4 t.new17/5 (/7 # CmdCreateElem/11 s.new18/14 s.new19/15 # ElIdent/18 e.new20/19 )/8 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[18] ) )
        continue;
      // closed e.new20 as range 19
      do {
        // </0 & OutlineConstants-OneCommand/4 (/5 t./25 t.0/27 )/6 (/7 # CmdCreateElem/11 s.CreateMode/14 s.ElemNo/15 # ElIdent/18 e.Ident/21 )/8 >/1
        context[21] = context[19];
        context[22] = context[20];
        context[23] = 0;
        context[24] = 0;
        if( ! refalrts::brackets_term( context[23], context[24], context[5] ) )
          continue;
        // closed e.Ident as range 21
        context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
        if( ! context[26] )
          continue;
        context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: s.CreateMode: 14
        //DEBUG: s.ElemNo: 15
        //DEBUG: e.Ident: 21
        //DEBUG: t.: 25
        //DEBUG: t.0: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$8=1/11 AsIs: s.CreateMode/14 AsIs: s.ElemNo/15 HalfReuse: (/18 AsIs: e.Ident/21 AsIs: )/8 HalfReuse: </1 } Tile{ HalfReuse: & UpdateIdentTable=1/5 AsIs: t./25 } Tile{ AsIs: </0 Reuse: & UpdateTable/4 } Tile{ AsIs: t.0/27 } e.Ident/21/29 Tile{ HalfReuse: >/6 } >/31 >/32 Tile{ ]] }
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

      // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdCreateElem/11 s.CreateMode/14 s.ElemNo/15 # ElIdent/18 e.Ident/21 )/8 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Ident as range 21
      //DEBUG: t.Tables: 5
      //DEBUG: s.CreateMode: 14
      //DEBUG: s.ElemNo: 15
      //DEBUG: e.Ident: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$8=1/11 AsIs: s.CreateMode/14 AsIs: s.ElemNo/15 HalfReuse: (/18 AsIs: e.Ident/21 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateIdentTable*1/4 AsIs: t.Tables/5 } e.Ident/21/23 Tile{ HalfReuse: >/0 } >/25 Tile{ ]] }
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
      // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdSentence/11 e.Commands/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.Commands as range 12
      //DEBUG: t.Tables: 5
      //DEBUG: e.Commands: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & OutlineConstants-OneCommand$9=1/15 Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables/5 AsIs: (/7 HalfReuse: )/11 AsIs: e.Commands/12 HalfReuse: >/8 AsIs: >/1 ]] }
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

    // </0 & OutlineConstants-OneCommand/4 t.Tables/5 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum/15 s.VarNumber/16 e.Commands/12 )/8 >/1
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
    // closed e.Commands as range 12
    //DEBUG: t.Tables: 5
    //DEBUG: s.BracketNum: 15
    //DEBUG: s.VarNumber: 16
    //DEBUG: e.Commands: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: & OutlineConstants-OneCommand$10=1/14 AsIs: s.BracketNum/15 AsIs: s.VarNumber/16 } Tile{ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Tables/5 AsIs: (/7 HalfReuse: )/11 } Tile{ AsIs: e.Commands/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
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

  // </0 & OutlineConstants-OneCommand/4 t.Tables/5 t.OtherCommand/7 >/1
  //DEBUG: t.Tables: 5
  //DEBUG: t.OtherCommand: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-OneCommand/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables/5 AsIs: t.OtherCommand/7 } Tile{ ]] }
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
  // </0 & UpdateFuncTable=1/4 t.IdentTable/5 t.FuncTable$a/7 s.Id/9 >/1
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
  //DEBUG: t.IdentTable: 5
  //DEBUG: t.FuncTable$a: 7
  //DEBUG: s.Id: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/9 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: t.FuncTable$a/7 } Tile{ AsIs: t.IdentTable/5 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: s.Id9 /1 ]] }
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
  // </0 & UpdateFuncTable/4 (/7 t.FuncTable/9 t.IdentTable/11 )/8 e.Name/2 >/1
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
  // closed e.Name as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name: 2
  //DEBUG: t.FuncTable: 9
  //DEBUG: t.IdentTable: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.IdentTable/11 HalfReuse: </8 } Tile{ HalfReuse: & UpdateTable/7 AsIs: t.FuncTable/9 } Tile{ AsIs: e.Name/2 } >/13 Tile{ AsIs: >/1 ]] }
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
  // </0 & UpdateIdentTable=1/4 t.FuncTable/5 t.IdentTable$a/7 s.Id/9 >/1
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
  //DEBUG: t.FuncTable: 5
  //DEBUG: t.IdentTable$a: 7
  //DEBUG: s.Id: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.FuncTable/5 AsIs: t.IdentTable$a/7 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: s.Id9 /1 ]] }
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
  // </0 & UpdateIdentTable/4 (/7 t.FuncTable/9 t.IdentTable/11 )/8 e.Name/2 >/1
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
  // closed e.Name as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name: 2
  //DEBUG: t.FuncTable: 9
  //DEBUG: t.IdentTable: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateIdentTable=1/4 } Tile{ AsIs: t.FuncTable/9 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & UpdateTable/8 } Tile{ AsIs: t.IdentTable/11 } Tile{ AsIs: e.Name/2 } >/13 Tile{ AsIs: >/1 ]] }
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
  // </0 & UpdateTable/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & UpdateTable/4 (/7 s.new1/9 e.new2/5 )/8 e.new3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 5
  do {
    // </0 & UpdateTable/4 (/7 s.NextId/9 e.Names-B/14 (/20 s.Id/24 e.Name/22 )/21 e.Names-E/16 )/8 e.Name/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Name as range 12
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
      // closed e.Names-E as range 16
      if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: s.NextId: 9
      //DEBUG: e.Name: 12
      //DEBUG: e.Names-B: 14
      //DEBUG: e.Names-E: 16
      //DEBUG: s.Id: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UpdateTable/4 {REMOVED TILE} e.Name/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.NextId/9 AsIs: e.Names-B/14 AsIs: (/20 AsIs: s.Id/24 AsIs: e.Name/22 AsIs: )/21 AsIs: e.Names-E/16 AsIs: )/8 } Tile{ HalfReuse: s.Id24 /1 ]] }
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

  // </0 & UpdateTable/4 (/7 s.NextId/9 e.Names/5 )/8 e.Name/2 >/1
  // closed e.Names as range 5
  // closed e.Name as range 2
  //DEBUG: s.NextId: 9
  //DEBUG: e.Names: 5
  //DEBUG: e.Name: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 AsIs: s.NextId/9 } >/11 Tile{ AsIs: e.Names/5 } (/12 Tile{ HalfReuse: s.NextId9 /8 AsIs: e.Name/2 HalfReuse: )/1 } )/13 s.NextId/9/14 Tile{ ]] }
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
  // </0 & MarkFunctionGenMode/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MarkFunctionGenMode/4 s.new1/9 (/7 s.new2/10 e.new3/5 )/8 >/1
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
  // closed e.new3 as range 5
  do {
    // </0 & MarkFunctionGenMode/4 s.new4/9 (/7 s.new5/10 s.new6/13 e.new7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new7 as range 11
    do {
      // </0 & MarkFunctionGenMode/4 s.new8/9 (/7 # Function/10 s.new9/13 (/18 e.new10/16 )/19 e.new11/14 )/8 >/1
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
      // closed e.new10 as range 16
      // closed e.new11 as range 14
      do {
        // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # Function/10 s.ScopeClass/13 (/18 e.Name/20 )/19 e.Commands/22 )/8 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[14];
        context[23] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
          continue;
        // closed e.Name as range 20
        // closed e.Commands as range 22
        //DEBUG: s.ScopeClass: 13
        //DEBUG: e.Name: 20
        //DEBUG: e.Commands: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/10 AsIs: s.ScopeClass/13 AsIs: (/18 AsIs: e.Name/20 AsIs: )/19 AsIs: e.Commands/22 AsIs: )/8 } Tile{ ]] }
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

      // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # Function/10 s.ScopeClass/13 (/18 e.Name/20 )/19 e.Commands/22 )/8 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[14];
      context[23] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
        continue;
      // closed e.Name as range 20
      // closed e.Commands as range 22
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 20
      //DEBUG: e.Commands: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/10 AsIs: s.ScopeClass/13 AsIs: (/18 AsIs: e.Name/20 AsIs: )/19 AsIs: e.Commands/22 AsIs: )/8 } Tile{ ]] }
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

    // </0 & MarkFunctionGenMode/4 s.new8/9 (/7 # CmdConditionFunc/10 s.new9/13 e.new10/14 )/8 >/1
    context[14] = context[11];
    context[15] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[10] ) )
      continue;
    // closed e.new10 as range 14
    do {
      // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # CmdConditionFunc/10 s.ScopeClass/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
        continue;
      // closed e.Name as range 16
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToRASL/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 AsIs: )/8 } Tile{ ]] }
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

    // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # CmdConditionFunc/10 s.ScopeClass/13 e.Name/16 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
      continue;
    // closed e.Name as range 16
    //DEBUG: s.ScopeClass: 13
    //DEBUG: e.Name: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToNative/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 AsIs: )/8 } Tile{ ]] }
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

  // </0 & MarkFunctionGenMode/4 s.GenMode/9 (/7 s.Type/10 e.Info/5 )/8 >/1
  // closed e.Info as range 5
  //DEBUG: s.GenMode: 9
  //DEBUG: s.Type: 10
  //DEBUG: e.Info: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 s.GenMode/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type/10 AsIs: e.Info/5 AsIs: )/8 } Tile{ ]] }
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
  // </0 & Apply@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@2/4 t.new1/5 t.new2/7 t.new3/9 >/1
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
    // </0 & Apply@2/4 s.Fn/5 t.Acc/7 t.Next/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 9
    //DEBUG: s.Fn: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: t.Acc/7 AsIs: t.Next/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@2/4 (/5 t.Closure/13 e.Bounded/11 )/6 t.Acc/7 t.Next/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded as range 11
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 9
    //DEBUG: t.Closure: 13
    //DEBUG: e.Bounded: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure/13 } Tile{ AsIs: e.Bounded/11 } Tile{ AsIs: t.Acc/7 AsIs: t.Next/9 AsIs: >/1 ]] }
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

  // </0 & Apply@2/4 t.dyn0/5 t.Acc/7 t.Next/9 >/1
  //DEBUG: t.dyn0: 5
  //DEBUG: t.Acc: 7
  //DEBUG: t.Next: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: t.Acc/7 AsIs: t.Next/9 AsIs: >/1 ]] }
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
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@1/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@1/4 s.new6/5 (/8 s.new7/14 e.new8/12 )/9 e.new9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new8 as range 12
      do {
        // </0 & Map@1/4 s.new10/5 (/8 s.new11/14 s.new12/19 e.new13/15 )/9 e.new14/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        // closed e.new14 as range 17
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        // closed e.new13 as range 15
        do {
          // </0 & Map@1/4 s.new15/5 (/8 # Function/14 s.new16/19 (/26 e.new17/24 )/27 e.new18/20 )/9 e.new19/22 >/1
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
          // closed e.new17 as range 24
          // closed e.new18 as range 20
          // closed e.new19 as range 22
          do {
            // </0 & Map@1/4 # OnlyInterpret/5 (/8 # Function/14 s.ScopeClass/19 (/26 e.3/28 )/27 e.2/30 )/9 e.Tail/32 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[20];
            context[31] = context[21];
            context[32] = context[22];
            context[33] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[5] ) )
              continue;
            // closed e.3 as range 28
            // closed e.2 as range 30
            // closed e.Tail as range 32
            //DEBUG: s.ScopeClass: 19
            //DEBUG: e.3: 28
            //DEBUG: e.2: 30
            //DEBUG: e.Tail: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyInterpret/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # Function-ToRASL/14 AsIs: s.ScopeClass/19 AsIs: (/26 AsIs: e.3/28 AsIs: )/27 AsIs: e.2/30 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Tail/32 } Tile{ AsIs: >/1 ]] }
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

          // </0 & Map@1/4 # OnlyDirect/5 (/8 # Function/14 s.ScopeClass/19 (/26 e.3/28 )/27 e.2/30 )/9 e.Tail/32 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[20];
          context[31] = context[21];
          context[32] = context[22];
          context[33] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[5] ) )
            continue;
          // closed e.3 as range 28
          // closed e.2 as range 30
          // closed e.Tail as range 32
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.3: 28
          //DEBUG: e.2: 30
          //DEBUG: e.Tail: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyDirect/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # Function-ToNative/14 AsIs: s.ScopeClass/19 AsIs: (/26 AsIs: e.3/28 AsIs: )/27 AsIs: e.2/30 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.Tail/32 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@1/4 s.new15/5 (/8 # CmdConditionFunc/14 s.new16/19 e.new17/20 )/9 e.new18/22 >/1
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[14] ) )
          continue;
        // closed e.new17 as range 20
        // closed e.new18 as range 22
        do {
          // </0 & Map@1/4 # OnlyInterpret/5 (/8 # CmdConditionFunc/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[5] ) )
            continue;
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyInterpret/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # CmdConditionFunc-ToRASL/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@1/4 # OnlyDirect/5 (/8 # CmdConditionFunc/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[5] ) )
          continue;
        // closed e.1 as range 24
        // closed e.Tail as range 26
        //DEBUG: s.ScopeClass: 19
        //DEBUG: e.1: 24
        //DEBUG: e.Tail: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} # OnlyDirect/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # CmdConditionFunc-ToNative/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 AsIs: )/9 } Tile{ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
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

      // </0 & Map@1/4 s.GenMode/5 (/8 s.Type/14 e.0/15 )/9 e.Tail/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      // closed e.0 as range 15
      // closed e.Tail as range 17
      //DEBUG: s.GenMode: 5
      //DEBUG: s.Type: 14
      //DEBUG: e.0: 15
      //DEBUG: e.Tail: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: s.Type/14 AsIs: e.0/15 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.GenMode/5 } Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@1/4 s.GenMode/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.GenMode: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 AsIs: s.GenMode/5 AsIs: t.Next/8 } >/12 </13 & Map@1/14 s.GenMode/5/15 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@1/4 s.GenMode/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.GenMode: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.GenMode/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.GenMode/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.GenMode: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & MarkFunctionGenMode@0/7 Tile{ AsIs: s.GenMode/5 } )/8 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@1/4 s.new1/5 t.new2/6 (/10 e.new3/8 )/11 e.new4/2 >/1
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
  // closed e.new3 as range 8
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum@1/4 s.OutlineConstants/5 t.Acc/6 (/10 e.Scanned/12 )/11 t.Next/16 e.Tail/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Scanned as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.Tail as range 14
    //DEBUG: t.Acc: 6
    //DEBUG: s.OutlineConstants: 5
    //DEBUG: e.Scanned: 12
    //DEBUG: t.Next: 16
    //DEBUG: e.Tail: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: s.OutlineConstants/5 } Tile{ AsIs: (/10 AsIs: e.Scanned/12 AsIs: )/11 } (/18 Tile{ AsIs: e.Tail/14 } )/19 </20 & __Meta_Mu/21 s.OutlineConstants/5/22 Tile{ AsIs: t.Acc/6 } Tile{ AsIs: t.Next/16 } & $table/23 >/24 Tile{ AsIs: >/1 ]] }
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
    // </0 & DoMapAccum@1/4 s.OutlineConstants/5 t.Acc/6 (/10 e.Scanned/12 )/11 >/1
    context[12] = context[8];
    context[13] = context[9];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 12
    //DEBUG: t.Acc: 6
    //DEBUG: s.OutlineConstants: 5
    //DEBUG: e.Scanned: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.OutlineConstants/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/6 } Tile{ AsIs: e.Scanned/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 s.OutlineConstants/5 t.acc/6 (/10 e.scanned/8 )/11 e.items/2 >/1
  // closed e.scanned as range 8
  // closed e.items as range 2
  //DEBUG: t.acc: 6
  //DEBUG: s.OutlineConstants: 5
  //DEBUG: e.scanned: 8
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 AsIs: s.OutlineConstants/5 AsIs: t.acc/6 AsIs: (/10 AsIs: e.scanned/8 AsIs: )/11 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@2/4 s.new1/5 s.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Map@2/4 s.new4/5 s.new5/6 t.new6/9 e.new7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new7 as range 7
    do {
      // </0 & Map@2/4 s.Hash1/5 s.Hash2/6 (/9 # Function/15 s.ScopeClass/16 (/19 e.3/17 )/20 e.2/13 )/10 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = refalrts::ident_left( identifiers[ident_Function], context[13], context[14] );
      if( ! context[15] )
        continue;
      // closed e.Tail as range 11
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.3 as range 17
      // closed e.2 as range 13
      //DEBUG: s.Hash1: 5
      //DEBUG: s.Hash2: 6
      //DEBUG: e.Tail: 11
      //DEBUG: s.ScopeClass: 16
      //DEBUG: e.3: 17
      //DEBUG: e.2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function/15 AsIs: s.ScopeClass/16 AsIs: (/19 AsIs: e.3/17 AsIs: )/20 } </21 & Map@3/22 s.Hash1/5/23 s.Hash2/6/24 Tile{ AsIs: e.2/13 } >/25 Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@2/4 s.Hash1/5 s.Hash2/6 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Next: 9
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next/9 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@2/4 s.Hash1/5 s.Hash2/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.Hash1/5 s.Hash2/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.Hash1/5 s.Hash2/6 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs@0/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } )/9 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & MapAccum@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MapAccum@1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & MapAccum@1/4 t.Acc/5 e.Tail/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail as range 7
    //DEBUG: t.Acc: 5
    //DEBUG: e.Tail: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: t.Acc/5 } (/9 )/10 Tile{ AsIs: e.Tail/7 } Tile{ AsIs: >/1 ]] }
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

  // </0 & MapAccum@1/4 t.accum/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.accum: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CalcDigest@0/4 AsIs: t.accum/5 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & Map@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@3/4 s.new1/5 s.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Map@3/4 s.new4/5 s.new5/6 t.new6/9 e.new7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new7 as range 7
    do {
      // </0 & Map@3/4 s.new8/5 s.new9/6 (/9 s.new10/15 e.new11/13 )/10 e.new12/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new12 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new11 as range 13
      do {
        // </0 & Map@3/4 s.new13/5 s.new14/6 (/9 s.new15/15 e.new16/16 s.new17/22 s.new18/21 s.new19/20 )/10 e.new20/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        // closed e.new20 as range 18
        if( ! refalrts::svar_right( context[20], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_right( context[21], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_right( context[22], context[16], context[17] ) )
          continue;
        // closed e.new16 as range 16
        do {
          // </0 & Map@3/4 s.new21/5 s.new22/6 (/9 # CmdNumber/15 s.new25/22 s.new24/21 s.new23/20 )/10 e.new26/23 >/1
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[15] ) )
            continue;
          if( ! refalrts::empty_seq( context[16], context[17] ) )
            continue;
          // closed e.new26 as range 23
          do {
            // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumber/15 s.Direction/22 s.BracketNum/21 # Cookie1/20 )/10 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Hash1: 5
            //DEBUG: s.Hash2: 6
            //DEBUG: s.Direction: 22
            //DEBUG: s.BracketNum: 21
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction/22 AsIs: s.BracketNum/21 HalfReuse: s.Hash15 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
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
            // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumber/15 s.Direction/22 s.BracketNum/21 # Cookie2/20 )/10 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Hash1: 5
            //DEBUG: s.Hash2: 6
            //DEBUG: s.Direction: 22
            //DEBUG: s.BracketNum: 21
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction/22 AsIs: s.BracketNum/21 HalfReuse: s.Hash26 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
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

          // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumber/15 s.Direction/22 s.BracketNum/21 s.Number/20 )/10 e.Tail/25 >/1
          context[25] = context[23];
          context[26] = context[24];
          // closed e.Tail as range 25
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 22
          //DEBUG: s.BracketNum: 21
          //DEBUG: s.Number: 20
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumber/15 AsIs: s.Direction/22 AsIs: s.BracketNum/21 AsIs: s.Number/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@3/4 s.new21/5 s.new22/6 (/9 s.new23/15 s.new27/27 s.new26/22 s.new25/21 s.new24/20 )/10 e.new28/25 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[19];
        // closed e.new28 as range 25
        if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        do {
          // </0 & Map@3/4 s.new29/5 s.new30/6 (/9 # CmdNumberSave/15 s.new34/27 s.new33/22 s.new32/21 s.new31/20 )/10 e.new35/28 >/1
          context[28] = context[25];
          context[29] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[15] ) )
            continue;
          // closed e.new35 as range 28
          do {
            // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumberSave/15 s.Direction/27 s.BracketNum/22 s.SaveOffset/21 # Cookie1/20 )/10 e.Tail/30 >/1
            context[30] = context[28];
            context[31] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
              continue;
            // closed e.Tail as range 30
            //DEBUG: s.Hash1: 5
            //DEBUG: s.Hash2: 6
            //DEBUG: s.Direction: 27
            //DEBUG: s.BracketNum: 22
            //DEBUG: s.SaveOffset: 21
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction/27 AsIs: s.BracketNum/22 AsIs: s.SaveOffset/21 HalfReuse: s.Hash15 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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
            // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumberSave/15 s.Direction/27 s.BracketNum/22 s.SaveOffset/21 # Cookie2/20 )/10 e.Tail/30 >/1
            context[30] = context[28];
            context[31] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
              continue;
            // closed e.Tail as range 30
            //DEBUG: s.Hash1: 5
            //DEBUG: s.Hash2: 6
            //DEBUG: s.Direction: 27
            //DEBUG: s.BracketNum: 22
            //DEBUG: s.SaveOffset: 21
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction/27 AsIs: s.BracketNum/22 AsIs: s.SaveOffset/21 HalfReuse: s.Hash26 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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

          // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdNumberSave/15 s.Direction/27 s.BracketNum/22 s.SaveOffset/21 s.Number/20 )/10 e.Tail/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          // closed e.Tail as range 30
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.Direction: 27
          //DEBUG: s.BracketNum: 22
          //DEBUG: s.SaveOffset: 21
          //DEBUG: s.Number: 20
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNumberSave/15 AsIs: s.Direction/27 AsIs: s.BracketNum/22 AsIs: s.SaveOffset/21 AsIs: s.Number/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@3/4 s.new29/5 s.new30/6 (/9 # CmdCreateElem/15 s.new33/27 s.new32/22 # ElNumber/21 s.new31/20 )/10 e.new34/28 >/1
        context[28] = context[25];
        context[29] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[15] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[21] ) )
          continue;
        // closed e.new34 as range 28
        do {
          // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdCreateElem/15 s.CreateMode/27 s.ElemNo/22 # ElNumber/21 # Cookie1/20 )/10 e.Tail/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[20] ) )
            continue;
          // closed e.Tail as range 30
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.CreateMode: 27
          //DEBUG: s.ElemNo: 22
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode/27 AsIs: s.ElemNo/22 AsIs: # ElNumber/21 HalfReuse: s.Hash15 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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
          // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdCreateElem/15 s.CreateMode/27 s.ElemNo/22 # ElNumber/21 # Cookie2/20 )/10 e.Tail/30 >/1
          context[30] = context[28];
          context[31] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[20] ) )
            continue;
          // closed e.Tail as range 30
          //DEBUG: s.Hash1: 5
          //DEBUG: s.Hash2: 6
          //DEBUG: s.CreateMode: 27
          //DEBUG: s.ElemNo: 22
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode/27 AsIs: s.ElemNo/22 AsIs: # ElNumber/21 HalfReuse: s.Hash26 /20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdCreateElem/15 s.CreateMode/27 s.ElemNo/22 # ElNumber/21 s.Number/20 )/10 e.Tail/30 >/1
        context[30] = context[28];
        context[31] = context[29];
        // closed e.Tail as range 30
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: s.CreateMode: 27
        //DEBUG: s.ElemNo: 22
        //DEBUG: s.Number: 20
        //DEBUG: e.Tail: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdCreateElem/15 AsIs: s.CreateMode/27 AsIs: s.ElemNo/22 AsIs: # ElNumber/21 AsIs: s.Number/20 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdSentence/15 e.0/16 )/10 e.Tail/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[15] ) )
          continue;
        // closed e.0 as range 16
        // closed e.Tail as range 18
        //DEBUG: s.Hash1: 5
        //DEBUG: s.Hash2: 6
        //DEBUG: e.0: 16
        //DEBUG: e.Tail: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdSentence/15 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.0/16 } >/20 )/21 </22 & Map@3/23 s.Hash1/5/24 Tile{ HalfReuse: s.Hash26 /10 AsIs: e.Tail/18 AsIs: >/1 ]] }
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

      // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 (/9 # CmdOpenELoop/15 # AlgLeft/20 s.BracketNum/21 s.VarNumber/22 e.3/16 )/10 e.Tail/18 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[15] ) )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_AlgLeft], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Tail as range 18
      if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[16], context[17] ) )
        continue;
      // closed e.3 as range 16
      //DEBUG: s.Hash1: 5
      //DEBUG: s.Hash2: 6
      //DEBUG: e.Tail: 18
      //DEBUG: s.BracketNum: 21
      //DEBUG: s.VarNumber: 22
      //DEBUG: e.3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/15 AsIs: # AlgLeft/20 AsIs: s.BracketNum/21 AsIs: s.VarNumber/22 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.3/16 } >/23 )/24 </25 & Map@3/26 s.Hash1/5/27 Tile{ HalfReuse: s.Hash26 /10 AsIs: e.Tail/18 AsIs: >/1 ]] }
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

    // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Next: 9
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next/9 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.Hash1/5 s.Hash2/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.Hash1/5 s.Hash2/6 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs-Command@0/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } )/9 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@2/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new2 as range 7
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum@2/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new6 as range 13
    do {
      // </0 & DoMapAccum@2/4 t.new8/5 (/9 e.new12/17 )/10 (/15 s.new9/23 e.new10/21 )/16 e.new11/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.new12 as range 17
      // closed e.new11 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new10 as range 21
      do {
        // </0 & DoMapAccum@2/4 t.new13/5 (/9 e.new19/24 )/10 (/15 s.new14/23 s.new15/30 s.new16/31 e.new17/26 )/16 e.new18/28 >/1
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[19];
        context[29] = context[20];
        // closed e.new19 as range 24
        // closed e.new18 as range 28
        if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
          continue;
        if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
          continue;
        // closed e.new17 as range 26
        do {
          // </0 & DoMapAccum@2/4 t.new20/5 (/9 e.new25/32 )/10 (/15 # CmdName/23 s.new21/30 s.new22/31 e.new23/34 )/16 e.new24/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_CmdName], context[23] ) )
            continue;
          // closed e.new25 as range 32
          // closed e.new23 as range 34
          // closed e.new24 as range 36
          do {
            // </0 & DoMapAccum@2/4 (/5 t./46 t.0/48 )/6 (/9 e.Scanned/38 )/10 (/15 # CmdName/23 s.Direction/30 s.BracketNum/31 e.2/40 )/16 e.Tail/42 >/1
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
            // closed e.Scanned as range 38
            // closed e.2 as range 40
            // closed e.Tail as range 42
            context[47] = refalrts::tvar_left( context[46], context[44], context[45] );
            if( ! context[47] )
              continue;
            context[49] = refalrts::tvar_left( context[48], context[44], context[45] );
            if( ! context[49] )
              continue;
            if( ! refalrts::empty_seq( context[44], context[45] ) )
              continue;
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: e.Scanned: 38
            //DEBUG: e.2: 40
            //DEBUG: e.Tail: 42
            //DEBUG: t.: 46
            //DEBUG: t.0: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@2/6 AsIs: (/9 AsIs: e.Scanned/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/42 } )/50 </51 Tile{ HalfReuse: & OutlineConstants-OneCommand$1=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 } (/52 Tile{ AsIs: e.2/40 } Tile{ AsIs: )/16 } </53 & UpdateFuncTable=1/54 Tile{ AsIs: t.0/48 } Tile{ HalfReuse: </4 HalfReuse: & UpdateTable/5 AsIs: t./46 } e.2/40/55 >/57 >/58 >/59 Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/38 )/10 (/15 # CmdName/23 s.Direction/30 s.BracketNum/31 e.2/40 )/16 e.Tail/42 >/1
          context[38] = context[32];
          context[39] = context[33];
          context[40] = context[34];
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          // closed e.Scanned as range 38
          // closed e.2 as range 40
          // closed e.Tail as range 42
          //DEBUG: t.Acc: 5
          //DEBUG: s.Direction: 30
          //DEBUG: s.BracketNum: 31
          //DEBUG: e.Scanned: 38
          //DEBUG: e.2: 40
          //DEBUG: e.Tail: 42

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/42 } )/44 </45 Tile{ HalfReuse: & OutlineConstants-OneCommand$1=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 } (/46 Tile{ AsIs: e.2/40 } Tile{ AsIs: )/16 } </47 & UpdateFuncTable*1/48 Tile{ AsIs: t.Acc/5 } e.2/40/49 >/51 >/52 Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@2/4 t.new20/5 (/9 e.new27/32 )/10 (/15 s.new21/23 s.new22/30 s.new23/31 s.new24/38 e.new25/34 )/16 e.new26/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          // closed e.new27 as range 32
          // closed e.new26 as range 36
          if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
            continue;
          // closed e.new25 as range 34
          do {
            // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new34/39 )/10 (/15 # CmdNameSave/23 s.new29/30 s.new30/31 s.new31/38 e.new32/41 )/16 e.new33/43 >/1
            context[39] = context[32];
            context[40] = context[33];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[36];
            context[44] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[23] ) )
              continue;
            // closed e.new34 as range 39
            // closed e.new32 as range 41
            // closed e.new33 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdNameSave/23 s.Direction/30 s.BracketNum/31 s.SaveOffset/38 e.3/47 )/16 e.Tail/49 >/1
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
              // closed e.Scanned as range 45
              // closed e.3 as range 47
              // closed e.Tail as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.Direction: 30
              //DEBUG: s.BracketNum: 31
              //DEBUG: s.SaveOffset: 38
              //DEBUG: e.Scanned: 45
              //DEBUG: e.3: 47
              //DEBUG: e.Tail: 49
              //DEBUG: t.: 53
              //DEBUG: t.0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$2=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.SaveOffset/38 } (/57 Tile{ AsIs: e.3/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0/55 } </60 & UpdateTable/61 Tile{ AsIs: t./53 } e.3/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
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

            // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdNameSave/23 s.Direction/30 s.BracketNum/31 s.SaveOffset/38 e.3/47 )/16 e.Tail/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned as range 45
            // closed e.3 as range 47
            // closed e.Tail as range 49
            //DEBUG: t.Acc: 5
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: s.SaveOffset: 38
            //DEBUG: e.Scanned: 45
            //DEBUG: e.3: 47
            //DEBUG: e.Tail: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$2=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.SaveOffset/38 } (/52 Tile{ AsIs: e.3/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc/5 } e.3/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new33/39 )/10 (/15 # CmdCreateElem/23 s.new29/30 s.new30/31 # ElName/38 e.new31/41 )/16 e.new32/43 >/1
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
            // closed e.new33 as range 39
            // closed e.new31 as range 41
            // closed e.new32 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode/30 s.ElemNo/31 # ElName/38 e.3/47 )/16 e.Tail/49 >/1
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
              // closed e.Scanned as range 45
              // closed e.3 as range 47
              // closed e.Tail as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.CreateMode: 30
              //DEBUG: s.ElemNo: 31
              //DEBUG: e.Scanned: 45
              //DEBUG: e.3: 47
              //DEBUG: e.Tail: 49
              //DEBUG: t.: 53
              //DEBUG: t.0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$3=1/23 AsIs: s.CreateMode/30 AsIs: s.ElemNo/31 HalfReuse: (/38 AsIs: e.3/47 AsIs: )/16 } </57 & UpdateFuncTable=1/58 Tile{ AsIs: t.0/55 } </59 & UpdateTable/60 Tile{ AsIs: t./53 } e.3/47/61 >/63 >/64 >/65 Tile{ AsIs: >/1 ]] }
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

            // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode/30 s.ElemNo/31 # ElName/38 e.3/47 )/16 e.Tail/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned as range 45
            // closed e.3 as range 47
            // closed e.Tail as range 49
            //DEBUG: t.Acc: 5
            //DEBUG: s.CreateMode: 30
            //DEBUG: s.ElemNo: 31
            //DEBUG: e.Scanned: 45
            //DEBUG: e.3: 47
            //DEBUG: e.Tail: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } )/52 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$3=1/23 AsIs: s.CreateMode/30 AsIs: s.ElemNo/31 HalfReuse: (/38 AsIs: e.3/47 AsIs: )/16 } </53 & UpdateFuncTable*1/54 Tile{ AsIs: t.Acc/5 } e.3/47/55 >/57 >/58 Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new34/39 )/10 (/15 # CmdADT/23 s.new29/30 s.new30/31 s.new31/38 e.new32/41 )/16 e.new33/43 >/1
            context[39] = context[32];
            context[40] = context[33];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[36];
            context[44] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[23] ) )
              continue;
            // closed e.new34 as range 39
            // closed e.new32 as range 41
            // closed e.new33 as range 43
            do {
              // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdADT/23 s.Direction/30 s.BracketNum/31 s.InnerBrackets/38 e.3/47 )/16 e.Tail/49 >/1
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
              // closed e.Scanned as range 45
              // closed e.3 as range 47
              // closed e.Tail as range 49
              context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
              if( ! context[54] )
                continue;
              context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
              if( ! context[56] )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.Direction: 30
              //DEBUG: s.BracketNum: 31
              //DEBUG: s.InnerBrackets: 38
              //DEBUG: e.Scanned: 45
              //DEBUG: e.3: 47
              //DEBUG: e.Tail: 49
              //DEBUG: t.: 53
              //DEBUG: t.0: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$4=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.InnerBrackets/38 } (/57 Tile{ AsIs: e.3/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0/55 } </60 & UpdateTable/61 Tile{ AsIs: t./53 } e.3/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
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

            // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdADT/23 s.Direction/30 s.BracketNum/31 s.InnerBrackets/38 e.3/47 )/16 e.Tail/49 >/1
            context[45] = context[39];
            context[46] = context[40];
            context[47] = context[41];
            context[48] = context[42];
            context[49] = context[43];
            context[50] = context[44];
            // closed e.Scanned as range 45
            // closed e.3 as range 47
            // closed e.Tail as range 49
            //DEBUG: t.Acc: 5
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: s.InnerBrackets: 38
            //DEBUG: e.Scanned: 45
            //DEBUG: e.3: 47
            //DEBUG: e.Tail: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$4=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.InnerBrackets/38 } (/52 Tile{ AsIs: e.3/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc/5 } e.3/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new34/39 )/10 (/15 # CmdADTSave/23 s.new29/30 s.new30/31 s.new31/38 e.new32/41 )/16 e.new33/43 >/1
          context[39] = context[32];
          context[40] = context[33];
          context[41] = context[34];
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[23] ) )
            continue;
          // closed e.new34 as range 39
          // closed e.new32 as range 41
          // closed e.new33 as range 43
          do {
            // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdADTSave/23 s.Direction/30 s.BracketNum/31 s.InnerBrackets/38 e.3/47 )/16 e.Tail/49 >/1
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
            // closed e.Scanned as range 45
            // closed e.3 as range 47
            // closed e.Tail as range 49
            context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
            if( ! context[54] )
              continue;
            context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
            if( ! context[56] )
              continue;
            if( ! refalrts::empty_seq( context[51], context[52] ) )
              continue;
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: s.InnerBrackets: 38
            //DEBUG: e.Scanned: 45
            //DEBUG: e.3: 47
            //DEBUG: e.Tail: 49
            //DEBUG: t.: 53
            //DEBUG: t.0: 55

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$5=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.InnerBrackets/38 } (/57 Tile{ AsIs: e.3/47 } Tile{ AsIs: )/16 } </58 & UpdateFuncTable=1/59 Tile{ AsIs: t.0/55 } </60 & UpdateTable/61 Tile{ AsIs: t./53 } e.3/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdADTSave/23 s.Direction/30 s.BracketNum/31 s.InnerBrackets/38 e.3/47 )/16 e.Tail/49 >/1
          context[45] = context[39];
          context[46] = context[40];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          // closed e.Scanned as range 45
          // closed e.3 as range 47
          // closed e.Tail as range 49
          //DEBUG: t.Acc: 5
          //DEBUG: s.Direction: 30
          //DEBUG: s.BracketNum: 31
          //DEBUG: s.InnerBrackets: 38
          //DEBUG: e.Scanned: 45
          //DEBUG: e.3: 47
          //DEBUG: e.Tail: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$5=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.InnerBrackets/38 } (/52 Tile{ AsIs: e.3/47 } )/53 </54 & UpdateFuncTable*1/55 Tile{ AsIs: t.Acc/5 } e.3/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@2/4 t.new20/5 (/9 e.new25/32 )/10 (/15 # CmdIdent/23 s.new21/30 s.new22/31 e.new23/34 )/16 e.new24/36 >/1
          context[32] = context[24];
          context[33] = context[25];
          context[34] = context[26];
          context[35] = context[27];
          context[36] = context[28];
          context[37] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[23] ) )
            continue;
          // closed e.new25 as range 32
          // closed e.new23 as range 34
          // closed e.new24 as range 36
          do {
            // </0 & DoMapAccum@2/4 (/5 t./46 t.0/48 )/6 (/9 e.Scanned/38 )/10 (/15 # CmdIdent/23 s.Direction/30 s.BracketNum/31 e.2/40 )/16 e.Tail/42 >/1
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
            // closed e.Scanned as range 38
            // closed e.2 as range 40
            // closed e.Tail as range 42
            context[47] = refalrts::tvar_left( context[46], context[44], context[45] );
            if( ! context[47] )
              continue;
            context[49] = refalrts::tvar_left( context[48], context[44], context[45] );
            if( ! context[49] )
              continue;
            if( ! refalrts::empty_seq( context[44], context[45] ) )
              continue;
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: e.Scanned: 38
            //DEBUG: e.2: 40
            //DEBUG: e.Tail: 42
            //DEBUG: t.: 46
            //DEBUG: t.0: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@2/6 AsIs: (/9 AsIs: e.Scanned/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/42 } )/50 </51 Tile{ HalfReuse: & OutlineConstants-OneCommand$6=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 } (/52 Tile{ AsIs: e.2/40 } Tile{ AsIs: )/16 } Tile{ HalfReuse: </4 HalfReuse: & UpdateIdentTable=1/5 AsIs: t./46 } </53 & UpdateTable/54 Tile{ AsIs: t.0/48 } e.2/40/55 >/57 >/58 >/59 Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/38 )/10 (/15 # CmdIdent/23 s.Direction/30 s.BracketNum/31 e.2/40 )/16 e.Tail/42 >/1
          context[38] = context[32];
          context[39] = context[33];
          context[40] = context[34];
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          // closed e.Scanned as range 38
          // closed e.2 as range 40
          // closed e.Tail as range 42
          //DEBUG: t.Acc: 5
          //DEBUG: s.Direction: 30
          //DEBUG: s.BracketNum: 31
          //DEBUG: e.Scanned: 38
          //DEBUG: e.2: 40
          //DEBUG: e.Tail: 42

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/38 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/42 } )/44 </45 Tile{ HalfReuse: & OutlineConstants-OneCommand$6=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 } (/46 Tile{ AsIs: e.2/40 } Tile{ AsIs: )/16 } </47 & UpdateIdentTable*1/48 Tile{ AsIs: t.Acc/5 } e.2/40/49 >/51 >/52 Tile{ AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@2/4 t.new20/5 (/9 e.new27/32 )/10 (/15 s.new21/23 s.new22/30 s.new23/31 s.new24/38 e.new25/34 )/16 e.new26/36 >/1
        context[32] = context[24];
        context[33] = context[25];
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        // closed e.new27 as range 32
        // closed e.new26 as range 36
        if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
          continue;
        // closed e.new25 as range 34
        do {
          // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new34/39 )/10 (/15 # CmdIdentSave/23 s.new29/30 s.new30/31 s.new31/38 e.new32/41 )/16 e.new33/43 >/1
          context[39] = context[32];
          context[40] = context[33];
          context[41] = context[34];
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[23] ) )
            continue;
          // closed e.new34 as range 39
          // closed e.new32 as range 41
          // closed e.new33 as range 43
          do {
            // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdIdentSave/23 s.Direction/30 s.BracketNum/31 s.SaveOffset/38 e.3/47 )/16 e.Tail/49 >/1
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
            // closed e.Scanned as range 45
            // closed e.3 as range 47
            // closed e.Tail as range 49
            context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
            if( ! context[54] )
              continue;
            context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
            if( ! context[56] )
              continue;
            if( ! refalrts::empty_seq( context[51], context[52] ) )
              continue;
            //DEBUG: s.Direction: 30
            //DEBUG: s.BracketNum: 31
            //DEBUG: s.SaveOffset: 38
            //DEBUG: e.Scanned: 45
            //DEBUG: e.3: 47
            //DEBUG: e.Tail: 49
            //DEBUG: t.: 53
            //DEBUG: t.0: 55

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$7=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.SaveOffset/38 } (/57 Tile{ AsIs: e.3/47 } Tile{ AsIs: )/16 } </58 & UpdateIdentTable=1/59 Tile{ AsIs: t./53 } </60 & UpdateTable/61 Tile{ AsIs: t.0/55 } e.3/47/62 >/64 >/65 >/66 Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdIdentSave/23 s.Direction/30 s.BracketNum/31 s.SaveOffset/38 e.3/47 )/16 e.Tail/49 >/1
          context[45] = context[39];
          context[46] = context[40];
          context[47] = context[41];
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          // closed e.Scanned as range 45
          // closed e.3 as range 47
          // closed e.Tail as range 49
          //DEBUG: t.Acc: 5
          //DEBUG: s.Direction: 30
          //DEBUG: s.BracketNum: 31
          //DEBUG: s.SaveOffset: 38
          //DEBUG: e.Scanned: 45
          //DEBUG: e.3: 47
          //DEBUG: e.Tail: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/16 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$7=1/23 AsIs: s.Direction/30 AsIs: s.BracketNum/31 AsIs: s.SaveOffset/38 } (/52 Tile{ AsIs: e.3/47 } )/53 </54 & UpdateIdentTable*1/55 Tile{ AsIs: t.Acc/5 } e.3/47/56 >/58 >/59 Tile{ AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@2/4 t.new28/5 (/9 e.new33/39 )/10 (/15 # CmdCreateElem/23 s.new29/30 s.new30/31 # ElIdent/38 e.new31/41 )/16 e.new32/43 >/1
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
        // closed e.new33 as range 39
        // closed e.new31 as range 41
        // closed e.new32 as range 43
        do {
          // </0 & DoMapAccum@2/4 (/5 t./53 t.0/55 )/6 (/9 e.Scanned/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode/30 s.ElemNo/31 # ElIdent/38 e.3/47 )/16 e.Tail/49 >/1
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
          // closed e.Scanned as range 45
          // closed e.3 as range 47
          // closed e.Tail as range 49
          context[54] = refalrts::tvar_left( context[53], context[51], context[52] );
          if( ! context[54] )
            continue;
          context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
          if( ! context[56] )
            continue;
          if( ! refalrts::empty_seq( context[51], context[52] ) )
            continue;
          //DEBUG: s.CreateMode: 30
          //DEBUG: s.ElemNo: 31
          //DEBUG: e.Scanned: 45
          //DEBUG: e.3: 47
          //DEBUG: e.Tail: 49
          //DEBUG: t.: 53
          //DEBUG: t.0: 55

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/45 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$8=1/23 AsIs: s.CreateMode/30 AsIs: s.ElemNo/31 HalfReuse: (/38 AsIs: e.3/47 AsIs: )/16 } </57 & UpdateIdentTable=1/58 Tile{ AsIs: t./53 } </59 & UpdateTable/60 Tile{ AsIs: t.0/55 } e.3/47/61 >/63 >/64 >/65 Tile{ AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/45 )/10 (/15 # CmdCreateElem/23 s.CreateMode/30 s.ElemNo/31 # ElIdent/38 e.3/47 )/16 e.Tail/49 >/1
        context[45] = context[39];
        context[46] = context[40];
        context[47] = context[41];
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[44];
        // closed e.Scanned as range 45
        // closed e.3 as range 47
        // closed e.Tail as range 49
        //DEBUG: t.Acc: 5
        //DEBUG: s.CreateMode: 30
        //DEBUG: s.ElemNo: 31
        //DEBUG: e.Scanned: 45
        //DEBUG: e.3: 47
        //DEBUG: e.Tail: 49

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/51 Tile{ AsIs: e.Scanned/45 } )/52 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/49 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & OutlineConstants-OneCommand$8=1/23 AsIs: s.CreateMode/30 AsIs: s.ElemNo/31 HalfReuse: (/38 AsIs: e.3/47 AsIs: )/16 } </53 & UpdateIdentTable*1/54 Tile{ AsIs: t.Acc/5 } e.3/47/55 >/57 >/58 Tile{ AsIs: >/1 ]] }
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
        // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/24 )/10 (/15 # CmdSentence/23 e.0/26 )/16 e.Tail/28 >/1
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[23] ) )
          continue;
        // closed e.Scanned as range 24
        // closed e.0 as range 26
        // closed e.Tail as range 28
        //DEBUG: t.Acc: 5
        //DEBUG: e.Scanned: 24
        //DEBUG: e.0: 26
        //DEBUG: e.Tail: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </30 & DoMapAccum$1=1@2/31 Tile{ AsIs: (/9 AsIs: e.Scanned/24 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/28 } )/32 </33 & OutlineConstants-OneCommand$9=1/34 Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc/5 } (/35 Tile{ HalfReuse: )/23 AsIs: e.0/26 HalfReuse: >/16 } >/36 Tile{ AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/24 )/10 (/15 # CmdOpenELoop/23 # AlgLeft/30 s.BracketNum/31 s.VarNumber/32 e.3/26 )/16 e.Tail/28 >/1
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
      // closed e.Scanned as range 24
      // closed e.Tail as range 28
      if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
        continue;
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      // closed e.3 as range 26
      //DEBUG: t.Acc: 5
      //DEBUG: e.Scanned: 24
      //DEBUG: e.Tail: 28
      //DEBUG: s.BracketNum: 31
      //DEBUG: s.VarNumber: 32
      //DEBUG: e.3: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 & DoMapAccum$1=1@2/34 Tile{ AsIs: (/9 AsIs: e.Scanned/24 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/28 } )/35 Tile{ HalfReuse: </23 HalfReuse: & OutlineConstants-OneCommand$10=1/30 AsIs: s.BracketNum/31 AsIs: s.VarNumber/32 } Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc/5 } (/36 Tile{ AsIs: )/16 } Tile{ AsIs: e.3/26 } >/37 >/38 Tile{ AsIs: >/1 ]] }
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

    // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned as range 17
    // closed e.Tail as range 19
    //DEBUG: t.Acc: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.Scanned: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: t.Acc/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/17 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
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
    // </0 & DoMapAccum@2/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/5 } Tile{ AsIs: e.Scanned/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & OutlineConstants-OneCommand@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@3/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new2 as range 7
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum@3/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new6 as range 13
    do {
      // </0 & DoMapAccum@3/4 t.new8/5 (/9 e.new12/17 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.new9/23 )/26 (/31 # Symbol/33 # Name/34 e.new10/29 )/32 )/16 e.new11/19 >/1
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
      // closed e.new12 as range 17
      // closed e.new9 as range 23
      // closed e.new10 as range 29
      // closed e.new11 as range 19
      do {
        // </0 & DoMapAccum@3/4 (/5 t./45 t.0/47 )/6 (/9 e.Scanned/35 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.5/37 )/26 (/31 # Symbol/33 # Name/34 e.7/39 )/32 )/16 e.Tail/41 >/1
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
        // closed e.Scanned as range 35
        // closed e.5 as range 37
        // closed e.7 as range 39
        // closed e.Tail as range 41
        context[46] = refalrts::tvar_left( context[45], context[43], context[44] );
        if( ! context[46] )
          continue;
        context[48] = refalrts::tvar_left( context[47], context[43], context[44] );
        if( ! context[48] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        //DEBUG: e.Scanned: 35
        //DEBUG: e.5: 37
        //DEBUG: e.7: 39
        //DEBUG: e.Tail: 41
        //DEBUG: t.: 45
        //DEBUG: t.0: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@3/6 AsIs: (/9 AsIs: e.Scanned/35 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/41 } Tile{ AsIs: )/26 HalfReuse: </31 HalfReuse: & OutlineConstants-Metatable\1=1/33 HalfReuse: (/34 AsIs: e.7/39 AsIs: )/32 HalfReuse: </16 } Tile{ HalfReuse: & UpdateIdentTable=1/5 AsIs: t./45 } </49 Tile{ Reuse: & UpdateTable/4 } Tile{ AsIs: t.0/47 } Tile{ AsIs: e.5/37 } Tile{ HalfReuse: >/25 HalfReuse: >/27 HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@3/4 t.Acc/5 (/9 e.Scanned/35 )/10 (/15 (/25 # Symbol/27 # Identifier/28 e.5/37 )/26 (/31 # Symbol/33 # Name/34 e.7/39 )/32 )/16 e.Tail/41 >/1
      context[35] = context[17];
      context[36] = context[18];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = context[29];
      context[40] = context[30];
      context[41] = context[19];
      context[42] = context[20];
      // closed e.Scanned as range 35
      // closed e.5 as range 37
      // closed e.7 as range 39
      // closed e.Tail as range 41
      //DEBUG: t.Acc: 5
      //DEBUG: e.Scanned: 35
      //DEBUG: e.5: 37
      //DEBUG: e.7: 39
      //DEBUG: e.Tail: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/35 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/41 } Tile{ AsIs: )/26 HalfReuse: </31 HalfReuse: & OutlineConstants-Metatable\1=1/33 HalfReuse: (/34 AsIs: e.7/39 AsIs: )/32 HalfReuse: </16 } Tile{ HalfReuse: & UpdateIdentTable*1/28 } Tile{ AsIs: t.Acc/5 } Tile{ AsIs: e.5/37 } Tile{ HalfReuse: >/25 HalfReuse: >/27 } Tile{ AsIs: >/1 ]] }
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

    // </0 & DoMapAccum@3/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned as range 17
    // closed e.Tail as range 19
    //DEBUG: t.Acc: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.Scanned: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & OutlineConstants-Metatable\1*1/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
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
    // </0 & DoMapAccum@3/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@3/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/5 } Tile{ AsIs: e.Scanned/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@3/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & OutlineConstants-Metatable\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & Apply@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@3/4 t.new1/5 e.new2/2 t.new3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn/5 e.X/9 t.X/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X as range 9
    //DEBUG: t.X: 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.X: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.X/9 AsIs: t.X/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@3/4 (/5 t.Closure/13 e.Bounded/11 )/6 e.X/9 t.X/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded as range 11
    //DEBUG: t.X: 7
    //DEBUG: e.X: 9
    //DEBUG: t.Closure: 13
    //DEBUG: e.Bounded: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure/13 } Tile{ AsIs: e.Bounded/11 } Tile{ AsIs: e.X/9 } Tile{ AsIs: t.X/7 AsIs: >/1 ]] }
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

  // </0 & Apply@3/4 t.dyn0/5 e.X/2 t.X/7 >/1
  // closed e.X as range 2
  //DEBUG: t.dyn0: 5
  //DEBUG: t.X: 7
  //DEBUG: e.X: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: e.X/2 AsIs: t.X/7 AsIs: >/1 ]] }
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
  // </0 & Apply@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@4/4 t.new1/5 e.new2/2 t.new3/9 t.new4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn/5 e.X/11 t.X/9 t.X0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X as range 11
    //DEBUG: t.X: 9
    //DEBUG: t.X0: 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.X: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.X/11 AsIs: t.X/9 AsIs: t.X0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
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
    // </0 & Apply@4/4 (/5 t.Closure/15 e.Bounded/13 )/6 e.X/11 t.X/9 t.X0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded as range 13
    //DEBUG: t.X: 9
    //DEBUG: t.X0: 7
    //DEBUG: e.X: 11
    //DEBUG: t.Closure: 15
    //DEBUG: e.Bounded: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure/15 } Tile{ AsIs: e.Bounded/13 } Tile{ AsIs: e.X/11 } Tile{ AsIs: t.X/9 AsIs: t.X0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@4/4 t.dyn0/5 e.X/2 t.X/9 t.X0/7 >/1
  // closed e.X as range 2
  //DEBUG: t.dyn0: 5
  //DEBUG: t.X: 9
  //DEBUG: t.X0: 7
  //DEBUG: e.X: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: e.X/2 AsIs: t.X/9 AsIs: t.X0/7 AsIs: >/1 ]] }
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
  // </0 & Map@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@4/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@4/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new4 as range 11
      do {
        // </0 & Map@4/4 (/7 s.new6/13 s.new7/18 e.new8/14 )/8 e.new9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new9 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new8 as range 14
        do {
          // </0 & Map@4/4 (/7 # Function/13 s.ScopeClass/18 (/25 e.3/23 )/26 e.2/19 )/8 e.Tail/21 >/1
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
          // closed e.3 as range 23
          // closed e.2 as range 19
          // closed e.Tail as range 21
          //DEBUG: s.ScopeClass: 18
          //DEBUG: e.3: 23
          //DEBUG: e.2: 19
          //DEBUG: e.Tail: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/13 AsIs: s.ScopeClass/18 AsIs: (/25 AsIs: e.3/23 AsIs: )/26 AsIs: e.2/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail/21 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@4/4 (/7 # CmdConditionFunc/13 s.ScopeClass/18 e.1/19 )/8 e.Tail/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[13] ) )
          continue;
        // closed e.1 as range 19
        // closed e.Tail as range 21
        //DEBUG: s.ScopeClass: 18
        //DEBUG: e.1: 19
        //DEBUG: e.Tail: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToRASL/13 AsIs: s.ScopeClass/18 AsIs: e.1/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail/21 } Tile{ AsIs: >/1 ]] }
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

      // </0 & Map@4/4 (/7 s.Type/13 e.0/14 )/8 e.Tail/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0 as range 14
      // closed e.Tail as range 16
      //DEBUG: s.Type: 13
      //DEBUG: e.0: 14
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type/13 AsIs: e.0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@4/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 } # OnlyInterpret/11 Tile{ AsIs: t.Next/7 } >/12 </13 & Map@4/14 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@4/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@0/6 (/7 & MarkFunctionGenMode@0/8 Tile{ HalfReuse: # OnlyInterpret/0 HalfReuse: )/4 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & Map@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@5/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new4 as range 11
      do {
        // </0 & Map@5/4 (/7 s.new6/13 s.new7/18 e.new8/14 )/8 e.new9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new9 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new8 as range 14
        do {
          // </0 & Map@5/4 (/7 # Function/13 s.ScopeClass/18 (/25 e.3/23 )/26 e.2/19 )/8 e.Tail/21 >/1
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
          // closed e.3 as range 23
          // closed e.2 as range 19
          // closed e.Tail as range 21
          //DEBUG: s.ScopeClass: 18
          //DEBUG: e.3: 23
          //DEBUG: e.2: 19
          //DEBUG: e.Tail: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/13 AsIs: s.ScopeClass/18 AsIs: (/25 AsIs: e.3/23 AsIs: )/26 AsIs: e.2/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/21 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@5/4 (/7 # CmdConditionFunc/13 s.ScopeClass/18 e.1/19 )/8 e.Tail/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[13] ) )
          continue;
        // closed e.1 as range 19
        // closed e.Tail as range 21
        //DEBUG: s.ScopeClass: 18
        //DEBUG: e.1: 19
        //DEBUG: e.Tail: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToNative/13 AsIs: s.ScopeClass/18 AsIs: e.1/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/21 } Tile{ AsIs: >/1 ]] }
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

      // </0 & Map@5/4 (/7 s.Type/13 e.0/14 )/8 e.Tail/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0 as range 14
      // closed e.Tail as range 16
      //DEBUG: s.Type: 13
      //DEBUG: e.0: 14
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type/13 AsIs: e.0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@5/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode*5/4 } # OnlyDirect/11 Tile{ AsIs: t.Next/7 } >/12 </13 & Map@5/14 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@5/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@0/6 (/7 & MarkFunctionGenMode@0/8 Tile{ HalfReuse: # OnlyDirect/0 HalfReuse: )/4 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@1/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 e.new4/2 >/1
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
  // closed e.new2 as range 6
  // closed e.new3 as range 10
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum$1=1@1/4 s.OutlineConstants/5 (/8 e.Scanned0/14 )/9 (/12 e.Tail0/16 )/13 t.Acc$a/20 e.StepScanned/18 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Scanned0 as range 14
    // closed e.Tail0 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.StepScanned as range 18
    //DEBUG: s.OutlineConstants: 5
    //DEBUG: e.Scanned0: 14
    //DEBUG: e.Tail0: 16
    //DEBUG: t.Acc$a: 20
    //DEBUG: e.StepScanned: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.OutlineConstants/5 } Tile{ AsIs: t.Acc$a/20 } Tile{ AsIs: (/12 } Tile{ AsIs: e.Scanned0/14 } Tile{ AsIs: e.StepScanned/18 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Tail0/16 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@1/4 s.OutlineConstants/5 (/8 e.Scanned0/6 )/9 (/12 e.Tail0/10 )/13 e.dyn/2 >/1
  // closed e.Scanned0 as range 6
  // closed e.Tail0 as range 10
  // closed e.dyn as range 2
  //DEBUG: s.OutlineConstants: 5
  //DEBUG: e.Scanned0: 6
  //DEBUG: e.Tail0: 10
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 AsIs: s.OutlineConstants/5 AsIs: (/8 AsIs: e.Scanned0/6 AsIs: )/9 AsIs: (/12 AsIs: e.Tail0/10 AsIs: )/13 AsIs: e.dyn/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@4/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new2 as range 7
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum@4/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new6 as range 13
    do {
      // </0 & DoMapAccum@4/4 (/5 s.new8/25 s.new9/26 )/6 (/9 e.new13/17 )/10 (/15 s.new10/27 e.new11/23 )/16 e.new12/19 >/1
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
      // closed e.new13 as range 17
      // closed e.new12 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
        continue;
      // closed e.new11 as range 23
      do {
        // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/28 )/10 (/15 # UnitName/27 e.3/30 )/16 e.Tail/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_UnitName], context[27] ) )
          continue;
        // closed e.Scanned as range 28
        // closed e.3 as range 30
        // closed e.Tail as range 32
        //DEBUG: s.Hash1: 25
        //DEBUG: s.Hash2: 26
        //DEBUG: e.Scanned: 28
        //DEBUG: e.3: 30
        //DEBUG: e.Tail: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/28 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Tail/32 } )/34 (/35 </36 & HashLittle2-Chars/37 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 } e.3/30/38 >/40 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # UnitName/27 AsIs: e.3/30 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
        // </0 & DoMapAccum@4/4 (/5 s.new14/25 s.new15/26 )/6 (/9 e.new20/28 )/10 (/15 s.new16/27 s.new17/34 e.new18/30 )/16 e.new19/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new20 as range 28
        // closed e.new19 as range 32
        if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
          continue;
        // closed e.new18 as range 30
        do {
          // </0 & DoMapAccum@4/4 (/5 s.new21/25 s.new22/26 )/6 (/9 e.new28/35 )/10 (/15 s.new23/27 s.new24/34 (/43 e.new25/41 )/44 e.new26/37 )/16 e.new27/39 >/1
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
          // closed e.new28 as range 35
          // closed e.new25 as range 41
          // closed e.new26 as range 37
          // closed e.new27 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.new29/25 s.new30/26 )/6 (/9 e.new35/45 )/10 (/15 # Function/27 s.new31/34 (/43 e.new33/47 )/44 e.new32/49 )/16 e.new34/51 >/1
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
            // closed e.new35 as range 45
            // closed e.new33 as range 47
            // closed e.new32 as range 49
            // closed e.new34 as range 51
            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # Function/27 # GN-Entry/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
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
              // closed e.Scanned as range 53
              // closed e.6 as range 55
              // closed e.5 as range 57
              // closed e.Tail as range 59
              //DEBUG: s.Hash1: 25
              //DEBUG: s.Hash2: 26
              //DEBUG: e.Scanned: 53
              //DEBUG: e.6: 55
              //DEBUG: e.5: 57
              //DEBUG: e.Tail: 59

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/67 e.6/55/68 >/70 'R'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
              // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # Function/27 # GN-Local/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
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
              // closed e.Scanned as range 53
              // closed e.6 as range 55
              // closed e.5 as range 57
              // closed e.Tail as range 59
              //DEBUG: s.Hash1: 25
              //DEBUG: s.Hash2: 26
              //DEBUG: e.Scanned: 53
              //DEBUG: e.6: 55
              //DEBUG: e.5: 57
              //DEBUG: e.Tail: 59

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/67 e.6/55/68 >/70 'R'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # Function/27 s.ScopeClass/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
            context[53] = context[45];
            context[54] = context[46];
            context[55] = context[47];
            context[56] = context[48];
            context[57] = context[49];
            context[58] = context[50];
            context[59] = context[51];
            context[60] = context[52];
            // closed e.Scanned as range 53
            // closed e.6 as range 55
            // closed e.5 as range 57
            // closed e.Tail as range 59
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: s.ScopeClass: 34
            //DEBUG: e.Scanned: 53
            //DEBUG: e.6: 55
            //DEBUG: e.5: 57
            //DEBUG: e.Tail: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/67 >/68 </69 & DisplayName/70 e.6/55/71 >/73 'R'/74 >/75 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # Function/27 AsIs: s.ScopeClass/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@4/4 (/5 s.new29/25 s.new30/26 )/6 (/9 e.new36/45 )/10 (/15 # CmdNativeFunction/27 s.new31/34 (/43 e.new34/47 )/44 t.new32/53 e.new33/49 )/16 e.new35/51 >/1
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
            // closed e.new36 as range 45
            // closed e.new34 as range 47
            // closed e.new35 as range 51
            context[54] = refalrts::tvar_left( context[53], context[49], context[50] );
            if( ! context[54] )
              continue;
            // closed e.new33 as range 49
            do {
              // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/55 )/10 (/15 # CmdNativeFunction/27 # GN-Entry/34 (/43 e.6/57 )/44 t.4/53 e.7/59 )/16 e.Tail/61 >/1
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
              // closed e.Scanned as range 55
              // closed e.6 as range 57
              // closed e.7 as range 59
              // closed e.Tail as range 61
              //DEBUG: t.4: 53
              //DEBUG: s.Hash1: 25
              //DEBUG: s.Hash2: 26
              //DEBUG: e.Scanned: 55
              //DEBUG: e.6: 57
              //DEBUG: e.7: 59
              //DEBUG: e.Tail: 61

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/55 } )/63 (/64 Tile{ AsIs: e.Tail/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/69 e.6/57/70 >/72 'N'/73 >/74 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6/57 AsIs: )/44 AsIs: t.4/53 AsIs: e.7/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
              // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/55 )/10 (/15 # CmdNativeFunction/27 # GN-Local/34 (/43 e.6/57 )/44 t.4/53 e.7/59 )/16 e.Tail/61 >/1
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
              // closed e.Scanned as range 55
              // closed e.6 as range 57
              // closed e.7 as range 59
              // closed e.Tail as range 61
              //DEBUG: t.4: 53
              //DEBUG: s.Hash1: 25
              //DEBUG: s.Hash2: 26
              //DEBUG: e.Scanned: 55
              //DEBUG: e.6: 57
              //DEBUG: e.7: 59
              //DEBUG: e.Tail: 61

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/55 } )/63 (/64 Tile{ AsIs: e.Tail/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/69 e.6/57/70 >/72 'N'/73 >/74 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6/57 AsIs: )/44 AsIs: t.4/53 AsIs: e.7/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/55 )/10 (/15 # CmdNativeFunction/27 s.ScopeClass/34 (/43 e.6/57 )/44 t.4/53 e.7/59 )/16 e.Tail/61 >/1
            context[55] = context[45];
            context[56] = context[46];
            context[57] = context[47];
            context[58] = context[48];
            context[59] = context[49];
            context[60] = context[50];
            context[61] = context[51];
            context[62] = context[52];
            // closed e.Scanned as range 55
            // closed e.6 as range 57
            // closed e.7 as range 59
            // closed e.Tail as range 61
            //DEBUG: t.4: 53
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: s.ScopeClass: 34
            //DEBUG: e.Scanned: 55
            //DEBUG: e.6: 57
            //DEBUG: e.7: 59
            //DEBUG: e.Tail: 61

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/55 } )/63 (/64 Tile{ AsIs: e.Tail/61 } )/65 (/66 </67 & HashLittle2-Chars/68 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/69 >/70 </71 & DisplayName/72 e.6/57/73 >/75 'N'/76 >/77 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdNativeFunction/27 AsIs: s.ScopeClass/34 AsIs: (/43 AsIs: e.6/57 AsIs: )/44 AsIs: t.4/53 AsIs: e.7/59 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@4/4 (/5 s.new29/25 s.new30/26 )/6 (/9 e.new35/45 )/10 (/15 # CmdMetatable/27 s.new31/34 (/43 e.new33/47 )/44 e.new32/49 )/16 e.new34/51 >/1
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
          // closed e.new35 as range 45
          // closed e.new33 as range 47
          // closed e.new32 as range 49
          // closed e.new34 as range 51
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # CmdMetatable/27 # GN-Entry/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
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
            // closed e.Scanned as range 53
            // closed e.6 as range 55
            // closed e.5 as range 57
            // closed e.Tail as range 59
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 53
            //DEBUG: e.6: 55
            //DEBUG: e.5: 57
            //DEBUG: e.Tail: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/67 e.6/55/68 >/70 'T'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: # GN-Entry/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # CmdMetatable/27 # GN-Local/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
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
            // closed e.Scanned as range 53
            // closed e.6 as range 55
            // closed e.5 as range 57
            // closed e.Tail as range 59
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 53
            //DEBUG: e.6: 55
            //DEBUG: e.5: 57
            //DEBUG: e.Tail: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/67 e.6/55/68 >/70 'T'/71 >/72 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: # GN-Local/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/53 )/10 (/15 # CmdMetatable/27 s.ScopeClass/34 (/43 e.6/55 )/44 e.5/57 )/16 e.Tail/59 >/1
          context[53] = context[45];
          context[54] = context[46];
          context[55] = context[47];
          context[56] = context[48];
          context[57] = context[49];
          context[58] = context[50];
          context[59] = context[51];
          context[60] = context[52];
          // closed e.Scanned as range 53
          // closed e.6 as range 55
          // closed e.5 as range 57
          // closed e.Tail as range 59
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.Scanned: 53
          //DEBUG: e.6: 55
          //DEBUG: e.5: 57
          //DEBUG: e.Tail: 59

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/53 } )/61 (/62 Tile{ AsIs: e.Tail/59 } )/63 (/64 </65 & HashLittle2-Chars/66 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/67 >/68 </69 & DisplayName/70 e.6/55/71 >/73 'T'/74 >/75 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdMetatable/27 AsIs: s.ScopeClass/34 AsIs: (/43 AsIs: e.6/55 AsIs: )/44 AsIs: e.5/57 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@4/4 (/5 s.new21/25 s.new22/26 )/6 (/9 e.new26/35 )/10 (/15 # CmdEnum/27 s.new23/34 e.new24/37 )/16 e.new25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[27] ) )
            continue;
          // closed e.new26 as range 35
          // closed e.new24 as range 37
          // closed e.new25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdEnum/27 # GN-Entry/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'E'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: # GN-Entry/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdEnum/27 # GN-Local/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'E'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: # GN-Local/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdEnum/27 s.ScopeClass/34 e.4/43 )/16 e.Tail/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned as range 41
          // closed e.4 as range 43
          // closed e.Tail as range 45
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.Scanned: 41
          //DEBUG: e.4: 43
          //DEBUG: e.Tail: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/53 >/54 </55 & DisplayName/56 e.4/43/57 >/59 'E'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdEnum/27 AsIs: s.ScopeClass/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@4/4 (/5 s.new21/25 s.new22/26 )/6 (/9 e.new26/35 )/10 (/15 # CmdSwap/27 s.new23/34 e.new24/37 )/16 e.new25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[27] ) )
            continue;
          // closed e.new26 as range 35
          // closed e.new24 as range 37
          // closed e.new25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdSwap/27 # GN-Entry/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'S'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: # GN-Entry/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdSwap/27 # GN-Local/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'S'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: # GN-Local/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdSwap/27 s.ScopeClass/34 e.4/43 )/16 e.Tail/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned as range 41
          // closed e.4 as range 43
          // closed e.Tail as range 45
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.Scanned: 41
          //DEBUG: e.4: 43
          //DEBUG: e.Tail: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/53 >/54 </55 & DisplayName/56 e.4/43/57 >/59 'S'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdSwap/27 AsIs: s.ScopeClass/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@4/4 (/5 s.new21/25 s.new22/26 )/6 (/9 e.new26/35 )/10 (/15 # CmdConditionFunc/27 s.new23/34 e.new24/37 )/16 e.new25/39 >/1
          context[35] = context[28];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[27] ) )
            continue;
          // closed e.new26 as range 35
          // closed e.new24 as range 37
          // closed e.new25 as range 39
          do {
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdConditionFunc/27 # GN-Entry/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'C'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: # GN-Entry/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
            // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdConditionFunc/27 # GN-Local/34 e.4/43 )/16 e.Tail/45 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
              continue;
            // closed e.Scanned as range 41
            // closed e.4 as range 43
            // closed e.Tail as range 45
            //DEBUG: s.Hash1: 25
            //DEBUG: s.Hash2: 26
            //DEBUG: e.Scanned: 41
            //DEBUG: e.4: 43
            //DEBUG: e.Tail: 45

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'C'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: # GN-Local/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdConditionFunc/27 s.ScopeClass/34 e.4/43 )/16 e.Tail/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          // closed e.Scanned as range 41
          // closed e.4 as range 43
          // closed e.Tail as range 45
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.Scanned: 41
          //DEBUG: e.4: 43
          //DEBUG: e.Tail: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/53 >/54 </55 & DisplayName/56 e.4/43/57 >/59 'C'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdConditionFunc/27 AsIs: s.ScopeClass/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@4/4 (/5 s.new21/25 s.new22/26 )/6 (/9 e.new26/35 )/10 (/15 # CmdDeclaration/27 s.new23/34 e.new24/37 )/16 e.new25/39 >/1
        context[35] = context[28];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[31];
        context[39] = context[32];
        context[40] = context[33];
        if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[27] ) )
          continue;
        // closed e.new26 as range 35
        // closed e.new24 as range 37
        // closed e.new25 as range 39
        do {
          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdDeclaration/27 # GN-Entry/34 e.4/43 )/16 e.Tail/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[34] ) )
            continue;
          // closed e.Scanned as range 41
          // closed e.4 as range 43
          // closed e.Tail as range 45
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: e.Scanned: 41
          //DEBUG: e.4: 43
          //DEBUG: e.Tail: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'E'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'D'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: # GN-Entry/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
          // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdDeclaration/27 # GN-Local/34 e.4/43 )/16 e.Tail/45 >/1
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          context[46] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[34] ) )
            continue;
          // closed e.Scanned as range 41
          // closed e.4 as range 43
          // closed e.Tail as range 45
          //DEBUG: s.Hash1: 25
          //DEBUG: s.Hash2: 26
          //DEBUG: e.Scanned: 41
          //DEBUG: e.4: 43
          //DEBUG: e.Tail: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: 'L'/6 HalfReuse: </9 } & DisplayName/53 e.4/43/54 >/56 'D'/57 >/58 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: # GN-Local/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/41 )/10 (/15 # CmdDeclaration/27 s.ScopeClass/34 e.4/43 )/16 e.Tail/45 >/1
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        context[46] = context[40];
        // closed e.Scanned as range 41
        // closed e.4 as range 43
        // closed e.Tail as range 45
        //DEBUG: s.Hash1: 25
        //DEBUG: s.Hash2: 26
        //DEBUG: s.ScopeClass: 34
        //DEBUG: e.Scanned: 41
        //DEBUG: e.4: 43
        //DEBUG: e.Tail: 45

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 AsIs: (/5 } Tile{ AsIs: e.Scanned/41 } )/47 (/48 Tile{ AsIs: e.Tail/45 } )/49 (/50 </51 & HashLittle2-Chars/52 Tile{ AsIs: s.Hash1/25 AsIs: s.Hash2/26 HalfReuse: </6 HalfReuse: & CharFromScopeClass*2/9 } s.ScopeClass/34/53 >/54 </55 & DisplayName/56 e.4/43/57 >/59 'D'/60 >/61 Tile{ AsIs: )/10 AsIs: (/15 AsIs: # CmdDeclaration/27 AsIs: s.ScopeClass/34 AsIs: e.4/43 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
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
        // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/28 )/10 (/15 # CmdDefineIdent/27 e.3/30 )/16 e.Tail/32 >/1
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[27] ) )
          continue;
        // closed e.Scanned as range 28
        // closed e.3 as range 30
        // closed e.Tail as range 32
        //DEBUG: s.Hash1: 25
        //DEBUG: s.Hash2: 26
        //DEBUG: e.Scanned: 28
        //DEBUG: e.3: 30
        //DEBUG: e.Tail: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: s.Hash1/25 AsIs: s.Hash2/26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/28 HalfReuse: (/10 HalfReuse: # CmdDefineIdent/15 } Tile{ AsIs: e.3/30 } Tile{ HalfReuse: )/27 } Tile{ AsIs: )/16 AsIs: e.Tail/32 AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@4/4 (/5 s.Hash1/25 s.Hash2/26 )/6 (/9 e.Scanned/28 )/10 (/15 # CmdEmitNativeCode/27 t.2/34 e.4/30 )/16 e.Tail/32 >/1
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[27] ) )
        continue;
      // closed e.Scanned as range 28
      // closed e.Tail as range 32
      context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.4 as range 30
      //DEBUG: s.Hash1: 25
      //DEBUG: s.Hash2: 26
      //DEBUG: e.Scanned: 28
      //DEBUG: e.Tail: 32
      //DEBUG: t.2: 34
      //DEBUG: e.4: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: s.Hash1/25 AsIs: s.Hash2/26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/28 HalfReuse: (/10 HalfReuse: # CmdEmitNativeCode/15 } Tile{ AsIs: t.2/34 } Tile{ AsIs: e.4/30 } Tile{ HalfReuse: )/27 } Tile{ AsIs: )/16 AsIs: e.Tail/32 AsIs: >/1 ]] }
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

    // </0 & DoMapAccum@4/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned as range 17
    // closed e.Tail as range 19
    //DEBUG: t.Acc: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.Scanned: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & CalcDigest*10/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
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
    // </0 & DoMapAccum@4/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@4/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/5 } Tile{ AsIs: e.Scanned/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@4/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & CalcDigest@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0 as range 13
    // closed e.Tail0 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned as range 17
    //DEBUG: e.Scanned0: 13
    //DEBUG: e.Tail0: 15
    //DEBUG: t.Acc$a: 19
    //DEBUG: e.StepScanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & OutlineConstants-OneCommand@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@3/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum$1=1@3/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0 as range 13
    // closed e.Tail0 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned as range 17
    //DEBUG: e.Scanned0: 13
    //DEBUG: e.Tail0: 15
    //DEBUG: t.Acc$a: 19
    //DEBUG: e.StepScanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@3/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & OutlineConstants-Metatable\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@4/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 2
  do {
    // </0 & DoMapAccum$1=1@4/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0 as range 13
    // closed e.Tail0 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned as range 17
    //DEBUG: e.Scanned0: 13
    //DEBUG: e.Tail0: 15
    //DEBUG: t.Acc$a: 19
    //DEBUG: e.StepScanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@4/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & CalcDigest@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
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
