// This file automatically generated from 'LowLevelRASL-RASL.ref'
// Don't edit! Edit 'LowLevelRASL-RASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2597242517_2430474212
#define COOKIE1_ 2597242517U
#define COOKIE2_ 2430474212U

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
  efunc_gen_PrepareCommonRASL_A1 = 18,
  efunc_gen_DoMapAccum_Z5 = 19,
  efunc_gen_PrepareCommonRASL_D1 = 20,
  efunc_gen_DoMapAccum_Z1 = 21,
  efunc_gen_LowLevelRASLm_RASL_A2 = 22,
  efunc_gen_DoMapAccum_Z2 = 23,
  efunc_gen_LowLevelRASLm_RASL_A1 = 24,
  efunc_gen_Map_Z1 = 25,
  efunc_gen_PrepareFunctionsRASL_S1A5 = 26,
  efunc_gen_AddBacktrackStackAllocationCommand_B1 = 27,
  efunc_gen_DoMapAccum_Z3 = 28,
  efunc_gen_PrepareFunctionsRASL_S1A4 = 29,
  efunc_ConvertInterpretCommands = 30,
  efunc_gen_PrepareFunctionsRASL_S1A3 = 31,
  efunc_gen_PrepareFunctionsRASL_S1A1 = 32,
  efunc_RemoveDebugInfoRec = 33,
  efunc_gen_RemoveDebugInfo_D2 = 34,
  efunc_gen_DoMapAccum_Z4 = 35,
  efunc_gen_ConvertOneInterpretCommand_S1A1 = 36,
  efunc_gen_ConvertOneInterpretCommand_S2A1 = 37,
  efunc_gen_SetFunctionsScopeClass_A1 = 38,
  efunc_gen_DoMapAccum_Z6 = 39,
  efunc_OutlineStrings = 40,
  efunc_gen_PrepareCommonRASL_A2 = 41,
  efunc_Mu = 42,
  efunc_Up = 43,
  efunc_Evm_met = 44,
  efunc_Residue = 45,
  efunc_u_u_Metau_Residue = 46,
  efunc_MapAccum = 47,
  efunc_UnBracket = 48,
  efunc_DelAccumulator = 49,
  efunc_Inc = 50,
  efunc_Dec = 51,
  efunc_LowLevelRASLm_RASL = 52,
  efunc_ClassifyItems = 53,
  efunc_PrepareFunctionsRASL = 54,
  efunc_RemoveDebugInfo = 55,
  efunc_ConvertOneInterpretCommandm_Simple = 56,
  efunc_ConvertOneInterpretCommand = 57,
  efunc_AddBacktrackStackAllocationCommand = 58,
  efunc_AddFunctionNameComment = 59,
  efunc_PrepareCommonRASL = 60,
  efunc_GlueFunctionRASLs = 61,
  efunc_SetFunctionsScopeClass = 62,
  efunc_gen_Apply_Z4 = 63,
  efunc_gen_DoMapAccum_S1A1Z1 = 64,
  efunc_gen_DoMapAccum_S1A1Z2 = 65,
  efunc_gen_DoMapAccum_S1A1Z3 = 66,
  efunc_gen_PrepareFunctionsRASL_D2 = 67,
  efunc_gen_PrepareFunctionsRASL_Z0 = 68,
  efunc_gen_DoMapAccum_Z0 = 69,
  efunc_gen_ClassifyItems_D11 = 70,
  efunc_gen_DoMapAccum_S1A1Z4 = 71,
  efunc_gen_ClassifyItems_Z0 = 72,
  efunc_gen_Map_Z0 = 73,
  efunc_gen_AddFunctionNameComment_L1Z0 = 74,
  efunc_gen_DoMapAccum_S1A1Z5 = 75,
  efunc_gen_AddBacktrackStackAllocationCommand_L1D3 = 76,
  efunc_gen_AddBacktrackStackAllocationCommand_L1Z0 = 77,
  efunc_gen_DoMapAccum_S1A1Z6 = 78,
  efunc_gen_ConvertOneInterpretCommand_D3 = 79,
  efunc_gen_ConvertOneInterpretCommand_Z0 = 80,
  efunc_gen_GlueFunctionRASLs_L1D2 = 81,
  efunc_gen_DoMapAccum_S1A1Z7 = 82,
  efunc_gen_GlueFunctionRASLs_L1Z0 = 83,
  efunc_gen_SetFunctionsScopeClass_A1L1 = 84,
  efunc_gen_DoMapAccum_S1A1Z8 = 85,
  efunc_gen_SetFunctionsScopeClass_A1L1Z0 = 86,
  efunc_gen_DoMapAccum_Z7 = 87,
  efunc_gen_DoMapAccum_S1A1Z0 = 88,
  efunc_gen_DoMapAccum_Z8 = 89,
};


enum ident {
  ident_ModuleID = 0,
  ident_UnitName = 1,
  ident_Functionm_ToRASL = 2,
  ident_Functionm_ToNative = 3,
  ident_CmdNativeFuncDescr = 4,
  ident_CmdNativeFunction = 5,
  ident_CmdMetatable = 6,
  ident_CmdEnum = 7,
  ident_CmdEnumDescr = 8,
  ident_CmdSwap = 9,
  ident_CmdSwapDescr = 10,
  ident_CmdConditionFuncm_ToRASL = 11,
  ident_CmdConditionFuncDecsrRasl = 12,
  ident_CmdConditionFuncm_ToNative = 13,
  ident_CmdConditionFuncDecsrNative = 14,
  ident_CmdDeclaration = 15,
  ident_CmdEmitNativeCode = 16,
  ident_CmdInterpretFuncDescr = 17,
  ident_LABEL = 18,
  ident_CmdProfileFunction = 19,
  ident_CmdLoadConstants = 20,
  ident_DebugInfo = 21,
  ident_NoDebugInfo = 22,
  ident_CmdSentence = 23,
  ident_CmdOpenELoop = 24,
  ident_AlgLeft = 25,
  ident_CmdVariableDebugTable = 26,
  ident_CmdComment = 27,
  ident_CmdUseRes = 28,
  ident_CmdCallCondition = 29,
  ident_CmdPushState = 30,
  ident_CmdNextStep = 31,
  ident_CmdOnFailGoTo = 32,
  ident_CmdProfilerStopSentence = 33,
  ident_CmdEStart = 34,
  ident_CmdFail = 35,
  ident_CmdEPrepare = 36,
  ident_CmdReserveBacktrackStack = 37,
  ident_CmdStringArray = 38,
  ident_RASL = 39,
  ident_Items = 40,
  ident_CmdFuncArray = 41,
  ident_CmdIdentArray = 42,
  ident_GNm_Entry = 43,
  ident_CmdCreateElem = 44,
  ident_ElString = 45,
  ident_Mu = 46,
  ident_Up = 47,
  ident_Evm_met = 48,
  ident_Residue = 49,
  ident_u_u_Metau_Residue = 50,
  ident_Apply = 51,
  ident_Map = 52,
  ident_Reduce = 53,
  ident_Fetch = 54,
  ident_MapAccum = 55,
  ident_DoMapAccum = 56,
  ident_UnBracket = 57,
  ident_DelAccumulator = 58,
  ident_Inc = 59,
  ident_Dec = 60,
  ident_Pipe = 61,
  ident_LowLevelRASLm_RASL = 62,
  ident_ClassifyItems = 63,
  ident_PrepareFunctionsRASL = 64,
  ident_RemoveDebugInfo = 65,
  ident_RemoveDebugInfoRec = 66,
  ident_ConvertInterpretCommands = 67,
  ident_ConvertOneInterpretCommandm_Simple = 68,
  ident_ConvertOneInterpretCommand = 69,
  ident_AddBacktrackStackAllocationCommand = 70,
  ident_AddFunctionNameComment = 71,
  ident_PrepareCommonRASL = 72,
  ident_GlueFunctionRASLs = 73,
  ident_SetFunctionsScopeClass = 74,
  ident_OutlineStrings = 75,
  ident_Funck32_namek58_ = 76,
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


static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & LowLevelRASL-RASL=2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & LowLevelRASL-RASL=2/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 t.new4/11 t.new5/13 s.new6/15 e.new7/2 >/1
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
  // closed e.new3 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & LowLevelRASL-RASL=2/4 s.Hash1/5 s.Hash2/6 (/9 e.FuncScopeClass/16 )/10 (/11 s.FunctionCount/24 e.1/20 )/12 (/13 s.IdentCount/25 e.2/22 )/14 s.MaxLabel/15 e.Definitions$a/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    if( ! refalrts::brackets_term( context[20], context[21], context[11] ) )
      continue;
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[13] ) )
      continue;
    // closed e.FuncScopeClass as range 16
    // closed e.Definitions$a as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    // closed e.1 as range 20
    if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
      continue;
    // closed e.2 as range 22
    //DEBUG: s.Hash1: 5
    //DEBUG: s.Hash2: 6
    //DEBUG: s.MaxLabel: 15
    //DEBUG: e.FuncScopeClass: 16
    //DEBUG: e.Definitions$a: 18
    //DEBUG: s.FunctionCount: 24
    //DEBUG: e.1: 20
    //DEBUG: s.IdentCount: 25
    //DEBUG: e.2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxLabel/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/26 Tile{ HalfReuse: (/0 HalfReuse: # ModuleID/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } )/27 </28 & PrepareCommonRASL=1/29 Tile{ AsIs: s.FunctionCount/24 } Tile{ AsIs: (/9 AsIs: e.FuncScopeClass/16 AsIs: )/10 AsIs: (/11 } Tile{ AsIs: e.1/20 } Tile{ AsIs: )/14 } Tile{ AsIs: s.IdentCount/25 } (/30 Tile{ AsIs: e.2/22 } )/31 </32 & DoMapAccum@5/33 (/34 Tile{ AsIs: )/12 AsIs: (/13 } )/35 Tile{ AsIs: e.Definitions$a/18 } >/36 >/37 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_PrepareCommonRASL_A1]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_ModuleID]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[26], context[1] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[13], context[35] );
    refalrts::link_brackets( context[34], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[11], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[0], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LowLevelRASL-RASL=2/4 s.Hash1/5 s.Hash2/6 (/9 e.FuncScopeClass/7 )/10 t.FuncTable/11 t.IdentTable/13 s.MaxLabel/15 e.Definitions$a/2 >/1
  // closed e.FuncScopeClass as range 7
  // closed e.Definitions$a as range 2
  //DEBUG: t.FuncTable: 11
  //DEBUG: t.IdentTable: 13
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: s.MaxLabel: 15
  //DEBUG: e.FuncScopeClass: 7
  //DEBUG: e.Definitions$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxLabel/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 Tile{ HalfReuse: (/0 HalfReuse: # ModuleID/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } )/17 </18 & PrepareCommonRASL*1/19 Tile{ AsIs: (/9 AsIs: e.FuncScopeClass/7 AsIs: )/10 AsIs: t.FuncTable/11 AsIs: t.IdentTable/13 } Tile{ AsIs: e.Definitions$a/2 } >/20 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_PrepareCommonRASL_D1]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ModuleID]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A2("LowLevelRASL-RASL=2", COOKIE1_, COOKIE2_, func_gen_LowLevelRASLm_RASL_A2);


static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & LowLevelRASL-RASL=1/4 s.Hash1/5 s.Hash2/6 t.FuncTable/7 t.IdentTable/9 s.DebugInfo/11 (/14 e.FuncScopeClass/12 )/15 e.Definitions/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.FuncScopeClass as range 12
  // closed e.Definitions as range 2
  //DEBUG: s.Hash1: 5
  //DEBUG: s.Hash2: 6
  //DEBUG: t.FuncTable: 7
  //DEBUG: t.IdentTable: 9
  //DEBUG: s.DebugInfo: 11
  //DEBUG: e.FuncScopeClass: 12
  //DEBUG: e.Definitions: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL=2/4 AsIs: s.Hash1/5 AsIs: s.Hash2/6 } Tile{ AsIs: (/14 AsIs: e.FuncScopeClass/12 AsIs: )/15 } Tile{ AsIs: t.FuncTable/7 AsIs: t.IdentTable/9 } </16 & DoMapAccum@1/17 Tile{ AsIs: s.DebugInfo/11 } 0/18 (/19 )/20 Tile{ AsIs: e.Definitions/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_number(vm, context[18], 0UL);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASLm_RASL_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A1("LowLevelRASL-RASL=1", COOKIE1_, COOKIE2_, func_gen_LowLevelRASLm_RASL_A1);


static refalrts::FnResult func_LowLevelRASLm_RASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & LowLevelRASL-RASL/4 s.DebugInfo/5 s.Hash1/6 s.Hash2/7 (/10 t.FuncTable/12 t.IdentTable/14 )/11 e.Items/2 >/1
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
  // closed e.Items as range 2
  context[13] = refalrts::tvar_left( context[12], context[8], context[9] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[8], context[9] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.Hash1: 6
  //DEBUG: s.Hash2: 7
  //DEBUG: e.Items: 2
  //DEBUG: t.FuncTable: 12
  //DEBUG: t.IdentTable: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash2/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL=1/4 } Tile{ AsIs: s.Hash1/6 } Tile{ HalfReuse: s.Hash27 /10 AsIs: t.FuncTable/12 AsIs: t.IdentTable/14 } Tile{ AsIs: s.DebugInfo/5 } </16 & DoMapAccum@2/17 (/18 )/19 (/20 Tile{ AsIs: )/11 AsIs: e.Items/2 AsIs: >/1 } >/21 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASLm_RASL_A1]);
  refalrts::reinit_svar( context[10], context[7] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[20], context[11] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_RASL("LowLevelRASL-RASL", 0U, 0U, func_LowLevelRASLm_RASL);


static refalrts::FnResult func_ClassifyItems(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ClassifyItems/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ClassifyItems/4 (/7 e.new1/5 )/8 (/11 s.new2/13 e.new3/9 )/12 >/1
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
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 9
  do {
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/14 )/8 (/11 # UnitName/13 e.SrcName/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[13] ) )
      continue;
    // closed e.FuncScopeClass as range 14
    // closed e.SrcName as range 16
    //DEBUG: e.FuncScopeClass: 14
    //DEBUG: e.SrcName: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ClassifyItems/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FuncScopeClass/14 AsIs: )/8 AsIs: (/11 AsIs: # UnitName/13 AsIs: e.SrcName/16 AsIs: )/12 } Tile{ ]] }
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

  // </0 & ClassifyItems/4 (/7 e.new4/5 )/8 (/11 s.new5/13 t.new6/14 e.new7/9 )/12 >/1
  // closed e.new4 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 9
  do {
    // </0 & ClassifyItems/4 (/7 e.new8/16 )/8 (/11 s.new9/13 s.new10/14 e.new11/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    // closed e.new8 as range 16
    // closed e.new11 as range 18
    do {
      // </0 & ClassifyItems/4 (/7 e.new12/20 )/8 (/11 s.new13/13 s.new14/14 (/26 e.new15/24 )/27 e.new16/22 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      // closed e.new12 as range 20
      // closed e.new15 as range 24
      // closed e.new16 as range 22
      do {
        // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/28 )/8 (/11 # Function-ToRASL/13 s.ScopeClass/14 (/26 e.Name/30 )/27 e.FunctionBody/32 )/12 >/1
        context[28] = context[20];
        context[29] = context[21];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[22];
        context[33] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[13] ) )
          continue;
        // closed e.FuncScopeClass as range 28
        // closed e.Name as range 30
        // closed e.FunctionBody as range 32
        //DEBUG: s.ScopeClass: 14
        //DEBUG: e.FuncScopeClass: 28
        //DEBUG: e.Name: 30
        //DEBUG: e.FunctionBody: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/28 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/30/34 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function-ToRASL/13 AsIs: s.ScopeClass/14 AsIs: (/26 AsIs: e.Name/30 AsIs: )/27 AsIs: e.FunctionBody/32 AsIs: )/12 } Tile{ ]] }
        refalrts::copy_evar(vm, context[34], context[35], context[30], context[31]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[4], context[14] );
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[7], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[4] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/28 )/8 (/11 # Function-ToNative/13 s.ScopeClass/14 (/26 e.Name/30 )/27 e.Commands/32 )/12 >/1
        context[28] = context[20];
        context[29] = context[21];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[22];
        context[33] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[13] ) )
          continue;
        // closed e.FuncScopeClass as range 28
        // closed e.Name as range 30
        // closed e.Commands as range 32
        //DEBUG: s.ScopeClass: 14
        //DEBUG: e.FuncScopeClass: 28
        //DEBUG: e.Name: 30
        //DEBUG: e.Commands: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Commands/32 )/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/28 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /26 AsIs: e.Name/30 AsIs: )/27 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass/14 } e.Name/30/34 Tile{ HalfReuse: )/1 ]] }
        refalrts::copy_evar(vm, context[34], context[35], context[30], context[31]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[26], context[14] );
        refalrts::update_ident(context[13], identifiers[ident_CmdNativeFuncDescr]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[1] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[7], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/28 )/8 (/11 # CmdNativeFunction/13 s.ScopeClass/14 (/26 e.Name/30 )/27 t.SrcPos/34 e.Code/32 )/12 >/1
        context[28] = context[20];
        context[29] = context[21];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[22];
        context[33] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[13] ) )
          continue;
        // closed e.FuncScopeClass as range 28
        // closed e.Name as range 30
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        // closed e.Code as range 32
        //DEBUG: s.ScopeClass: 14
        //DEBUG: e.FuncScopeClass: 28
        //DEBUG: e.Name: 30
        //DEBUG: t.SrcPos: 34
        //DEBUG: e.Code: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos/34 e.Code/32 )/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/28 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /26 AsIs: e.Name/30 AsIs: )/27 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass/14 } e.Name/30/36 Tile{ HalfReuse: )/1 ]] }
        refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[26], context[14] );
        refalrts::update_ident(context[13], identifiers[ident_CmdNativeFuncDescr]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[1] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[7], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/28 )/8 (/11 # CmdMetatable/13 s.ScopeClass/14 (/26 e.Name/30 )/27 e.Metatable/32 )/12 >/1
      context[28] = context[20];
      context[29] = context[21];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[22];
      context[33] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[13] ) )
        continue;
      // closed e.FuncScopeClass as range 28
      // closed e.Name as range 30
      // closed e.Metatable as range 32
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.FuncScopeClass: 28
      //DEBUG: e.Name: 30
      //DEBUG: e.Metatable: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/28 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/30/34 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/13 AsIs: s.ScopeClass/14 AsIs: (/26 AsIs: e.Name/30 AsIs: )/27 AsIs: e.Metatable/32 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[34], context[35], context[30], context[31]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/20 )/8 (/11 # CmdEnum/13 s.ScopeClass/14 e.Name/22 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[13] ) )
        continue;
      // closed e.FuncScopeClass as range 20
      // closed e.Name as range 22
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.FuncScopeClass: 20
      //DEBUG: e.Name: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/22/24 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdEnumDescr/13 AsIs: s.ScopeClass/14 AsIs: e.Name/22 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdEnumDescr]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/20 )/8 (/11 # CmdSwap/13 s.ScopeClass/14 e.Name/22 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[13] ) )
        continue;
      // closed e.FuncScopeClass as range 20
      // closed e.Name as range 22
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.FuncScopeClass: 20
      //DEBUG: e.Name: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/22/24 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdSwapDescr/13 AsIs: s.ScopeClass/14 AsIs: e.Name/22 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdSwapDescr]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/20 )/8 (/11 # CmdConditionFunc-ToRASL/13 s.ScopeClass/14 e.Name/22 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[13] ) )
        continue;
      // closed e.FuncScopeClass as range 20
      // closed e.Name as range 22
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.FuncScopeClass: 20
      //DEBUG: e.Name: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/22/24 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdConditionFuncDecsrRasl/13 AsIs: s.ScopeClass/14 AsIs: e.Name/22 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncDecsrRasl]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/20 )/8 (/11 # CmdConditionFunc-ToNative/13 s.ScopeClass/14 e.Name/22 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[13] ) )
        continue;
      // closed e.FuncScopeClass as range 20
      // closed e.Name as range 22
      //DEBUG: s.ScopeClass: 14
      //DEBUG: e.FuncScopeClass: 20
      //DEBUG: e.Name: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass14 /4 } e.Name/22/24 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdConditionFuncDecsrNative/13 AsIs: s.ScopeClass/14 AsIs: e.Name/22 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncDecsrNative]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/20 )/8 (/11 # CmdDeclaration/13 s.ScopeClass/14 e.Name/22 )/12 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[13] ) )
      continue;
    // closed e.FuncScopeClass as range 20
    // closed e.Name as range 22
    //DEBUG: s.ScopeClass: 14
    //DEBUG: e.FuncScopeClass: 20
    //DEBUG: e.Name: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass/20 } Tile{ HalfReuse: (/13 AsIs: s.ScopeClass/14 AsIs: e.Name/22 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ClassifyItems/4 (/7 e.FuncScopeClass/5 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos/14 e.Code/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncScopeClass as range 5
  // closed e.Code as range 9
  //DEBUG: t.SrcPos: 14
  //DEBUG: e.FuncScopeClass: 5
  //DEBUG: e.Code: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ClassifyItems/4 {REMOVED TILE} (/11 # CmdEmitNativeCode/13 t.SrcPos/14 e.Code/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FuncScopeClass/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassifyItems("ClassifyItems", COOKIE1_, COOKIE2_, func_ClassifyItems);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrepareFunctionsRASL$1=5/4 s.NextLabel$a/5 s.ScopeClass/6 (/9 e.Name/7 )/10 s.FunctionLabel/11 e.RASLCommands$b/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RASLCommands$b as range 2
  //DEBUG: s.NextLabel$a: 5
  //DEBUG: s.ScopeClass: 6
  //DEBUG: e.Name: 7
  //DEBUG: s.FunctionLabel: 11
  //DEBUG: e.RASLCommands$b: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextLabel$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextLabel$a5 /0 HalfReuse: (/4 } # CmdInterpretFuncDescr/12 Tile{ AsIs: s.ScopeClass/6 AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 } (/13 # LABEL/14 Tile{ AsIs: s.FunctionLabel/11 } )/15 (/16 # CmdProfileFunction/17 )/18 (/19 # CmdLoadConstants/20 )/21 Tile{ AsIs: e.RASLCommands$b/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdInterpretFuncDescr]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_LABEL]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdProfileFunction]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_CmdLoadConstants]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[21] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A5("PrepareFunctionsRASL$1=5", COOKIE1_, COOKIE2_, func_gen_PrepareFunctionsRASL_S1A5);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrepareFunctionsRASL$1=4/4 s.NextLabel$a/5 s.ScopeClass/6 (/9 e.Name/7 )/10 s.FunctionLabel/11 e.RASLCommands$a/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RASLCommands$a as range 2
  //DEBUG: s.NextLabel$a: 5
  //DEBUG: s.ScopeClass: 6
  //DEBUG: e.Name: 7
  //DEBUG: s.FunctionLabel: 11
  //DEBUG: e.RASLCommands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareFunctionsRASL$1=5/4 AsIs: s.NextLabel$a/5 AsIs: s.ScopeClass/6 AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 AsIs: s.FunctionLabel/11 } </12 & Map@1/13 (/14 e.Name/7/15 )/17 Tile{ AsIs: e.RASLCommands$a/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_S1A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A4("PrepareFunctionsRASL$1=4", COOKIE1_, COOKIE2_, func_gen_PrepareFunctionsRASL_S1A4);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrepareFunctionsRASL$1=3/4 s.ScopeClass/5 (/8 e.Name/6 )/9 s.FunctionLabel/10 s.NextLabel$a/11 e.RASLCommands/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RASLCommands as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: s.FunctionLabel: 10
  //DEBUG: s.NextLabel$a: 11
  //DEBUG: e.RASLCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextLabel$a/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: & PrepareFunctionsRASL$1=4/0 HalfReuse: s.NextLabel$a11 /4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 AsIs: s.FunctionLabel/10 } </13 & AddBacktrackStackAllocationCommand:1/14 </15 & DoMapAccum@3/16 0/17 (/18 )/19 Tile{ AsIs: e.RASLCommands/2 } >/20 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_AddBacktrackStackAllocationCommand_B1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_DoMapAccum_Z3]);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_name(context[0], functions[efunc_gen_PrepareFunctionsRASL_S1A4]);
  refalrts::reinit_svar( context[4], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A3("PrepareFunctionsRASL$1=3", COOKIE1_, COOKIE2_, func_gen_PrepareFunctionsRASL_S1A3);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrepareFunctionsRASL$1=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 s.NextLabel/10 e.FunctionBody$a/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBody$a as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: s.NextLabel: 10
  //DEBUG: e.FunctionBody$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareFunctionsRASL$1=3/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 AsIs: s.NextLabel/10 } </11 & ConvertInterpretCommands/12 </13 & Add/14 1/15 s.NextLabel/10/16 >/17 Tile{ AsIs: e.FunctionBody$a/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ConvertInterpretCommands]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::copy_stvar(vm, context[16], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A1("PrepareFunctionsRASL$1=1", COOKIE1_, COOKIE2_, func_gen_PrepareFunctionsRASL_S1A1);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & PrepareFunctionsRASL/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrepareFunctionsRASL/4 s.new1/5 s.new2/6 t.new3/7 >/1
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
    // </0 & PrepareFunctionsRASL/4 s.new4/5 s.new5/6 (/7 # Function-ToRASL/11 s.new6/12 (/15 e.new7/13 )/16 e.new8/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Functionm_ToRASL], context[9], context[10] );
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
    // closed e.new7 as range 13
    // closed e.new8 as range 9
    do {
      // </0 & PrepareFunctionsRASL/4 # DebugInfo/5 s.NextLabel/6 (/7 # Function-ToRASL/11 s.ScopeClass/12 (/15 e.Name/17 )/16 e.FunctionBody/19 )/8 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[9];
      context[20] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[5] ) )
        continue;
      // closed e.Name as range 17
      // closed e.FunctionBody as range 19
      //DEBUG: s.NextLabel: 6
      //DEBUG: s.ScopeClass: 12
      //DEBUG: e.Name: 17
      //DEBUG: e.FunctionBody: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & PrepareFunctionsRASL$1=3/11 AsIs: s.ScopeClass/12 AsIs: (/15 AsIs: e.Name/17 AsIs: )/16 } s.NextLabel/6/21 </22 & ConvertInterpretCommands/23 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/5 AsIs: s.NextLabel/6 } >/24 Tile{ AsIs: e.FunctionBody/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[21], context[6]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_ConvertInterpretCommands]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_PrepareFunctionsRASL_S1A3]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_number(context[5], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareFunctionsRASL/4 # NoDebugInfo/5 s.NextLabel/6 (/7 # Function-ToRASL/11 s.ScopeClass/12 (/15 e.Name/17 )/16 e.FunctionBody/19 )/8 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[9];
      context[20] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_NoDebugInfo], context[5] ) )
        continue;
      // closed e.Name as range 17
      // closed e.FunctionBody as range 19
      //DEBUG: s.NextLabel: 6
      //DEBUG: s.ScopeClass: 12
      //DEBUG: e.Name: 17
      //DEBUG: e.FunctionBody: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} # NoDebugInfo/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & PrepareFunctionsRASL$1=1/11 AsIs: s.ScopeClass/12 AsIs: (/15 AsIs: e.Name/17 AsIs: )/16 } Tile{ AsIs: s.NextLabel/6 } Tile{ AsIs: </0 Reuse: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.FunctionBody/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
      refalrts::update_name(context[4], functions[efunc_RemoveDebugInfoRec]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_elem( res, context[6] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareFunctionsRASL/4 s.DebugInfo/5 s.NextLabel/6 (/7 # Function-ToRASL/11 s.ScopeClass/12 (/15 e.Name/17 )/16 e.FunctionBody/19 )/8 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[9];
    context[20] = context[10];
    // closed e.Name as range 17
    // closed e.FunctionBody as range 19
    //DEBUG: s.DebugInfo: 5
    //DEBUG: s.NextLabel: 6
    //DEBUG: s.ScopeClass: 12
    //DEBUG: e.Name: 17
    //DEBUG: e.FunctionBody: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & PrepareFunctionsRASL$1=1/11 AsIs: s.ScopeClass/12 AsIs: (/15 AsIs: e.Name/17 AsIs: )/16 } Tile{ AsIs: s.NextLabel/6 } Tile{ AsIs: </0 Reuse: & RemoveDebugInfo*2/4 AsIs: s.DebugInfo/5 } Tile{ AsIs: e.FunctionBody/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[11], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
    refalrts::update_name(context[4], functions[efunc_gen_RemoveDebugInfo_D2]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareFunctionsRASL/4 s.DebugInfo/5 s.NextLabel/6 t.OtherItem/7 >/1
  //DEBUG: t.OtherItem: 7
  //DEBUG: s.DebugInfo: 5
  //DEBUG: s.NextLabel: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 s.DebugInfo/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel/6 AsIs: t.OtherItem/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", COOKIE1_, COOKIE2_, func_PrepareFunctionsRASL);


static refalrts::FnResult func_RemoveDebugInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RemoveDebugInfo/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & RemoveDebugInfo/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & RemoveDebugInfo/4 # DebugInfo/5 e.FunctionBody/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[5] ) )
      continue;
    // closed e.FunctionBody as range 6
    //DEBUG: e.FunctionBody: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RemoveDebugInfo/4 # DebugInfo/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FunctionBody/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveDebugInfo/4 # NoDebugInfo/5 e.FunctionBody/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoDebugInfo], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBody as range 2
  //DEBUG: e.FunctionBody: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemoveDebugInfoRec/5 AsIs: e.FunctionBody/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_RemoveDebugInfoRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfo("RemoveDebugInfo", COOKIE1_, COOKIE2_, func_RemoveDebugInfo);


static refalrts::FnResult func_RemoveDebugInfoRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & RemoveDebugInfoRec/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & RemoveDebugInfoRec/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & RemoveDebugInfoRec/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
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
        // </0 & RemoveDebugInfoRec/4 (/7 # CmdSentence/13 e.SubCommands/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[13] ) )
          continue;
        // closed e.SubCommands as range 14
        // closed e.Tail as range 16
        //DEBUG: e.SubCommands: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSentence/4 HalfReuse: </7 HalfReuse: & RemoveDebugInfoRec/13 AsIs: e.SubCommands/14 HalfReuse: >/8 } )/18 </19 & RemoveDebugInfoRec/20 Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_RemoveDebugInfoRec]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdSentence]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_RemoveDebugInfoRec]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemoveDebugInfoRec/4 (/7 s.new6/13 s.new7/18 e.new8/14 )/8 e.new9/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.new9 as range 16
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      // closed e.new8 as range 14
      do {
        // </0 & RemoveDebugInfoRec/4 (/7 # CmdOpenELoop/13 # AlgLeft/18 s.BracketNum/23 s.VarNumber/24 e.SubCommands/19 )/8 e.Tail/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[18] ) )
          continue;
        // closed e.Tail as range 21
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        // closed e.SubCommands as range 19
        //DEBUG: e.Tail: 21
        //DEBUG: s.BracketNum: 23
        //DEBUG: s.VarNumber: 24
        //DEBUG: e.SubCommands: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/13 AsIs: # AlgLeft/18 AsIs: s.BracketNum/23 AsIs: s.VarNumber/24 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.SubCommands/19 } >/25 )/26 </27 Tile{ HalfReuse: & RemoveDebugInfoRec/8 AsIs: e.Tail/21 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::reinit_name(context[8], functions[efunc_RemoveDebugInfoRec]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[7], context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemoveDebugInfoRec/4 (/7 # CmdVariableDebugTable/13 s.Mode/18 e.Index/19 s.Offset/23 )/8 e.Tail/21 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[13] ) )
        continue;
      // closed e.Tail as range 21
      if( ! refalrts::svar_right( context[23], context[19], context[20] ) )
        continue;
      // closed e.Index as range 19
      //DEBUG: s.Mode: 18
      //DEBUG: e.Tail: 21
      //DEBUG: s.Offset: 23
      //DEBUG: e.Index: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & RemoveDebugInfoRec/4 (/7 # CmdVariableDebugTable/13 s.Mode/18 e.Index/19 s.Offset/23 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & RemoveDebugInfoRec/8 AsIs: e.Tail/21 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_RemoveDebugInfoRec]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemoveDebugInfoRec/4 t.Command/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Command: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command/7 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveDebugInfoRec/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveDebugInfoRec/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfoRec("RemoveDebugInfoRec", COOKIE1_, COOKIE2_, func_RemoveDebugInfoRec);


static refalrts::FnResult func_ConvertInterpretCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ConvertInterpretCommands/4 s.NextLabel/5 e.Commands/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: s.NextLabel: 5
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: s.NextLabel/5 } (/6 )/7 Tile{ AsIs: e.Commands/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertInterpretCommands("ConvertInterpretCommands", COOKIE1_, COOKIE2_, func_ConvertInterpretCommands);


static refalrts::FnResult func_ConvertOneInterpretCommandm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ConvertOneInterpretCommand-Simple/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ConvertOneInterpretCommand-Simple/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 s.new2/9 e.new3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new3 as range 7
    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[9] ) )
        continue;
      // closed e.Text as range 10
      //DEBUG: e.Text: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text/10 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdUseRes], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdVariableDebugTable/9 s.Mode/12 e.Index/10 s.Offset/13 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_right( context[13], context[10], context[11] ) )
        continue;
      // closed e.Index as range 10
      //DEBUG: s.Mode: 12
      //DEBUG: s.Offset: 13
      //DEBUG: e.Index: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # CmdVariableDebugTable/9 AsIs: s.Mode/12 } Tile{ HalfReuse: '.'/1 } Tile{ AsIs: e.Index/10 } Tile{ HalfReuse: '#'/4 } Tile{ AsIs: s.Offset/13 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_char(context[1], '.');
      refalrts::reinit_char(context[4], '#');
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[6] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdCallCondition/9 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdCallCondition], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdPushState/4 HalfReuse: )/5 HalfReuse: (/9 HalfReuse: # CmdNextStep/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdPushState]);
    refalrts::reinit_close_bracket(context[5]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[6], identifiers[ident_CmdNextStep]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[0], context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ConvertOneInterpretCommand-Simple/4 t.Command/5 >/1
  //DEBUG: t.Command: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Command/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommandm_Simple("ConvertOneInterpretCommand-Simple", COOKIE1_, COOKIE2_, func_ConvertOneInterpretCommandm_Simple);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ConvertOneInterpretCommand$1=1/4 s.NextLabel$a/5 e.SubCommands$a/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubCommands$a as range 2
  //DEBUG: s.NextLabel$a: 5
  //DEBUG: e.SubCommands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/6 Tile{ AsIs: s.NextLabel$a/5 } >/7 (/8 # CmdOnFailGoTo/9 s.NextLabel$a/5/10 )/11 Tile{ AsIs: e.SubCommands$a/2 } (/12 # LABEL/13 s.NextLabel$a/5/14 )/15 (/16 # CmdProfilerStopSentence/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_number(vm, context[6], 1UL);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_CmdOnFailGoTo]);
  refalrts::copy_stvar(vm, context[10], context[5]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_LABEL]);
  refalrts::copy_stvar(vm, context[14], context[5]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdProfilerStopSentence]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S1A1("ConvertOneInterpretCommand$1=1", COOKIE1_, COOKIE2_, func_gen_ConvertOneInterpretCommand_S1A1);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ConvertOneInterpretCommand$2=1/4 s.BracketNum/5 s.VarNumber/6 s.NextLabel$a/7 e.SubCommands$a/2 >/1
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
  // closed e.SubCommands$a as range 2
  //DEBUG: s.BracketNum: 5
  //DEBUG: s.VarNumber: 6
  //DEBUG: s.NextLabel$a: 7
  //DEBUG: e.SubCommands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel$a/7 } Tile{ HalfReuse: (/0 HalfReuse: # CmdEPrepare/4 AsIs: s.BracketNum/5 AsIs: s.VarNumber/6 } )/8 (/9 # CmdEStart/10 s.BracketNum/5/11 s.VarNumber/6/12 )/13 Tile{ AsIs: e.SubCommands$a/2 } (/14 # CmdFail/15 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdEStart]);
  refalrts::copy_stvar(vm, context[11], context[5]);
  refalrts::copy_stvar(vm, context[12], context[6]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdFail]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdEPrepare]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S2A1("ConvertOneInterpretCommand$2=1", COOKIE1_, COOKIE2_, func_gen_ConvertOneInterpretCommand_S2A1);


static refalrts::FnResult func_ConvertOneInterpretCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ConvertOneInterpretCommand/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ConvertOneInterpretCommand/4 s.new1/5 t.new2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ConvertOneInterpretCommand/4 s.new3/5 (/6 s.new4/10 e.new5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new5 as range 8
    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdSentence/10 e.SubCommands/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[10] ) )
        continue;
      // closed e.SubCommands as range 11
      //DEBUG: s.NextLabel: 5
      //DEBUG: e.SubCommands: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 & ConvertOneInterpretCommand$1=1/14 Tile{ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/6 HalfReuse: )/10 AsIs: e.SubCommands/11 HalfReuse: >/7 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_ConvertOneInterpretCommand_S1A1]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[6], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdOpenELoop/10 # AlgLeft/13 s.BracketNum/14 s.VarNumber/15 e.SubCommands/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[10] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_AlgLeft], context[11], context[12] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      // closed e.SubCommands as range 11
      //DEBUG: s.NextLabel: 5
      //DEBUG: s.BracketNum: 14
      //DEBUG: s.VarNumber: 15
      //DEBUG: e.SubCommands: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: & ConvertOneInterpretCommand$2=1/13 AsIs: s.BracketNum/14 AsIs: s.VarNumber/15 } Tile{ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/6 HalfReuse: )/10 } Tile{ AsIs: e.SubCommands/11 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::reinit_name(context[13], functions[efunc_gen_ConvertOneInterpretCommand_S2A1]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[6], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdComment/10 e.0/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[10] ) )
        continue;
      // closed e.0 as range 11
      //DEBUG: s.NextLabel: 5
      //DEBUG: e.0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdComment/10 e.0/11 )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.NextLabel5 /1 ]] }
      refalrts::reinit_svar( context[1], context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdUseRes/10 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdUseRes], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //DEBUG: s.NextLabel: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdUseRes/10 )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.NextLabel5 /1 ]] }
      refalrts::reinit_svar( context[1], context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdVariableDebugTable/10 s.Mode/13 e.2/11 s.Offset/14 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
        continue;
      // closed e.2 as range 11
      //DEBUG: s.NextLabel: 5
      //DEBUG: s.Mode: 13
      //DEBUG: s.Offset: 14
      //DEBUG: e.2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel/5 AsIs: (/6 AsIs: # CmdVariableDebugTable/10 AsIs: s.Mode/13 } Tile{ HalfReuse: '.'/1 } Tile{ AsIs: e.2/11 } Tile{ HalfReuse: '#'/4 } Tile{ AsIs: s.Offset/14 AsIs: )/7 } Tile{ ]] }
      refalrts::reinit_char(context[1], '.');
      refalrts::reinit_char(context[4], '#');
      refalrts::link_brackets( context[6], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[7] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[5], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 (/6 # CmdCallCondition/10 )/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdCallCondition], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.NextLabel: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel/5 AsIs: (/6 Reuse: # CmdPushState/10 AsIs: )/7 HalfReuse: (/1 } Tile{ HalfReuse: # CmdNextStep/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::update_ident(context[10], identifiers[ident_CmdPushState]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_ident(context[0], identifiers[ident_CmdNextStep]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[6], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ConvertOneInterpretCommand/4 s.NextLabel/5 t.Command/6 >/1
  //DEBUG: t.Command: 6
  //DEBUG: s.NextLabel: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel/5 AsIs: t.Command/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommand("ConvertOneInterpretCommand", COOKIE1_, COOKIE2_, func_ConvertOneInterpretCommand);


static refalrts::FnResult func_gen_AddBacktrackStackAllocationCommand_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AddBacktrackStackAllocationCommand:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddBacktrackStackAllocationCommand:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & AddBacktrackStackAllocationCommand:1/4 0/5 e.Commands$a/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Commands$a as range 6
    //DEBUG: e.Commands$a: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AddBacktrackStackAllocationCommand:1/4 0/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands$a/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddBacktrackStackAllocationCommand:1/4 s.Depth/5 e.Commands$a/2 >/1
  // closed e.Commands$a as range 2
  //DEBUG: s.Depth: 5
  //DEBUG: e.Commands$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReserveBacktrackStack/4 AsIs: s.Depth/5 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Commands$a/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdReserveBacktrackStack]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddBacktrackStackAllocationCommand_B1("AddBacktrackStackAllocationCommand:1", COOKIE1_, COOKIE2_, func_gen_AddBacktrackStackAllocationCommand_B1);


static refalrts::FnResult func_AddBacktrackStackAllocationCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & AddBacktrackStackAllocationCommand/4 e.Commands/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands as range 2
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddBacktrackStackAllocationCommand:1/4 } </5 & DoMapAccum@3/6 0/7 (/8 )/9 Tile{ AsIs: e.Commands/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z3]);
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_AddBacktrackStackAllocationCommand_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddBacktrackStackAllocationCommand("AddBacktrackStackAllocationCommand", COOKIE1_, COOKIE2_, func_AddBacktrackStackAllocationCommand);


static refalrts::FnResult func_AddFunctionNameComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & AddFunctionNameComment/4 (/7 e.Name/5 )/8 e.RASLCommands/2 >/1
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
  // closed e.Name as range 5
  // closed e.RASLCommands as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.RASLCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: (/7 AsIs: e.Name/5 AsIs: )/8 AsIs: e.RASLCommands/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddFunctionNameComment("AddFunctionNameComment", COOKIE1_, COOKIE2_, func_AddFunctionNameComment);


static refalrts::FnResult func_gen_PrepareCommonRASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & PrepareCommonRASL=2/4 s.FunctionCount/5 (/8 e.FuncScopeClass/6 )/9 (/12 e.Functions/10 )/13 s.IdentCount/14 (/17 e.Idents/15 )/18 (/21 e.Items/19 )/22 (/25 # CmdStringArray/27 s.StringCount/28 e.Strings/23 )/26 e.RASL-Commands$a/2 >/1
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
  // closed e.FuncScopeClass as range 6
  // closed e.Functions as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  context[27] = refalrts::ident_left( identifiers[ident_CmdStringArray], context[23], context[24] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents as range 15
  // closed e.Items as range 19
  // closed e.RASL-Commands$a as range 2
  if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Strings as range 23
  //DEBUG: s.FunctionCount: 5
  //DEBUG: e.FuncScopeClass: 6
  //DEBUG: e.Functions: 10
  //DEBUG: s.IdentCount: 14
  //DEBUG: e.Idents: 15
  //DEBUG: e.Items: 19
  //DEBUG: e.RASL-Commands$a: 2
  //DEBUG: s.StringCount: 28
  //DEBUG: e.Strings: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdFuncArray/4 AsIs: s.FunctionCount/5 } </29 & SetFunctionsScopeClass=1/30 </31 & DoMapAccum@6/32 Tile{ AsIs: (/8 AsIs: e.FuncScopeClass/6 AsIs: )/9 AsIs: (/12 } )/33 Tile{ AsIs: e.Functions/10 } >/34 >/35 Tile{ AsIs: )/18 AsIs: (/21 } Tile{ HalfReuse: # CmdIdentArray/13 AsIs: s.IdentCount/14 } Tile{ AsIs: e.Idents/15 } Tile{ AsIs: )/22 AsIs: (/25 AsIs: # CmdStringArray/27 AsIs: s.StringCount/28 AsIs: e.Strings/23 AsIs: )/26 } Tile{ AsIs: (/17 } # RASL/36 Tile{ AsIs: e.RASL-Commands$a/2 } )/37 (/38 # Items/39 Tile{ AsIs: e.Items/19 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_gen_SetFunctionsScopeClass_A1]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoMapAccum_Z6]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_RASL]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Items]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdFuncArray]);
  refalrts::reinit_ident(context[13], identifiers[ident_CmdIdentArray]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[38], context[1] );
  refalrts::link_brackets( context[17], context[37] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[0], context[18] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[12], context[33] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[37], context[39] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A2("PrepareCommonRASL=2", COOKIE1_, COOKIE2_, func_gen_PrepareCommonRASL_A2);


static refalrts::FnResult func_gen_PrepareCommonRASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & PrepareCommonRASL=1/4 s.FunctionCount/5 (/8 e.FuncScopeClass/6 )/9 (/12 e.Functions/10 )/13 s.IdentCount/14 (/17 e.Idents/15 )/18 (/21 e.RASL-Commands/19 )/22 e.Items/2 >/1
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
  // closed e.FuncScopeClass as range 6
  // closed e.Functions as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Idents as range 15
  // closed e.RASL-Commands as range 19
  // closed e.Items as range 2
  //DEBUG: s.FunctionCount: 5
  //DEBUG: e.FuncScopeClass: 6
  //DEBUG: e.Functions: 10
  //DEBUG: s.IdentCount: 14
  //DEBUG: e.Idents: 15
  //DEBUG: e.RASL-Commands: 19
  //DEBUG: e.Items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareCommonRASL=2/4 AsIs: s.FunctionCount/5 AsIs: (/8 AsIs: e.FuncScopeClass/6 AsIs: )/9 AsIs: (/12 AsIs: e.Functions/10 AsIs: )/13 AsIs: s.IdentCount/14 AsIs: (/17 AsIs: e.Idents/15 AsIs: )/18 AsIs: (/21 } Tile{ AsIs: e.Items/2 } Tile{ AsIs: )/22 } </23 & OutlineStrings/24 (/25 0/26 )/27 Tile{ AsIs: e.RASL-Commands/19 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_OutlineStrings]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_number(vm, context[26], 0UL);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareCommonRASL_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[25], context[27] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A1("PrepareCommonRASL=1", COOKIE1_, COOKIE2_, func_gen_PrepareCommonRASL_A1);


static refalrts::FnResult func_PrepareCommonRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & PrepareCommonRASL/4 (/7 e.FuncScopeClass/5 )/8 (/11 s.FunctionCount/17 e.Functions/9 )/12 (/15 s.IdentCount/18 e.Idents/13 )/16 e.Definitions/2 >/1
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
  // closed e.FuncScopeClass as range 5
  // closed e.Definitions as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions as range 9
  if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents as range 13
  //DEBUG: e.FuncScopeClass: 5
  //DEBUG: e.Definitions: 2
  //DEBUG: s.FunctionCount: 17
  //DEBUG: e.Functions: 9
  //DEBUG: s.IdentCount: 18
  //DEBUG: e.Idents: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FunctionCount/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & PrepareCommonRASL=1/0 HalfReuse: s.FunctionCount17 /4 AsIs: (/7 AsIs: e.FuncScopeClass/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Functions/9 } )/20 Tile{ AsIs: s.IdentCount/18 } (/21 Tile{ AsIs: e.Idents/13 } )/22 </23 & DoMapAccum@5/24 (/25 Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: )/16 AsIs: e.Definitions/2 AsIs: >/1 } >/26 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoMapAccum_Z5]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::reinit_name(context[0], functions[efunc_gen_PrepareCommonRASL_A1]);
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[25], context[12] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareCommonRASL("PrepareCommonRASL", COOKIE1_, COOKIE2_, func_PrepareCommonRASL);


static refalrts::FnResult func_GlueFunctionRASLs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GlueFunctionRASLs/4 e.Definitions/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Definitions as range 2
  //DEBUG: e.Definitions: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoMapAccum@5/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Definitions/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z5]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueFunctionRASLs("GlueFunctionRASLs", COOKIE1_, COOKIE2_, func_GlueFunctionRASLs);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & SetFunctionsScopeClass=1/4 (/7 e.FuncScopeClass-NotCalledFromRASL/5 )/8 e.Functions$a/2 >/1
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
  // closed e.FuncScopeClass-NotCalledFromRASL as range 5
  // closed e.Functions$a as range 2
  //DEBUG: e.FuncScopeClass-NotCalledFromRASL: 5
  //DEBUG: e.Functions$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1/4 (/7 e.FuncScopeClass-NotCalledFromRASL/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Functions$a/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1("SetFunctionsScopeClass=1", COOKIE1_, COOKIE2_, func_gen_SetFunctionsScopeClass_A1);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & SetFunctionsScopeClass=1\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.new1/5 )/8 (/11 s.new2/13 e.new3/9 )/12 >/1
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
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 9
  do {
    // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls-B/18 (/24 s.ScopeClass/28 e.FuncName/26 )/25 e.Decls-E/20 )/8 (/11 s.FuncId/13 e.FuncName/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.FuncName as range 16
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[20] = context[14];
      context[21] = context[15];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_right( vm, context[26], context[27], context[16], context[17], context[22], context[23] ) )
        continue;
      // closed e.Decls-E as range 20
      if( ! refalrts::svar_left( context[28], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      //DEBUG: s.FuncId: 13
      //DEBUG: e.FuncName: 16
      //DEBUG: e.Decls-B: 18
      //DEBUG: e.Decls-E: 20
      //DEBUG: s.ScopeClass: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & SetFunctionsScopeClass=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 s.FuncId/13 e.FuncName/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Decls-B/18 } Tile{ AsIs: e.Decls-E/20 } Tile{ AsIs: )/12 } Tile{ AsIs: (/24 AsIs: s.ScopeClass/28 AsIs: e.FuncName/26 AsIs: )/25 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls/5 )/8 (/11 s.FuncId/13 e.FuncName/9 )/12 >/1
  // closed e.Decls as range 5
  // closed e.FuncName as range 9
  //DEBUG: s.FuncId: 13
  //DEBUG: e.Decls: 5
  //DEBUG: e.FuncName: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1\1/4 {REMOVED TILE} s.FuncId/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Decls/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # GN-Entry/12 } Tile{ AsIs: e.FuncName/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_ident(context[12], identifiers[ident_GNm_Entry]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1L1("SetFunctionsScopeClass=1\\1", COOKIE1_, COOKIE2_, func_gen_SetFunctionsScopeClass_A1L1);


static refalrts::FnResult func_SetFunctionsScopeClass(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & SetFunctionsScopeClass/4 (/7 e.FuncScopeClass/5 )/8 e.Functions/2 >/1
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
  // closed e.FuncScopeClass as range 5
  // closed e.Functions as range 2
  //DEBUG: e.FuncScopeClass: 5
  //DEBUG: e.Functions: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & SetFunctionsScopeClass=1/10 Tile{ AsIs: </0 Reuse: & DoMapAccum@6/4 AsIs: (/7 AsIs: e.FuncScopeClass/5 AsIs: )/8 } (/11 )/12 Tile{ AsIs: e.Functions/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_SetFunctionsScopeClass_A1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetFunctionsScopeClass("SetFunctionsScopeClass", COOKIE1_, COOKIE2_, func_SetFunctionsScopeClass);


static refalrts::FnResult func_OutlineStrings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & OutlineStrings/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OutlineStrings/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & OutlineStrings/4 (/7 s.new4/13 e.new5/9 )/8 e.new3/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new3 as range 11
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    // closed e.new5 as range 9
    do {
      // </0 & OutlineStrings/4 (/7 s.NextString/13 e.Strings/14 )/8 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Strings as range 14
      //DEBUG: s.NextString: 13
      //DEBUG: e.Strings: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdStringArray/7 AsIs: s.NextString/13 AsIs: e.Strings/14 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdStringArray]);
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.new9/13 e.new10/14 )/8 e.new6/16 (/20 s.new7/22 e.new8/18 )/21 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.new10 as range 14
    // closed e.new6 as range 16
    if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
      continue;
    // closed e.new8 as range 18
    do {
      // </0 & OutlineStrings/4 (/7 s.new15/13 e.new16/23 )/8 e.new11/25 (/20 # CmdCreateElem/22 s.new12/29 s.new13/30 # ElString/31 e.new14/27 )/21 >/1
      context[23] = context[14];
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[22] ) )
        continue;
      // closed e.new16 as range 23
      // closed e.new11 as range 25
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      if( ! refalrts::svar_left( context[30], context[27], context[28] ) )
        continue;
      context[31] = refalrts::ident_left( identifiers[ident_ElString], context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.new14 as range 27
      do {
        // </0 & OutlineStrings/4 (/7 s.NextStringId/13 e.Strings-B/38 (/44 s.Id/48 e.String/46 )/45 e.Strings-E/40 )/8 e.Commands/34 (/20 # CmdCreateElem/22 s.CreateMode/29 s.ElemNo/30 # ElString/31 e.String/36 )/21 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[27];
        context[37] = context[28];
        // closed e.Commands as range 34
        // closed e.String as range 36
        context[38] = 0;
        context[39] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[40] = context[32];
          context[41] = context[33];
          context[42] = 0;
          context[43] = 0;
          context[44] = refalrts::brackets_left( context[42], context[43], context[40], context[41] );
          if( ! context[44] )
            continue;
          refalrts::bracket_pointers(context[44], context[45]);
          if( ! refalrts::repeated_evar_right( vm, context[46], context[47], context[36], context[37], context[42], context[43] ) )
            continue;
          // closed e.Strings-E as range 40
          if( ! refalrts::svar_left( context[48], context[42], context[43] ) )
            continue;
          if( ! refalrts::empty_seq( context[42], context[43] ) )
            continue;
          //DEBUG: s.NextStringId: 13
          //DEBUG: s.CreateMode: 29
          //DEBUG: s.ElemNo: 30
          //DEBUG: e.Commands: 34
          //DEBUG: e.String: 36
          //DEBUG: e.Strings-B: 38
          //DEBUG: e.Strings-E: 40
          //DEBUG: s.Id: 48

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.String/36 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: s.NextStringId/13 AsIs: e.Strings-B/38 AsIs: (/44 AsIs: s.Id/48 AsIs: e.String/46 AsIs: )/45 AsIs: e.Strings-E/40 AsIs: )/8 AsIs: e.Commands/34 HalfReuse: >/20 HalfReuse: (/22 } # CmdCreateElem/49 Tile{ AsIs: s.CreateMode/29 AsIs: s.ElemNo/30 AsIs: # ElString/31 } Tile{ HalfReuse: s.Id48 /21 HalfReuse: )/1 ]] }
          refalrts::alloc_ident(vm, context[49], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_close_call(context[20]);
          refalrts::reinit_open_bracket(context[22]);
          refalrts::reinit_svar( context[21], context[48] );
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[22], context[1] );
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[44], context[45] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[21];
          res = refalrts::splice_evar( res, context[29], context[31] );
          res = refalrts::splice_elem( res, context[49] );
          refalrts::splice_to_freelist_open( vm, context[22], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[38], context[39], context[32], context[33] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineStrings/4 (/7 s.NextStringId/13 e.Strings/32 )/8 e.Commands/34 (/20 # CmdCreateElem/22 s.CreateMode/29 s.ElemNo/30 # ElString/31 e.String/36 )/21 >/1
      context[32] = context[23];
      context[33] = context[24];
      context[34] = context[25];
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[28];
      // closed e.Strings as range 32
      // closed e.Commands as range 34
      // closed e.String as range 36
      //DEBUG: s.NextStringId: 13
      //DEBUG: s.CreateMode: 29
      //DEBUG: s.ElemNo: 30
      //DEBUG: e.Strings: 32
      //DEBUG: e.Commands: 34
      //DEBUG: e.String: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 } </38 & Add/39 1/40 s.NextStringId/13/41 >/42 Tile{ AsIs: e.Strings/32 } (/43 Tile{ AsIs: s.NextStringId/13 } Tile{ AsIs: e.String/36 } Tile{ AsIs: )/8 } )/44 Tile{ AsIs: e.Commands/34 } >/45 Tile{ AsIs: (/20 AsIs: # CmdCreateElem/22 AsIs: s.CreateMode/29 AsIs: s.ElemNo/30 AsIs: # ElString/31 } Tile{ HalfReuse: s.NextStringId13 /21 HalfReuse: )/1 ]] }
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[40], 1UL);
      refalrts::copy_stvar(vm, context[41], context[13]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::reinit_svar( context[21], context[13] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[20], context[1] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[43], context[8] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[21];
      res = refalrts::splice_evar( res, context[20], context[31] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.new14/13 e.new15/23 )/8 e.new11/25 (/20 # CmdVariableDebugTable/22 e.new12/27 s.new13/29 )/21 >/1
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[16];
    context[26] = context[17];
    context[27] = context[18];
    context[28] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[22] ) )
      continue;
    // closed e.new15 as range 23
    // closed e.new11 as range 25
    if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
      continue;
    // closed e.new12 as range 27
    do {
      // </0 & OutlineStrings/4 (/7 s.NextStringId/13 e.Strings-B/36 (/42 s.Id/46 e.VarName/44 )/43 e.Strings-E/38 )/8 e.Commands/32 (/20 # CmdVariableDebugTable/22 e.VarName/34 s.Offset/29 )/21 >/1
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[25];
      context[33] = context[26];
      context[34] = context[27];
      context[35] = context[28];
      // closed e.Commands as range 32
      // closed e.VarName as range 34
      context[36] = 0;
      context[37] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[38] = context[30];
        context[39] = context[31];
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[38], context[39] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_right( vm, context[44], context[45], context[34], context[35], context[40], context[41] ) )
          continue;
        // closed e.Strings-E as range 38
        if( ! refalrts::svar_left( context[46], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        //DEBUG: s.NextStringId: 13
        //DEBUG: s.Offset: 29
        //DEBUG: e.Commands: 32
        //DEBUG: e.VarName: 34
        //DEBUG: e.Strings-B: 36
        //DEBUG: e.Strings-E: 38
        //DEBUG: s.Id: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.VarName/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: s.NextStringId/13 AsIs: e.Strings-B/36 AsIs: (/42 AsIs: s.Id/46 AsIs: e.VarName/44 AsIs: )/43 AsIs: e.Strings-E/38 AsIs: )/8 AsIs: e.Commands/32 HalfReuse: >/20 HalfReuse: (/22 } # CmdVariableDebugTable/47 Tile{ HalfReuse: s.Id46 /1 } Tile{ AsIs: s.Offset/29 AsIs: )/21 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdVariableDebugTable]);
        refalrts::reinit_close_call(context[20]);
        refalrts::reinit_open_bracket(context[22]);
        refalrts::reinit_svar( context[1], context[46] );
        refalrts::link_brackets( context[22], context[21] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[29], context[21] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_elem( res, context[47] );
        refalrts::splice_to_freelist_open( vm, context[22], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[36], context[37], context[30], context[31] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.NextStringId/13 e.Strings/30 )/8 e.Commands/32 (/20 # CmdVariableDebugTable/22 e.VarName/34 s.Offset/29 )/21 >/1
    context[30] = context[23];
    context[31] = context[24];
    context[32] = context[25];
    context[33] = context[26];
    context[34] = context[27];
    context[35] = context[28];
    // closed e.Strings as range 30
    // closed e.Commands as range 32
    // closed e.VarName as range 34
    //DEBUG: s.NextStringId: 13
    //DEBUG: s.Offset: 29
    //DEBUG: e.Strings: 30
    //DEBUG: e.Commands: 32
    //DEBUG: e.VarName: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 } </36 & Add/37 1/38 Tile{ AsIs: s.NextStringId/13 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Strings/30 } (/39 s.NextStringId/13/40 Tile{ AsIs: e.VarName/34 } )/41 Tile{ AsIs: )/8 AsIs: e.Commands/32 HalfReuse: >/20 HalfReuse: (/22 } # CmdVariableDebugTable/42 s.NextStringId/13/43 Tile{ AsIs: s.Offset/29 AsIs: )/21 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[38], 1UL);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_stvar(vm, context[40], context[13]);
    refalrts::alloc_close_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_CmdVariableDebugTable]);
    refalrts::copy_stvar(vm, context[43], context[13]);
    refalrts::reinit_close_call(context[20]);
    refalrts::reinit_open_bracket(context[22]);
    refalrts::link_brackets( context[22], context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[39], context[41] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[36] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[21] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[8], context[22] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[36], context[38] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineStrings/4 (/7 e.Strings/5 )/8 e.Commands/2 t.OtherCommand/9 >/1
  // closed e.Strings as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: e.Strings: 5
  //DEBUG: t.OtherCommand: 9
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: e.Strings/5 AsIs: )/8 } Tile{ AsIs: e.Commands/2 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand/9 } Tile{ ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineStrings("OutlineStrings", COOKIE1_, COOKIE2_, func_OutlineStrings);


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


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
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
    // </0 & DoMapAccum@1/4 s.new5/5 t.new6/6 (/10 e.new9/12 )/11 t.new7/16 e.new8/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.new9 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.new8 as range 14
    do {
      // </0 & DoMapAccum@1/4 s.new10/5 s.new11/6 (/10 e.new14/18 )/11 t.new12/16 e.new13/20 >/1
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      if( ! refalrts::svar_term( context[6], context[6] ) )
        continue;
      // closed e.new14 as range 18
      // closed e.new13 as range 20
      do {
        // </0 & DoMapAccum@1/4 s.new15/5 s.new16/6 (/10 e.new21/22 )/11 (/16 # Function-ToRASL/28 s.new17/29 (/32 e.new18/30 )/33 e.new19/26 )/17 e.new20/24 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        context[26] = 0;
        context[27] = 0;
        if( ! refalrts::brackets_term( context[26], context[27], context[16] ) )
          continue;
        context[28] = refalrts::ident_left( identifiers[ident_Functionm_ToRASL], context[26], context[27] );
        if( ! context[28] )
          continue;
        // closed e.new21 as range 22
        // closed e.new20 as range 24
        if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
          continue;
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        // closed e.new18 as range 30
        // closed e.new19 as range 26
        do {
          // </0 & DoMapAccum@1/4 # DebugInfo/5 s.NextLabel/6 (/10 e.Scanned/34 )/11 (/16 # Function-ToRASL/28 s.ScopeClass/29 (/32 e.3/36 )/33 e.2/38 )/17 e.Tail/40 >/1
          context[34] = context[22];
          context[35] = context[23];
          context[36] = context[30];
          context[37] = context[31];
          context[38] = context[26];
          context[39] = context[27];
          context[40] = context[24];
          context[41] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[5] ) )
            continue;
          // closed e.Scanned as range 34
          // closed e.3 as range 36
          // closed e.2 as range 38
          // closed e.Tail as range 40
          //DEBUG: s.NextLabel: 6
          //DEBUG: s.ScopeClass: 29
          //DEBUG: e.Scanned: 34
          //DEBUG: e.3: 36
          //DEBUG: e.2: 38
          //DEBUG: e.Tail: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </42 & DoMapAccum$1=1@1/43 (/44 Tile{ AsIs: e.Scanned/34 } Tile{ AsIs: )/17 } (/45 Tile{ AsIs: e.Tail/40 } Tile{ AsIs: )/11 HalfReuse: </16 HalfReuse: & PrepareFunctionsRASL$1=3/28 AsIs: s.ScopeClass/29 AsIs: (/32 AsIs: e.3/36 AsIs: )/33 } s.NextLabel/6/46 </47 & ConvertInterpretCommands/48 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/5 AsIs: s.NextLabel/6 HalfReuse: >/10 } Tile{ AsIs: e.2/38 } >/49 >/50 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::alloc_name(vm, context[43], functions[efunc_gen_DoMapAccum_S1A1Z1]);
          refalrts::alloc_open_bracket(vm, context[44]);
          refalrts::alloc_open_bracket(vm, context[45]);
          refalrts::copy_stvar(vm, context[46], context[6]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_ConvertInterpretCommands]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::alloc_close_call(vm, context[50]);
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[28], functions[efunc_gen_PrepareFunctionsRASL_S1A3]);
          refalrts::update_name(context[4], functions[efunc_Add]);
          refalrts::reinit_number(context[5], 1UL);
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[45], context[11] );
          refalrts::link_brackets( context[44], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[0], context[10] );
          res = refalrts::splice_evar( res, context[46], context[48] );
          res = refalrts::splice_evar( res, context[11], context[33] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_elem( res, context[45] );
          res = refalrts::splice_elem( res, context[17] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[42], context[44] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 # NoDebugInfo/5 s.NextLabel/6 (/10 e.Scanned/34 )/11 (/16 # Function-ToRASL/28 s.ScopeClass/29 (/32 e.3/36 )/33 e.2/38 )/17 e.Tail/40 >/1
          context[34] = context[22];
          context[35] = context[23];
          context[36] = context[30];
          context[37] = context[31];
          context[38] = context[26];
          context[39] = context[27];
          context[40] = context[24];
          context[41] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_NoDebugInfo], context[5] ) )
            continue;
          // closed e.Scanned as range 34
          // closed e.3 as range 36
          // closed e.2 as range 38
          // closed e.Tail as range 40
          //DEBUG: s.NextLabel: 6
          //DEBUG: s.ScopeClass: 29
          //DEBUG: e.Scanned: 34
          //DEBUG: e.3: 36
          //DEBUG: e.2: 38
          //DEBUG: e.Tail: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 HalfReuse: (/5 } Tile{ AsIs: e.Scanned/34 } Tile{ AsIs: )/17 } (/42 Tile{ AsIs: e.Tail/40 } Tile{ AsIs: )/11 HalfReuse: </16 HalfReuse: & PrepareFunctionsRASL$1=1/28 AsIs: s.ScopeClass/29 AsIs: (/32 AsIs: e.3/36 AsIs: )/33 } Tile{ AsIs: s.NextLabel/6 HalfReuse: </10 } & RemoveDebugInfoRec/43 Tile{ AsIs: e.2/38 } >/44 >/45 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[42]);
          refalrts::alloc_name(vm, context[43], functions[efunc_RemoveDebugInfoRec]);
          refalrts::alloc_close_call(vm, context[44]);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_open_bracket(context[5]);
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[28], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
          refalrts::reinit_open_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[44] );
          refalrts::push_stack( vm, context[10] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[42], context[11] );
          refalrts::link_brackets( context[5], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_evar( res, context[6], context[10] );
          res = refalrts::splice_evar( res, context[11], context[33] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_elem( res, context[17] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 s.DebugInfo/5 s.NextLabel/6 (/10 e.Scanned/34 )/11 (/16 # Function-ToRASL/28 s.ScopeClass/29 (/32 e.3/36 )/33 e.2/38 )/17 e.Tail/40 >/1
        context[34] = context[22];
        context[35] = context[23];
        context[36] = context[30];
        context[37] = context[31];
        context[38] = context[26];
        context[39] = context[27];
        context[40] = context[24];
        context[41] = context[25];
        // closed e.Scanned as range 34
        // closed e.3 as range 36
        // closed e.2 as range 38
        // closed e.Tail as range 40
        //DEBUG: s.DebugInfo: 5
        //DEBUG: s.NextLabel: 6
        //DEBUG: s.ScopeClass: 29
        //DEBUG: e.Scanned: 34
        //DEBUG: e.3: 36
        //DEBUG: e.2: 38
        //DEBUG: e.Tail: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 AsIs: s.DebugInfo/5 } (/42 Tile{ AsIs: e.Scanned/34 } Tile{ AsIs: )/17 } (/43 Tile{ AsIs: e.Tail/40 } Tile{ AsIs: )/11 HalfReuse: </16 HalfReuse: & PrepareFunctionsRASL$1=1/28 AsIs: s.ScopeClass/29 AsIs: (/32 AsIs: e.3/36 AsIs: )/33 } Tile{ AsIs: s.NextLabel/6 HalfReuse: </10 } & RemoveDebugInfo*2/44 s.DebugInfo/5/45 Tile{ AsIs: e.2/38 } >/46 >/47 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_gen_RemoveDebugInfo_D2]);
        refalrts::copy_stvar(vm, context[45], context[5]);
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z3]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[28], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
        refalrts::reinit_open_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[10] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::link_brackets( context[43], context[11] );
        refalrts::link_brackets( context[42], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[6], context[10] );
        res = refalrts::splice_evar( res, context[11], context[33] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_elem( res, context[17] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 s.DebugInfo/5 s.NextLabel/6 (/10 e.Scanned/22 )/11 t.Next/16 e.Tail/24 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      // closed e.Scanned as range 22
      // closed e.Tail as range 24
      //DEBUG: t.Next: 16
      //DEBUG: s.DebugInfo: 5
      //DEBUG: s.NextLabel: 6
      //DEBUG: e.Scanned: 22
      //DEBUG: e.Tail: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: s.DebugInfo/5 AsIs: s.NextLabel/6 AsIs: (/10 } Tile{ AsIs: e.Scanned/22 } Tile{ AsIs: t.Next/16 } Tile{ AsIs: )/11 } Tile{ AsIs: e.Tail/24 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 s.DebugInfo/5 t.Acc/6 (/10 e.Scanned/18 )/11 t.Next/16 e.Tail/20 >/1
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    // closed e.Scanned as range 18
    // closed e.Tail as range 20
    //DEBUG: t.Acc: 6
    //DEBUG: t.Next: 16
    //DEBUG: s.DebugInfo: 5
    //DEBUG: e.Scanned: 18
    //DEBUG: e.Tail: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 AsIs: s.DebugInfo/5 } Tile{ AsIs: (/10 AsIs: e.Scanned/18 AsIs: )/11 } (/22 Tile{ AsIs: e.Tail/20 } )/23 </24 & PrepareFunctionsRASL*2/25 s.DebugInfo/5/26 Tile{ AsIs: t.Acc/6 } Tile{ AsIs: t.Next/16 } >/27 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_PrepareFunctionsRASL_D2]);
    refalrts::copy_stvar(vm, context[26], context[5]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 s.DebugInfo/5 t.Acc/6 (/10 e.Scanned/12 )/11 >/1
    context[12] = context[8];
    context[13] = context[9];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 12
    //DEBUG: t.Acc: 6
    //DEBUG: s.DebugInfo: 5
    //DEBUG: e.Scanned: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.DebugInfo/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@1/4 s.DebugInfo/5 t.acc/6 (/10 e.scanned/8 )/11 e.items/2 >/1
  // closed e.scanned as range 8
  // closed e.items as range 2
  //DEBUG: t.acc: 6
  //DEBUG: s.DebugInfo: 5
  //DEBUG: e.scanned: 8
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } (/12 & PrepareFunctionsRASL@0/13 Tile{ AsIs: s.DebugInfo/5 } )/14 Tile{ AsIs: t.acc/6 AsIs: (/10 AsIs: e.scanned/8 AsIs: )/11 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 71 elems
  refalrts::Iter context[71];
  refalrts::zeros( context, 71 );
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
      // </0 & DoMapAccum@2/4 (/5 e.new8/21 )/6 (/9 e.new12/17 )/10 (/15 s.new9/25 e.new10/23 )/16 e.new11/19 >/1
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
      // closed e.new8 as range 21
      // closed e.new12 as range 17
      // closed e.new11 as range 19
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new10 as range 23
      do {
        // </0 & DoMapAccum@2/4 (/5 e./26 )/6 (/9 e.Scanned/28 )/10 (/15 # UnitName/25 e.1/30 )/16 e.Tail/32 >/1
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_UnitName], context[25] ) )
          continue;
        // closed e. as range 26
        // closed e.Scanned as range 28
        // closed e.1 as range 30
        // closed e.Tail as range 32
        //DEBUG: e.: 26
        //DEBUG: e.Scanned: 28
        //DEBUG: e.1: 30
        //DEBUG: e.Tail: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/28 HalfReuse: (/10 HalfReuse: # UnitName/15 } Tile{ AsIs: e.1/30 } Tile{ HalfReuse: )/25 } Tile{ AsIs: )/16 AsIs: e.Tail/32 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_UnitName]);
        refalrts::reinit_close_bracket(context[25]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[16] );
        refalrts::link_brackets( context[10], context[25] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/5 e.new13/26 )/6 (/9 e.new18/28 )/10 (/15 s.new14/25 t.new15/34 e.new16/30 )/16 e.new17/32 >/1
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[19];
      context[33] = context[20];
      // closed e.new13 as range 26
      // closed e.new18 as range 28
      // closed e.new17 as range 32
      context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.new16 as range 30
      do {
        // </0 & DoMapAccum@2/4 (/5 e.new19/36 )/6 (/9 e.new24/38 )/10 (/15 s.new20/25 s.new21/34 e.new22/40 )/16 e.new23/42 >/1
        context[36] = context[26];
        context[37] = context[27];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[30];
        context[41] = context[31];
        context[42] = context[32];
        context[43] = context[33];
        if( ! refalrts::svar_term( context[34], context[34] ) )
          continue;
        // closed e.new19 as range 36
        // closed e.new24 as range 38
        // closed e.new22 as range 40
        // closed e.new23 as range 42
        do {
          // </0 & DoMapAccum@2/4 (/5 e.new25/44 )/6 (/9 e.new31/46 )/10 (/15 s.new26/25 s.new27/34 (/54 e.new28/52 )/55 e.new29/48 )/16 e.new30/50 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          context[50] = context[42];
          context[51] = context[43];
          context[52] = 0;
          context[53] = 0;
          context[54] = refalrts::brackets_left( context[52], context[53], context[48], context[49] );
          if( ! context[54] )
            continue;
          refalrts::bracket_pointers(context[54], context[55]);
          // closed e.new25 as range 44
          // closed e.new31 as range 46
          // closed e.new28 as range 52
          // closed e.new29 as range 48
          // closed e.new30 as range 50
          do {
            // </0 & DoMapAccum@2/4 (/5 e./56 )/6 (/9 e.Scanned/58 )/10 (/15 # Function-ToRASL/25 s.ScopeClass/34 (/54 e.4/60 )/55 e.3/62 )/16 e.Tail/64 >/1
            context[56] = context[44];
            context[57] = context[45];
            context[58] = context[46];
            context[59] = context[47];
            context[60] = context[52];
            context[61] = context[53];
            context[62] = context[48];
            context[63] = context[49];
            context[64] = context[50];
            context[65] = context[51];
            if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[25] ) )
              continue;
            // closed e. as range 56
            // closed e.Scanned as range 58
            // closed e.4 as range 60
            // closed e.3 as range 62
            // closed e.Tail as range 64
            //DEBUG: s.ScopeClass: 34
            //DEBUG: e.: 56
            //DEBUG: e.Scanned: 58
            //DEBUG: e.4: 60
            //DEBUG: e.3: 62
            //DEBUG: e.Tail: 64

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./56 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.4/60/66 )/68 Tile{ AsIs: )/10 } (/69 Tile{ AsIs: e.Scanned/58 } Tile{ AsIs: (/15 AsIs: # Function-ToRASL/25 AsIs: s.ScopeClass/34 AsIs: (/54 AsIs: e.4/60 AsIs: )/55 AsIs: e.3/62 AsIs: )/16 } )/70 Tile{ AsIs: e.Tail/64 } Tile{ AsIs: >/1 ]] }
            refalrts::copy_evar(vm, context[66], context[67], context[60], context[61]);
            refalrts::alloc_close_bracket(vm, context[68]);
            refalrts::alloc_open_bracket(vm, context[69]);
            refalrts::alloc_close_bracket(vm, context[70]);
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_svar( context[9], context[34] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[69], context[70] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[54], context[55] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[68] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[64], context[65] );
            res = refalrts::splice_elem( res, context[70] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_elem( res, context[69] );
            res = refalrts::splice_elem( res, context[10] );
            res = refalrts::splice_elem( res, context[68] );
            res = refalrts::splice_evar( res, context[66], context[67] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/5 e./56 )/6 (/9 e.Scanned/58 )/10 (/15 # Function-ToNative/25 s.ScopeClass/34 (/54 e.4/60 )/55 e.3/62 )/16 e.Tail/64 >/1
            context[56] = context[44];
            context[57] = context[45];
            context[58] = context[46];
            context[59] = context[47];
            context[60] = context[52];
            context[61] = context[53];
            context[62] = context[48];
            context[63] = context[49];
            context[64] = context[50];
            context[65] = context[51];
            if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[25] ) )
              continue;
            // closed e. as range 56
            // closed e.Scanned as range 58
            // closed e.4 as range 60
            // closed e.3 as range 62
            // closed e.Tail as range 64
            //DEBUG: s.ScopeClass: 34
            //DEBUG: e.: 56
            //DEBUG: e.Scanned: 58
            //DEBUG: e.4: 60
            //DEBUG: e.3: 62
            //DEBUG: e.Tail: 64

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3/62 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./56 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } Tile{ AsIs: e.4/60 } Tile{ AsIs: )/55 } Tile{ AsIs: )/10 } Tile{ AsIs: (/54 } Tile{ AsIs: e.Scanned/58 } Tile{ AsIs: (/15 Reuse: # CmdNativeFuncDescr/25 AsIs: s.ScopeClass/34 } e.4/60/66 )/68 Tile{ AsIs: )/16 AsIs: e.Tail/64 AsIs: >/1 ]] }
            refalrts::copy_evar(vm, context[66], context[67], context[60], context[61]);
            refalrts::alloc_close_bracket(vm, context[68]);
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_svar( context[9], context[34] );
            refalrts::update_ident(context[25], identifiers[ident_CmdNativeFuncDescr]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[54], context[16] );
            refalrts::link_brackets( context[15], context[68] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[55] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_elem( res, context[68] );
            res = refalrts::splice_evar( res, context[66], context[67] );
            res = refalrts::splice_evar( res, context[15], context[34] );
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_elem( res, context[54] );
            res = refalrts::splice_elem( res, context[10] );
            res = refalrts::splice_elem( res, context[55] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/5 e./56 )/6 (/9 e.Scanned/58 )/10 (/15 # CmdNativeFunction/25 s.ScopeClass/34 (/54 e.4/60 )/55 t.2/66 e.5/62 )/16 e.Tail/64 >/1
            context[56] = context[44];
            context[57] = context[45];
            context[58] = context[46];
            context[59] = context[47];
            context[60] = context[52];
            context[61] = context[53];
            context[62] = context[48];
            context[63] = context[49];
            context[64] = context[50];
            context[65] = context[51];
            if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[25] ) )
              continue;
            // closed e. as range 56
            // closed e.Scanned as range 58
            // closed e.4 as range 60
            // closed e.Tail as range 64
            context[67] = refalrts::tvar_left( context[66], context[62], context[63] );
            if( ! context[67] )
              continue;
            // closed e.5 as range 62
            //DEBUG: s.ScopeClass: 34
            //DEBUG: e.: 56
            //DEBUG: e.Scanned: 58
            //DEBUG: e.4: 60
            //DEBUG: e.Tail: 64
            //DEBUG: t.2: 66
            //DEBUG: e.5: 62

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.2/66 e.5/62 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./56 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } Tile{ AsIs: e.4/60 } Tile{ AsIs: )/55 } Tile{ AsIs: )/10 } Tile{ AsIs: (/54 } Tile{ AsIs: e.Scanned/58 } Tile{ AsIs: (/15 Reuse: # CmdNativeFuncDescr/25 AsIs: s.ScopeClass/34 } e.4/60/68 )/70 Tile{ AsIs: )/16 AsIs: e.Tail/64 AsIs: >/1 ]] }
            refalrts::copy_evar(vm, context[68], context[69], context[60], context[61]);
            refalrts::alloc_close_bracket(vm, context[70]);
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_svar( context[9], context[34] );
            refalrts::update_ident(context[25], identifiers[ident_CmdNativeFuncDescr]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[54], context[16] );
            refalrts::link_brackets( context[15], context[70] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[55] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_elem( res, context[70] );
            res = refalrts::splice_evar( res, context[68], context[69] );
            res = refalrts::splice_evar( res, context[15], context[34] );
            res = refalrts::splice_evar( res, context[58], context[59] );
            res = refalrts::splice_elem( res, context[54] );
            res = refalrts::splice_elem( res, context[10] );
            res = refalrts::splice_elem( res, context[55] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 (/5 e./56 )/6 (/9 e.Scanned/58 )/10 (/15 # CmdMetatable/25 s.ScopeClass/34 (/54 e.4/60 )/55 e.3/62 )/16 e.Tail/64 >/1
          context[56] = context[44];
          context[57] = context[45];
          context[58] = context[46];
          context[59] = context[47];
          context[60] = context[52];
          context[61] = context[53];
          context[62] = context[48];
          context[63] = context[49];
          context[64] = context[50];
          context[65] = context[51];
          if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[25] ) )
            continue;
          // closed e. as range 56
          // closed e.Scanned as range 58
          // closed e.4 as range 60
          // closed e.3 as range 62
          // closed e.Tail as range 64
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.: 56
          //DEBUG: e.Scanned: 58
          //DEBUG: e.4: 60
          //DEBUG: e.3: 62
          //DEBUG: e.Tail: 64

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./56 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.4/60/66 )/68 Tile{ AsIs: )/10 } (/69 Tile{ AsIs: e.Scanned/58 } Tile{ AsIs: (/15 AsIs: # CmdMetatable/25 AsIs: s.ScopeClass/34 AsIs: (/54 AsIs: e.4/60 AsIs: )/55 AsIs: e.3/62 AsIs: )/16 } )/70 Tile{ AsIs: e.Tail/64 } Tile{ AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[66], context[67], context[60], context[61]);
          refalrts::alloc_close_bracket(vm, context[68]);
          refalrts::alloc_open_bracket(vm, context[69]);
          refalrts::alloc_close_bracket(vm, context[70]);
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_svar( context[9], context[34] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[69], context[70] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[54], context[55] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[68] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[64], context[65] );
          res = refalrts::splice_elem( res, context[70] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_elem( res, context[69] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[68] );
          res = refalrts::splice_evar( res, context[66], context[67] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 (/5 e./44 )/6 (/9 e.Scanned/46 )/10 (/15 # CmdEnum/25 s.ScopeClass/34 e.2/48 )/16 e.Tail/50 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          context[50] = context[42];
          context[51] = context[43];
          if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[25] ) )
            continue;
          // closed e. as range 44
          // closed e.Scanned as range 46
          // closed e.2 as range 48
          // closed e.Tail as range 50
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.: 44
          //DEBUG: e.Scanned: 46
          //DEBUG: e.2: 48
          //DEBUG: e.Tail: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./44 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.2/48/52 )/54 Tile{ AsIs: )/10 } (/55 Tile{ AsIs: e.Scanned/46 } Tile{ AsIs: (/15 Reuse: # CmdEnumDescr/25 AsIs: s.ScopeClass/34 AsIs: e.2/48 AsIs: )/16 } )/56 Tile{ AsIs: e.Tail/50 } Tile{ AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_svar( context[9], context[34] );
          refalrts::update_ident(context[25], identifiers[ident_CmdEnumDescr]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[56] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[54] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_elem( res, context[56] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[54] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 (/5 e./44 )/6 (/9 e.Scanned/46 )/10 (/15 # CmdSwap/25 s.ScopeClass/34 e.2/48 )/16 e.Tail/50 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          context[50] = context[42];
          context[51] = context[43];
          if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[25] ) )
            continue;
          // closed e. as range 44
          // closed e.Scanned as range 46
          // closed e.2 as range 48
          // closed e.Tail as range 50
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.: 44
          //DEBUG: e.Scanned: 46
          //DEBUG: e.2: 48
          //DEBUG: e.Tail: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./44 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.2/48/52 )/54 Tile{ AsIs: )/10 } (/55 Tile{ AsIs: e.Scanned/46 } Tile{ AsIs: (/15 Reuse: # CmdSwapDescr/25 AsIs: s.ScopeClass/34 AsIs: e.2/48 AsIs: )/16 } )/56 Tile{ AsIs: e.Tail/50 } Tile{ AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_svar( context[9], context[34] );
          refalrts::update_ident(context[25], identifiers[ident_CmdSwapDescr]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[56] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[54] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_elem( res, context[56] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[54] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 (/5 e./44 )/6 (/9 e.Scanned/46 )/10 (/15 # CmdConditionFunc-ToRASL/25 s.ScopeClass/34 e.2/48 )/16 e.Tail/50 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          context[50] = context[42];
          context[51] = context[43];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[25] ) )
            continue;
          // closed e. as range 44
          // closed e.Scanned as range 46
          // closed e.2 as range 48
          // closed e.Tail as range 50
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.: 44
          //DEBUG: e.Scanned: 46
          //DEBUG: e.2: 48
          //DEBUG: e.Tail: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./44 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.2/48/52 )/54 Tile{ AsIs: )/10 } (/55 Tile{ AsIs: e.Scanned/46 } Tile{ AsIs: (/15 Reuse: # CmdConditionFuncDecsrRasl/25 AsIs: s.ScopeClass/34 AsIs: e.2/48 AsIs: )/16 } )/56 Tile{ AsIs: e.Tail/50 } Tile{ AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_svar( context[9], context[34] );
          refalrts::update_ident(context[25], identifiers[ident_CmdConditionFuncDecsrRasl]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[56] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[54] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_elem( res, context[56] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[54] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 (/5 e./44 )/6 (/9 e.Scanned/46 )/10 (/15 # CmdConditionFunc-ToNative/25 s.ScopeClass/34 e.2/48 )/16 e.Tail/50 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          context[50] = context[42];
          context[51] = context[43];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[25] ) )
            continue;
          // closed e. as range 44
          // closed e.Scanned as range 46
          // closed e.2 as range 48
          // closed e.Tail as range 50
          //DEBUG: s.ScopeClass: 34
          //DEBUG: e.: 44
          //DEBUG: e.Scanned: 46
          //DEBUG: e.2: 48
          //DEBUG: e.Tail: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./44 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } e.2/48/52 )/54 Tile{ AsIs: )/10 } (/55 Tile{ AsIs: e.Scanned/46 } Tile{ AsIs: (/15 Reuse: # CmdConditionFuncDecsrNative/25 AsIs: s.ScopeClass/34 AsIs: e.2/48 AsIs: )/16 } )/56 Tile{ AsIs: e.Tail/50 } Tile{ AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_svar( context[9], context[34] );
          refalrts::update_ident(context[25], identifiers[ident_CmdConditionFuncDecsrNative]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[56] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[54] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_elem( res, context[56] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[54] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 (/5 e./44 )/6 (/9 e.Scanned/46 )/10 (/15 # CmdDeclaration/25 s.ScopeClass/34 e.2/48 )/16 e.Tail/50 >/1
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[25] ) )
          continue;
        // closed e. as range 44
        // closed e.Scanned as range 46
        // closed e.2 as range 48
        // closed e.Tail as range 50
        //DEBUG: s.ScopeClass: 34
        //DEBUG: e.: 44
        //DEBUG: e.Scanned: 46
        //DEBUG: e.2: 48
        //DEBUG: e.Tail: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass/34 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./44 HalfReuse: (/6 HalfReuse: s.ScopeClass34 /9 } Tile{ AsIs: e.2/48 } Tile{ HalfReuse: )/25 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned/46 } Tile{ AsIs: )/16 AsIs: e.Tail/50 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[6]);
        refalrts::reinit_svar( context[9], context[34] );
        refalrts::reinit_close_bracket(context[25]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[5], context[10] );
        refalrts::link_brackets( context[6], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/5 e./36 )/6 (/9 e.Scanned/38 )/10 (/15 # CmdEmitNativeCode/25 t.0/34 e.2/40 )/16 e.Tail/42 >/1
      context[36] = context[26];
      context[37] = context[27];
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[30];
      context[41] = context[31];
      context[42] = context[32];
      context[43] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[25] ) )
        continue;
      // closed e. as range 36
      // closed e.Scanned as range 38
      // closed e.2 as range 40
      // closed e.Tail as range 42
      //DEBUG: t.0: 34
      //DEBUG: e.: 36
      //DEBUG: e.Scanned: 38
      //DEBUG: e.2: 40
      //DEBUG: e.Tail: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 # CmdEmitNativeCode/25 t.0/34 e.2/40 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e./36 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/38 AsIs: )/10 } Tile{ AsIs: e.Tail/42 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & ClassifyItems*11/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_ClassifyItems_D11]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & ClassifyItems@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ClassifyItems_Z0]);
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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Map@1/4 (/7 e.new5/9 )/8 t.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & Map@1/4 (/7 e.Name/15 )/8 (/13 # CmdOnFailGoTo/21 s.NextLabel/22 )/14 e.Tail/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_CmdOnFailGoTo], context[19], context[20] );
      if( ! context[21] )
        continue;
      // closed e.Name as range 15
      // closed e.Tail as range 17
      if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: e.Name: 15
      //DEBUG: e.Tail: 17
      //DEBUG: s.NextLabel: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # CmdOnFailGoTo/21 AsIs: s.NextLabel/22 HalfReuse: # Func$_name:/14 } e.Name/15/23 )/25 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: (/7 AsIs: e.Name/15 AsIs: )/8 } Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::reinit_ident(context[14], identifiers[ident_Funck32_namek58_]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 (/7 e.Name/15 )/8 t.Next/13 e.Tail/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Name as range 15
    // closed e.Tail as range 17
    //DEBUG: t.Next: 13
    //DEBUG: e.Name: 15
    //DEBUG: e.Tail: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next/13 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: (/7 AsIs: e.Name/15 AsIs: )/8 } Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 (/7 e.Name/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 9
    //DEBUG: e.Name: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 (/7 e.Name/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 (/7 e.Name/5 )/8 e.items/2 >/1
  // closed e.Name as range 5
  // closed e.items as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & AddFunctionNameComment\1@0/4 AsIs: (/7 AsIs: e.Name/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_AddFunctionNameComment_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
      // </0 & DoMapAccum@3/4 s.new8/5 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@3/4 s.new12/5 (/9 e.new16/21 )/10 (/15 s.new13/27 e.new14/25 )/16 e.new15/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        // closed e.new16 as range 21
        // closed e.new15 as range 23
        if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
          continue;
        // closed e.new14 as range 25
        do {
          // </0 & DoMapAccum@3/4 s.Depth/5 (/9 e.Scanned/28 )/10 (/15 # CmdEStart/27 e.0/30 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdEStart], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.0 as range 30
          // closed e.Tail as range 32
          //DEBUG: s.Depth: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.0: 30
          //DEBUG: e.Tail: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@5/4 } (/34 Tile{ AsIs: e.Scanned/28 } )/35 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/32 } )/36 </37 & Add/38 1/39 Tile{ AsIs: s.Depth/5 } Tile{ HalfReuse: >/10 AsIs: (/15 AsIs: # CmdEStart/27 AsIs: e.0/30 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[34]);
          refalrts::alloc_close_bracket(vm, context[35]);
          refalrts::alloc_close_bracket(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[39], 1UL);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z5]);
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[37] );
          refalrts::link_brackets( context[9], context[36] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_elem( res, context[5] );
          res = refalrts::splice_evar( res, context[36], context[39] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[34] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@3/4 s.Depth/5 (/9 e.Scanned/28 )/10 (/15 # CmdOnFailGoTo/27 s.Offset/34 )/16 e.Tail/32 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[23];
        context[33] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_CmdOnFailGoTo], context[27] ) )
          continue;
        // closed e.Scanned as range 28
        // closed e.Tail as range 32
        if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: s.Depth: 5
        //DEBUG: e.Scanned: 28
        //DEBUG: e.Tail: 32
        //DEBUG: s.Offset: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@5/4 } (/35 Tile{ AsIs: e.Scanned/28 } )/36 Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail/32 } )/37 </38 & Add/39 1/40 Tile{ AsIs: s.Depth/5 } Tile{ HalfReuse: >/10 AsIs: (/15 AsIs: # CmdOnFailGoTo/27 AsIs: s.Offset/34 AsIs: )/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[40], 1UL);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z5]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[9], context[37] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[10], context[16] );
        res = refalrts::splice_elem( res, context[5] );
        res = refalrts::splice_evar( res, context[37], context[40] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[35] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@3/4 s.Depth/5 (/9 e.Scanned/21 )/10 t.Next/15 e.Tail/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Scanned as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Next: 15
      //DEBUG: s.Depth: 5
      //DEBUG: e.Scanned: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@3/4 AsIs: s.Depth/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@5/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & AddBacktrackStackAllocationCommand\1*3/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_AddBacktrackStackAllocationCommand_L1D3]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z5]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & AddBacktrackStackAllocationCommand\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_AddBacktrackStackAllocationCommand_L1Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
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
      // </0 & DoMapAccum@4/4 s.new8/5 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@4/4 s.new12/5 (/9 e.new16/21 )/10 (/15 s.new13/27 e.new14/25 )/16 e.new15/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        // closed e.new16 as range 21
        // closed e.new15 as range 23
        if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
          continue;
        // closed e.new14 as range 25
        do {
          // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdSentence/27 e.0/30 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.0 as range 30
          // closed e.Tail as range 32
          //DEBUG: s.NextLabel: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.0: 30
          //DEBUG: e.Tail: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </34 & DoMapAccum$1=1@6/35 Tile{ AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/32 } )/36 </37 & ConvertOneInterpretCommand$1=1/38 Tile{ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 } (/39 Tile{ HalfReuse: )/27 AsIs: e.0/30 HalfReuse: >/16 } >/40 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_gen_DoMapAccum_S1A1Z6]);
          refalrts::alloc_close_bracket(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_gen_ConvertOneInterpretCommand_S1A1]);
          refalrts::alloc_open_bracket(vm, context[39]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::reinit_close_bracket(context[27]);
          refalrts::reinit_close_call(context[16]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[39], context[27] );
          refalrts::link_brackets( context[15], context[36] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_evar( res, context[27], context[16] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[0], context[5] );
          res = refalrts::splice_evar( res, context[36], context[38] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[9], context[15] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdOpenELoop/27 # AlgLeft/34 s.BracketNum/35 s.VarNumber/36 e.3/30 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[27] ) )
            continue;
          context[34] = refalrts::ident_left( identifiers[ident_AlgLeft], context[30], context[31] );
          if( ! context[34] )
            continue;
          // closed e.Scanned as range 28
          // closed e.Tail as range 32
          if( ! refalrts::svar_left( context[35], context[30], context[31] ) )
            continue;
          if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
            continue;
          // closed e.3 as range 30
          //DEBUG: s.NextLabel: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.Tail: 32
          //DEBUG: s.BracketNum: 35
          //DEBUG: s.VarNumber: 36
          //DEBUG: e.3: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </37 & DoMapAccum$1=1@6/38 Tile{ AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/32 } )/39 Tile{ HalfReuse: </27 HalfReuse: & ConvertOneInterpretCommand$2=1/34 AsIs: s.BracketNum/35 AsIs: s.VarNumber/36 } Tile{ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 } (/40 Tile{ AsIs: )/16 } Tile{ AsIs: e.3/30 } >/41 >/42 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_gen_DoMapAccum_S1A1Z6]);
          refalrts::alloc_close_bracket(vm, context[39]);
          refalrts::alloc_open_bracket(vm, context[40]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::reinit_open_call(context[27]);
          refalrts::reinit_name(context[34], functions[efunc_gen_ConvertOneInterpretCommand_S2A1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[40], context[16] );
          refalrts::link_brackets( context[15], context[39] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_evar( res, context[0], context[5] );
          res = refalrts::splice_evar( res, context[27], context[36] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[9], context[15] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdComment/27 e.0/30 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.0 as range 30
          // closed e.Tail as range 32
          //DEBUG: s.NextLabel: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.0: 30
          //DEBUG: e.Tail: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # CmdComment/27 e.0/30 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 } Tile{ AsIs: e.Tail/32 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[10], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdUseRes/27 )/16 e.Tail/30 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[23];
          context[31] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdUseRes], context[27] ) )
            continue;
          if( ! refalrts::empty_seq( context[25], context[26] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.Tail as range 30
          //DEBUG: s.NextLabel: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # CmdUseRes/27 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 } Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          refalrts::splice_to_freelist_open( vm, context[10], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdVariableDebugTable/27 s.Mode/34 e.2/30 s.Offset/35 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.Tail as range 32
          if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
            continue;
          if( ! refalrts::svar_right( context[35], context[30], context[31] ) )
            continue;
          // closed e.2 as range 30
          //DEBUG: s.NextLabel: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.Tail: 32
          //DEBUG: s.Mode: 34
          //DEBUG: s.Offset: 35
          //DEBUG: e.2: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Mode/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/9 AsIs: e.Scanned/28 HalfReuse: (/10 HalfReuse: # CmdVariableDebugTable/15 HalfReuse: s.Mode34 /27 } '.'/36 Tile{ AsIs: e.2/30 } '#'/37 Tile{ AsIs: s.Offset/35 } )/38 Tile{ AsIs: )/16 AsIs: e.Tail/32 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[36], '.');
          refalrts::alloc_char(vm, context[37], '#');
          refalrts::alloc_close_bracket(vm, context[38]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[15], identifiers[ident_CmdVariableDebugTable]);
          refalrts::reinit_svar( context[27], context[34] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[16] );
          refalrts::link_brackets( context[10], context[38] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_elem( res, context[36] );
          refalrts::splice_to_freelist_open( vm, context[27], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/28 )/10 (/15 # CmdCallCondition/27 )/16 e.Tail/30 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_CmdCallCondition], context[27] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Scanned as range 28
        // closed e.Tail as range 30
        //DEBUG: s.NextLabel: 5
        //DEBUG: e.Scanned: 28
        //DEBUG: e.Tail: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/9 AsIs: e.Scanned/28 HalfReuse: (/10 HalfReuse: # CmdPushState/15 HalfReuse: )/27 HalfReuse: (/16 } # CmdNextStep/32 )/33 )/34 Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdNextStep]);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdPushState]);
        refalrts::reinit_close_bracket(context[27]);
        refalrts::reinit_open_bracket(context[16]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[34] );
        refalrts::link_brackets( context[16], context[33] );
        refalrts::link_brackets( context[10], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[32], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@4/4 s.NextLabel/5 (/9 e.Scanned/21 )/10 t.Next/15 e.Tail/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Scanned as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Next: 15
      //DEBUG: s.NextLabel: 5
      //DEBUG: e.Scanned: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: s.NextLabel/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@6/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & ConvertOneInterpretCommand*3/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_ConvertOneInterpretCommand_D3]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z6]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & ConvertOneInterpretCommand@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ConvertOneInterpretCommand_Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & DoMapAccum@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@5/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoMapAccum@5/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & DoMapAccum@5/4 (/5 e.new8/21 )/6 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[5] ) )
        continue;
      // closed e.new8 as range 21
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@5/4 (/5 e./23 )/6 (/9 e.Scanned/25 )/10 (/15 # CmdInterpretFuncDescr/31 s.ScopeClass/32 (/35 e.4/33 )/36 (/39 # LABEL/41 s.Label/42 )/40 e.5/29 )/16 e.Tail/27 >/1
        context[23] = context[21];
        context[24] = context[22];
        context[25] = context[17];
        context[26] = context[18];
        context[27] = context[19];
        context[28] = context[20];
        context[29] = 0;
        context[30] = 0;
        if( ! refalrts::brackets_term( context[29], context[30], context[15] ) )
          continue;
        context[31] = refalrts::ident_left( identifiers[ident_CmdInterpretFuncDescr], context[29], context[30] );
        if( ! context[31] )
          continue;
        // closed e. as range 23
        // closed e.Scanned as range 25
        // closed e.Tail as range 27
        if( ! refalrts::svar_left( context[32], context[29], context[30] ) )
          continue;
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[29], context[30] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[29], context[30] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left( identifiers[ident_LABEL], context[37], context[38] );
        if( ! context[41] )
          continue;
        // closed e.4 as range 33
        // closed e.5 as range 29
        if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        //DEBUG: e.: 23
        //DEBUG: e.Scanned: 25
        //DEBUG: e.Tail: 27
        //DEBUG: s.ScopeClass: 32
        //DEBUG: e.4: 33
        //DEBUG: e.5: 29
        //DEBUG: s.Label: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@5/4 AsIs: (/5 } Tile{ AsIs: e./23 } Tile{ AsIs: (/39 AsIs: # LABEL/41 AsIs: s.Label/42 AsIs: )/40 AsIs: e.5/29 AsIs: )/16 } Tile{ AsIs: (/35 } Tile{ AsIs: e.Scanned/25 } Tile{ AsIs: (/15 AsIs: # CmdInterpretFuncDescr/31 AsIs: s.ScopeClass/32 } Tile{ AsIs: e.4/33 } Tile{ HalfReuse: s.Label42 /10 } Tile{ AsIs: )/6 HalfReuse: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[10], context[42] );
        refalrts::reinit_close_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[35], context[9] );
        refalrts::link_brackets( context[15], context[6] );
        refalrts::link_brackets( context[5], context[16] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[6], context[9] );
        res = refalrts::splice_elem( res, context[10] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[15], context[32] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[39], context[16] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@5/4 (/5 e./23 )/6 (/9 e.Scanned/25 )/10 t.Next/15 e.Tail/27 >/1
      context[23] = context[21];
      context[24] = context[22];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      // closed e. as range 23
      // closed e.Scanned as range 25
      // closed e.Tail as range 27
      //DEBUG: t.Next: 15
      //DEBUG: e.: 23
      //DEBUG: e.Scanned: 25
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@5/4 AsIs: (/5 AsIs: e./23 AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Scanned/25 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@5/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@7/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & GlueFunctionRASLs\1*2/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_GlueFunctionRASLs_L1D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z7]);
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
    // </0 & DoMapAccum@5/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@5/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@5/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & GlueFunctionRASLs\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GlueFunctionRASLs_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z5("DoMapAccum@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z5);


static refalrts::FnResult func_gen_DoMapAccum_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@6/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoMapAccum@6/4 t.Acc/5 (/9 e.Scanned/11 )/10 t.Next/15 e.Tail/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Scanned as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail as range 13
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11
    //DEBUG: t.Next: 15
    //DEBUG: e.Tail: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@8/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail/13 } )/18 </19 & SetFunctionsScopeClass=1\1/20 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_SetFunctionsScopeClass_A1L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@6/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@6/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@6/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & SetFunctionsScopeClass=1\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SetFunctionsScopeClass_A1L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z6("DoMapAccum@6", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z6);


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


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@7/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z7]);
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

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & DoMapAccum$1=1@0/14 (/15 & PrepareFunctionsRASL@0/16 Tile{ HalfReuse: # DebugInfo/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_DebugInfo]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@8/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z8]);
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
  //RESULT: Tile{ [[ } </13 & DoMapAccum$1=1@0/14 (/15 & PrepareFunctionsRASL@0/16 Tile{ HalfReuse: # NoDebugInfo/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_NoDebugInfo]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[16] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum$1=1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@3/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 e.new4/2 >/1
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
    // </0 & DoMapAccum$1=1@3/4 s.DebugInfo/5 (/8 e.Scanned0/14 )/9 (/12 e.Tail0/16 )/13 t.Acc$a/20 e.StepScanned/18 >/1
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
    //DEBUG: s.DebugInfo: 5
    //DEBUG: e.Scanned0: 14
    //DEBUG: e.Tail0: 16
    //DEBUG: t.Acc$a: 20
    //DEBUG: e.StepScanned: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.DebugInfo/5 } Tile{ AsIs: t.Acc$a/20 } Tile{ AsIs: (/12 } Tile{ AsIs: e.Scanned0/14 } Tile{ AsIs: e.StepScanned/18 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Tail0/16 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@3/4 s.DebugInfo/5 (/8 e.Scanned0/6 )/9 (/12 e.Tail0/10 )/13 e.dyn/2 >/1
  // closed e.Scanned0 as range 6
  // closed e.Tail0 as range 10
  // closed e.dyn as range 2
  //DEBUG: s.DebugInfo: 5
  //DEBUG: e.Scanned0: 6
  //DEBUG: e.Tail0: 10
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 } (/14 & PrepareFunctionsRASL@0/15 Tile{ AsIs: s.DebugInfo/5 } )/16 Tile{ AsIs: (/8 AsIs: e.Scanned0/6 AsIs: )/9 AsIs: (/12 AsIs: e.Tail0/10 AsIs: )/13 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[14], context[15] );
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

  // </0 & DoMapAccum$1=1@4/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & ClassifyItems@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ClassifyItems_Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@5/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoMapAccum$1=1@5/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
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

  // </0 & DoMapAccum$1=1@5/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & AddBacktrackStackAllocationCommand\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_AddBacktrackStackAllocationCommand_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z5("DoMapAccum$1=1@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z5);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@6/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoMapAccum$1=1@6/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
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

  // </0 & DoMapAccum$1=1@6/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & ConvertOneInterpretCommand@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ConvertOneInterpretCommand_Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z6("DoMapAccum$1=1@6", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z6);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@7/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoMapAccum$1=1@7/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
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

  // </0 & DoMapAccum$1=1@7/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & GlueFunctionRASLs\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GlueFunctionRASLs_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z7("DoMapAccum$1=1@7", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z7);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@8/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@8/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoMapAccum$1=1@8/4 (/7 e.Scanned0/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 e.StepScanned/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@6/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
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

  // </0 & DoMapAccum$1=1@8/4 (/7 e.Scanned0/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Scanned0 as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Scanned0: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & SetFunctionsScopeClass=1\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SetFunctionsScopeClass_A1L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z8("DoMapAccum$1=1@8", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z8);


static refalrts::FnResult func_gen_DoMapAccum_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & DoMapAccum@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@7/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoMapAccum@7/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & DoMapAccum@7/4 s.new8/5 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@7/4 s.NextLabel/5 (/9 e.Scanned/21 )/10 (/15 # Function-ToRASL/27 s.ScopeClass/28 (/31 e.3/29 )/32 e.2/25 )/16 e.Tail/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        context[27] = refalrts::ident_left( identifiers[ident_Functionm_ToRASL], context[25], context[26] );
        if( ! context[27] )
          continue;
        // closed e.Scanned as range 21
        // closed e.Tail as range 23
        if( ! refalrts::svar_left( context[28], context[25], context[26] ) )
          continue;
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.3 as range 29
        // closed e.2 as range 25
        //DEBUG: s.NextLabel: 5
        //DEBUG: e.Scanned: 21
        //DEBUG: e.Tail: 23
        //DEBUG: s.ScopeClass: 28
        //DEBUG: e.3: 29
        //DEBUG: e.2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } (/33 Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: )/16 } (/34 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & PrepareFunctionsRASL$1=3/27 AsIs: s.ScopeClass/28 AsIs: (/31 AsIs: e.3/29 AsIs: )/32 } Tile{ AsIs: s.NextLabel/5 HalfReuse: </9 } & ConvertInterpretCommands/35 </36 & Add/37 1/38 s.NextLabel/5/39 >/40 Tile{ AsIs: e.2/25 } >/41 >/42 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_ConvertInterpretCommands]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[38], 1UL);
        refalrts::copy_stvar(vm, context[39], context[5]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[27], functions[efunc_gen_PrepareFunctionsRASL_S1A3]);
        refalrts::reinit_open_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[34], context[10] );
        refalrts::link_brackets( context[33], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[35], context[40] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        res = refalrts::splice_evar( res, context[10], context[32] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@7/4 s.NextLabel/5 (/9 e.Scanned/21 )/10 t.Next/15 e.Tail/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Scanned as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Next: 15
      //DEBUG: s.NextLabel: 5
      //DEBUG: e.Scanned: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@7/4 AsIs: s.NextLabel/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@7/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & PrepareFunctionsRASL*2/24 # DebugInfo/25 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_PrepareFunctionsRASL_D2]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_DebugInfo]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@7/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@7/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@7/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & DoMapAccum@0/12 (/13 & PrepareFunctionsRASL@0/14 Tile{ HalfReuse: # DebugInfo/0 HalfReuse: )/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_DebugInfo]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z7("DoMapAccum@7", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z7);


static refalrts::FnResult func_gen_DoMapAccum_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoMapAccum@8/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@8/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoMapAccum@8/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & DoMapAccum@8/4 s.new8/5 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@8/4 s.NextLabel/5 (/9 e.Scanned/21 )/10 (/15 # Function-ToRASL/27 s.ScopeClass/28 (/31 e.3/29 )/32 e.2/25 )/16 e.Tail/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        context[27] = refalrts::ident_left( identifiers[ident_Functionm_ToRASL], context[25], context[26] );
        if( ! context[27] )
          continue;
        // closed e.Scanned as range 21
        // closed e.Tail as range 23
        if( ! refalrts::svar_left( context[28], context[25], context[26] ) )
          continue;
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.3 as range 29
        // closed e.2 as range 25
        //DEBUG: s.NextLabel: 5
        //DEBUG: e.Scanned: 21
        //DEBUG: e.Tail: 23
        //DEBUG: s.ScopeClass: 28
        //DEBUG: e.3: 29
        //DEBUG: e.2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } (/33 Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: )/16 } (/34 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & PrepareFunctionsRASL$1=1/27 AsIs: s.ScopeClass/28 AsIs: (/31 AsIs: e.3/29 AsIs: )/32 } Tile{ AsIs: s.NextLabel/5 HalfReuse: </9 } & RemoveDebugInfoRec/35 Tile{ AsIs: e.2/25 } >/36 >/37 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_RemoveDebugInfoRec]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[27], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
        refalrts::reinit_open_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[9] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[34], context[10] );
        refalrts::link_brackets( context[33], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        res = refalrts::splice_evar( res, context[10], context[32] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@8/4 s.NextLabel/5 (/9 e.Scanned/21 )/10 t.Next/15 e.Tail/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Scanned as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Next: 15
      //DEBUG: s.NextLabel: 5
      //DEBUG: e.Scanned: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@8/4 AsIs: s.NextLabel/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@8/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & PrepareFunctionsRASL*2/24 # NoDebugInfo/25 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_PrepareFunctionsRASL_D2]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_NoDebugInfo]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@8/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@8/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@8/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & DoMapAccum@0/12 (/13 & PrepareFunctionsRASL@0/14 Tile{ HalfReuse: # NoDebugInfo/0 HalfReuse: )/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
  refalrts::reinit_ident(context[0], identifiers[ident_NoDebugInfo]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z8("DoMapAccum@8", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z8);


//End of file
