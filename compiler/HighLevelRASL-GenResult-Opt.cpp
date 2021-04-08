// This file automatically generated from 'HighLevelRASL-GenResult-Opt.ref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Opt.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3547532827_1067304874
#define COOKIE1_ 3547532827U
#define COOKIE2_ 1067304874U

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
  efunc_TextFromExpr = 18,
  efunc_gen_Map_Z4 = 19,
  efunc_gen_Map_Z1 = 20,
  efunc_GenPushLink = 21,
  efunc_gen_Map_Z2 = 22,
  efunc_gen_Map_Z3 = 23,
  efunc_CollectTiles = 24,
  efunc_GenTrash = 25,
  efunc_gen_GenResultm_Aux_A1Z1 = 26,
  efunc_BeginOffset = 27,
  efunc_gen_GenResultm_Aux_A1Z2 = 28,
  efunc_gen_CalcRes_D2 = 29,
  efunc_gen_GenResultm_Aux_A1Z3 = 30,
  efunc_gen_GenResultm_Aux_A1Z4 = 31,
  efunc_gen_GenSplices_D2 = 32,
  efunc_gen_MapAccum_Z1 = 33,
  efunc_CollectStrings = 34,
  efunc_gen_GenResultm_Opt_A2 = 35,
  efunc_GST = 36,
  efunc_gen_GenResultm_Opt_A1 = 37,
  efunc_FlatResult = 38,
  efunc_Reverse = 39,
  efunc_gen_DoMapAccum_Z1 = 40,
  efunc_gen_GenPushLink_A1 = 41,
  efunc_CollectTilesm_Alloc = 42,
  efunc_EndOffset = 43,
  efunc_Mu = 44,
  efunc_Up = 45,
  efunc_Evm_met = 46,
  efunc_Residue = 47,
  efunc_u_u_Metau_Residue = 48,
  efunc_MapAccum = 49,
  efunc_UnBracket = 50,
  efunc_DelAccumulator = 51,
  efunc_Inc = 52,
  efunc_Dec = 53,
  efunc_GenResultm_Opt = 54,
  efunc_GenResultm_Aux = 55,
  efunc_GenResultm_Allocations = 56,
  efunc_GenResultm_ReinitUpdate = 57,
  efunc_CreateElemParam = 58,
  efunc_PatchClosureLogic = 59,
  efunc_FlatTilesInResult = 60,
  efunc_GenSplices = 61,
  efunc_CalcRes = 62,
  efunc_AddOffsets = 63,
  efunc_GetSampleOffset = 64,
  efunc_gen_Apply_Z4 = 65,
  efunc_gen_DoMapAccum_Z2 = 66,
  efunc_gen_AddOffsets_L1Z0 = 67,
  efunc_gen_MapAccum_Z0 = 68,
  efunc_gen_Map_Z5 = 69,
  efunc_gen_Map_Z0 = 70,
  efunc_gen_GenResultm_ReinitUpdate_L1Z0 = 71,
  efunc_gen_Map_Z6 = 72,
  efunc_gen_FlatTilesInResult_L1D2 = 73,
  efunc_gen_FlatTilesInResult_L1Z0 = 74,
  efunc_gen_GenSplices_S1L1D3 = 75,
  efunc_gen_GenSplices_S1L1Z0 = 76,
  efunc_gen_GenResultm_Aux_A1Z0 = 77,
  efunc_gen_CreateElemParam_D12 = 78,
  efunc_gen_GenResultm_Allocations_L1D5 = 79,
  efunc_gen_GenResultm_Allocations_L1Z0 = 80,
  efunc_gen_GenResultm_ReinitUpdate_L1S1L1D6 = 81,
  efunc_gen_GenResultm_ReinitUpdate_L1S1L1Z0 = 82,
  efunc_gen_GenPushLink_A1L1D9 = 83,
  efunc_gen_DoMapAccum_S1A1Z1 = 84,
  efunc_gen_DoMapAccum_Z0 = 85,
  efunc_gen_GenPushLink_A1L1Z0 = 86,
  efunc_gen_FlatTilesInResult_L1S1L1D5 = 87,
  efunc_gen_FlatTilesInResult_L1S1L1Z0 = 88,
  efunc_gen_GetSampleOffset_Z0 = 89,
  efunc_gen_GetSampleOffset_Z1 = 90,
  efunc_gen_AddOffsets_L1S1L1Z0 = 91,
  efunc_gen_Map_Z7 = 92,
  efunc_gen_DoMapAccum_S1A1Z2 = 93,
  efunc_gen_GetSampleOffset_Z2 = 94,
  efunc_gen_GetSampleOffset_Z3 = 95,
  efunc_Inc2 = 96,
  efunc_gen_AddOffsets_L1D6 = 97,
  efunc_gen_DoMapAccum_S1A1Z0 = 98,
};


enum ident {
  ident_Tile = 0,
  ident_RIGHTm_EDGE = 1,
  ident_CmdResetAllocator = 2,
  ident_CmdNextStep = 3,
  ident_RemovedTile = 4,
  ident_LEFTm_EDGE = 5,
  ident_CallBrackets = 6,
  ident_TkOpenCall = 7,
  ident_TkCloseCall = 8,
  ident_Brackets = 9,
  ident_TkOpenBracket = 10,
  ident_TkCloseBracket = 11,
  ident_ADTm_Brackets = 12,
  ident_Symbol = 13,
  ident_Name = 14,
  ident_TkCloseADT = 15,
  ident_TkOpenADT = 16,
  ident_ClosureBrackets = 17,
  ident_TkUnwrappedClosure = 18,
  ident_TkClosureHead = 19,
  ident_Char = 20,
  ident_ElChar = 21,
  ident_Number = 22,
  ident_ElNumber = 23,
  ident_ElOpenBracket = 24,
  ident_ElCloseBracket = 25,
  ident_ElOpenADT = 26,
  ident_ElCloseADT = 27,
  ident_ElOpenCall = 28,
  ident_ElCloseCall = 29,
  ident_ElName = 30,
  ident_Identifier = 31,
  ident_ElIdent = 32,
  ident_ElClosureHead = 33,
  ident_ElUnwrappedClosure = 34,
  ident_CmdWrapClosure = 35,
  ident_PatchCreateUnwrappedClosure = 36,
  ident_CmdCreateElem = 37,
  ident_CmdSetRes = 38,
  ident_VarCopy = 39,
  ident_CmdUseRes = 40,
  ident_CmdTrash = 41,
  ident_AsIs = 42,
  ident_HalfReuse = 43,
  ident_Reuse = 44,
  ident_Var = 45,
  ident_TkString = 46,
  ident_Mu = 47,
  ident_Up = 48,
  ident_Evm_met = 49,
  ident_Residue = 50,
  ident_u_u_Metau_Residue = 51,
  ident_Apply = 52,
  ident_Map = 53,
  ident_Reduce = 54,
  ident_Fetch = 55,
  ident_MapAccum = 56,
  ident_DoMapAccum = 57,
  ident_UnBracket = 58,
  ident_DelAccumulator = 59,
  ident_Inc = 60,
  ident_Dec = 61,
  ident_Pipe = 62,
  ident_GenResultm_Opt = 63,
  ident_FlatResult = 64,
  ident_GenResultm_Aux = 65,
  ident_GenResultm_Allocations = 66,
  ident_GenResultm_ReinitUpdate = 67,
  ident_CreateElemParam = 68,
  ident_GenPushLink = 69,
  ident_PatchClosureLogic = 70,
  ident_Reverse = 71,
  ident_FlatTilesInResult = 72,
  ident_GenSplices = 73,
  ident_CalcRes = 74,
  ident_CollectTiles = 75,
  ident_CollectTilesm_Alloc = 76,
  ident_GenTrash = 77,
  ident_BeginOffset = 78,
  ident_EndOffset = 79,
  ident_AddOffsets = 80,
  ident_GetSampleOffset = 81,
  ident_CmdInsertVar = 82,
  ident_CmdInsertTile = 83,
  ident_CmdComment = 84,
  ident_CmdCopyVar = 85,
  ident_ElString = 86,
  ident_Allocate = 87,
  ident_CmdReinitSVar = 88,
  ident_Reinit = 89,
  ident_Update = 90,
  ident_CmdPushStack = 91,
  ident_CmdLinkBrackets = 92,
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


static refalrts::FnResult func_gen_GenResultm_Opt_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 148 elems
  refalrts::Iter context[148];
  refalrts::zeros( context, 148 );
  // </0 & GenResult-Opt=2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Opt=2/4 (/7 e.new1/5 )/8 s.new2/9 e.new3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & GenResult-Opt=2/4 (/7 e.new7/10 )/8 s.new4/9 e.new5/12 (/16 # Tile/18 e.new6/14 )/17 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Tile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.new7 as range 10
    // closed e.new5 as range 12
    // closed e.new6 as range 14
    do {
      // </0 & GenResult-Opt=2/4 (/7 e.new12/19 )/8 s.new8/9 (/27 # Tile/29 e.new9/25 )/28 e.new10/21 (/16 # Tile/18 e.new11/23 )/17 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[15];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_Tile], context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.new12 as range 19
      // closed e.new9 as range 25
      // closed e.new10 as range 21
      // closed e.new11 as range 23
      do {
        // </0 & GenResult-Opt=2/4 (/7 e.new18/30 )/8 s.new13/9 (/27 # Tile/29 e.new15/32 )/28 e.new14/34 (/16 # Tile/18 t.new16/38 e.new17/36 )/17 >/1
        context[30] = context[19];
        context[31] = context[20];
        context[32] = context[25];
        context[33] = context[26];
        context[34] = context[21];
        context[35] = context[22];
        context[36] = context[23];
        context[37] = context[24];
        // closed e.new18 as range 30
        // closed e.new15 as range 32
        // closed e.new14 as range 34
        context[39] = refalrts::tvar_left( context[38], context[36], context[37] );
        if( ! context[39] )
          continue;
        // closed e.new17 as range 36
        do {
          // </0 & GenResult-Opt=2/4 (/7 e.Trash/40 )/8 s.ContextOffset$a/9 (/27 # Tile/29 e.3/42 )/28 e.1/44 (/16 # Tile/18 (/38 # RIGHT-EDGE/48 )/39 )/17 >/1
          context[40] = context[30];
          context[41] = context[31];
          context[42] = context[32];
          context[43] = context[33];
          context[44] = context[34];
          context[45] = context[35];
          context[46] = 0;
          context[47] = 0;
          if( ! refalrts::brackets_term( context[46], context[47], context[38] ) )
            continue;
          context[48] = refalrts::ident_left( identifiers[ident_RIGHTm_EDGE], context[46], context[47] );
          if( ! context[48] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::empty_seq( context[36], context[37] ) )
            continue;
          // closed e.Trash as range 40
          // closed e.3 as range 42
          // closed e.1 as range 44
          //DEBUG: s.ContextOffset$a: 9
          //DEBUG: e.Trash: 40
          //DEBUG: e.3: 42
          //DEBUG: e.1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset$a/9 } (/49 # CmdResetAllocator/50 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & GenResult-Aux=1@1/4 AsIs: (/7 } </51 & TextFromExpr/52 Tile{ AsIs: e.Trash/40 } >/53 )/54 (/55 </56 & TextFromExpr/57 Tile{ AsIs: (/27 AsIs: # Tile/29 AsIs: e.3/42 AsIs: )/28 AsIs: e.1/44 AsIs: (/16 AsIs: # Tile/18 AsIs: (/38 AsIs: # RIGHT-EDGE/48 AsIs: )/39 AsIs: )/17 AsIs: >/1 } )/58 (/59 </60 & Map@4/61 (/62 # Tile/63 e.3/42/64 )/66 e.1/44/67 (/69 # Tile/70 (/71 # RIGHT-EDGE/72 )/73 )/74 >/75 )/76 (/77 </78 & Map@1/79 (/80 # Tile/81 e.3/42/82 )/84 e.1/44/85 (/87 # Tile/88 (/89 # RIGHT-EDGE/90 )/91 )/92 >/93 )/94 (/95 </96 & GenPushLink/97 </98 & Map@2/99 (/100 # Tile/101 e.3/42/102 )/104 e.1/44/105 (/107 # Tile/108 (/109 # RIGHT-EDGE/110 )/111 )/112 >/113 >/114 )/115 (/116 </117 & Map@3/118 </119 & CollectTiles/120 e.1/44/121 >/123 >/124 )/125 </126 & GenTrash/127 (/128 e.3/42/129 )/131 e.Trash/40/132 >/134 >/135 (/136 # CmdNextStep/137 )/138 Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[49]);
          refalrts::alloc_ident(vm, context[50], identifiers[ident_CmdResetAllocator]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_TextFromExpr]);
          refalrts::alloc_close_call(vm, context[53]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[57], functions[efunc_TextFromExpr]);
          refalrts::alloc_close_bracket(vm, context[58]);
          refalrts::alloc_open_bracket(vm, context[59]);
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[61], functions[efunc_gen_Map_Z4]);
          refalrts::alloc_open_bracket(vm, context[62]);
          refalrts::alloc_ident(vm, context[63], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[64], context[65], context[42], context[43]);
          refalrts::alloc_close_bracket(vm, context[66]);
          refalrts::copy_evar(vm, context[67], context[68], context[44], context[45]);
          refalrts::alloc_open_bracket(vm, context[69]);
          refalrts::alloc_ident(vm, context[70], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[71]);
          refalrts::alloc_ident(vm, context[72], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[73]);
          refalrts::alloc_close_bracket(vm, context[74]);
          refalrts::alloc_close_call(vm, context[75]);
          refalrts::alloc_close_bracket(vm, context[76]);
          refalrts::alloc_open_bracket(vm, context[77]);
          refalrts::alloc_open_call(vm, context[78]);
          refalrts::alloc_name(vm, context[79], functions[efunc_gen_Map_Z1]);
          refalrts::alloc_open_bracket(vm, context[80]);
          refalrts::alloc_ident(vm, context[81], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[82], context[83], context[42], context[43]);
          refalrts::alloc_close_bracket(vm, context[84]);
          refalrts::copy_evar(vm, context[85], context[86], context[44], context[45]);
          refalrts::alloc_open_bracket(vm, context[87]);
          refalrts::alloc_ident(vm, context[88], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[89]);
          refalrts::alloc_ident(vm, context[90], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[91]);
          refalrts::alloc_close_bracket(vm, context[92]);
          refalrts::alloc_close_call(vm, context[93]);
          refalrts::alloc_close_bracket(vm, context[94]);
          refalrts::alloc_open_bracket(vm, context[95]);
          refalrts::alloc_open_call(vm, context[96]);
          refalrts::alloc_name(vm, context[97], functions[efunc_GenPushLink]);
          refalrts::alloc_open_call(vm, context[98]);
          refalrts::alloc_name(vm, context[99], functions[efunc_gen_Map_Z2]);
          refalrts::alloc_open_bracket(vm, context[100]);
          refalrts::alloc_ident(vm, context[101], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[102], context[103], context[42], context[43]);
          refalrts::alloc_close_bracket(vm, context[104]);
          refalrts::copy_evar(vm, context[105], context[106], context[44], context[45]);
          refalrts::alloc_open_bracket(vm, context[107]);
          refalrts::alloc_ident(vm, context[108], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[109]);
          refalrts::alloc_ident(vm, context[110], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[111]);
          refalrts::alloc_close_bracket(vm, context[112]);
          refalrts::alloc_close_call(vm, context[113]);
          refalrts::alloc_close_call(vm, context[114]);
          refalrts::alloc_close_bracket(vm, context[115]);
          refalrts::alloc_open_bracket(vm, context[116]);
          refalrts::alloc_open_call(vm, context[117]);
          refalrts::alloc_name(vm, context[118], functions[efunc_gen_Map_Z3]);
          refalrts::alloc_open_call(vm, context[119]);
          refalrts::alloc_name(vm, context[120], functions[efunc_CollectTiles]);
          refalrts::copy_evar(vm, context[121], context[122], context[44], context[45]);
          refalrts::alloc_close_call(vm, context[123]);
          refalrts::alloc_close_call(vm, context[124]);
          refalrts::alloc_close_bracket(vm, context[125]);
          refalrts::alloc_open_call(vm, context[126]);
          refalrts::alloc_name(vm, context[127], functions[efunc_GenTrash]);
          refalrts::alloc_open_bracket(vm, context[128]);
          refalrts::copy_evar(vm, context[129], context[130], context[42], context[43]);
          refalrts::alloc_close_bracket(vm, context[131]);
          refalrts::copy_evar(vm, context[132], context[133], context[40], context[41]);
          refalrts::alloc_close_call(vm, context[134]);
          refalrts::alloc_close_call(vm, context[135]);
          refalrts::alloc_open_bracket(vm, context[136]);
          refalrts::alloc_ident(vm, context[137], identifiers[ident_CmdNextStep]);
          refalrts::alloc_close_bracket(vm, context[138]);
          refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z1]);
          refalrts::link_brackets( context[136], context[138] );
          refalrts::push_stack( vm, context[135] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[134] );
          refalrts::push_stack( vm, context[126] );
          refalrts::link_brackets( context[128], context[131] );
          refalrts::link_brackets( context[116], context[125] );
          refalrts::push_stack( vm, context[124] );
          refalrts::push_stack( vm, context[117] );
          refalrts::push_stack( vm, context[123] );
          refalrts::push_stack( vm, context[119] );
          refalrts::link_brackets( context[95], context[115] );
          refalrts::push_stack( vm, context[114] );
          refalrts::push_stack( vm, context[96] );
          refalrts::push_stack( vm, context[113] );
          refalrts::push_stack( vm, context[98] );
          refalrts::link_brackets( context[107], context[112] );
          refalrts::link_brackets( context[109], context[111] );
          refalrts::link_brackets( context[100], context[104] );
          refalrts::link_brackets( context[77], context[94] );
          refalrts::push_stack( vm, context[93] );
          refalrts::push_stack( vm, context[78] );
          refalrts::link_brackets( context[87], context[92] );
          refalrts::link_brackets( context[89], context[91] );
          refalrts::link_brackets( context[80], context[84] );
          refalrts::link_brackets( context[59], context[76] );
          refalrts::push_stack( vm, context[75] );
          refalrts::push_stack( vm, context[60] );
          refalrts::link_brackets( context[69], context[74] );
          refalrts::link_brackets( context[71], context[73] );
          refalrts::link_brackets( context[62], context[66] );
          refalrts::link_brackets( context[55], context[58] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[56] );
          refalrts::link_brackets( context[16], context[17] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[27], context[28] );
          refalrts::link_brackets( context[7], context[54] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[51] );
          refalrts::link_brackets( context[49], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[58], context[138] );
          res = refalrts::splice_evar( res, context[27], context[1] );
          res = refalrts::splice_evar( res, context[53], context[57] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[51], context[52] );
          res = refalrts::splice_evar( res, context[0], context[7] );
          res = refalrts::splice_elem( res, context[8] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_elem( res, context[9] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenResult-Opt=2/4 (/7 e.Trash/40 )/8 s.ContextOffset$a/9 (/27 # Tile/29 e.3/42 )/28 e.1/44 (/16 # Tile/18 t.3/38 e.5/46 )/17 >/1
        context[40] = context[30];
        context[41] = context[31];
        context[42] = context[32];
        context[43] = context[33];
        context[44] = context[34];
        context[45] = context[35];
        context[46] = context[36];
        context[47] = context[37];
        // closed e.Trash as range 40
        // closed e.3 as range 42
        // closed e.1 as range 44
        // closed e.5 as range 46
        //DEBUG: t.3: 38
        //DEBUG: s.ContextOffset$a: 9
        //DEBUG: e.Trash: 40
        //DEBUG: e.3: 42
        //DEBUG: e.1: 44
        //DEBUG: e.5: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset$a/9 } (/48 # CmdResetAllocator/49 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & GenResult-Aux=1@2/4 AsIs: (/7 } </50 & TextFromExpr/51 Tile{ AsIs: e.Trash/40 } >/52 )/53 (/54 </55 & TextFromExpr/56 Tile{ AsIs: (/27 AsIs: # Tile/29 AsIs: e.3/42 AsIs: )/28 AsIs: e.1/44 AsIs: (/16 AsIs: # Tile/18 AsIs: t.3/38 AsIs: e.5/46 AsIs: )/17 AsIs: >/1 } )/57 (/58 </59 & Map@4/60 (/61 # Tile/62 e.3/42/63 )/65 e.1/44/66 (/68 # Tile/69 t.3/38/70 e.5/46/72 )/74 >/75 )/76 (/77 </78 & Map@1/79 (/80 # Tile/81 e.3/42/82 )/84 e.1/44/85 (/87 # Tile/88 t.3/38/89 e.5/46/91 )/93 >/94 )/95 (/96 </97 & GenPushLink/98 </99 & Map@2/100 (/101 # Tile/102 e.3/42/103 )/105 e.1/44/106 (/108 # Tile/109 t.3/38/110 e.5/46/112 )/114 >/115 >/116 )/117 (/118 </119 & BeginOffset/120 t.3/38/121 >/123 )/124 (/125 </126 & Map@3/127 </128 & CollectTiles/129 e.1/44/130 >/132 >/133 )/134 </135 & GenTrash/136 (/137 e.3/42/138 )/140 e.Trash/40/141 >/143 >/144 (/145 # CmdNextStep/146 )/147 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_ident(vm, context[49], identifiers[ident_CmdResetAllocator]);
        refalrts::alloc_open_call(vm, context[50]);
        refalrts::alloc_name(vm, context[51], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::alloc_close_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_open_call(vm, context[55]);
        refalrts::alloc_name(vm, context[56], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_open_bracket(vm, context[58]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_gen_Map_Z4]);
        refalrts::alloc_open_bracket(vm, context[61]);
        refalrts::alloc_ident(vm, context[62], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[63], context[64], context[42], context[43]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::copy_evar(vm, context[66], context[67], context[44], context[45]);
        refalrts::alloc_open_bracket(vm, context[68]);
        refalrts::alloc_ident(vm, context[69], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[70], context[71], context[38], context[39]);
        refalrts::copy_evar(vm, context[72], context[73], context[46], context[47]);
        refalrts::alloc_close_bracket(vm, context[74]);
        refalrts::alloc_close_call(vm, context[75]);
        refalrts::alloc_close_bracket(vm, context[76]);
        refalrts::alloc_open_bracket(vm, context[77]);
        refalrts::alloc_open_call(vm, context[78]);
        refalrts::alloc_name(vm, context[79], functions[efunc_gen_Map_Z1]);
        refalrts::alloc_open_bracket(vm, context[80]);
        refalrts::alloc_ident(vm, context[81], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[82], context[83], context[42], context[43]);
        refalrts::alloc_close_bracket(vm, context[84]);
        refalrts::copy_evar(vm, context[85], context[86], context[44], context[45]);
        refalrts::alloc_open_bracket(vm, context[87]);
        refalrts::alloc_ident(vm, context[88], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[89], context[90], context[38], context[39]);
        refalrts::copy_evar(vm, context[91], context[92], context[46], context[47]);
        refalrts::alloc_close_bracket(vm, context[93]);
        refalrts::alloc_close_call(vm, context[94]);
        refalrts::alloc_close_bracket(vm, context[95]);
        refalrts::alloc_open_bracket(vm, context[96]);
        refalrts::alloc_open_call(vm, context[97]);
        refalrts::alloc_name(vm, context[98], functions[efunc_GenPushLink]);
        refalrts::alloc_open_call(vm, context[99]);
        refalrts::alloc_name(vm, context[100], functions[efunc_gen_Map_Z2]);
        refalrts::alloc_open_bracket(vm, context[101]);
        refalrts::alloc_ident(vm, context[102], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[103], context[104], context[42], context[43]);
        refalrts::alloc_close_bracket(vm, context[105]);
        refalrts::copy_evar(vm, context[106], context[107], context[44], context[45]);
        refalrts::alloc_open_bracket(vm, context[108]);
        refalrts::alloc_ident(vm, context[109], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[110], context[111], context[38], context[39]);
        refalrts::copy_evar(vm, context[112], context[113], context[46], context[47]);
        refalrts::alloc_close_bracket(vm, context[114]);
        refalrts::alloc_close_call(vm, context[115]);
        refalrts::alloc_close_call(vm, context[116]);
        refalrts::alloc_close_bracket(vm, context[117]);
        refalrts::alloc_open_bracket(vm, context[118]);
        refalrts::alloc_open_call(vm, context[119]);
        refalrts::alloc_name(vm, context[120], functions[efunc_BeginOffset]);
        refalrts::copy_evar(vm, context[121], context[122], context[38], context[39]);
        refalrts::alloc_close_call(vm, context[123]);
        refalrts::alloc_close_bracket(vm, context[124]);
        refalrts::alloc_open_bracket(vm, context[125]);
        refalrts::alloc_open_call(vm, context[126]);
        refalrts::alloc_name(vm, context[127], functions[efunc_gen_Map_Z3]);
        refalrts::alloc_open_call(vm, context[128]);
        refalrts::alloc_name(vm, context[129], functions[efunc_CollectTiles]);
        refalrts::copy_evar(vm, context[130], context[131], context[44], context[45]);
        refalrts::alloc_close_call(vm, context[132]);
        refalrts::alloc_close_call(vm, context[133]);
        refalrts::alloc_close_bracket(vm, context[134]);
        refalrts::alloc_open_call(vm, context[135]);
        refalrts::alloc_name(vm, context[136], functions[efunc_GenTrash]);
        refalrts::alloc_open_bracket(vm, context[137]);
        refalrts::copy_evar(vm, context[138], context[139], context[42], context[43]);
        refalrts::alloc_close_bracket(vm, context[140]);
        refalrts::copy_evar(vm, context[141], context[142], context[40], context[41]);
        refalrts::alloc_close_call(vm, context[143]);
        refalrts::alloc_close_call(vm, context[144]);
        refalrts::alloc_open_bracket(vm, context[145]);
        refalrts::alloc_ident(vm, context[146], identifiers[ident_CmdNextStep]);
        refalrts::alloc_close_bracket(vm, context[147]);
        refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z2]);
        refalrts::link_brackets( context[145], context[147] );
        refalrts::push_stack( vm, context[144] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[143] );
        refalrts::push_stack( vm, context[135] );
        refalrts::link_brackets( context[137], context[140] );
        refalrts::link_brackets( context[125], context[134] );
        refalrts::push_stack( vm, context[133] );
        refalrts::push_stack( vm, context[126] );
        refalrts::push_stack( vm, context[132] );
        refalrts::push_stack( vm, context[128] );
        refalrts::link_brackets( context[118], context[124] );
        refalrts::push_stack( vm, context[123] );
        refalrts::push_stack( vm, context[119] );
        refalrts::link_brackets( context[96], context[117] );
        refalrts::push_stack( vm, context[116] );
        refalrts::push_stack( vm, context[97] );
        refalrts::push_stack( vm, context[115] );
        refalrts::push_stack( vm, context[99] );
        refalrts::link_brackets( context[108], context[114] );
        refalrts::link_brackets( context[101], context[105] );
        refalrts::link_brackets( context[77], context[95] );
        refalrts::push_stack( vm, context[94] );
        refalrts::push_stack( vm, context[78] );
        refalrts::link_brackets( context[87], context[93] );
        refalrts::link_brackets( context[80], context[84] );
        refalrts::link_brackets( context[58], context[76] );
        refalrts::push_stack( vm, context[75] );
        refalrts::push_stack( vm, context[59] );
        refalrts::link_brackets( context[68], context[74] );
        refalrts::link_brackets( context[61], context[65] );
        refalrts::link_brackets( context[54], context[57] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[55] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[7], context[53] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[50] );
        refalrts::link_brackets( context[48], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[57], context[147] );
        res = refalrts::splice_evar( res, context[27], context[1] );
        res = refalrts::splice_evar( res, context[52], context[56] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[0], context[7] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_elem( res, context[9] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-Opt=2/4 (/7 e.Trash/30 )/8 s.ContextOffset$a/9 (/27 # Tile/29 e.3/32 )/28 e.1/34 (/16 # Tile/18 e.4/36 )/17 >/1
      context[30] = context[19];
      context[31] = context[20];
      context[32] = context[25];
      context[33] = context[26];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[24];
      // closed e.Trash as range 30
      // closed e.3 as range 32
      // closed e.1 as range 34
      // closed e.4 as range 36
      //DEBUG: s.ContextOffset$a: 9
      //DEBUG: e.Trash: 30
      //DEBUG: e.3: 32
      //DEBUG: e.1: 34
      //DEBUG: e.4: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset$a/9 } (/38 # CmdResetAllocator/39 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & GenResult-Aux=1@2/4 AsIs: (/7 } </40 & TextFromExpr/41 Tile{ AsIs: e.Trash/30 } >/42 )/43 (/44 </45 & TextFromExpr/46 Tile{ AsIs: (/27 AsIs: # Tile/29 AsIs: e.3/32 AsIs: )/28 AsIs: e.1/34 AsIs: (/16 AsIs: # Tile/18 AsIs: e.4/36 AsIs: )/17 AsIs: >/1 } )/47 (/48 </49 & Map@4/50 (/51 # Tile/52 e.3/32/53 )/55 e.1/34/56 (/58 # Tile/59 e.4/36/60 )/62 >/63 )/64 (/65 </66 & Map@1/67 (/68 # Tile/69 e.3/32/70 )/72 e.1/34/73 (/75 # Tile/76 e.4/36/77 )/79 >/80 )/81 (/82 </83 & GenPushLink/84 </85 & Map@2/86 (/87 # Tile/88 e.3/32/89 )/91 e.1/34/92 (/94 # Tile/95 e.4/36/96 )/98 >/99 >/100 )/101 (/102 </103 & CalcRes*2/104 e.4/36/105 >/107 )/108 (/109 </110 & Map@3/111 </112 & CollectTiles/113 e.1/34/114 >/116 >/117 )/118 </119 & GenTrash/120 (/121 e.3/32/122 )/124 e.Trash/30/125 >/127 >/128 (/129 # CmdNextStep/130 )/131 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdResetAllocator]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[46], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_gen_Map_Z4]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_ident(vm, context[52], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[53], context[54], context[32], context[33]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::copy_evar(vm, context[56], context[57], context[34], context[35]);
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[60], context[61], context[36], context[37]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_close_call(vm, context[63]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_open_call(vm, context[66]);
      refalrts::alloc_name(vm, context[67], functions[efunc_gen_Map_Z1]);
      refalrts::alloc_open_bracket(vm, context[68]);
      refalrts::alloc_ident(vm, context[69], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[70], context[71], context[32], context[33]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::copy_evar(vm, context[73], context[74], context[34], context[35]);
      refalrts::alloc_open_bracket(vm, context[75]);
      refalrts::alloc_ident(vm, context[76], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[77], context[78], context[36], context[37]);
      refalrts::alloc_close_bracket(vm, context[79]);
      refalrts::alloc_close_call(vm, context[80]);
      refalrts::alloc_close_bracket(vm, context[81]);
      refalrts::alloc_open_bracket(vm, context[82]);
      refalrts::alloc_open_call(vm, context[83]);
      refalrts::alloc_name(vm, context[84], functions[efunc_GenPushLink]);
      refalrts::alloc_open_call(vm, context[85]);
      refalrts::alloc_name(vm, context[86], functions[efunc_gen_Map_Z2]);
      refalrts::alloc_open_bracket(vm, context[87]);
      refalrts::alloc_ident(vm, context[88], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[89], context[90], context[32], context[33]);
      refalrts::alloc_close_bracket(vm, context[91]);
      refalrts::copy_evar(vm, context[92], context[93], context[34], context[35]);
      refalrts::alloc_open_bracket(vm, context[94]);
      refalrts::alloc_ident(vm, context[95], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[96], context[97], context[36], context[37]);
      refalrts::alloc_close_bracket(vm, context[98]);
      refalrts::alloc_close_call(vm, context[99]);
      refalrts::alloc_close_call(vm, context[100]);
      refalrts::alloc_close_bracket(vm, context[101]);
      refalrts::alloc_open_bracket(vm, context[102]);
      refalrts::alloc_open_call(vm, context[103]);
      refalrts::alloc_name(vm, context[104], functions[efunc_gen_CalcRes_D2]);
      refalrts::copy_evar(vm, context[105], context[106], context[36], context[37]);
      refalrts::alloc_close_call(vm, context[107]);
      refalrts::alloc_close_bracket(vm, context[108]);
      refalrts::alloc_open_bracket(vm, context[109]);
      refalrts::alloc_open_call(vm, context[110]);
      refalrts::alloc_name(vm, context[111], functions[efunc_gen_Map_Z3]);
      refalrts::alloc_open_call(vm, context[112]);
      refalrts::alloc_name(vm, context[113], functions[efunc_CollectTiles]);
      refalrts::copy_evar(vm, context[114], context[115], context[34], context[35]);
      refalrts::alloc_close_call(vm, context[116]);
      refalrts::alloc_close_call(vm, context[117]);
      refalrts::alloc_close_bracket(vm, context[118]);
      refalrts::alloc_open_call(vm, context[119]);
      refalrts::alloc_name(vm, context[120], functions[efunc_GenTrash]);
      refalrts::alloc_open_bracket(vm, context[121]);
      refalrts::copy_evar(vm, context[122], context[123], context[32], context[33]);
      refalrts::alloc_close_bracket(vm, context[124]);
      refalrts::copy_evar(vm, context[125], context[126], context[30], context[31]);
      refalrts::alloc_close_call(vm, context[127]);
      refalrts::alloc_close_call(vm, context[128]);
      refalrts::alloc_open_bracket(vm, context[129]);
      refalrts::alloc_ident(vm, context[130], identifiers[ident_CmdNextStep]);
      refalrts::alloc_close_bracket(vm, context[131]);
      refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z2]);
      refalrts::link_brackets( context[129], context[131] );
      refalrts::push_stack( vm, context[128] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[127] );
      refalrts::push_stack( vm, context[119] );
      refalrts::link_brackets( context[121], context[124] );
      refalrts::link_brackets( context[109], context[118] );
      refalrts::push_stack( vm, context[117] );
      refalrts::push_stack( vm, context[110] );
      refalrts::push_stack( vm, context[116] );
      refalrts::push_stack( vm, context[112] );
      refalrts::link_brackets( context[102], context[108] );
      refalrts::push_stack( vm, context[107] );
      refalrts::push_stack( vm, context[103] );
      refalrts::link_brackets( context[82], context[101] );
      refalrts::push_stack( vm, context[100] );
      refalrts::push_stack( vm, context[83] );
      refalrts::push_stack( vm, context[99] );
      refalrts::push_stack( vm, context[85] );
      refalrts::link_brackets( context[94], context[98] );
      refalrts::link_brackets( context[87], context[91] );
      refalrts::link_brackets( context[65], context[81] );
      refalrts::push_stack( vm, context[80] );
      refalrts::push_stack( vm, context[66] );
      refalrts::link_brackets( context[75], context[79] );
      refalrts::link_brackets( context[68], context[72] );
      refalrts::link_brackets( context[48], context[64] );
      refalrts::push_stack( vm, context[63] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[58], context[62] );
      refalrts::link_brackets( context[51], context[55] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[45] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[7], context[43] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[38], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[131] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      res = refalrts::splice_evar( res, context[42], context[46] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Opt=2/4 (/7 # RemovedTile/23 )/8 s.ContextOffset$a/9 (/16 # Tile/18 e.2/21 )/17 >/1
    context[19] = context[10];
    context[20] = context[11];
    context[21] = context[14];
    context[22] = context[15];
    context[23] = refalrts::ident_left( identifiers[ident_RemovedTile], context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.2 as range 21
    //DEBUG: s.ContextOffset$a: 9
    //DEBUG: e.2: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset$a/9 } (/24 # CmdResetAllocator/25 )/26 </27 & GenResult-Aux=1@3/28 (/29 Tile{ AsIs: </0 Reuse: & TextFromExpr/4 HalfReuse: # RemovedTile/7 HalfReuse: >/23 AsIs: )/8 } (/30 </31 & TextFromExpr/32 Tile{ AsIs: (/16 AsIs: # Tile/18 AsIs: e.2/21 AsIs: )/17 AsIs: >/1 } )/33 (/34 </35 & Map@4/36 (/37 # Tile/38 e.2/21/39 )/41 >/42 )/43 (/44 </45 & Map@1/46 (/47 # Tile/48 e.2/21/49 )/51 >/52 )/53 </54 & GenPushLink/55 </56 & Map@2/57 (/58 # Tile/59 e.2/21/60 )/62 >/63 >/64 >/65 (/66 # CmdNextStep/67 )/68 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdResetAllocator]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_GenResultm_Aux_A1Z3]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_TextFromExpr]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z4]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_ident(vm, context[38], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[39], context[40], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_gen_Map_Z1]);
    refalrts::alloc_open_bracket(vm, context[47]);
    refalrts::alloc_ident(vm, context[48], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[49], context[50], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[51]);
    refalrts::alloc_close_call(vm, context[52]);
    refalrts::alloc_close_bracket(vm, context[53]);
    refalrts::alloc_open_call(vm, context[54]);
    refalrts::alloc_name(vm, context[55], functions[efunc_GenPushLink]);
    refalrts::alloc_open_call(vm, context[56]);
    refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_open_bracket(vm, context[58]);
    refalrts::alloc_ident(vm, context[59], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[60], context[61], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[62]);
    refalrts::alloc_close_call(vm, context[63]);
    refalrts::alloc_close_call(vm, context[64]);
    refalrts::alloc_close_call(vm, context[65]);
    refalrts::alloc_open_bracket(vm, context[66]);
    refalrts::alloc_ident(vm, context[67], identifiers[ident_CmdNextStep]);
    refalrts::alloc_close_bracket(vm, context[68]);
    refalrts::update_name(context[4], functions[efunc_TextFromExpr]);
    refalrts::reinit_ident(context[7], identifiers[ident_RemovedTile]);
    refalrts::reinit_close_call(context[23]);
    refalrts::link_brackets( context[66], context[68] );
    refalrts::push_stack( vm, context[65] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[64] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[63] );
    refalrts::push_stack( vm, context[56] );
    refalrts::link_brackets( context[58], context[62] );
    refalrts::link_brackets( context[44], context[53] );
    refalrts::push_stack( vm, context[52] );
    refalrts::push_stack( vm, context[45] );
    refalrts::link_brackets( context[47], context[51] );
    refalrts::link_brackets( context[34], context[43] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[37], context[41] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[29], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[68] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[24], context[29] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Opt=2/4 (/7 e.Trash/5 )/8 s.ContextOffset$a/9 e.MarkedResult$a/2 >/1
  // closed e.Trash as range 5
  // closed e.MarkedResult$a as range 2
  //DEBUG: s.ContextOffset$a: 9
  //DEBUG: e.Trash: 5
  //DEBUG: e.MarkedResult$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset$a/9 } (/10 # CmdResetAllocator/11 )/12 </13 & GenResult-Aux=1@4/14 (/15 </16 & TextFromExpr/17 e.Trash/5/18 >/20 )/21 (/22 </23 & TextFromExpr/24 Tile{ AsIs: e.MarkedResult$a/2 } >/25 )/26 (/27 </28 & Map@4/29 e.MarkedResult$a/2/30 >/32 )/33 (/34 </35 & Map@1/36 e.MarkedResult$a/2/37 >/39 )/40 (/41 </42 & GenPushLink/43 </44 & Map@2/45 e.MarkedResult$a/2/46 >/48 >/49 )/50 Tile{ AsIs: </0 Reuse: & GenSplices*2/4 AsIs: (/7 AsIs: e.Trash/5 AsIs: )/8 } e.MarkedResult$a/2/51 >/53 >/54 (/55 # CmdNextStep/56 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenResultm_Aux_A1Z4]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_TextFromExpr]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_TextFromExpr]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z4]);
  refalrts::copy_evar(vm, context[30], context[31], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z1]);
  refalrts::copy_evar(vm, context[37], context[38], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_name(vm, context[43], functions[efunc_GenPushLink]);
  refalrts::alloc_open_call(vm, context[44]);
  refalrts::alloc_name(vm, context[45], functions[efunc_gen_Map_Z2]);
  refalrts::copy_evar(vm, context[46], context[47], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[48]);
  refalrts::alloc_close_call(vm, context[49]);
  refalrts::alloc_close_bracket(vm, context[50]);
  refalrts::copy_evar(vm, context[51], context[52], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[53]);
  refalrts::alloc_close_call(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdNextStep]);
  refalrts::update_name(context[4], functions[efunc_gen_GenSplices_D2]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[55], context[1] );
  refalrts::push_stack( vm, context[54] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[53] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[41], context[50] );
  refalrts::push_stack( vm, context[49] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[44] );
  refalrts::link_brackets( context[34], context[40] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[27], context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[22], context[26] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[53], context[56] );
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[25], context[50] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[24] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A2("GenResult-Opt=2", COOKIE1_, COOKIE2_, func_gen_GenResultm_Opt_A2);


static refalrts::FnResult func_gen_GenResultm_Opt_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenResult-Opt=1/4 s.ContextOffset/17 (/15 e.PatternVars/13 )/16 (/11 e.Trash/9 )/12 (/7 e.MarkedResult/5 )/8 >/1
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
  // closed e.PatternVars as range 13
  // closed e.Trash as range 9
  // closed e.MarkedResult as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.PatternVars: 13
  //DEBUG: e.Trash: 9
  //DEBUG: e.MarkedResult: 5
  //DEBUG: s.ContextOffset: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & GenResult-Opt=2/16 AsIs: (/11 AsIs: e.Trash/9 AsIs: )/12 HalfReuse: </7 } & MapAccum@1/18 (/19 Tile{ AsIs: e.PatternVars/13 } Tile{ HalfReuse: )/4 AsIs: s.ContextOffset/17 HalfReuse: </15 } & CollectStrings/20 Tile{ AsIs: e.MarkedResult/5 } >/21 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_name(context[16], functions[efunc_gen_GenResultm_Opt_A2]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[19], context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A1("GenResult-Opt=1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Opt_A1);


static refalrts::FnResult func_GenResultm_Opt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & GenResult-Opt/4 s.ContextOffset/5 (/8 e.PatternVars/6 )/9 (/12 e.MarkedPattern/10 )/13 e.Result/2 >/1
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
  // closed e.PatternVars as range 6
  // closed e.MarkedPattern as range 10
  // closed e.Result as range 2
  //DEBUG: s.ContextOffset: 5
  //DEBUG: e.PatternVars: 6
  //DEBUG: e.MarkedPattern: 10
  //DEBUG: e.Result: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Opt=1/4 AsIs: s.ContextOffset/5 AsIs: (/8 AsIs: e.PatternVars/6 AsIs: )/9 HalfReuse: </12 } & GST/14 (/15 (/16 # LEFT-EDGE/17 )/18 Tile{ AsIs: e.MarkedPattern/10 } (/19 # RIGHT-EDGE/20 )/21 )/22 (/23 (/24 # LEFT-EDGE/25 )/26 </27 Tile{ HalfReuse: & FlatResult/13 AsIs: e.Result/2 AsIs: >/1 } (/28 # RIGHT-EDGE/29 )/30 )/31 >/32 >/33 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_GST]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_LEFTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_RIGHTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_LEFTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_RIGHTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Opt_A1]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[13], functions[efunc_FlatResult]);
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[23], context[31] );
  refalrts::link_brackets( context[28], context[30] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[24], context[26] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[19], context[27] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Opt("GenResult-Opt", 0U, 0U, func_GenResultm_Opt);


static refalrts::FnResult func_FlatResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & FlatResult/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & FlatResult/4 e.Range-B/7 (/13 # CallBrackets/15 e.SubRange/11 )/14 e.Range-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_CallBrackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange as range 11
      // closed e.Range-E as range 9
      //DEBUG: e.Range-B: 7
      //DEBUG: e.SubRange: 11
      //DEBUG: e.Range-E: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenCall/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange/11 } >/20 (/21 # TkCloseCall/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_TkOpenCall]);
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_TkCloseCall]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B/7 (/13 # Brackets/15 e.SubRange/11 )/14 e.Range-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Brackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange as range 11
      // closed e.Range-E as range 9
      //DEBUG: e.Range-B: 7
      //DEBUG: e.SubRange: 11
      //DEBUG: e.Range-E: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenBracket/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange/11 } >/20 (/21 # TkCloseBracket/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_TkOpenBracket]);
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B/7 (/13 # ADT-Brackets/15 (/18 e.Name/16 )/19 e.SubRange/11 )/14 e.Range-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.Name as range 16
      // closed e.SubRange as range 11
      // closed e.Range-E as range 9
      //DEBUG: e.Range-B: 7
      //DEBUG: e.Name: 16
      //DEBUG: e.SubRange: 11
      //DEBUG: e.Range-E: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B/7 HalfReuse: >/13 HalfReuse: (/15 HalfReuse: # TkOpenADT/18 } Tile{ AsIs: )/19 } (/20 # Symbol/21 # Name/22 Tile{ AsIs: e.Name/16 } )/23 </24 & FlatResult/25 Tile{ AsIs: e.SubRange/11 } >/26 (/27 # TkCloseADT/28 )/29 </30 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_Name]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseADT]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_ident(context[18], identifiers[ident_TkOpenADT]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[27], context[29] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[20], context[23] );
      refalrts::link_brackets( context[15], context[19] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[26], context[30] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B/7 (/13 # ClosureBrackets/15 e.SubRange/11 )/14 e.Range-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_ClosureBrackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange as range 11
      // closed e.Range-E as range 9
      //DEBUG: e.Range-B: 7
      //DEBUG: e.SubRange: 11
      //DEBUG: e.Range-E: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Range-B/7 } Tile{ AsIs: (/13 Reuse: # TkClosureHead/15 } )/16 Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange/11 } >/17 (/18 # TkUnwrappedClosure/19 )/20 </21 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[16]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_TkUnwrappedClosure]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::update_ident(context[15], identifiers[ident_TkClosureHead]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[18], context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatResult/4 e.Range/2 >/1
  // closed e.Range as range 2
  //DEBUG: e.Range: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatResult/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Range/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatResult("FlatResult", COOKIE1_, COOKIE2_, func_FlatResult);


static refalrts::FnResult func_GenResultm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 143 elems
  refalrts::Iter context[143];
  refalrts::zeros( context, 143 );
  // </0 & GenResult-Aux/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Aux/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
  // closed e.new2 as range 9
  do {
    // </0 & GenResult-Aux/4 (/7 e.new3/13 )/8 (/11 e.new4/15 (/19 # Tile/21 e.new5/17 )/20 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left( identifiers[ident_Tile], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.new3 as range 13
    // closed e.new4 as range 15
    // closed e.new5 as range 17
    do {
      // </0 & GenResult-Aux/4 (/7 e.new6/22 )/8 (/11 (/30 # Tile/32 e.new7/28 )/31 e.new8/24 (/19 # Tile/21 e.new9/26 )/20 )/12 >/1
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left( identifiers[ident_Tile], context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.new6 as range 22
      // closed e.new7 as range 28
      // closed e.new8 as range 24
      // closed e.new9 as range 26
      do {
        // </0 & GenResult-Aux/4 (/7 e.new10/33 )/8 (/11 (/30 # Tile/32 e.new12/35 )/31 e.new11/37 (/19 # Tile/21 t.new13/41 e.new14/39 )/20 )/12 >/1
        context[33] = context[22];
        context[34] = context[23];
        context[35] = context[28];
        context[36] = context[29];
        context[37] = context[24];
        context[38] = context[25];
        context[39] = context[26];
        context[40] = context[27];
        // closed e.new10 as range 33
        // closed e.new12 as range 35
        // closed e.new11 as range 37
        context[42] = refalrts::tvar_left( context[41], context[39], context[40] );
        if( ! context[42] )
          continue;
        // closed e.new14 as range 39
        do {
          // </0 & GenResult-Aux/4 (/7 e.Trash/43 )/8 (/11 (/30 # Tile/32 e.3/45 )/31 e.1/47 (/19 # Tile/21 (/41 # RIGHT-EDGE/51 )/42 )/20 )/12 >/1
          context[43] = context[33];
          context[44] = context[34];
          context[45] = context[35];
          context[46] = context[36];
          context[47] = context[37];
          context[48] = context[38];
          context[49] = 0;
          context[50] = 0;
          if( ! refalrts::brackets_term( context[49], context[50], context[41] ) )
            continue;
          context[51] = refalrts::ident_left( identifiers[ident_RIGHTm_EDGE], context[49], context[50] );
          if( ! context[51] )
            continue;
          if( ! refalrts::empty_seq( context[49], context[50] ) )
            continue;
          if( ! refalrts::empty_seq( context[39], context[40] ) )
            continue;
          // closed e.Trash as range 43
          // closed e.3 as range 45
          // closed e.1 as range 47
          //DEBUG: e.Trash: 43
          //DEBUG: e.3: 45
          //DEBUG: e.1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Aux=1@1/4 AsIs: (/7 } </52 & TextFromExpr/53 Tile{ AsIs: e.Trash/43 } >/54 )/55 (/56 </57 & TextFromExpr/58 (/59 # Tile/60 e.3/45/61 )/63 e.1/47/64 (/66 # Tile/67 (/68 # RIGHT-EDGE/69 )/70 )/71 >/72 )/73 (/74 </75 & Map@4/76 (/77 # Tile/78 e.3/45/79 )/81 e.1/47/82 (/84 # Tile/85 (/86 # RIGHT-EDGE/87 )/88 )/89 >/90 )/91 (/92 </93 & Map@1/94 (/95 # Tile/96 e.3/45/97 )/99 e.1/47/100 (/102 # Tile/103 (/104 # RIGHT-EDGE/105 )/106 )/107 >/108 )/109 (/110 </111 & GenPushLink/112 Tile{ HalfReuse: </8 HalfReuse: & Map@2/11 AsIs: (/30 AsIs: # Tile/32 AsIs: e.3/45 AsIs: )/31 AsIs: e.1/47 AsIs: (/19 AsIs: # Tile/21 AsIs: (/41 AsIs: # RIGHT-EDGE/51 AsIs: )/42 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 } )/113 (/114 </115 & Map@3/116 </117 & CollectTiles/118 e.1/47/119 >/121 >/122 )/123 </124 & GenTrash/125 (/126 e.3/45/127 )/129 e.Trash/43/130 >/132 >/133 Tile{ ]] }
          refalrts::alloc_open_call(vm, context[52]);
          refalrts::alloc_name(vm, context[53], functions[efunc_TextFromExpr]);
          refalrts::alloc_close_call(vm, context[54]);
          refalrts::alloc_close_bracket(vm, context[55]);
          refalrts::alloc_open_bracket(vm, context[56]);
          refalrts::alloc_open_call(vm, context[57]);
          refalrts::alloc_name(vm, context[58], functions[efunc_TextFromExpr]);
          refalrts::alloc_open_bracket(vm, context[59]);
          refalrts::alloc_ident(vm, context[60], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[61], context[62], context[45], context[46]);
          refalrts::alloc_close_bracket(vm, context[63]);
          refalrts::copy_evar(vm, context[64], context[65], context[47], context[48]);
          refalrts::alloc_open_bracket(vm, context[66]);
          refalrts::alloc_ident(vm, context[67], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[68]);
          refalrts::alloc_ident(vm, context[69], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[70]);
          refalrts::alloc_close_bracket(vm, context[71]);
          refalrts::alloc_close_call(vm, context[72]);
          refalrts::alloc_close_bracket(vm, context[73]);
          refalrts::alloc_open_bracket(vm, context[74]);
          refalrts::alloc_open_call(vm, context[75]);
          refalrts::alloc_name(vm, context[76], functions[efunc_gen_Map_Z4]);
          refalrts::alloc_open_bracket(vm, context[77]);
          refalrts::alloc_ident(vm, context[78], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[79], context[80], context[45], context[46]);
          refalrts::alloc_close_bracket(vm, context[81]);
          refalrts::copy_evar(vm, context[82], context[83], context[47], context[48]);
          refalrts::alloc_open_bracket(vm, context[84]);
          refalrts::alloc_ident(vm, context[85], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[86]);
          refalrts::alloc_ident(vm, context[87], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[88]);
          refalrts::alloc_close_bracket(vm, context[89]);
          refalrts::alloc_close_call(vm, context[90]);
          refalrts::alloc_close_bracket(vm, context[91]);
          refalrts::alloc_open_bracket(vm, context[92]);
          refalrts::alloc_open_call(vm, context[93]);
          refalrts::alloc_name(vm, context[94], functions[efunc_gen_Map_Z1]);
          refalrts::alloc_open_bracket(vm, context[95]);
          refalrts::alloc_ident(vm, context[96], identifiers[ident_Tile]);
          refalrts::copy_evar(vm, context[97], context[98], context[45], context[46]);
          refalrts::alloc_close_bracket(vm, context[99]);
          refalrts::copy_evar(vm, context[100], context[101], context[47], context[48]);
          refalrts::alloc_open_bracket(vm, context[102]);
          refalrts::alloc_ident(vm, context[103], identifiers[ident_Tile]);
          refalrts::alloc_open_bracket(vm, context[104]);
          refalrts::alloc_ident(vm, context[105], identifiers[ident_RIGHTm_EDGE]);
          refalrts::alloc_close_bracket(vm, context[106]);
          refalrts::alloc_close_bracket(vm, context[107]);
          refalrts::alloc_close_call(vm, context[108]);
          refalrts::alloc_close_bracket(vm, context[109]);
          refalrts::alloc_open_bracket(vm, context[110]);
          refalrts::alloc_open_call(vm, context[111]);
          refalrts::alloc_name(vm, context[112], functions[efunc_GenPushLink]);
          refalrts::alloc_close_bracket(vm, context[113]);
          refalrts::alloc_open_bracket(vm, context[114]);
          refalrts::alloc_open_call(vm, context[115]);
          refalrts::alloc_name(vm, context[116], functions[efunc_gen_Map_Z3]);
          refalrts::alloc_open_call(vm, context[117]);
          refalrts::alloc_name(vm, context[118], functions[efunc_CollectTiles]);
          refalrts::copy_evar(vm, context[119], context[120], context[47], context[48]);
          refalrts::alloc_close_call(vm, context[121]);
          refalrts::alloc_close_call(vm, context[122]);
          refalrts::alloc_close_bracket(vm, context[123]);
          refalrts::alloc_open_call(vm, context[124]);
          refalrts::alloc_name(vm, context[125], functions[efunc_GenTrash]);
          refalrts::alloc_open_bracket(vm, context[126]);
          refalrts::copy_evar(vm, context[127], context[128], context[45], context[46]);
          refalrts::alloc_close_bracket(vm, context[129]);
          refalrts::copy_evar(vm, context[130], context[131], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[132]);
          refalrts::alloc_close_call(vm, context[133]);
          refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z1]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
          refalrts::reinit_close_call(context[12]);
          refalrts::push_stack( vm, context[133] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[132] );
          refalrts::push_stack( vm, context[124] );
          refalrts::link_brackets( context[126], context[129] );
          refalrts::link_brackets( context[114], context[123] );
          refalrts::push_stack( vm, context[122] );
          refalrts::push_stack( vm, context[115] );
          refalrts::push_stack( vm, context[121] );
          refalrts::push_stack( vm, context[117] );
          refalrts::link_brackets( context[110], context[113] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[111] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[8] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::link_brackets( context[41], context[42] );
          refalrts::link_brackets( context[30], context[31] );
          refalrts::link_brackets( context[92], context[109] );
          refalrts::push_stack( vm, context[108] );
          refalrts::push_stack( vm, context[93] );
          refalrts::link_brackets( context[102], context[107] );
          refalrts::link_brackets( context[104], context[106] );
          refalrts::link_brackets( context[95], context[99] );
          refalrts::link_brackets( context[74], context[91] );
          refalrts::push_stack( vm, context[90] );
          refalrts::push_stack( vm, context[75] );
          refalrts::link_brackets( context[84], context[89] );
          refalrts::link_brackets( context[86], context[88] );
          refalrts::link_brackets( context[77], context[81] );
          refalrts::link_brackets( context[56], context[73] );
          refalrts::push_stack( vm, context[72] );
          refalrts::push_stack( vm, context[57] );
          refalrts::link_brackets( context[66], context[71] );
          refalrts::link_brackets( context[68], context[70] );
          refalrts::link_brackets( context[59], context[63] );
          refalrts::link_brackets( context[7], context[55] );
          refalrts::push_stack( vm, context[54] );
          refalrts::push_stack( vm, context[52] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[113], context[133] );
          res = refalrts::splice_evar( res, context[8], context[1] );
          res = refalrts::splice_evar( res, context[54], context[112] );
          res = refalrts::splice_evar( res, context[43], context[44] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenResult-Aux/4 (/7 e.Trash/43 )/8 (/11 (/30 # Tile/32 e.3/45 )/31 e.1/47 (/19 # Tile/21 t./41 e./49 )/20 )/12 >/1
        context[43] = context[33];
        context[44] = context[34];
        context[45] = context[35];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[38];
        context[49] = context[39];
        context[50] = context[40];
        // closed e.Trash as range 43
        // closed e.3 as range 45
        // closed e.1 as range 47
        // closed e. as range 49
        //DEBUG: t.: 41
        //DEBUG: e.Trash: 43
        //DEBUG: e.3: 45
        //DEBUG: e.1: 47
        //DEBUG: e.: 49

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Aux=1@2/4 AsIs: (/7 } </51 & TextFromExpr/52 Tile{ AsIs: e.Trash/43 } >/53 )/54 (/55 </56 & TextFromExpr/57 (/58 # Tile/59 e.3/45/60 )/62 e.1/47/63 (/65 # Tile/66 t./41/67 e./49/69 )/71 >/72 )/73 (/74 </75 & Map@4/76 (/77 # Tile/78 e.3/45/79 )/81 e.1/47/82 (/84 # Tile/85 t./41/86 e./49/88 )/90 >/91 )/92 (/93 </94 & Map@1/95 (/96 # Tile/97 e.3/45/98 )/100 e.1/47/101 (/103 # Tile/104 t./41/105 e./49/107 )/109 >/110 )/111 (/112 </113 & GenPushLink/114 Tile{ HalfReuse: </8 HalfReuse: & Map@2/11 AsIs: (/30 AsIs: # Tile/32 AsIs: e.3/45 AsIs: )/31 AsIs: e.1/47 AsIs: (/19 AsIs: # Tile/21 AsIs: t./41 AsIs: e./49 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 } )/115 (/116 </117 & BeginOffset/118 t./41/119 >/121 )/122 (/123 </124 & Map@3/125 </126 & CollectTiles/127 e.1/47/128 >/130 >/131 )/132 </133 & GenTrash/134 (/135 e.3/45/136 )/138 e.Trash/43/139 >/141 >/142 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[52], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[53]);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::alloc_open_bracket(vm, context[55]);
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[57], functions[efunc_TextFromExpr]);
        refalrts::alloc_open_bracket(vm, context[58]);
        refalrts::alloc_ident(vm, context[59], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[60], context[61], context[45], context[46]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::copy_evar(vm, context[63], context[64], context[47], context[48]);
        refalrts::alloc_open_bracket(vm, context[65]);
        refalrts::alloc_ident(vm, context[66], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[67], context[68], context[41], context[42]);
        refalrts::copy_evar(vm, context[69], context[70], context[49], context[50]);
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::alloc_close_bracket(vm, context[73]);
        refalrts::alloc_open_bracket(vm, context[74]);
        refalrts::alloc_open_call(vm, context[75]);
        refalrts::alloc_name(vm, context[76], functions[efunc_gen_Map_Z4]);
        refalrts::alloc_open_bracket(vm, context[77]);
        refalrts::alloc_ident(vm, context[78], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[79], context[80], context[45], context[46]);
        refalrts::alloc_close_bracket(vm, context[81]);
        refalrts::copy_evar(vm, context[82], context[83], context[47], context[48]);
        refalrts::alloc_open_bracket(vm, context[84]);
        refalrts::alloc_ident(vm, context[85], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[86], context[87], context[41], context[42]);
        refalrts::copy_evar(vm, context[88], context[89], context[49], context[50]);
        refalrts::alloc_close_bracket(vm, context[90]);
        refalrts::alloc_close_call(vm, context[91]);
        refalrts::alloc_close_bracket(vm, context[92]);
        refalrts::alloc_open_bracket(vm, context[93]);
        refalrts::alloc_open_call(vm, context[94]);
        refalrts::alloc_name(vm, context[95], functions[efunc_gen_Map_Z1]);
        refalrts::alloc_open_bracket(vm, context[96]);
        refalrts::alloc_ident(vm, context[97], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[98], context[99], context[45], context[46]);
        refalrts::alloc_close_bracket(vm, context[100]);
        refalrts::copy_evar(vm, context[101], context[102], context[47], context[48]);
        refalrts::alloc_open_bracket(vm, context[103]);
        refalrts::alloc_ident(vm, context[104], identifiers[ident_Tile]);
        refalrts::copy_evar(vm, context[105], context[106], context[41], context[42]);
        refalrts::copy_evar(vm, context[107], context[108], context[49], context[50]);
        refalrts::alloc_close_bracket(vm, context[109]);
        refalrts::alloc_close_call(vm, context[110]);
        refalrts::alloc_close_bracket(vm, context[111]);
        refalrts::alloc_open_bracket(vm, context[112]);
        refalrts::alloc_open_call(vm, context[113]);
        refalrts::alloc_name(vm, context[114], functions[efunc_GenPushLink]);
        refalrts::alloc_close_bracket(vm, context[115]);
        refalrts::alloc_open_bracket(vm, context[116]);
        refalrts::alloc_open_call(vm, context[117]);
        refalrts::alloc_name(vm, context[118], functions[efunc_BeginOffset]);
        refalrts::copy_evar(vm, context[119], context[120], context[41], context[42]);
        refalrts::alloc_close_call(vm, context[121]);
        refalrts::alloc_close_bracket(vm, context[122]);
        refalrts::alloc_open_bracket(vm, context[123]);
        refalrts::alloc_open_call(vm, context[124]);
        refalrts::alloc_name(vm, context[125], functions[efunc_gen_Map_Z3]);
        refalrts::alloc_open_call(vm, context[126]);
        refalrts::alloc_name(vm, context[127], functions[efunc_CollectTiles]);
        refalrts::copy_evar(vm, context[128], context[129], context[47], context[48]);
        refalrts::alloc_close_call(vm, context[130]);
        refalrts::alloc_close_call(vm, context[131]);
        refalrts::alloc_close_bracket(vm, context[132]);
        refalrts::alloc_open_call(vm, context[133]);
        refalrts::alloc_name(vm, context[134], functions[efunc_GenTrash]);
        refalrts::alloc_open_bracket(vm, context[135]);
        refalrts::copy_evar(vm, context[136], context[137], context[45], context[46]);
        refalrts::alloc_close_bracket(vm, context[138]);
        refalrts::copy_evar(vm, context[139], context[140], context[43], context[44]);
        refalrts::alloc_close_call(vm, context[141]);
        refalrts::alloc_close_call(vm, context[142]);
        refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z2]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[142] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[141] );
        refalrts::push_stack( vm, context[133] );
        refalrts::link_brackets( context[135], context[138] );
        refalrts::link_brackets( context[123], context[132] );
        refalrts::push_stack( vm, context[131] );
        refalrts::push_stack( vm, context[124] );
        refalrts::push_stack( vm, context[130] );
        refalrts::push_stack( vm, context[126] );
        refalrts::link_brackets( context[116], context[122] );
        refalrts::push_stack( vm, context[121] );
        refalrts::push_stack( vm, context[117] );
        refalrts::link_brackets( context[112], context[115] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[113] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[93], context[111] );
        refalrts::push_stack( vm, context[110] );
        refalrts::push_stack( vm, context[94] );
        refalrts::link_brackets( context[103], context[109] );
        refalrts::link_brackets( context[96], context[100] );
        refalrts::link_brackets( context[74], context[92] );
        refalrts::push_stack( vm, context[91] );
        refalrts::push_stack( vm, context[75] );
        refalrts::link_brackets( context[84], context[90] );
        refalrts::link_brackets( context[77], context[81] );
        refalrts::link_brackets( context[55], context[73] );
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[56] );
        refalrts::link_brackets( context[65], context[71] );
        refalrts::link_brackets( context[58], context[62] );
        refalrts::link_brackets( context[7], context[54] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[51] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[115], context[142] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        res = refalrts::splice_evar( res, context[53], context[114] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-Aux/4 (/7 e.Trash/33 )/8 (/11 (/30 # Tile/32 e.3/35 )/31 e.1/37 (/19 # Tile/21 e.4/39 )/20 )/12 >/1
      context[33] = context[22];
      context[34] = context[23];
      context[35] = context[28];
      context[36] = context[29];
      context[37] = context[24];
      context[38] = context[25];
      context[39] = context[26];
      context[40] = context[27];
      // closed e.Trash as range 33
      // closed e.3 as range 35
      // closed e.1 as range 37
      // closed e.4 as range 39
      //DEBUG: e.Trash: 33
      //DEBUG: e.3: 35
      //DEBUG: e.1: 37
      //DEBUG: e.4: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Aux=1@2/4 AsIs: (/7 } </41 & TextFromExpr/42 Tile{ AsIs: e.Trash/33 } >/43 )/44 (/45 </46 & TextFromExpr/47 (/48 # Tile/49 e.3/35/50 )/52 e.1/37/53 (/55 # Tile/56 e.4/39/57 )/59 >/60 )/61 (/62 </63 & Map@4/64 (/65 # Tile/66 e.3/35/67 )/69 e.1/37/70 (/72 # Tile/73 e.4/39/74 )/76 >/77 )/78 (/79 </80 & Map@1/81 (/82 # Tile/83 e.3/35/84 )/86 e.1/37/87 (/89 # Tile/90 e.4/39/91 )/93 >/94 )/95 (/96 </97 & GenPushLink/98 Tile{ HalfReuse: </8 HalfReuse: & Map@2/11 AsIs: (/30 AsIs: # Tile/32 AsIs: e.3/35 AsIs: )/31 AsIs: e.1/37 AsIs: (/19 AsIs: # Tile/21 AsIs: e.4/39 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 } )/99 (/100 </101 & CalcRes*2/102 e.4/39/103 >/105 )/106 (/107 </108 & Map@3/109 </110 & CollectTiles/111 e.1/37/112 >/114 >/115 )/116 </117 & GenTrash/118 (/119 e.3/35/120 )/122 e.Trash/33/123 >/125 >/126 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_TextFromExpr]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[50], context[51], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::copy_evar(vm, context[53], context[54], context[37], context[38]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[57], context[58], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_open_bracket(vm, context[62]);
      refalrts::alloc_open_call(vm, context[63]);
      refalrts::alloc_name(vm, context[64], functions[efunc_gen_Map_Z4]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[67], context[68], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::copy_evar(vm, context[70], context[71], context[37], context[38]);
      refalrts::alloc_open_bracket(vm, context[72]);
      refalrts::alloc_ident(vm, context[73], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[74], context[75], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[76]);
      refalrts::alloc_close_call(vm, context[77]);
      refalrts::alloc_close_bracket(vm, context[78]);
      refalrts::alloc_open_bracket(vm, context[79]);
      refalrts::alloc_open_call(vm, context[80]);
      refalrts::alloc_name(vm, context[81], functions[efunc_gen_Map_Z1]);
      refalrts::alloc_open_bracket(vm, context[82]);
      refalrts::alloc_ident(vm, context[83], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[84], context[85], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[86]);
      refalrts::copy_evar(vm, context[87], context[88], context[37], context[38]);
      refalrts::alloc_open_bracket(vm, context[89]);
      refalrts::alloc_ident(vm, context[90], identifiers[ident_Tile]);
      refalrts::copy_evar(vm, context[91], context[92], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[93]);
      refalrts::alloc_close_call(vm, context[94]);
      refalrts::alloc_close_bracket(vm, context[95]);
      refalrts::alloc_open_bracket(vm, context[96]);
      refalrts::alloc_open_call(vm, context[97]);
      refalrts::alloc_name(vm, context[98], functions[efunc_GenPushLink]);
      refalrts::alloc_close_bracket(vm, context[99]);
      refalrts::alloc_open_bracket(vm, context[100]);
      refalrts::alloc_open_call(vm, context[101]);
      refalrts::alloc_name(vm, context[102], functions[efunc_gen_CalcRes_D2]);
      refalrts::copy_evar(vm, context[103], context[104], context[39], context[40]);
      refalrts::alloc_close_call(vm, context[105]);
      refalrts::alloc_close_bracket(vm, context[106]);
      refalrts::alloc_open_bracket(vm, context[107]);
      refalrts::alloc_open_call(vm, context[108]);
      refalrts::alloc_name(vm, context[109], functions[efunc_gen_Map_Z3]);
      refalrts::alloc_open_call(vm, context[110]);
      refalrts::alloc_name(vm, context[111], functions[efunc_CollectTiles]);
      refalrts::copy_evar(vm, context[112], context[113], context[37], context[38]);
      refalrts::alloc_close_call(vm, context[114]);
      refalrts::alloc_close_call(vm, context[115]);
      refalrts::alloc_close_bracket(vm, context[116]);
      refalrts::alloc_open_call(vm, context[117]);
      refalrts::alloc_name(vm, context[118], functions[efunc_GenTrash]);
      refalrts::alloc_open_bracket(vm, context[119]);
      refalrts::copy_evar(vm, context[120], context[121], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[122]);
      refalrts::copy_evar(vm, context[123], context[124], context[33], context[34]);
      refalrts::alloc_close_call(vm, context[125]);
      refalrts::alloc_close_call(vm, context[126]);
      refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Aux_A1Z2]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[126] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[125] );
      refalrts::push_stack( vm, context[117] );
      refalrts::link_brackets( context[119], context[122] );
      refalrts::link_brackets( context[107], context[116] );
      refalrts::push_stack( vm, context[115] );
      refalrts::push_stack( vm, context[108] );
      refalrts::push_stack( vm, context[114] );
      refalrts::push_stack( vm, context[110] );
      refalrts::link_brackets( context[100], context[106] );
      refalrts::push_stack( vm, context[105] );
      refalrts::push_stack( vm, context[101] );
      refalrts::link_brackets( context[96], context[99] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[97] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[79], context[95] );
      refalrts::push_stack( vm, context[94] );
      refalrts::push_stack( vm, context[80] );
      refalrts::link_brackets( context[89], context[93] );
      refalrts::link_brackets( context[82], context[86] );
      refalrts::link_brackets( context[62], context[78] );
      refalrts::push_stack( vm, context[77] );
      refalrts::push_stack( vm, context[63] );
      refalrts::link_brackets( context[72], context[76] );
      refalrts::link_brackets( context[65], context[69] );
      refalrts::link_brackets( context[45], context[61] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[46] );
      refalrts::link_brackets( context[55], context[59] );
      refalrts::link_brackets( context[48], context[52] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[99], context[126] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[43], context[98] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Aux/4 (/7 # RemovedTile/26 )/8 (/11 (/19 # Tile/21 e.2/24 )/20 )/12 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = refalrts::ident_left( identifiers[ident_RemovedTile], context[22], context[23] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.2 as range 24
    //DEBUG: e.2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & GenResult-Aux=1@3/28 (/29 </30 & TextFromExpr/31 # RemovedTile/32 >/33 )/34 (/35 </36 & TextFromExpr/37 (/38 # Tile/39 e.2/24/40 )/42 >/43 )/44 (/45 </46 & Map@4/47 (/48 # Tile/49 e.2/24/50 )/52 >/53 )/54 (/55 </56 & Map@1/57 (/58 # Tile/59 e.2/24/60 )/62 Tile{ HalfReuse: >/0 HalfReuse: )/4 HalfReuse: </7 HalfReuse: & GenPushLink/26 HalfReuse: </8 HalfReuse: & Map@2/11 AsIs: (/19 AsIs: # Tile/21 AsIs: e.2/24 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 } >/63 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_GenResultm_Aux_A1Z3]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_TextFromExpr]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_RemovedTile]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_TextFromExpr]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[40], context[41], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::alloc_open_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_gen_Map_Z4]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::alloc_ident(vm, context[49], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[50], context[51], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::alloc_close_bracket(vm, context[54]);
    refalrts::alloc_open_bracket(vm, context[55]);
    refalrts::alloc_open_call(vm, context[56]);
    refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z1]);
    refalrts::alloc_open_bracket(vm, context[58]);
    refalrts::alloc_ident(vm, context[59], identifiers[ident_Tile]);
    refalrts::copy_evar(vm, context[60], context[61], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[62]);
    refalrts::alloc_close_call(vm, context[63]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[26], functions[efunc_GenPushLink]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[63] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[55], context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[56] );
    refalrts::link_brackets( context[58], context[62] );
    refalrts::link_brackets( context[45], context[54] );
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[46] );
    refalrts::link_brackets( context[48], context[52] );
    refalrts::link_brackets( context[35], context[44] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[36] );
    refalrts::link_brackets( context[38], context[42] );
    refalrts::link_brackets( context[29], context[34] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[63] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[27], context[62] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Aux/4 (/7 e.Trash/5 )/8 (/11 e.MarkedResult/9 )/12 >/1
  // closed e.Trash as range 5
  // closed e.MarkedResult as range 9
  //DEBUG: e.Trash: 5
  //DEBUG: e.MarkedResult: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenResult-Aux=1@4/14 (/15 </16 & TextFromExpr/17 e.Trash/5/18 >/20 )/21 (/22 </23 & TextFromExpr/24 e.MarkedResult/9/25 >/27 )/28 (/29 </30 & Map@4/31 e.MarkedResult/9/32 >/34 )/35 (/36 </37 & Map@1/38 e.MarkedResult/9/39 >/41 )/42 (/43 </44 & GenPushLink/45 </46 Tile{ HalfReuse: & Map@2/11 AsIs: e.MarkedResult/9 HalfReuse: >/12 AsIs: >/1 } )/47 Tile{ AsIs: </0 Reuse: & GenSplices*2/4 AsIs: (/7 AsIs: e.Trash/5 AsIs: )/8 } e.MarkedResult/9/48 >/50 >/51 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenResultm_Aux_A1Z4]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_TextFromExpr]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_TextFromExpr]);
  refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z4]);
  refalrts::copy_evar(vm, context[32], context[33], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_gen_Map_Z1]);
  refalrts::copy_evar(vm, context[39], context[40], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_open_call(vm, context[44]);
  refalrts::alloc_name(vm, context[45], functions[efunc_GenPushLink]);
  refalrts::alloc_open_call(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::copy_evar(vm, context[48], context[49], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[50]);
  refalrts::alloc_close_call(vm, context[51]);
  refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
  refalrts::reinit_close_call(context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_GenSplices_D2]);
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[43], context[47] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[46] );
  refalrts::link_brackets( context[36], context[42] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[29], context[35] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[22], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[50], context[51] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[47] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[46] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Aux("GenResult-Aux", COOKIE1_, COOKIE2_, func_GenResultm_Aux);


static refalrts::FnResult func_GenResultm_Allocations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-Allocations/4 e.MarkedResult/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult as range 2
  //DEBUG: e.MarkedResult: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.MarkedResult/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Allocations("GenResult-Allocations", COOKIE1_, COOKIE2_, func_GenResultm_Allocations);


static refalrts::FnResult func_GenResultm_ReinitUpdate(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-ReinitUpdate/4 e.MarkedResult/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult as range 2
  //DEBUG: e.MarkedResult: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.MarkedResult/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_ReinitUpdate("GenResult-ReinitUpdate", COOKIE1_, COOKIE2_, func_GenResultm_ReinitUpdate);


static refalrts::FnResult func_CreateElemParam(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CreateElemParam/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CreateElemParam/4 s.new1/5 e.new2/2 s.new3/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & CreateElemParam/4 # Symbol/5 s.new5/9 s.new6/10 s.new4/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # Symbol/5 # Char/9 s.Char/10 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Char], context[9] ) )
        continue;
      //DEBUG: s.Char: 10
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 {REMOVED TILE} s.Offset/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset6 /5 Reuse: # ElChar/9 AsIs: s.Char/10 } Tile{ ]] }
      refalrts::reinit_svar( context[5], context[6] );
      refalrts::update_ident(context[9], identifiers[ident_ElChar]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # Symbol/5 # Number/9 s.Number/10 s.Offset/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Number], context[9] ) )
      continue;
    //DEBUG: s.Number: 10
    //DEBUG: s.Offset: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 {REMOVED TILE} s.Offset/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset6 /5 Reuse: # ElNumber/9 AsIs: s.Number/10 } Tile{ ]] }
    refalrts::reinit_svar( context[5], context[6] );
    refalrts::update_ident(context[9], identifiers[ident_ElNumber]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 s.new4/5 s.new5/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # TkOpenBracket/5 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
        continue;
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElOpenBracket/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenBracket]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseBracket/5 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[5] ) )
        continue;
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElCloseBracket/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElCloseBracket]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenADT/5 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[5] ) )
        continue;
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElOpenADT/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenADT]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseADT/5 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[5] ) )
        continue;
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElCloseADT/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElCloseADT]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenCall/5 s.Offset/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
        continue;
      //DEBUG: s.Offset: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenCall/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElOpenCall/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenCall]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # TkCloseCall/5 s.Offset/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[5] ) )
      continue;
    //DEBUG: s.Offset: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElCloseCall/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElCloseCall]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 # Symbol/5 s.new5/9 e.new6/7 s.new4/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new6 as range 7
    do {
      // </0 & CreateElemParam/4 # Symbol/5 # Name/9 e.Name/10 s.Offset/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[9] ) )
        continue;
      // closed e.Name as range 10
      //DEBUG: s.Offset: 6
      //DEBUG: e.Name: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # Symbol/5 # Name/9 {REMOVED TILE} s.Offset/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Offset6 /0 HalfReuse: # ElName/4 } Tile{ AsIs: e.Name/10 } Tile{ ]] }
      refalrts::reinit_svar( context[0], context[6] );
      refalrts::reinit_ident(context[4], identifiers[ident_ElName]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # Symbol/5 # Identifier/9 e.Name/10 s.Offset/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Identifier], context[9] ) )
      continue;
    // closed e.Name as range 10
    //DEBUG: s.Offset: 6
    //DEBUG: e.Name: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/5 # Identifier/9 {REMOVED TILE} s.Offset/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Offset6 /0 HalfReuse: # ElIdent/4 } Tile{ AsIs: e.Name/10 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_ident(context[4], identifiers[ident_ElIdent]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 s.new4/5 s.new5/6 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateElemParam/4 # TkClosureHead/5 s.Offset/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[5] ) )
      continue;
    //DEBUG: s.Offset: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkClosureHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElClosureHead/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElClosureHead]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 # TkUnwrappedClosure/5 s.Offset/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Offset: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkUnwrappedClosure/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset/6 HalfReuse: # ElUnwrappedClosure/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_ElUnwrappedClosure]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateElemParam("CreateElemParam", COOKIE1_, COOKIE2_, func_CreateElemParam);


static refalrts::FnResult func_gen_GenPushLink_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenPushLink=1/4 (/7 )/8 e.Commands/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenPushLink=1/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Reverse]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPushLink_A1("GenPushLink=1", COOKIE1_, COOKIE2_, func_gen_GenPushLink_A1);


static refalrts::FnResult func_GenPushLink(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & GenPushLink/4 e.MarkedResult/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult as range 2
  //DEBUG: e.MarkedResult: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenPushLink=1/4 } </5 & DoMapAccum@1/6 (/7 )/8 (/9 )/10 Tile{ AsIs: e.MarkedResult/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_GenPushLink_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenPushLink("GenPushLink", COOKIE1_, COOKIE2_, func_GenPushLink);


static refalrts::FnResult func_PatchClosureLogic(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PatchClosureLogic/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & PatchClosureLogic/4 e.Commands-B/7 (/13 # CmdWrapClosure/15 s.Offset/16 )/14 e.Commands-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_CmdWrapClosure], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Commands-E as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B: 7
      //DEBUG: e.Commands-E: 9
      //DEBUG: s.Offset: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands-B/7 } Tile{ AsIs: e.Commands-E/9 } Tile{ AsIs: >/1 } Tile{ AsIs: (/13 AsIs: # CmdWrapClosure/15 AsIs: s.Offset/16 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchClosureLogic/4 e.new1/5 t.new2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new1 as range 5
    do {
      // </0 & PatchClosureLogic/4 e.Commands-B/16 (/22 # CmdCreateElem/24 s.CreateMode/27 s.Offset/26 # ElUnwrappedClosure/25 )/23 e.Commands-E/18 (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset/14 s.Offset/15 )/8 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_PatchCreateUnwrappedClosure], context[11], context[12] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left( identifiers[ident_CmdCreateElem], context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::ident_right( identifiers[ident_ElUnwrappedClosure], context[20], context[21] );
        if( ! context[25] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[26], context[15], context[20], context[21] ) )
          continue;
        // closed e.Commands-E as range 18
        if( ! refalrts::svar_left( context[27], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: s.HeadOffset: 14
        //DEBUG: s.Offset: 15
        //DEBUG: e.Commands-B: 16
        //DEBUG: e.Commands-E: 18
        //DEBUG: s.CreateMode: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset/14 s.Offset/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 AsIs: e.Commands-B/16 AsIs: (/22 AsIs: # CmdCreateElem/24 AsIs: s.CreateMode/27 AsIs: s.Offset/26 AsIs: # ElUnwrappedClosure/25 HalfReuse: s.HeadOffset14 /23 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands-E/18 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[23], context[14] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[22], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_elem( res, context[8] );
        refalrts::splice_to_freelist_open( vm, context[23], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchClosureLogic/4 e.Commands/9 t.OtherCommand/7 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Commands as range 9
    //DEBUG: t.OtherCommand: 7
    //DEBUG: e.Commands: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands/9 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand/7 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchClosureLogic/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PatchClosureLogic/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchClosureLogic("PatchClosureLogic", COOKIE1_, COOKIE2_, func_PatchClosureLogic);


static refalrts::FnResult func_Reverse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Reverse/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Reverse/4 e.Items/5 t.Last/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Items as range 5
    //DEBUG: t.Last: 7
    //DEBUG: e.Items: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last/7 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reverse/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reverse/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reverse("Reverse", COOKIE1_, COOKIE2_, func_Reverse);


static refalrts::FnResult func_FlatTilesInResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FlatTilesInResult/4 e.Result/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result as range 2
  //DEBUG: e.Result: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: e.Result/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatTilesInResult("FlatTilesInResult", COOKIE1_, COOKIE2_, func_FlatTilesInResult);


static refalrts::FnResult func_GenSplices(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & GenSplices/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenSplices/4 (/7 e.new1/5 )/8 e.new2/2 (/11 # Tile/13 e.new3/9 )/12 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_Tile], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  // closed e.new3 as range 9
  do {
    // </0 & GenSplices/4 (/7 e.new6/14 )/8 (/22 # Tile/24 e.new4/20 )/23 e.new5/16 (/11 # Tile/13 e.new7/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left( identifiers[ident_Tile], context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.new6 as range 14
    // closed e.new4 as range 20
    // closed e.new5 as range 16
    // closed e.new7 as range 18
    do {
      // </0 & GenSplices/4 (/7 e.new10/25 )/8 (/22 # Tile/24 e.new9/27 )/23 e.new8/29 (/11 # Tile/13 t.new11/33 e.new12/31 )/12 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[16];
      context[30] = context[17];
      context[31] = context[18];
      context[32] = context[19];
      // closed e.new10 as range 25
      // closed e.new9 as range 27
      // closed e.new8 as range 29
      context[34] = refalrts::tvar_left( context[33], context[31], context[32] );
      if( ! context[34] )
        continue;
      // closed e.new12 as range 31
      do {
        // </0 & GenSplices/4 (/7 e.Trash/35 )/8 (/22 # Tile/24 e.LeftTile/37 )/23 e.Result/39 (/11 # Tile/13 (/33 # RIGHT-EDGE/43 )/34 )/12 >/1
        context[35] = context[25];
        context[36] = context[26];
        context[37] = context[27];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[30];
        context[41] = 0;
        context[42] = 0;
        if( ! refalrts::brackets_term( context[41], context[42], context[33] ) )
          continue;
        context[43] = refalrts::ident_left( identifiers[ident_RIGHTm_EDGE], context[41], context[42] );
        if( ! context[43] )
          continue;
        if( ! refalrts::empty_seq( context[41], context[42] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.Trash as range 35
        // closed e.LeftTile as range 37
        // closed e.Result as range 39
        //DEBUG: e.Trash: 35
        //DEBUG: e.LeftTile: 37
        //DEBUG: e.Result: 39

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/33 Reuse: # CmdSetRes/43 HalfReuse: # RIGHT-EDGE/34 AsIs: )/12 HalfReuse: </1 } Tile{ HalfReuse: & Map@3/7 } Tile{ AsIs: </0 Reuse: & CollectTiles/4 } Tile{ AsIs: e.Result/39 } Tile{ HalfReuse: >/11 HalfReuse: >/13 } Tile{ HalfReuse: </8 HalfReuse: & GenTrash/22 HalfReuse: (/24 AsIs: e.LeftTile/37 AsIs: )/23 } Tile{ AsIs: e.Trash/35 } >/44 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::update_ident(context[43], identifiers[ident_CmdSetRes]);
        refalrts::reinit_ident(context[34], identifiers[ident_RIGHTm_EDGE]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::update_name(context[4], functions[efunc_CollectTiles]);
        refalrts::reinit_close_call(context[11]);
        refalrts::reinit_close_call(context[13]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[22], functions[efunc_GenTrash]);
        refalrts::reinit_open_bracket(context[24]);
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[24], context[23] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[8], context[23] );
        res = refalrts::splice_evar( res, context[11], context[13] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_evar( res, context[33], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenSplices/4 (/7 e.Trash/35 )/8 (/22 # Tile/24 e.LeftTile/37 )/23 e.Result/39 (/11 # Tile/13 t./33 e./41 )/12 >/1
      context[35] = context[25];
      context[36] = context[26];
      context[37] = context[27];
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[30];
      context[41] = context[31];
      context[42] = context[32];
      // closed e.Trash as range 35
      // closed e.LeftTile as range 37
      // closed e.Result as range 39
      // closed e. as range 41
      //DEBUG: t.: 33
      //DEBUG: e.Trash: 35
      //DEBUG: e.LeftTile: 37
      //DEBUG: e.Result: 39
      //DEBUG: e.: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e./41 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/43 # CmdSetRes/44 Tile{ HalfReuse: </11 HalfReuse: & BeginOffset/13 AsIs: t./33 } >/45 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map@3/4 HalfReuse: </7 } & CollectTiles/46 Tile{ AsIs: e.Result/39 } >/47 >/48 Tile{ HalfReuse: </8 HalfReuse: & GenTrash/22 HalfReuse: (/24 AsIs: e.LeftTile/37 AsIs: )/23 } Tile{ AsIs: e.Trash/35 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdSetRes]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_name(vm, context[46], functions[efunc_CollectTiles]);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[13], functions[efunc_BeginOffset]);
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[22], functions[efunc_GenTrash]);
      refalrts::reinit_open_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[24], context[23] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[43], context[12] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[8], context[23] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[11], context[34] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenSplices/4 (/7 e.Trash/25 )/8 (/22 # Tile/24 e.LeftTile/27 )/23 e.Result/29 (/11 # Tile/13 e.RightTile/31 )/12 >/1
    context[25] = context[14];
    context[26] = context[15];
    context[27] = context[20];
    context[28] = context[21];
    context[29] = context[16];
    context[30] = context[17];
    context[31] = context[18];
    context[32] = context[19];
    // closed e.Trash as range 25
    // closed e.LeftTile as range 27
    // closed e.Result as range 29
    // closed e.RightTile as range 31
    //DEBUG: e.Trash: 25
    //DEBUG: e.LeftTile: 27
    //DEBUG: e.Result: 29
    //DEBUG: e.RightTile: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/33 # CmdSetRes/34 Tile{ HalfReuse: </11 HalfReuse: & CalcRes*2/13 AsIs: e.RightTile/31 HalfReuse: >/12 HalfReuse: )/1 } Tile{ AsIs: </0 Reuse: & Map@3/4 HalfReuse: </7 } & CollectTiles/35 Tile{ AsIs: e.Result/29 } >/36 >/37 Tile{ HalfReuse: </8 HalfReuse: & GenTrash/22 HalfReuse: (/24 AsIs: e.LeftTile/27 AsIs: )/23 } Tile{ AsIs: e.Trash/25 } >/38 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdSetRes]);
    refalrts::alloc_name(vm, context[35], functions[efunc_CollectTiles]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[13], functions[efunc_gen_CalcRes_D2]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[22], functions[efunc_GenTrash]);
    refalrts::reinit_open_bracket(context[24]);
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[24], context[23] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[33], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[8], context[23] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile/9 )/12 >/1
  context[14] = refalrts::ident_left( identifiers[ident_RemovedTile], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OneTile as range 9
  //DEBUG: e.OneTile: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSplices("GenSplices", COOKIE1_, COOKIE2_, func_GenSplices);


static refalrts::FnResult func_CalcRes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CalcRes/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CalcRes/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_RIGHTm_EDGE], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RIGHT-EDGE/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_RIGHTm_EDGE]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcRes/4 t.First/5 e.Tile/2 >/1
  // closed e.Tile as range 2
  //DEBUG: t.First: 5
  //DEBUG: e.Tile: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tile/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_BeginOffset]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcRes("CalcRes", COOKIE1_, COOKIE2_, func_CalcRes);


static refalrts::FnResult func_CollectTiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectTiles/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & CollectTiles/4 (/9 # Tile/11 e.Tile/7 )/10 e.Other/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_Tile], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Tile as range 7
    // closed e.Other as range 5
    //DEBUG: e.Tile: 7
    //DEBUG: e.Other: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other/5 } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile/7 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 e.Allocated/7 (/13 # Tile/15 e.Tile/11 )/14 e.Other/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Tile], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Tile as range 11
      // closed e.Other as range 9
      //DEBUG: e.Allocated: 7
      //DEBUG: e.Tile: 11
      //DEBUG: e.Other: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other/9 } Tile{ HalfReuse: >/13 HalfReuse: (/15 AsIs: e.Tile/11 AsIs: )/14 } </16 & CollectTiles-Alloc/17 Tile{ AsIs: e.Allocated/7 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_CollectTilesm_Alloc]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles/4 e.Allocated/2 >/1
  // closed e.Allocated as range 2
  //DEBUG: e.Allocated: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles-Alloc/4 AsIs: e.Allocated/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CollectTilesm_Alloc]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTiles("CollectTiles", COOKIE1_, COOKIE2_, func_CollectTiles);


static refalrts::FnResult func_CollectTilesm_Alloc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CollectTiles-Alloc/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & CollectTiles-Alloc/4 (/9 # VarCopy/11 'e'/12 e.Index/7 s.Sample/14 s.Offset/13 )/10 e.Alloc/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_VarCopy], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    // closed e.Index as range 7
    //DEBUG: e.Alloc: 5
    //DEBUG: s.Offset: 13
    //DEBUG: s.Sample: 14
    //DEBUG: e.Index: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & CollectTiles-Alloc/16 Tile{ AsIs: e.Alloc/5 } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/9 AsIs: # VarCopy/11 AsIs: 'e'/12 AsIs: e.Index/7 AsIs: s.Sample/14 AsIs: s.Offset/13 AsIs: )/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_CollectTilesm_Alloc]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 e.Alloc/5 (/9 # VarCopy/11 'e'/12 e.Index/7 s.Sample/14 s.Offset/13 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_VarCopy], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    // closed e.Index as range 7
    //DEBUG: e.Alloc: 5
    //DEBUG: s.Offset: 13
    //DEBUG: s.Sample: 14
    //DEBUG: e.Index: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/15 Tile{ AsIs: (/9 AsIs: # VarCopy/11 AsIs: 'e'/12 AsIs: e.Index/7 AsIs: s.Sample/14 AsIs: s.Offset/13 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles-Alloc/4 } Tile{ AsIs: e.Alloc/5 } >/16 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles-Alloc/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles-Alloc/4 e.Alloc/2 >/1
  // closed e.Alloc as range 2
  //DEBUG: e.Alloc: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTilesm_Alloc("CollectTiles-Alloc", COOKIE1_, COOKIE2_, func_CollectTilesm_Alloc);


static refalrts::FnResult func_GenTrash(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenTrash/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenTrash/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & GenTrash/4 (/7 e.LeftTile/9 )/8 e.Trash-B/13 # RemovedTile/17 e.Trash-E/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.LeftTile as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = refalrts::ident_left( identifiers[ident_RemovedTile], context[15], context[16] );
      if( ! context[17] )
        continue;
      // closed e.Trash-E as range 15
      //DEBUG: e.LeftTile: 9
      //DEBUG: e.Trash-B: 13
      //DEBUG: e.Trash-E: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} # RemovedTile/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile/9 AsIs: )/8 } Tile{ AsIs: e.Trash-B/13 } Tile{ AsIs: e.Trash-E/15 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenTrash/4 (/7 e.LeftTile/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.LeftTile as range 9
    //DEBUG: e.LeftTile: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.LeftTile/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdUseRes/4 HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdUseRes]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.new4/5 t.new5/9 )/8 e.new3/2 >/1
  // closed e.new3 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 5
  do {
    // </0 & GenTrash/4 (/7 (/9 # LEFT-EDGE/15 )/10 )/8 e.Trash/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_LEFTm_EDGE], context[13], context[14] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Trash as range 11
    //DEBUG: e.Trash: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenTrash/4 {REMOVED TILE} )/8 e.Trash/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/9 AsIs: # LEFT-EDGE/15 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_ident(context[9], identifiers[ident_CmdTrash]);
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.LeftTile/5 t.Last/9 )/8 e.Trash/2 >/1
  // closed e.LeftTile as range 5
  // closed e.Trash as range 2
  //DEBUG: t.Last: 9
  //DEBUG: e.LeftTile: 5
  //DEBUG: e.Trash: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.LeftTile/5 {REMOVED TILE} e.Trash/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_EndOffset]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdTrash]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenTrash("GenTrash", COOKIE1_, COOKIE2_, func_GenTrash);


static refalrts::FnResult func_BeginOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BeginOffset/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & BeginOffset/4 (/7 s.new1/9 e.new2/5 t.new3/10 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 5
  do {
    // </0 & BeginOffset/4 (/7 s.new4/9 t.new5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      //DEBUG: t.Item: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

    do {
      // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      //DEBUG: t.Item: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
      continue;
    //DEBUG: t.Item: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

  // </0 & BeginOffset/4 (/7 s.Tag/9 e.Info/5 s.Offset/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info as range 5
  //DEBUG: s.Offset: 10
  //DEBUG: s.Tag: 9
  //DEBUG: e.Info: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BeginOffset/4 (/7 s.Tag/9 e.Info/5 s.Offset/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset10 /1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BeginOffset("BeginOffset", COOKIE1_, COOKIE2_, func_BeginOffset);


static refalrts::FnResult func_EndOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & EndOffset/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & EndOffset/4 (/7 s.new1/9 e.new2/5 t.new3/10 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new4/9 t.new5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & EndOffset/4 (/7 # AsIs/9 t.Item/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      //DEBUG: t.Item: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

    do {
      // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      //DEBUG: t.Item: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
      continue;
    //DEBUG: t.Item: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item/10 } Tile{ AsIs: >/1 ]] }
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

  // </0 & EndOffset/4 (/7 s.new4/9 e.new6/5 s.new5/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new7/9 s.new9/14 e.new10/12 s.new8/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new10 as range 12
    do {
      // </0 & EndOffset/4 (/7 s.new11/9 's'/14 e.new13/15 s.new12/10 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.new13 as range 15
      do {
        // </0 & EndOffset/4 (/7 # Var/9 's'/14 e.Index/17 s.Offset/10 )/8 >/1
        context[17] = context[15];
        context[18] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_Var], context[9] ) )
          continue;
        // closed e.Index as range 17
        //DEBUG: s.Offset: 10
        //DEBUG: e.Index: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # Var/9 's'/14 e.Index/17 s.Offset/10 )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset10 /1 ]] }
        refalrts::reinit_svar( context[1], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & EndOffset/4 (/7 # VarCopy/9 's'/14 e.Index/17 s.Sample/19 s.Offset/10 )/8 >/1
      context[17] = context[15];
      context[18] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_VarCopy], context[9] ) )
        continue;
      if( ! refalrts::svar_right( context[19], context[17], context[18] ) )
        continue;
      // closed e.Index as range 17
      //DEBUG: s.Offset: 10
      //DEBUG: s.Sample: 19
      //DEBUG: e.Index: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # VarCopy/9 's'/14 e.Index/17 s.Sample/19 s.Offset/10 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset10 /1 ]] }
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EndOffset/4 (/7 # Var/9 s.Mode/14 e.Index/15 s.Offset/10 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Var], context[9] ) )
        continue;
      // closed e.Index as range 15
      //DEBUG: s.Mode: 14
      //DEBUG: s.Offset: 10
      //DEBUG: e.Index: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode/14 e.Index/15 s.Offset/10 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset10 /9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_number(context[7], 1UL);
      refalrts::reinit_svar( context[9], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EndOffset/4 (/7 # VarCopy/9 s.Mode/14 e.Index/15 s.Sample/17 s.Offset/10 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_VarCopy], context[9] ) )
      continue;
    if( ! refalrts::svar_right( context[17], context[15], context[16] ) )
      continue;
    // closed e.Index as range 15
    //DEBUG: s.Mode: 14
    //DEBUG: s.Offset: 10
    //DEBUG: s.Sample: 17
    //DEBUG: e.Index: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode/14 e.Index/15 s.Sample/17 s.Offset/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset10 /9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[7], 1UL);
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EndOffset/4 (/7 # TkString/9 e.String/12 s.Offset/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkString], context[9] ) )
      continue;
    // closed e.String as range 12
    //DEBUG: s.Offset: 10
    //DEBUG: e.String: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.String/12 s.Offset/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset10 /9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[7], 1UL);
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EndOffset/4 (/7 s.Tag/9 e.Info/5 s.Offset/10 )/8 >/1
  // closed e.Info as range 5
  //DEBUG: s.Tag: 9
  //DEBUG: s.Offset: 10
  //DEBUG: e.Info: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 s.Tag/9 e.Info/5 s.Offset/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset10 /1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EndOffset("EndOffset", COOKIE1_, COOKIE2_, func_EndOffset);


static refalrts::FnResult func_AddOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & AddOffsets/4 s.ContextOffset/5 (/8 e.PatternVars/6 )/9 e.MarkedResult/2 >/1
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
  // closed e.PatternVars as range 6
  // closed e.MarkedResult as range 2
  //DEBUG: s.ContextOffset: 5
  //DEBUG: e.PatternVars: 6
  //DEBUG: e.MarkedResult: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@1/4 } Tile{ AsIs: (/8 AsIs: e.PatternVars/6 AsIs: )/9 } Tile{ AsIs: s.ContextOffset/5 } </10 & CollectStrings/11 Tile{ AsIs: e.MarkedResult/2 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_CollectStrings]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddOffsets("AddOffsets", COOKIE1_, COOKIE2_, func_AddOffsets);


static refalrts::FnResult func_GetSampleOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GetSampleOffset/4 e._/10 (/16 s.Mode/18 (/21 e.Index/23 )/22 e.Offsets/14 s.SampleOffset/25 )/17 e._0/12 (/7 s.Mode/9 e.Index/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index as range 5
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::repeated_stvar_left( vm, context[18], context[9], context[14], context[15] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    if( ! refalrts::repeated_evar_left( vm, context[23], context[24], context[5], context[6], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e._0 as range 12
    if( ! refalrts::svar_right( context[25], context[14], context[15] ) )
      continue;
    // closed e.Offsets as range 14
    //DEBUG: s.Mode: 9
    //DEBUG: e.Index: 5
    //DEBUG: e._: 10
    //DEBUG: e._0: 12
    //DEBUG: s.SampleOffset: 25
    //DEBUG: e.Offsets: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GetSampleOffset/4 e._/10 (/16 s.Mode/18 (/21 e.Index/23 )/22 e.Offsets/14 s.SampleOffset/25 )/17 e._0/12 (/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Mode/9 AsIs: e.Index/5 HalfReuse: s.SampleOffset25 /8 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_GetSampleOffset("GetSampleOffset", COOKIE1_, COOKIE2_, func_GetSampleOffset);


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


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MapAccum@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MapAccum@1/4 (/7 e.new1/5 )/8 t.new2/9 e.new3/2 >/1
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
  // closed e.new3 as range 2
  do {
    // </0 & MapAccum@1/4 (/7 e.PatternVars/11 )/8 t.Acc/9 e.Tail/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.PatternVars as range 11
    // closed e.Tail as range 13
    //DEBUG: t.Acc: 9
    //DEBUG: e.PatternVars: 11
    //DEBUG: e.Tail: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: (/7 AsIs: e.PatternVars/11 AsIs: )/8 AsIs: t.Acc/9 } (/15 )/16 Tile{ AsIs: e.Tail/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 (/7 e.PatternVars/5 )/8 t.accum/9 e.items/2 >/1
  // closed e.PatternVars as range 5
  // closed e.items as range 2
  //DEBUG: t.accum: 9
  //DEBUG: e.PatternVars: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 HalfReuse: [*]/7 } & AddOffsets\1@0/11 (/12 Tile{ AsIs: e.PatternVars/5 } )/13 Tile{ HalfReuse: {*}/8 AsIs: t.accum/9 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_AddOffsets_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@1/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@1/4 (/7 # Tile/13 e.0/11 )/8 e.Tail/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Tile], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.0 as range 11
      // closed e.Tail as range 9
      //DEBUG: e.0: 11
      //DEBUG: e.Tail: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.0/11 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[7], context[13] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & GenResult-ReinitUpdate\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_ReinitUpdate_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@2/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@2/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
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
        // </0 & Map@2/4 (/7 # Tile/13 e.0/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Tile], context[13] ) )
          continue;
        // closed e.0 as range 14
        // closed e.Tail as range 16
        //DEBUG: e.0: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 } Tile{ AsIs: e.0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[7], context[13] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 (/7 s.tag/13 e.0/14 )/8 e.Tail/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0 as range 14
      // closed e.Tail as range 16
      //DEBUG: s.tag: 13
      //DEBUG: e.0: 14
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag/13 AsIs: e.0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@2/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatTilesInResult\1*2/4 AsIs: t.Next/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FlatTilesInResult\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@3/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@3/4 (/7 e.new3/11 t.new4/13 )/8 e.new5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new5 as range 9
      context[14] = refalrts::tvar_right( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.new3 as range 11
      do {
        // </0 & Map@3/4 (/7 t.new6/13 )/8 e.new7/15 >/1
        context[15] = context[9];
        context[16] = context[10];
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;
        // closed e.new7 as range 15
        do {
          // </0 & Map@3/4 (/7 (/13 # AsIs/21 (/24 # Var/26 'e'/27 e.7/22 s.Offset/28 )/25 )/14 )/8 e.Tail/17 >/1
          context[17] = context[15];
          context[18] = context[16];
          context[19] = 0;
          context[20] = 0;
          if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
            continue;
          context[21] = refalrts::ident_left( identifiers[ident_AsIs], context[19], context[20] );
          if( ! context[21] )
            continue;
          context[22] = 0;
          context[23] = 0;
          context[24] = refalrts::brackets_left( context[22], context[23], context[19], context[20] );
          if( ! context[24] )
            continue;
          refalrts::bracket_pointers(context[24], context[25]);
          context[26] = refalrts::ident_left( identifiers[ident_Var], context[22], context[23] );
          if( ! context[26] )
            continue;
          context[27] = refalrts::char_left( 'e', context[22], context[23] );
          if( ! context[27] )
            continue;
          if( ! refalrts::empty_seq( context[19], context[20] ) )
            continue;
          // closed e.Tail as range 17
          if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
            continue;
          // closed e.7 as range 22
          //DEBUG: e.Tail: 17
          //DEBUG: s.Offset: 28
          //DEBUG: e.7: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@3/4 (/7 (/13 # AsIs/21 {REMOVED TILE} e.7/22 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/24 Reuse: # CmdInsertVar/26 AsIs: 'e'/27 } Tile{ AsIs: s.Offset/28 AsIs: )/25 HalfReuse: </14 HalfReuse: & Map@3/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
          refalrts::update_ident(context[26], identifiers[ident_CmdInsertVar]);
          refalrts::reinit_open_call(context[14]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[14] );
          refalrts::link_brackets( context[24], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[28];
          res = refalrts::splice_evar( res, context[24], context[27] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 t./13 )/8 e.Tail/17 >/1
        context[17] = context[15];
        context[18] = context[16];
        // closed e.Tail as range 17
        //DEBUG: t.: 13
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdInsertTile/4 HalfReuse: </7 } & BeginOffset/19 t./13/20 >/22 </23 & EndOffset/24 Tile{ AsIs: t./13 } >/25 )/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[19], functions[efunc_BeginOffset]);
        refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_EndOffset]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdInsertTile]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[0], context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[19], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 t./19 e.1/15 t.0/13 )/8 e.Tail/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      // closed e.Tail as range 17
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.1 as range 15
      //DEBUG: t.0: 13
      //DEBUG: e.Tail: 17
      //DEBUG: t.: 19
      //DEBUG: e.1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/21 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t./19 } >/22 </23 & EndOffset/24 Tile{ AsIs: t.0/13 } >/25 )/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_EndOffset]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::reinit_ident(context[0], identifiers[ident_CmdInsertTile]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_BeginOffset]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[21], context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[0], context[20] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenSplices$1\1*3/4 AsIs: t.Next/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_GenSplices_S1L1D3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & GenSplices$1\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenSplices_S1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_GenResultm_Aux_A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & GenResult-Aux=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Aux=1@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 (/27 e.new6/25 )/28 e.new7/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 21
  // closed e.new6 as range 25
  // closed e.new7 as range 2
  do {
    // </0 & GenResult-Aux=1@1/4 (/7 e.Call/29 )/8 (/11 e.Call0/31 )/12 (/15 e.Call1/33 )/16 (/19 e.Call2/35 )/20 (/23 e.Call3/37 )/24 (/27 e.Call4/39 )/28 e.Call5/41 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[9];
    context[32] = context[10];
    context[33] = context[13];
    context[34] = context[14];
    context[35] = context[17];
    context[36] = context[18];
    context[37] = context[21];
    context[38] = context[22];
    context[39] = context[25];
    context[40] = context[26];
    context[41] = context[2];
    context[42] = context[3];
    // closed e.Call as range 29
    // closed e.Call0 as range 31
    // closed e.Call1 as range 33
    // closed e.Call2 as range 35
    // closed e.Call3 as range 37
    // closed e.Call4 as range 39
    // closed e.Call5 as range 41
    //DEBUG: e.Call: 29
    //DEBUG: e.Call0: 31
    //DEBUG: e.Call1: 33
    //DEBUG: e.Call2: 35
    //DEBUG: e.Call3: 37
    //DEBUG: e.Call4: 39
    //DEBUG: e.Call5: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </43 Tile{ HalfReuse: & PatchClosureLogic/16 AsIs: (/19 } # CmdComment/44"TRA"/45 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/29 AsIs: )/8 AsIs: (/11 } # CmdComment/47 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/12 HalfReuse: 'U'/15 }"LT:"/48 Tile{ AsIs: e.Call0/31 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Call1/33 } Tile{ AsIs: e.Call2/35 } Tile{ AsIs: e.Call3/37 } Tile{ AsIs: (/27 } # CmdSetRes/50 # RIGHT-EDGE/51 Tile{ AsIs: )/24 } Tile{ AsIs: e.Call4/39 } Tile{ AsIs: e.Call5/41 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[45], context[46], "TRA", 3);
    refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[48], context[49], "LT:", 3);
    refalrts::alloc_ident(vm, context[50], identifiers[ident_CmdSetRes]);
    refalrts::alloc_ident(vm, context[51], identifiers[ident_RIGHTm_EDGE]);
    refalrts::reinit_name(context[16], functions[efunc_PatchClosureLogic]);
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'H');
    refalrts::reinit_char(context[7], ':');
    refalrts::reinit_char(context[20], 'R');
    refalrts::reinit_char(context[23], 'E');
    refalrts::reinit_char(context[12], 'S');
    refalrts::reinit_char(context[15], 'U');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[43] );
    refalrts::link_brackets( context[27], context[24] );
    refalrts::link_brackets( context[11], context[28] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[44], context[46] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_elem( res, context[43] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Aux=1@1/4 (/7 e.Call/5 )/8 (/11 e.Call0/9 )/12 (/15 e.Call1/13 )/16 (/19 e.Call2/17 )/20 (/23 e.Call3/21 )/24 (/27 e.Call4/25 )/28 e.Call5/2 >/1
  // closed e.Call as range 5
  // closed e.Call0 as range 9
  // closed e.Call1 as range 13
  // closed e.Call2 as range 17
  // closed e.Call3 as range 21
  // closed e.Call4 as range 25
  // closed e.Call5 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Call0: 9
  //DEBUG: e.Call1: 13
  //DEBUG: e.Call2: 17
  //DEBUG: e.Call3: 21
  //DEBUG: e.Call4: 25
  //DEBUG: e.Call5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </29 Tile{ HalfReuse: & GenResult-Aux=1@0/16 AsIs: (/19 } # CmdComment/30"TRA"/31 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/5 AsIs: )/8 AsIs: (/11 } # CmdComment/33 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/12 HalfReuse: 'U'/15 }"LT:"/34 Tile{ AsIs: e.Call0/9 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Call1/13 } Tile{ AsIs: e.Call2/17 } Tile{ AsIs: e.Call3/21 } Tile{ AsIs: (/27 } # CmdSetRes/36 # RIGHT-EDGE/37 Tile{ AsIs: )/24 } Tile{ AsIs: e.Call4/25 } Tile{ AsIs: e.Call5/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[31], context[32], "TRA", 3);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[34], context[35], "LT:", 3);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdSetRes]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_RIGHTm_EDGE]);
  refalrts::reinit_name(context[16], functions[efunc_gen_GenResultm_Aux_A1Z0]);
  refalrts::reinit_char(context[0], 'S');
  refalrts::reinit_char(context[4], 'H');
  refalrts::reinit_char(context[7], ':');
  refalrts::reinit_char(context[20], 'R');
  refalrts::reinit_char(context[23], 'E');
  refalrts::reinit_char(context[12], 'S');
  refalrts::reinit_char(context[15], 'U');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[27], context[24] );
  refalrts::link_brackets( context[11], context[28] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1Z1("GenResult-Aux=1@1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Aux_A1Z1);


static refalrts::FnResult func_gen_GenResultm_Aux_A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & GenResult-Aux=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Aux=1@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 (/27 e.new6/25 )/28 (/31 e.new7/29 )/32 e.new8/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 21
  // closed e.new6 as range 25
  // closed e.new7 as range 29
  // closed e.new8 as range 2
  do {
    // </0 & GenResult-Aux=1@2/4 (/7 e.Call/33 )/8 (/11 e.Call0/35 )/12 (/15 e.Call1/37 )/16 (/19 e.Call2/39 )/20 (/23 e.Call3/41 )/24 (/27 e.Call4/43 )/28 (/31 e.Call5/45 )/32 e.Call6/47 >/1
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[9];
    context[36] = context[10];
    context[37] = context[13];
    context[38] = context[14];
    context[39] = context[17];
    context[40] = context[18];
    context[41] = context[21];
    context[42] = context[22];
    context[43] = context[25];
    context[44] = context[26];
    context[45] = context[29];
    context[46] = context[30];
    context[47] = context[2];
    context[48] = context[3];
    // closed e.Call as range 33
    // closed e.Call0 as range 35
    // closed e.Call1 as range 37
    // closed e.Call2 as range 39
    // closed e.Call3 as range 41
    // closed e.Call4 as range 43
    // closed e.Call5 as range 45
    // closed e.Call6 as range 47
    //DEBUG: e.Call: 33
    //DEBUG: e.Call0: 35
    //DEBUG: e.Call1: 37
    //DEBUG: e.Call2: 39
    //DEBUG: e.Call3: 41
    //DEBUG: e.Call4: 43
    //DEBUG: e.Call5: 45
    //DEBUG: e.Call6: 47

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </49 Tile{ HalfReuse: & PatchClosureLogic/16 AsIs: (/19 } # CmdComment/50 Tile{ HalfReuse: 'T'/31 }"RA"/51 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/33 AsIs: )/8 AsIs: (/11 } # CmdComment/53 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/12 HalfReuse: 'U'/15 }"LT:"/54 Tile{ AsIs: e.Call0/35 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Call1/37 } Tile{ AsIs: e.Call2/39 } Tile{ AsIs: e.Call3/41 } Tile{ HalfReuse: (/24 HalfReuse: # CmdSetRes/27 AsIs: e.Call4/43 AsIs: )/28 } Tile{ AsIs: e.Call5/45 } Tile{ AsIs: e.Call6/47 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_ident(vm, context[50], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[51], context[52], "RA", 2);
    refalrts::alloc_ident(vm, context[53], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[54], context[55], "LT:", 3);
    refalrts::reinit_name(context[16], functions[efunc_PatchClosureLogic]);
    refalrts::reinit_char(context[31], 'T');
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'H');
    refalrts::reinit_char(context[7], ':');
    refalrts::reinit_char(context[20], 'R');
    refalrts::reinit_char(context[23], 'E');
    refalrts::reinit_char(context[12], 'S');
    refalrts::reinit_char(context[15], 'U');
    refalrts::reinit_open_bracket(context[24]);
    refalrts::reinit_ident(context[27], identifiers[ident_CmdSetRes]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[49] );
    refalrts::link_brackets( context[24], context[28] );
    refalrts::link_brackets( context[11], context[32] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_elem( res, context[49] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Aux=1@2/4 (/7 e.Call/5 )/8 (/11 e.Call0/9 )/12 (/15 e.Call1/13 )/16 (/19 e.Call2/17 )/20 (/23 e.Call3/21 )/24 (/27 e.Call4/25 )/28 (/31 e.Call5/29 )/32 e.Call6/2 >/1
  // closed e.Call as range 5
  // closed e.Call0 as range 9
  // closed e.Call1 as range 13
  // closed e.Call2 as range 17
  // closed e.Call3 as range 21
  // closed e.Call4 as range 25
  // closed e.Call5 as range 29
  // closed e.Call6 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Call0: 9
  //DEBUG: e.Call1: 13
  //DEBUG: e.Call2: 17
  //DEBUG: e.Call3: 21
  //DEBUG: e.Call4: 25
  //DEBUG: e.Call5: 29
  //DEBUG: e.Call6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </33 Tile{ HalfReuse: & GenResult-Aux=1@0/16 AsIs: (/19 } # CmdComment/34 Tile{ HalfReuse: 'T'/31 }"RA"/35 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/5 AsIs: )/8 AsIs: (/11 } # CmdComment/37 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/12 HalfReuse: 'U'/15 }"LT:"/38 Tile{ AsIs: e.Call0/9 } Tile{ AsIs: )/32 } Tile{ AsIs: e.Call1/13 } Tile{ AsIs: e.Call2/17 } Tile{ AsIs: e.Call3/21 } Tile{ HalfReuse: (/24 HalfReuse: # CmdSetRes/27 AsIs: e.Call4/25 AsIs: )/28 } Tile{ AsIs: e.Call5/29 } Tile{ AsIs: e.Call6/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[35], context[36], "RA", 2);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[38], context[39], "LT:", 3);
  refalrts::reinit_name(context[16], functions[efunc_gen_GenResultm_Aux_A1Z0]);
  refalrts::reinit_char(context[31], 'T');
  refalrts::reinit_char(context[0], 'S');
  refalrts::reinit_char(context[4], 'H');
  refalrts::reinit_char(context[7], ':');
  refalrts::reinit_char(context[20], 'R');
  refalrts::reinit_char(context[23], 'E');
  refalrts::reinit_char(context[12], 'S');
  refalrts::reinit_char(context[15], 'U');
  refalrts::reinit_open_bracket(context[24]);
  refalrts::reinit_ident(context[27], identifiers[ident_CmdSetRes]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[24], context[28] );
  refalrts::link_brackets( context[11], context[32] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_elem( res, context[37] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_elem( res, context[33] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1Z2("GenResult-Aux=1@2", COOKIE1_, COOKIE2_, func_gen_GenResultm_Aux_A1Z2);


static refalrts::FnResult func_gen_GenResultm_Aux_A1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & GenResult-Aux=1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Aux=1@3/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 e.new5/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 2
  do {
    // </0 & GenResult-Aux=1@3/4 (/7 e.Call/21 )/8 (/11 e.Call0/23 )/12 (/15 e.Call1/25 )/16 (/19 e.Call2/27 )/20 e.Call3/29 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[17];
    context[28] = context[18];
    context[29] = context[2];
    context[30] = context[3];
    // closed e.Call as range 21
    // closed e.Call0 as range 23
    // closed e.Call1 as range 25
    // closed e.Call2 as range 27
    // closed e.Call3 as range 29
    //DEBUG: e.Call: 21
    //DEBUG: e.Call0: 23
    //DEBUG: e.Call1: 25
    //DEBUG: e.Call2: 27
    //DEBUG: e.Call3: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: & PatchClosureLogic/16 AsIs: (/19 } # CmdComment/32"TRA"/33 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/21 AsIs: )/8 AsIs: (/11 } # CmdComment/35 'R'/36 Tile{ HalfReuse: 'E'/12 HalfReuse: 'S'/15 }"ULT:"/37 Tile{ AsIs: e.Call0/23 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Call1/25 } Tile{ AsIs: e.Call2/27 } Tile{ AsIs: e.Call3/29 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[33], context[34], "TRA", 3);
    refalrts::alloc_ident(vm, context[35], identifiers[ident_CmdComment]);
    refalrts::alloc_char(vm, context[36], 'R');
    refalrts::alloc_chars(vm, context[37], context[38], "ULT:", 4);
    refalrts::reinit_name(context[16], functions[efunc_PatchClosureLogic]);
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'H');
    refalrts::reinit_char(context[7], ':');
    refalrts::reinit_char(context[12], 'E');
    refalrts::reinit_char(context[15], 'S');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Aux=1@3/4 (/7 e.Call/5 )/8 (/11 e.Call0/9 )/12 (/15 e.Call1/13 )/16 (/19 e.Call2/17 )/20 e.Call3/2 >/1
  // closed e.Call as range 5
  // closed e.Call0 as range 9
  // closed e.Call1 as range 13
  // closed e.Call2 as range 17
  // closed e.Call3 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Call0: 9
  //DEBUG: e.Call1: 13
  //DEBUG: e.Call2: 17
  //DEBUG: e.Call3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: & GenResult-Aux=1@0/16 AsIs: (/19 } # CmdComment/22"TRA"/23 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/5 AsIs: )/8 AsIs: (/11 } # CmdComment/25 'R'/26 Tile{ HalfReuse: 'E'/12 HalfReuse: 'S'/15 }"ULT:"/27 Tile{ AsIs: e.Call0/9 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Call1/13 } Tile{ AsIs: e.Call2/17 } Tile{ AsIs: e.Call3/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[23], context[24], "TRA", 3);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdComment]);
  refalrts::alloc_char(vm, context[26], 'R');
  refalrts::alloc_chars(vm, context[27], context[28], "ULT:", 4);
  refalrts::reinit_name(context[16], functions[efunc_gen_GenResultm_Aux_A1Z0]);
  refalrts::reinit_char(context[0], 'S');
  refalrts::reinit_char(context[4], 'H');
  refalrts::reinit_char(context[7], ':');
  refalrts::reinit_char(context[12], 'E');
  refalrts::reinit_char(context[15], 'S');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1Z3("GenResult-Aux=1@3", COOKIE1_, COOKIE2_, func_gen_GenResultm_Aux_A1Z3);


static refalrts::FnResult func_gen_GenResultm_Aux_A1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & GenResult-Aux=1@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResult-Aux=1@4/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 e.new6/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 21
  // closed e.new6 as range 2
  do {
    // </0 & GenResult-Aux=1@4/4 (/7 e.Call/25 )/8 (/11 e.Call0/27 )/12 (/15 e.Call1/29 )/16 (/19 e.Call2/31 )/20 (/23 e.Call3/33 )/24 e.Call4/35 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    context[33] = context[21];
    context[34] = context[22];
    context[35] = context[2];
    context[36] = context[3];
    // closed e.Call as range 25
    // closed e.Call0 as range 27
    // closed e.Call1 as range 29
    // closed e.Call2 as range 31
    // closed e.Call3 as range 33
    // closed e.Call4 as range 35
    //DEBUG: e.Call: 25
    //DEBUG: e.Call0: 27
    //DEBUG: e.Call1: 29
    //DEBUG: e.Call2: 31
    //DEBUG: e.Call3: 33
    //DEBUG: e.Call4: 35

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </37 Tile{ HalfReuse: & PatchClosureLogic/12 AsIs: (/15 } # CmdComment/38"TRA"/39 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/25 AsIs: )/8 AsIs: (/11 } # CmdComment/41 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/16 HalfReuse: 'U'/19 }"LT:"/42 Tile{ AsIs: e.Call0/27 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Call1/29 } Tile{ AsIs: e.Call2/31 } Tile{ AsIs: e.Call3/33 } Tile{ AsIs: e.Call4/35 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[39], context[40], "TRA", 3);
    refalrts::alloc_ident(vm, context[41], identifiers[ident_CmdComment]);
    refalrts::alloc_chars(vm, context[42], context[43], "LT:", 3);
    refalrts::reinit_name(context[12], functions[efunc_PatchClosureLogic]);
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'H');
    refalrts::reinit_char(context[7], ':');
    refalrts::reinit_char(context[20], 'R');
    refalrts::reinit_char(context[23], 'E');
    refalrts::reinit_char(context[16], 'S');
    refalrts::reinit_char(context[19], 'U');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[37] );
    refalrts::link_brackets( context[11], context[24] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_elem( res, context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Aux=1@4/4 (/7 e.Call/5 )/8 (/11 e.Call0/9 )/12 (/15 e.Call1/13 )/16 (/19 e.Call2/17 )/20 (/23 e.Call3/21 )/24 e.Call4/2 >/1
  // closed e.Call as range 5
  // closed e.Call0 as range 9
  // closed e.Call1 as range 13
  // closed e.Call2 as range 17
  // closed e.Call3 as range 21
  // closed e.Call4 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Call0: 9
  //DEBUG: e.Call1: 13
  //DEBUG: e.Call2: 17
  //DEBUG: e.Call3: 21
  //DEBUG: e.Call4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: & GenResult-Aux=1@0/12 AsIs: (/15 } # CmdComment/26"TRA"/27 Tile{ HalfReuse: 'S'/0 HalfReuse: 'H'/4 HalfReuse: ':'/7 AsIs: e.Call/5 AsIs: )/8 AsIs: (/11 } # CmdComment/29 Tile{ HalfReuse: 'R'/20 HalfReuse: 'E'/23 } Tile{ HalfReuse: 'S'/16 HalfReuse: 'U'/19 }"LT:"/30 Tile{ AsIs: e.Call0/9 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Call1/13 } Tile{ AsIs: e.Call2/17 } Tile{ AsIs: e.Call3/21 } Tile{ AsIs: e.Call4/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[27], context[28], "TRA", 3);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[30], context[31], "LT:", 3);
  refalrts::reinit_name(context[12], functions[efunc_gen_GenResultm_Aux_A1Z0]);
  refalrts::reinit_char(context[0], 'S');
  refalrts::reinit_char(context[4], 'H');
  refalrts::reinit_char(context[7], ':');
  refalrts::reinit_char(context[20], 'R');
  refalrts::reinit_char(context[23], 'E');
  refalrts::reinit_char(context[16], 'S');
  refalrts::reinit_char(context[19], 'U');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[11], context[24] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1Z4("GenResult-Aux=1@4", COOKIE1_, COOKIE2_, func_gen_GenResultm_Aux_A1Z4);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
      // </0 & Map@4/4 (/7 e.new3/11 )/8 e.new4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new3 as range 11
      // closed e.new4 as range 9
      do {
        // </0 & Map@4/4 (/7 s.new5/17 e.new6/13 )/8 e.new7/15 >/1
        context[13] = context[11];
        context[14] = context[12];
        context[15] = context[9];
        context[16] = context[10];
        // closed e.new7 as range 15
        if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
          continue;
        // closed e.new6 as range 13
        do {
          // </0 & Map@4/4 (/7 # Tile/17 e.0/18 )/8 e.Tail/20 >/1
          context[18] = context[13];
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_Tile], context[17] ) )
            continue;
          // closed e.0 as range 18
          // closed e.Tail as range 20
          //DEBUG: e.0: 18
          //DEBUG: e.Tail: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & Map@4/4 (/7 # Tile/17 e.0/18 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/20 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@4/4 (/7 s.new8/17 e.new9/18 s.new10/22 )/8 e.new11/20 >/1
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        // closed e.new11 as range 20
        if( ! refalrts::svar_right( context[22], context[18], context[19] ) )
          continue;
        // closed e.new9 as range 18
        do {
          // </0 & Map@4/4 (/7 # VarCopy/17 s.new13/27 e.new14/23 s.new15/28 s.new12/22 )/8 e.new16/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_VarCopy], context[17] ) )
            continue;
          // closed e.new16 as range 25
          if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
            continue;
          if( ! refalrts::svar_right( context[28], context[23], context[24] ) )
            continue;
          // closed e.new14 as range 23
          do {
            // </0 & Map@4/4 (/7 # VarCopy/17 't'/27 e.3/29 s.SampleOffset/28 s.Offset/22 )/8 e.Tail/31 >/1
            context[29] = context[23];
            context[30] = context[24];
            context[31] = context[25];
            context[32] = context[26];
            if( ! refalrts::char_term( 't', context[27] ) )
              continue;
            // closed e.3 as range 29
            // closed e.Tail as range 31
            //DEBUG: s.SampleOffset: 28
            //DEBUG: s.Offset: 22
            //DEBUG: e.3: 29
            //DEBUG: e.Tail: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} e.3/29 s.SampleOffset/28 s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCopyVar/4 HalfReuse: 'e'/7 HalfReuse: s.Offset22 /17 HalfReuse: s.SampleOffset28 /27 } )/33 </34 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[33]);
            refalrts::alloc_open_call(vm, context[34]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCopyVar]);
            refalrts::reinit_char(context[7], 'e');
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_svar( context[27], context[28] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[34] );
            refalrts::link_brackets( context[0], context[33] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[33], context[34] );
            refalrts::splice_to_freelist_open( vm, context[27], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@4/4 (/7 # VarCopy/17 s.Mode/27 e.3/29 s.SampleOffset/28 s.Offset/22 )/8 e.Tail/31 >/1
          context[29] = context[23];
          context[30] = context[24];
          context[31] = context[25];
          context[32] = context[26];
          // closed e.3 as range 29
          // closed e.Tail as range 31
          //DEBUG: s.Mode: 27
          //DEBUG: s.SampleOffset: 28
          //DEBUG: s.Offset: 22
          //DEBUG: e.3: 29
          //DEBUG: e.Tail: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/17 AsIs: s.Mode/27 } Tile{ AsIs: s.Offset/22 } Tile{ AsIs: s.SampleOffset/28 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
          refalrts::update_ident(context[17], identifiers[ident_CmdCopyVar]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[0] );
          res = refalrts::splice_elem( res, context[4] );
          res = refalrts::splice_elem( res, context[28] );
          res = refalrts::splice_elem( res, context[22] );
          res = refalrts::splice_evar( res, context[7], context[27] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@4/4 (/7 # TkString/17 e.1/23 s.Offset/22 )/8 e.Tail/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_TkString], context[17] ) )
            continue;
          // closed e.1 as range 23
          // closed e.Tail as range 25
          //DEBUG: s.Offset: 22
          //DEBUG: e.1: 23
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset/22 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElString/27 Tile{ AsIs: e.1/23 } )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[27], identifiers[ident_ElString]);
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
          refalrts::reinit_svar( context[17], context[22] );
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::link_brackets( context[0], context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_elem( res, context[27] );
          refalrts::splice_to_freelist_open( vm, context[17], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@4/4 (/7 # Symbol/17 s.new13/27 s.new14/28 s.new12/22 )/8 e.new15/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_Symbol], context[17] ) )
            continue;
          // closed e.new15 as range 25
          if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
            continue;
          if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          do {
            // </0 & Map@4/4 (/7 # Symbol/17 # Char/27 s.Char/28 s.Offset/22 )/8 e.Tail/29 >/1
            context[29] = context[25];
            context[30] = context[26];
            if( ! refalrts::ident_term( identifiers[ident_Char], context[27] ) )
              continue;
            // closed e.Tail as range 29
            //DEBUG: s.Char: 28
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 Reuse: # ElChar/27 AsIs: s.Char/28 } )/31 </32 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/29 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[31]);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::update_ident(context[27], identifiers[ident_ElChar]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[32] );
            refalrts::link_brackets( context[0], context[31] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[31], context[32] );
            refalrts::splice_to_freelist_open( vm, context[28], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@4/4 (/7 # Symbol/17 # Number/27 s.Number/28 s.Offset/22 )/8 e.Tail/29 >/1
          context[29] = context[25];
          context[30] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_Number], context[27] ) )
            continue;
          // closed e.Tail as range 29
          //DEBUG: s.Number: 28
          //DEBUG: s.Offset: 22
          //DEBUG: e.Tail: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 Reuse: # ElNumber/27 AsIs: s.Number/28 } )/31 </32 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/29 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[31]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
          refalrts::reinit_svar( context[17], context[22] );
          refalrts::update_ident(context[27], identifiers[ident_ElNumber]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[32] );
          refalrts::link_brackets( context[0], context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[31], context[32] );
          refalrts::splice_to_freelist_open( vm, context[28], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@4/4 (/7 s.new12/17 s.new13/22 )/8 e.new14/23 >/1
          context[23] = context[20];
          context[24] = context[21];
          if( ! refalrts::empty_seq( context[18], context[19] ) )
            continue;
          // closed e.new14 as range 23
          do {
            // </0 & Map@4/4 (/7 # TkOpenBracket/17 s.Offset/22 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[17] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElOpenBracket/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[27], identifiers[ident_ElOpenBracket]);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::splice_to_freelist_open( vm, context[17], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@4/4 (/7 # TkCloseBracket/17 s.Offset/22 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[17] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElCloseBracket/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[27], identifiers[ident_ElCloseBracket]);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::splice_to_freelist_open( vm, context[17], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@4/4 (/7 # TkOpenADT/17 s.Offset/22 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[17] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElOpenADT/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[27], identifiers[ident_ElOpenADT]);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::splice_to_freelist_open( vm, context[17], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@4/4 (/7 # TkCloseADT/17 s.Offset/22 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[17] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElCloseADT/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[27], identifiers[ident_ElCloseADT]);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::splice_to_freelist_open( vm, context[17], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@4/4 (/7 # TkOpenCall/17 s.Offset/22 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[17] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: s.Offset: 22
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElOpenCall/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[27], identifiers[ident_ElOpenCall]);
            refalrts::alloc_close_bracket(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::link_brackets( context[0], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[27], context[29] );
            refalrts::splice_to_freelist_open( vm, context[17], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@4/4 (/7 # TkCloseCall/17 s.Offset/22 )/8 e.Tail/25 >/1
          context[25] = context[23];
          context[26] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[17] ) )
            continue;
          // closed e.Tail as range 25
          //DEBUG: s.Offset: 22
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElCloseCall/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[27], identifiers[ident_ElCloseCall]);
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
          refalrts::reinit_svar( context[17], context[22] );
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::link_brackets( context[0], context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[27], context[29] );
          refalrts::splice_to_freelist_open( vm, context[17], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@4/4 (/7 # Symbol/17 s.new13/27 e.new14/23 s.new12/22 )/8 e.new15/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_Symbol], context[17] ) )
            continue;
          // closed e.new15 as range 25
          if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
            continue;
          // closed e.new14 as range 23
          do {
            // </0 & Map@4/4 (/7 # Symbol/17 # Name/27 e.2/28 s.Offset/22 )/8 e.Tail/30 >/1
            context[28] = context[23];
            context[29] = context[24];
            context[30] = context[25];
            context[31] = context[26];
            if( ! refalrts::ident_term( identifiers[ident_Name], context[27] ) )
              continue;
            // closed e.2 as range 28
            // closed e.Tail as range 30
            //DEBUG: s.Offset: 22
            //DEBUG: e.2: 28
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 Reuse: # ElName/27 } Tile{ AsIs: e.2/28 } )/32 </33 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[32]);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::update_ident(context[27], identifiers[ident_ElName]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::link_brackets( context[0], context[32] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[28], context[29] );
            refalrts::splice_to_freelist_open( vm, context[27], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@4/4 (/7 # Symbol/17 # Identifier/27 e.2/28 s.Offset/22 )/8 e.Tail/30 >/1
          context[28] = context[23];
          context[29] = context[24];
          context[30] = context[25];
          context[31] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_Identifier], context[27] ) )
            continue;
          // closed e.2 as range 28
          // closed e.Tail as range 30
          //DEBUG: s.Offset: 22
          //DEBUG: e.2: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset/22 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 Reuse: # ElIdent/27 } Tile{ AsIs: e.2/28 } )/32 </33 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
          refalrts::reinit_svar( context[17], context[22] );
          refalrts::update_ident(context[27], identifiers[ident_ElIdent]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[33] );
          refalrts::link_brackets( context[0], context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[27], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@4/4 (/7 s.new12/17 s.new13/22 )/8 e.new14/23 >/1
        context[23] = context[20];
        context[24] = context[21];
        if( ! refalrts::empty_seq( context[18], context[19] ) )
          continue;
        // closed e.new14 as range 23
        do {
          // </0 & Map@4/4 (/7 # TkClosureHead/17 s.Offset/22 )/8 e.Tail/25 >/1
          context[25] = context[23];
          context[26] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[17] ) )
            continue;
          // closed e.Tail as range 25
          //DEBUG: s.Offset: 22
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElClosureHead/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[27], identifiers[ident_ElClosureHead]);
          refalrts::alloc_close_bracket(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
          refalrts::reinit_svar( context[17], context[22] );
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::link_brackets( context[0], context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[27], context[29] );
          refalrts::splice_to_freelist_open( vm, context[17], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@4/4 (/7 # TkUnwrappedClosure/17 s.Offset/22 )/8 e.Tail/25 >/1
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[17] ) )
          continue;
        // closed e.Tail as range 25
        //DEBUG: s.Offset: 22
        //DEBUG: e.Tail: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Offset/22 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset22 /17 } # ElUnwrappedClosure/27 )/28 </29 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[27], identifiers[ident_ElUnwrappedClosure]);
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[17], context[22] );
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[0], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[27], context[29] );
        refalrts::splice_to_freelist_open( vm, context[17], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 e./13 )/8 e.Tail/15 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = context[9];
      context[16] = context[10];
      // closed e. as range 13
      // closed e.Tail as range 15
      //DEBUG: e.: 13
      //DEBUG: e.Tail: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 } </17 & CreateElemParam*12/18 Tile{ AsIs: e./13 } >/19 )/20 </21 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/15 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_CreateElemParam_D12]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[0], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Allocations\1*5/4 AsIs: t.Next/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Allocations_L1D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & GenResult-Allocations\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Allocations_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
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
        // </0 & Map@5/4 (/7 s.new6/13 t.new7/18 )/8 e.new8/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new8 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        do {
          // </0 & Map@5/4 (/7 # AsIs/13 t.0/18 )/8 e.Tail/20 >/1
          context[20] = context[16];
          context[21] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
            continue;
          // closed e.Tail as range 20
          //DEBUG: t.0: 18
          //DEBUG: e.Tail: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & Map@5/4 (/7 # AsIs/13 t.0/18 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail/20 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 s.new9/13 (/18 e.new10/22 )/19 )/8 e.new11/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = 0;
        context[23] = 0;
        if( ! refalrts::brackets_term( context[22], context[23], context[18] ) )
          continue;
        // closed e.new10 as range 22
        // closed e.new11 as range 20
        do {
          // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 e.new12/24 )/19 )/8 e.new13/26 >/1
          context[24] = context[22];
          context[25] = context[23];
          context[26] = context[20];
          context[27] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
            continue;
          // closed e.new12 as range 24
          // closed e.new13 as range 26
          do {
            // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 s.new14/32 e.new15/28 s.new16/33 )/19 )/8 e.new17/30 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            context[31] = context[27];
            // closed e.new17 as range 30
            if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
              continue;
            if( ! refalrts::svar_right( context[33], context[28], context[29] ) )
              continue;
            // closed e.new15 as range 28
            do {
              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 s.new18/32 s.new20/38 e.new21/34 s.new22/39 s.new19/33 )/19 )/8 e.new23/36 >/1
              context[34] = context[28];
              context[35] = context[29];
              context[36] = context[30];
              context[37] = context[31];
              // closed e.new23 as range 36
              if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
                continue;
              if( ! refalrts::svar_right( context[39], context[34], context[35] ) )
                continue;
              // closed e.new21 as range 34
              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Var/32 's'/38 e.6/40 s.SampleOffset/39 s.Offset/33 )/19 )/8 e.Tail/42 >/1
                context[40] = context[34];
                context[41] = context[35];
                context[42] = context[36];
                context[43] = context[37];
                if( ! refalrts::char_term( 's', context[38] ) )
                  continue;
                if( ! refalrts::ident_term( identifiers[ident_Var], context[32] ) )
                  continue;
                // closed e.6 as range 40
                // closed e.Tail as range 42
                //DEBUG: s.SampleOffset: 39
                //DEBUG: s.Offset: 33
                //DEBUG: e.6: 40
                //DEBUG: e.Tail: 42

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} </0 & Map@5/4 {REMOVED TILE} e.6/40 s.SampleOffset/39 s.Offset/33 {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/13 HalfReuse: s.Offset33 /18 HalfReuse: s.SampleOffset39 /32 HalfReuse: )/38 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/42 AsIs: >/1 ]] }
                refalrts::update_ident(context[13], identifiers[ident_CmdReinitSVar]);
                refalrts::reinit_svar( context[18], context[33] );
                refalrts::reinit_svar( context[32], context[39] );
                refalrts::reinit_close_bracket(context[38]);
                refalrts::reinit_open_call(context[19]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[19] );
                refalrts::link_brackets( context[7], context[38] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[19];
                res = refalrts::splice_evar( res, context[7], context[38] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 s.new25/38 s.new26/39 s.new24/33 )/19 )/8 e.new27/40 >/1
              context[40] = context[36];
              context[41] = context[37];
              if( ! refalrts::ident_term( identifiers[ident_Symbol], context[32] ) )
                continue;
              if( ! refalrts::empty_seq( context[34], context[35] ) )
                continue;
              // closed e.new27 as range 40
              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 # Char/38 s.Char/39 s.Offset/33 )/19 )/8 e.Tail/42 >/1
                context[42] = context[40];
                context[43] = context[41];
                if( ! refalrts::ident_term( identifiers[ident_Char], context[38] ) )
                  continue;
                // closed e.Tail as range 42
                //DEBUG: s.Char: 39
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 42

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Reinit/18 HalfReuse: s.Offset33 /32 Reuse: # ElChar/38 AsIs: s.Char/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/42 AsIs: >/1 ]] }
                refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
                refalrts::reinit_ident(context[18], identifiers[ident_Reinit]);
                refalrts::reinit_svar( context[32], context[33] );
                refalrts::update_ident(context[38], identifiers[ident_ElChar]);
                refalrts::reinit_close_bracket(context[4]);
                refalrts::reinit_open_call(context[19]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[19] );
                refalrts::link_brackets( context[7], context[4] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[19];
                res = refalrts::splice_elem( res, context[4] );
                res = refalrts::splice_evar( res, context[7], context[39] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 # Number/38 s.Number/39 s.Offset/33 )/19 )/8 e.Tail/42 >/1
              context[42] = context[40];
              context[43] = context[41];
              if( ! refalrts::ident_term( identifiers[ident_Number], context[38] ) )
                continue;
              // closed e.Tail as range 42
              //DEBUG: s.Number: 39
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 42

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Reinit/18 HalfReuse: s.Offset33 /32 Reuse: # ElNumber/38 AsIs: s.Number/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/42 AsIs: >/1 ]] }
              refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
              refalrts::reinit_ident(context[18], identifiers[ident_Reinit]);
              refalrts::reinit_svar( context[32], context[33] );
              refalrts::update_ident(context[38], identifiers[ident_ElNumber]);
              refalrts::reinit_close_bracket(context[4]);
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[19] );
              refalrts::link_brackets( context[7], context[4] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[19];
              res = refalrts::splice_elem( res, context[4] );
              res = refalrts::splice_evar( res, context[7], context[39] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 s.new18/32 s.new19/33 )/19 )/8 e.new20/34 >/1
              context[34] = context[30];
              context[35] = context[31];
              if( ! refalrts::empty_seq( context[28], context[29] ) )
                continue;
              // closed e.new20 as range 34
              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkOpenBracket/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
                context[36] = context[34];
                context[37] = context[35];
                if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[32] ) )
                  continue;
                // closed e.Tail as range 36
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 36

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElOpenBracket/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
                refalrts::update_ident(context[32], identifiers[ident_Reinit]);
                refalrts::reinit_ident(context[19], identifiers[ident_ElOpenBracket]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                res = refalrts::splice_evar( res, context[36], context[37] );
                res = refalrts::splice_evar( res, context[0], context[4] );
                res = refalrts::splice_evar( res, context[13], context[8] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkCloseBracket/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
                context[36] = context[34];
                context[37] = context[35];
                if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[32] ) )
                  continue;
                // closed e.Tail as range 36
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 36

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElCloseBracket/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
                refalrts::update_ident(context[32], identifiers[ident_Reinit]);
                refalrts::reinit_ident(context[19], identifiers[ident_ElCloseBracket]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                res = refalrts::splice_evar( res, context[36], context[37] );
                res = refalrts::splice_evar( res, context[0], context[4] );
                res = refalrts::splice_evar( res, context[13], context[8] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkOpenADT/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
                context[36] = context[34];
                context[37] = context[35];
                if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[32] ) )
                  continue;
                // closed e.Tail as range 36
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 36

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElOpenADT/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
                refalrts::update_ident(context[32], identifiers[ident_Reinit]);
                refalrts::reinit_ident(context[19], identifiers[ident_ElOpenADT]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                res = refalrts::splice_evar( res, context[36], context[37] );
                res = refalrts::splice_evar( res, context[0], context[4] );
                res = refalrts::splice_evar( res, context[13], context[8] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkCloseADT/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
                context[36] = context[34];
                context[37] = context[35];
                if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[32] ) )
                  continue;
                // closed e.Tail as range 36
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 36

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElCloseADT/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
                refalrts::update_ident(context[32], identifiers[ident_Reinit]);
                refalrts::reinit_ident(context[19], identifiers[ident_ElCloseADT]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                res = refalrts::splice_evar( res, context[36], context[37] );
                res = refalrts::splice_evar( res, context[0], context[4] );
                res = refalrts::splice_evar( res, context[13], context[8] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkOpenCall/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
                context[36] = context[34];
                context[37] = context[35];
                if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[32] ) )
                  continue;
                // closed e.Tail as range 36
                //DEBUG: s.Offset: 33
                //DEBUG: e.Tail: 36

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElOpenCall/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
                refalrts::update_ident(context[32], identifiers[ident_Reinit]);
                refalrts::reinit_ident(context[19], identifiers[ident_ElOpenCall]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[13], context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                res = refalrts::splice_evar( res, context[36], context[37] );
                res = refalrts::splice_evar( res, context[0], context[4] );
                res = refalrts::splice_evar( res, context[13], context[8] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkCloseCall/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElCloseCall/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Reinit]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElCloseCall]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 s.new19/38 e.new20/34 s.new18/33 )/19 )/8 e.new21/36 >/1
              context[34] = context[28];
              context[35] = context[29];
              context[36] = context[30];
              context[37] = context[31];
              if( ! refalrts::ident_term( identifiers[ident_Symbol], context[32] ) )
                continue;
              // closed e.new21 as range 36
              if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
                continue;
              // closed e.new20 as range 34
              do {
                // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 # Name/38 e.1/39 s.Offset/33 )/19 )/8 e.Tail/41 >/1
                context[39] = context[34];
                context[40] = context[35];
                context[41] = context[36];
                context[42] = context[37];
                if( ! refalrts::ident_term( identifiers[ident_Name], context[38] ) )
                  continue;
                // closed e.1 as range 39
                // closed e.Tail as range 41
                //DEBUG: s.Offset: 33
                //DEBUG: e.1: 39
                //DEBUG: e.Tail: 41

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Reinit/18 HalfReuse: s.Offset33 /32 Reuse: # ElName/38 } Tile{ AsIs: e.1/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/41 AsIs: >/1 ]] }
                refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
                refalrts::reinit_ident(context[18], identifiers[ident_Reinit]);
                refalrts::reinit_svar( context[32], context[33] );
                refalrts::update_ident(context[38], identifiers[ident_ElName]);
                refalrts::reinit_close_bracket(context[4]);
                refalrts::reinit_open_call(context[19]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[19] );
                refalrts::link_brackets( context[7], context[4] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[19];
                res = refalrts::splice_elem( res, context[4] );
                res = refalrts::splice_evar( res, context[39], context[40] );
                res = refalrts::splice_evar( res, context[7], context[38] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # Symbol/32 # Identifier/38 e.1/39 s.Offset/33 )/19 )/8 e.Tail/41 >/1
              context[39] = context[34];
              context[40] = context[35];
              context[41] = context[36];
              context[42] = context[37];
              if( ! refalrts::ident_term( identifiers[ident_Identifier], context[38] ) )
                continue;
              // closed e.1 as range 39
              // closed e.Tail as range 41
              //DEBUG: s.Offset: 33
              //DEBUG: e.1: 39
              //DEBUG: e.Tail: 41

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Reinit/18 HalfReuse: s.Offset33 /32 Reuse: # ElIdent/38 } Tile{ AsIs: e.1/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/41 AsIs: >/1 ]] }
              refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
              refalrts::reinit_ident(context[18], identifiers[ident_Reinit]);
              refalrts::reinit_svar( context[32], context[33] );
              refalrts::update_ident(context[38], identifiers[ident_ElIdent]);
              refalrts::reinit_close_bracket(context[4]);
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[19] );
              refalrts::link_brackets( context[7], context[4] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[19];
              res = refalrts::splice_elem( res, context[4] );
              res = refalrts::splice_evar( res, context[39], context[40] );
              res = refalrts::splice_evar( res, context[7], context[38] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 s.new18/32 s.new19/33 )/19 )/8 e.new20/34 >/1
            context[34] = context[30];
            context[35] = context[31];
            if( ! refalrts::empty_seq( context[28], context[29] ) )
              continue;
            // closed e.new20 as range 34
            do {
              // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkClosureHead/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElClosureHead/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Reinit]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElClosureHead]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 # TkUnwrappedClosure/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
            context[36] = context[34];
            context[37] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[32] ) )
              continue;
            // closed e.Tail as range 36
            //DEBUG: s.Offset: 33
            //DEBUG: e.Tail: 36

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Reinit/32 AsIs: s.Offset/33 HalfReuse: # ElUnwrappedClosure/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[13]);
            refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
            refalrts::update_ident(context[32], identifiers[ident_Reinit]);
            refalrts::reinit_ident(context[19], identifiers[ident_ElUnwrappedClosure]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[13], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[13], context[8] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@5/4 (/7 # HalfReuse/13 (/18 e.2/28 )/19 )/8 e.Tail/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          // closed e.2 as range 28
          // closed e.Tail as range 30
          //DEBUG: e.2: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Reinit/7 HalfReuse: </13 HalfReuse: & CreateElemParam*12/18 AsIs: e.2/28 HalfReuse: >/19 AsIs: )/8 } </32 & Map@5/33 Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_gen_Map_Z5]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Reinit]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_gen_CreateElemParam_D12]);
          refalrts::reinit_close_call(context[19]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[32] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 # Reuse/13 (/18 e.new12/24 )/19 )/8 e.new13/26 >/1
        context[24] = context[22];
        context[25] = context[23];
        context[26] = context[20];
        context[27] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
          continue;
        // closed e.new12 as range 24
        // closed e.new13 as range 26
        do {
          // </0 & Map@5/4 (/7 # Reuse/13 (/18 s.new14/32 e.new15/28 s.new16/33 )/19 )/8 e.new17/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          // closed e.new17 as range 30
          if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
            continue;
          if( ! refalrts::svar_right( context[33], context[28], context[29] ) )
            continue;
          // closed e.new15 as range 28
          do {
            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 s.new19/38 s.new20/39 s.new18/33 )/19 )/8 e.new21/36 >/1
            context[34] = context[28];
            context[35] = context[29];
            context[36] = context[30];
            context[37] = context[31];
            if( ! refalrts::ident_term( identifiers[ident_Symbol], context[32] ) )
              continue;
            // closed e.new21 as range 36
            if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
              continue;
            if( ! refalrts::svar_left( context[39], context[34], context[35] ) )
              continue;
            if( ! refalrts::empty_seq( context[34], context[35] ) )
              continue;
            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 # Char/38 s.Char/39 s.Offset/33 )/19 )/8 e.Tail/40 >/1
              context[40] = context[36];
              context[41] = context[37];
              if( ! refalrts::ident_term( identifiers[ident_Char], context[38] ) )
                continue;
              // closed e.Tail as range 40
              //DEBUG: s.Char: 39
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 40

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Update/18 HalfReuse: s.Offset33 /32 Reuse: # ElChar/38 AsIs: s.Char/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/40 AsIs: >/1 ]] }
              refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
              refalrts::reinit_ident(context[18], identifiers[ident_Update]);
              refalrts::reinit_svar( context[32], context[33] );
              refalrts::update_ident(context[38], identifiers[ident_ElChar]);
              refalrts::reinit_close_bracket(context[4]);
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[19] );
              refalrts::link_brackets( context[7], context[4] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[19];
              res = refalrts::splice_elem( res, context[4] );
              res = refalrts::splice_evar( res, context[7], context[39] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 # Number/38 s.Number/39 s.Offset/33 )/19 )/8 e.Tail/40 >/1
            context[40] = context[36];
            context[41] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_Number], context[38] ) )
              continue;
            // closed e.Tail as range 40
            //DEBUG: s.Number: 39
            //DEBUG: s.Offset: 33
            //DEBUG: e.Tail: 40

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Update/18 HalfReuse: s.Offset33 /32 Reuse: # ElNumber/38 AsIs: s.Number/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/40 AsIs: >/1 ]] }
            refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[18], identifiers[ident_Update]);
            refalrts::reinit_svar( context[32], context[33] );
            refalrts::update_ident(context[38], identifiers[ident_ElNumber]);
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[19] );
            refalrts::link_brackets( context[7], context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[19];
            res = refalrts::splice_elem( res, context[4] );
            res = refalrts::splice_evar( res, context[7], context[39] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@5/4 (/7 # Reuse/13 (/18 s.new18/32 s.new19/33 )/19 )/8 e.new20/34 >/1
            context[34] = context[30];
            context[35] = context[31];
            if( ! refalrts::empty_seq( context[28], context[29] ) )
              continue;
            // closed e.new20 as range 34
            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkOpenBracket/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElOpenBracket/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Update]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElOpenBracket]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkCloseBracket/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElCloseBracket/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Update]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElCloseBracket]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkOpenADT/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElOpenADT/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Update]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElOpenADT]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkCloseADT/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElCloseADT/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Update]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElCloseADT]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkOpenCall/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
              context[36] = context[34];
              context[37] = context[35];
              if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[32] ) )
                continue;
              // closed e.Tail as range 36
              //DEBUG: s.Offset: 33
              //DEBUG: e.Tail: 36

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElOpenCall/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_open_bracket(context[13]);
              refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
              refalrts::update_ident(context[32], identifiers[ident_Update]);
              refalrts::reinit_ident(context[19], identifiers[ident_ElOpenCall]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[13], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[0], context[4] );
              res = refalrts::splice_evar( res, context[13], context[8] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkCloseCall/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
            context[36] = context[34];
            context[37] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[32] ) )
              continue;
            // closed e.Tail as range 36
            //DEBUG: s.Offset: 33
            //DEBUG: e.Tail: 36

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElCloseCall/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[13]);
            refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
            refalrts::update_ident(context[32], identifiers[ident_Update]);
            refalrts::reinit_ident(context[19], identifiers[ident_ElCloseCall]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[13], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[13], context[8] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 s.new19/38 e.new20/34 s.new18/33 )/19 )/8 e.new21/36 >/1
            context[34] = context[28];
            context[35] = context[29];
            context[36] = context[30];
            context[37] = context[31];
            if( ! refalrts::ident_term( identifiers[ident_Symbol], context[32] ) )
              continue;
            // closed e.new21 as range 36
            if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
              continue;
            // closed e.new20 as range 34
            do {
              // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 # Name/38 e.1/39 s.Offset/33 )/19 )/8 e.Tail/41 >/1
              context[39] = context[34];
              context[40] = context[35];
              context[41] = context[36];
              context[42] = context[37];
              if( ! refalrts::ident_term( identifiers[ident_Name], context[38] ) )
                continue;
              // closed e.1 as range 39
              // closed e.Tail as range 41
              //DEBUG: s.Offset: 33
              //DEBUG: e.1: 39
              //DEBUG: e.Tail: 41

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Update/18 HalfReuse: s.Offset33 /32 Reuse: # ElName/38 } Tile{ AsIs: e.1/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/41 AsIs: >/1 ]] }
              refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
              refalrts::reinit_ident(context[18], identifiers[ident_Update]);
              refalrts::reinit_svar( context[32], context[33] );
              refalrts::update_ident(context[38], identifiers[ident_ElName]);
              refalrts::reinit_close_bracket(context[4]);
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[19] );
              refalrts::link_brackets( context[7], context[4] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[19];
              res = refalrts::splice_elem( res, context[4] );
              res = refalrts::splice_evar( res, context[39], context[40] );
              res = refalrts::splice_evar( res, context[7], context[38] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # Symbol/32 # Identifier/38 e.1/39 s.Offset/33 )/19 )/8 e.Tail/41 >/1
            context[39] = context[34];
            context[40] = context[35];
            context[41] = context[36];
            context[42] = context[37];
            if( ! refalrts::ident_term( identifiers[ident_Identifier], context[38] ) )
              continue;
            // closed e.1 as range 39
            // closed e.Tail as range 41
            //DEBUG: s.Offset: 33
            //DEBUG: e.1: 39
            //DEBUG: e.Tail: 41

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/33 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCreateElem/13 HalfReuse: # Update/18 HalfReuse: s.Offset33 /32 Reuse: # ElIdent/38 } Tile{ AsIs: e.1/39 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: </19 HalfReuse: & Map@5/8 AsIs: e.Tail/41 AsIs: >/1 ]] }
            refalrts::update_ident(context[13], identifiers[ident_CmdCreateElem]);
            refalrts::reinit_ident(context[18], identifiers[ident_Update]);
            refalrts::reinit_svar( context[32], context[33] );
            refalrts::update_ident(context[38], identifiers[ident_ElIdent]);
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[19] );
            refalrts::link_brackets( context[7], context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[19];
            res = refalrts::splice_elem( res, context[4] );
            res = refalrts::splice_evar( res, context[39], context[40] );
            res = refalrts::splice_evar( res, context[7], context[38] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@5/4 (/7 # Reuse/13 (/18 s.new18/32 s.new19/33 )/19 )/8 e.new20/34 >/1
          context[34] = context[30];
          context[35] = context[31];
          if( ! refalrts::empty_seq( context[28], context[29] ) )
            continue;
          // closed e.new20 as range 34
          do {
            // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkClosureHead/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
            context[36] = context[34];
            context[37] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[32] ) )
              continue;
            // closed e.Tail as range 36
            //DEBUG: s.Offset: 33
            //DEBUG: e.Tail: 36

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElClosureHead/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[13]);
            refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
            refalrts::update_ident(context[32], identifiers[ident_Update]);
            refalrts::reinit_ident(context[19], identifiers[ident_ElClosureHead]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[13], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[13], context[8] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@5/4 (/7 # Reuse/13 (/18 # TkUnwrappedClosure/32 s.Offset/33 )/19 )/8 e.Tail/36 >/1
          context[36] = context[34];
          context[37] = context[35];
          if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[32] ) )
            continue;
          // closed e.Tail as range 36
          //DEBUG: s.Offset: 33
          //DEBUG: e.Tail: 36

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 HalfReuse: # CmdCreateElem/18 Reuse: # Update/32 AsIs: s.Offset/33 HalfReuse: # ElUnwrappedClosure/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/36 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_ident(context[18], identifiers[ident_CmdCreateElem]);
          refalrts::update_ident(context[32], identifiers[ident_Update]);
          refalrts::reinit_ident(context[19], identifiers[ident_ElUnwrappedClosure]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[13], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 # Reuse/13 (/18 e.2/28 )/19 )/8 e.Tail/30 >/1
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        // closed e.2 as range 28
        // closed e.Tail as range 30
        //DEBUG: e.2: 28
        //DEBUG: e.Tail: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Update/7 HalfReuse: </13 HalfReuse: & CreateElemParam*12/18 AsIs: e.2/28 HalfReuse: >/19 AsIs: )/8 } </32 & Map@5/33 Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[7], identifiers[ident_Update]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[18], functions[efunc_gen_CreateElemParam_D12]);
        refalrts::reinit_close_call(context[19]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[32] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 s.new6/13 )/8 e.new7/14 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.new7 as range 14
      do {
        // </0 & Map@5/4 (/7 # LEFT-EDGE/13 )/8 e.Tail/16 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail as range 16
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Map@5/4 (/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@5/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail/16 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
        continue;
      // closed e.Tail as range 16
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Map@5/4 (/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@5/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-ReinitUpdate\1$1\1*6/4 AsIs: t.Next/7 } >/11 </12 & Map@5/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z5]);
    refalrts::update_name(context[4], functions[efunc_gen_GenResultm_ReinitUpdate_L1S1L1D6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & GenResult-ReinitUpdate\1$1\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_ReinitUpdate_L1S1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & DoMapAccum@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@1/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoMapAccum@1/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & DoMapAccum@1/4 (/5 e.new8/21 )/6 (/9 e.new12/17 )/10 (/15 s.new9/25 e.new10/23 )/16 e.new11/19 >/1
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
        // </0 & DoMapAccum@1/4 (/5 e.new13/26 )/6 (/9 e.new17/28 )/10 (/15 s.new14/25 s.new15/34 )/16 e.new16/32 >/1
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new13 as range 26
        // closed e.new17 as range 28
        // closed e.new16 as range 32
        if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        do {
          // </0 & DoMapAccum@1/4 (/5 e./35 )/6 (/9 e.Scanned/37 )/10 (/15 # TkOpenCall/25 s.Offset/34 )/16 e.Tail/39 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[28];
          context[38] = context[29];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[25] ) )
            continue;
          // closed e. as range 35
          // closed e.Scanned as range 37
          // closed e.Tail as range 39
          //DEBUG: s.Offset: 34
          //DEBUG: e.: 35
          //DEBUG: e.Scanned: 37
          //DEBUG: e.Tail: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} # TkOpenCall/25 s.Offset/34 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e./35 HalfReuse: s.Offset34 /6 HalfReuse: )/9 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned/37 } Tile{ AsIs: )/16 AsIs: e.Tail/39 AsIs: >/1 ]] }
          refalrts::reinit_svar( context[6], context[34] );
          refalrts::reinit_close_bracket(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/5 e./35 )/6 (/9 e.Scanned/37 )/10 (/15 # TkOpenADT/25 s.Offset/34 )/16 e.Tail/39 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[28];
          context[38] = context[29];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[25] ) )
            continue;
          // closed e. as range 35
          // closed e.Scanned as range 37
          // closed e.Tail as range 39
          //DEBUG: s.Offset: 34
          //DEBUG: e.: 35
          //DEBUG: e.Scanned: 37
          //DEBUG: e.Tail: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} # TkOpenADT/25 s.Offset/34 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e./35 HalfReuse: s.Offset34 /6 HalfReuse: )/9 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned/37 } Tile{ AsIs: )/16 AsIs: e.Tail/39 AsIs: >/1 ]] }
          refalrts::reinit_svar( context[6], context[34] );
          refalrts::reinit_close_bracket(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/5 e./35 )/6 (/9 e.Scanned/37 )/10 (/15 # TkOpenBracket/25 s.Offset/34 )/16 e.Tail/39 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[28];
          context[38] = context[29];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[25] ) )
            continue;
          // closed e. as range 35
          // closed e.Scanned as range 37
          // closed e.Tail as range 39
          //DEBUG: s.Offset: 34
          //DEBUG: e.: 35
          //DEBUG: e.Scanned: 37
          //DEBUG: e.Tail: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} # TkOpenBracket/25 s.Offset/34 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e./35 HalfReuse: s.Offset34 /6 HalfReuse: )/9 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned/37 } Tile{ AsIs: )/16 AsIs: e.Tail/39 AsIs: >/1 ]] }
          refalrts::reinit_svar( context[6], context[34] );
          refalrts::reinit_close_bracket(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/5 e./35 )/6 (/9 e.Scanned/37 )/10 (/15 # TkClosureHead/25 s.Offset/34 )/16 e.Tail/39 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[28];
          context[38] = context[29];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[25] ) )
            continue;
          // closed e. as range 35
          // closed e.Scanned as range 37
          // closed e.Tail as range 39
          //DEBUG: s.Offset: 34
          //DEBUG: e.: 35
          //DEBUG: e.Scanned: 37
          //DEBUG: e.Tail: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} # TkClosureHead/25 s.Offset/34 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e./35 HalfReuse: s.Offset34 /6 HalfReuse: )/9 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned/37 } Tile{ AsIs: )/16 AsIs: e.Tail/39 AsIs: >/1 ]] }
          refalrts::reinit_svar( context[6], context[34] );
          refalrts::reinit_close_bracket(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_elem( res, context[15] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/5 e.new18/35 s.new19/41 )/6 (/9 e.new23/37 )/10 (/15 s.new20/25 s.new21/34 )/16 e.new22/39 >/1
        context[35] = context[26];
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[32];
        context[40] = context[33];
        // closed e.new23 as range 37
        // closed e.new22 as range 39
        if( ! refalrts::svar_right( context[41], context[35], context[36] ) )
          continue;
        // closed e.new18 as range 35
        do {
          // </0 & DoMapAccum@1/4 (/5 e.1/42 s.OpenOffset/41 )/6 (/9 e.Scanned/44 )/10 (/15 # TkCloseCall/25 s.Offset/34 )/16 e.Tail/46 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[25] ) )
            continue;
          // closed e.1 as range 42
          // closed e.Scanned as range 44
          // closed e.Tail as range 46
          //DEBUG: s.OpenOffset: 41
          //DEBUG: s.Offset: 34
          //DEBUG: e.1: 42
          //DEBUG: e.Scanned: 44
          //DEBUG: e.Tail: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.1/42 } Tile{ AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Scanned/44 } (/48 # CmdPushStack/49 Tile{ AsIs: s.OpenOffset/41 } Tile{ AsIs: )/10 AsIs: (/15 Reuse: # CmdPushStack/25 AsIs: s.Offset/34 AsIs: )/16 } )/50 Tile{ AsIs: e.Tail/46 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::alloc_ident(vm, context[49], identifiers[ident_CmdPushStack]);
          refalrts::alloc_close_bracket(vm, context[50]);
          refalrts::update_ident(context[25], identifiers[ident_CmdPushStack]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[50] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[48], context[10] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[50] );
          res = refalrts::splice_evar( res, context[10], context[16] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[6], context[9] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/5 e.1/42 s.OpenOffset/41 )/6 (/9 e.Scanned/44 )/10 (/15 # TkCloseADT/25 s.Offset/34 )/16 e.Tail/46 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[25] ) )
            continue;
          // closed e.1 as range 42
          // closed e.Scanned as range 44
          // closed e.Tail as range 46
          //DEBUG: s.OpenOffset: 41
          //DEBUG: s.Offset: 34
          //DEBUG: e.1: 42
          //DEBUG: e.Scanned: 44
          //DEBUG: e.Tail: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.OpenOffset/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.1/42 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/44 HalfReuse: (/10 HalfReuse: # CmdLinkBrackets/15 HalfReuse: s.OpenOffset41 /25 AsIs: s.Offset/34 AsIs: )/16 } )/48 Tile{ AsIs: e.Tail/46 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[15], identifiers[ident_CmdLinkBrackets]);
          refalrts::reinit_svar( context[25], context[41] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[48] );
          refalrts::link_brackets( context[10], context[16] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[48] );
          res = refalrts::splice_evar( res, context[6], context[16] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/5 e.1/42 s.OpenOffset/41 )/6 (/9 e.Scanned/44 )/10 (/15 # TkCloseBracket/25 s.Offset/34 )/16 e.Tail/46 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[25] ) )
            continue;
          // closed e.1 as range 42
          // closed e.Scanned as range 44
          // closed e.Tail as range 46
          //DEBUG: s.OpenOffset: 41
          //DEBUG: s.Offset: 34
          //DEBUG: e.1: 42
          //DEBUG: e.Scanned: 44
          //DEBUG: e.Tail: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.OpenOffset/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.1/42 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/44 HalfReuse: (/10 HalfReuse: # CmdLinkBrackets/15 HalfReuse: s.OpenOffset41 /25 AsIs: s.Offset/34 AsIs: )/16 } )/48 Tile{ AsIs: e.Tail/46 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[15], identifiers[ident_CmdLinkBrackets]);
          refalrts::reinit_svar( context[25], context[41] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[48] );
          refalrts::link_brackets( context[10], context[16] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[48] );
          res = refalrts::splice_evar( res, context[6], context[16] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/5 e.1/42 s.HeadOffset/41 )/6 (/9 e.Scanned/44 )/10 (/15 # TkUnwrappedClosure/25 s.Offset/34 )/16 e.Tail/46 >/1
        context[42] = context[35];
        context[43] = context[36];
        context[44] = context[37];
        context[45] = context[38];
        context[46] = context[39];
        context[47] = context[40];
        if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[25] ) )
          continue;
        // closed e.1 as range 42
        // closed e.Scanned as range 44
        // closed e.Tail as range 46
        //DEBUG: s.HeadOffset: 41
        //DEBUG: s.Offset: 34
        //DEBUG: e.1: 42
        //DEBUG: e.Scanned: 44
        //DEBUG: e.Tail: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.HeadOffset/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.1/42 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/44 HalfReuse: (/10 HalfReuse: # PatchCreateUnwrappedClosure/15 HalfReuse: s.HeadOffset41 /25 AsIs: s.Offset/34 AsIs: )/16 } (/48 # CmdWrapClosure/49 s.Offset/34/50 )/51 )/52 Tile{ AsIs: e.Tail/46 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_ident(vm, context[49], identifiers[ident_CmdWrapClosure]);
        refalrts::copy_stvar(vm, context[50], context[34]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_PatchCreateUnwrappedClosure]);
        refalrts::reinit_svar( context[25], context[41] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[52] );
        refalrts::link_brackets( context[48], context[51] );
        refalrts::link_brackets( context[10], context[16] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[48], context[52] );
        res = refalrts::splice_evar( res, context[6], context[16] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 (/5 e./26 )/6 (/9 e.Scanned/28 )/10 (/15 s.tag/25 e.1/30 )/16 e.Tail/32 >/1
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[19];
      context[33] = context[20];
      // closed e. as range 26
      // closed e.Scanned as range 28
      // closed e.1 as range 30
      // closed e.Tail as range 32
      //DEBUG: s.tag: 25
      //DEBUG: e.: 26
      //DEBUG: e.Scanned: 28
      //DEBUG: e.1: 30
      //DEBUG: e.Tail: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 s.tag/25 e.1/30 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e./26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 } Tile{ AsIs: e.Tail/32 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc/5 (/9 e.Scanned/17 )/10 t.Next/15 e.Tail/19 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & GenPushLink=1\1*9/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_GenPushLink_A1L1D9]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
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
    // </0 & DoMapAccum@1/4 t.Acc/5 (/9 e.Scanned/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: e.Scanned: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@1/4 t.acc/5 (/9 e.scanned/7 )/10 e.items/2 >/1
  // closed e.scanned as range 7
  // closed e.items as range 2
  //DEBUG: t.acc: 5
  //DEBUG: e.scanned: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & GenPushLink=1\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenPushLink_A1L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@6/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@6/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
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
        // </0 & Map@6/4 (/7 s.new6/13 )/8 e.new7/14 >/1
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;
        // closed e.new7 as range 14
        do {
          // </0 & Map@6/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail/16 >/1
          context[16] = context[14];
          context[17] = context[15];
          if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
            continue;
          // closed e.Tail as range 16
          //DEBUG: e.Tail: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@6/4 (/7 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@6/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[13];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@6/4 (/7 # LEFT-EDGE/13 )/8 e.Tail/16 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail as range 16
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Map@6/4 (/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@6/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 (/7 s.new6/13 t.new7/18 )/8 e.new8/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.new8 as range 16
      context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
      if( ! context[19] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      do {
        // </0 & Map@6/4 (/7 # AsIs/13 t.0/18 )/8 e.Tail/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
          continue;
        // closed e.Tail as range 20
        //DEBUG: t.0: 18
        //DEBUG: e.Tail: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@6/4 (/7 # AsIs/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail/20 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@6/4 (/7 # HalfReuse/13 t.0/18 )/8 e.Tail/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
          continue;
        // closed e.Tail as range 20
        //DEBUG: t.0: 18
        //DEBUG: e.Tail: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@6/4 (/7 # HalfReuse/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail/20 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 (/7 # Reuse/13 t.0/18 )/8 e.Tail/20 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
        continue;
      // closed e.Tail as range 20
      //DEBUG: t.0: 18
      //DEBUG: e.Tail: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@6/4 (/7 # Reuse/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail/20 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatTilesInResult\1$1\1*5/4 AsIs: t.Next/7 } >/11 </12 & Map@6/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z6]);
    refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1S1L1D5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FlatTilesInResult\1$1\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1S1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_GetSampleOffset_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & GetSampleOffset@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GetSampleOffset@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & GetSampleOffset@1/4 (/7 e._/13 (/19 's'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 )/8 e.Index0/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Index0 as range 11
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( 's', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( vm, context[26], context[27], context[11], context[12], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e._0 as range 15
      if( ! refalrts::svar_right( context[28], context[17], context[18] ) )
        continue;
      // closed e.Offsets as range 17
      //DEBUG: e.Index0: 11
      //DEBUG: e._: 13
      //DEBUG: e._0: 15
      //DEBUG: s.SampleOffset: 28
      //DEBUG: e.Offsets: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GetSampleOffset@1/4 (/7 e._/13 (/19 's'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 's'/8 AsIs: e.Index0/11 HalfReuse: s.SampleOffset28 /1 ]] }
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_svar( context[1], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetSampleOffset@1/4 (/7 e.dyn0/5 )/8 e.Index0/2 >/1
  // closed e.dyn0 as range 5
  // closed e.Index0 as range 2
  //DEBUG: e.dyn0: 5
  //DEBUG: e.Index0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetSampleOffset@0/4 } Tile{ AsIs: e.dyn0/5 } Tile{ AsIs: (/7 } 's'/9 Tile{ AsIs: e.Index0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[9], 's');
  refalrts::update_name(context[4], functions[efunc_gen_GetSampleOffset_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetSampleOffset_Z1("GetSampleOffset@1", COOKIE1_, COOKIE2_, func_gen_GetSampleOffset_Z1);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & Map@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@7/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Map@7/4 (/7 e.new5/9 )/8 t.new3/13 e.new4/11 >/1
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
      // </0 & Map@7/4 (/7 e.PatternVars/15 )/8 (/13 # HalfReuse/21 (/24 # Var/26 's'/27 e.5/22 s.Offset$a/28 )/25 )/14 e.Tail/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_HalfReuse], context[19], context[20] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left( identifiers[ident_Var], context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 's', context[22], context[23] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.PatternVars as range 15
      // closed e.Tail as range 17
      if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
        continue;
      // closed e.5 as range 22
      //DEBUG: e.PatternVars: 15
      //DEBUG: e.Tail: 17
      //DEBUG: s.Offset$a: 28
      //DEBUG: e.5: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # HalfReuse/21 AsIs: (/24 AsIs: # Var/26 HalfReuse: </27 } & GetSampleOffset@1/29 (/30 e.PatternVars/15/31 )/33 Tile{ AsIs: e.5/22 } >/34 Tile{ AsIs: s.Offset$a/28 AsIs: )/25 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: (/7 AsIs: e.PatternVars/15 AsIs: )/8 } Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_GetSampleOffset_Z1]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::reinit_open_call(context[27]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[30], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[28], context[14] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[29], context[33] );
      res = refalrts::splice_evar( res, context[13], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 (/7 e.PatternVars/15 )/8 t.Next/13 e.Tail/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.PatternVars as range 15
    // closed e.Tail as range 17
    //DEBUG: t.Next: 13
    //DEBUG: e.PatternVars: 15
    //DEBUG: e.Tail: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next/13 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: (/7 AsIs: e.PatternVars/15 AsIs: )/8 } Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@7/4 (/7 e.PatternVars/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.PatternVars as range 9
    //DEBUG: e.PatternVars: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 (/7 e.PatternVars/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 (/7 e.PatternVars/5 )/8 e.items/2 >/1
  // closed e.PatternVars as range 5
  // closed e.items as range 2
  //DEBUG: e.PatternVars: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & AddOffsets\1$1\1@0/4 AsIs: (/7 AsIs: e.PatternVars/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_AddOffsets_L1S1L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


static refalrts::FnResult func_gen_GetSampleOffset_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & GetSampleOffset@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GetSampleOffset@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & GetSampleOffset@2/4 (/7 e._/13 (/19 't'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 )/8 e.Index0/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Index0 as range 11
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( 't', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( vm, context[26], context[27], context[11], context[12], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e._0 as range 15
      if( ! refalrts::svar_right( context[28], context[17], context[18] ) )
        continue;
      // closed e.Offsets as range 17
      //DEBUG: e.Index0: 11
      //DEBUG: e._: 13
      //DEBUG: e._0: 15
      //DEBUG: s.SampleOffset: 28
      //DEBUG: e.Offsets: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GetSampleOffset@2/4 (/7 e._/13 (/19 't'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 't'/8 AsIs: e.Index0/11 HalfReuse: s.SampleOffset28 /1 ]] }
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_svar( context[1], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetSampleOffset@2/4 (/7 e.dyn0/5 )/8 e.Index0/2 >/1
  // closed e.dyn0 as range 5
  // closed e.Index0 as range 2
  //DEBUG: e.dyn0: 5
  //DEBUG: e.Index0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetSampleOffset@0/4 } Tile{ AsIs: e.dyn0/5 } Tile{ AsIs: (/7 } 't'/9 Tile{ AsIs: e.Index0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[9], 't');
  refalrts::update_name(context[4], functions[efunc_gen_GetSampleOffset_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetSampleOffset_Z2("GetSampleOffset@2", COOKIE1_, COOKIE2_, func_gen_GetSampleOffset_Z2);


static refalrts::FnResult func_gen_GetSampleOffset_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & GetSampleOffset@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GetSampleOffset@3/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & GetSampleOffset@3/4 (/7 e._/13 (/19 'e'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 )/8 e.Index0/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Index0 as range 11
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( 'e', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_evar_left( vm, context[26], context[27], context[11], context[12], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e._0 as range 15
      if( ! refalrts::svar_right( context[28], context[17], context[18] ) )
        continue;
      // closed e.Offsets as range 17
      //DEBUG: e.Index0: 11
      //DEBUG: e._: 13
      //DEBUG: e._0: 15
      //DEBUG: s.SampleOffset: 28
      //DEBUG: e.Offsets: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GetSampleOffset@3/4 (/7 e._/13 (/19 'e'/21 (/24 e.Index0/26 )/25 e.Offsets/17 s.SampleOffset/28 )/20 e._0/15 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 'e'/8 AsIs: e.Index0/11 HalfReuse: s.SampleOffset28 /1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_svar( context[1], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetSampleOffset@3/4 (/7 e.dyn0/5 )/8 e.Index0/2 >/1
  // closed e.dyn0 as range 5
  // closed e.Index0 as range 2
  //DEBUG: e.dyn0: 5
  //DEBUG: e.Index0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetSampleOffset@0/4 } Tile{ AsIs: e.dyn0/5 } Tile{ AsIs: (/7 } 'e'/9 Tile{ AsIs: e.Index0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[9], 'e');
  refalrts::update_name(context[4], functions[efunc_gen_GetSampleOffset_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetSampleOffset_Z3("GetSampleOffset@3", COOKIE1_, COOKIE2_, func_gen_GetSampleOffset_Z3);


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


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & DoMapAccum@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@2/4 (/7 e.new1/5 )/8 t.new2/9 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum@2/4 (/7 e.new8/15 )/8 t.new5/9 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & DoMapAccum@2/4 (/7 e.new14/23 )/8 s.new10/9 (/13 e.new15/25 )/14 (/21 s.new11/31 e.new12/29 )/22 e.new13/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      if( ! refalrts::svar_term( context[9], context[9] ) )
        continue;
      // closed e.new14 as range 23
      // closed e.new15 as range 25
      // closed e.new13 as range 27
      if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
        continue;
      // closed e.new12 as range 29
      do {
        // </0 & DoMapAccum@2/4 (/7 e.PatternVars/32 )/8 s.Offset/9 (/13 e.Scanned/34 )/14 (/21 # Tile/31 e.0/36 )/22 e.Tail/38 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[27];
        context[39] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_Tile], context[31] ) )
          continue;
        // closed e.PatternVars as range 32
        // closed e.Scanned as range 34
        // closed e.0 as range 36
        // closed e.Tail as range 38
        //DEBUG: s.Offset: 9
        //DEBUG: e.PatternVars: 32
        //DEBUG: e.Scanned: 34
        //DEBUG: e.0: 36
        //DEBUG: e.Tail: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/32 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/34 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/38 } )/40 Tile{ AsIs: s.Offset/9 } (/41 # Tile/42 </43 & Map@7/44 (/45 e.PatternVars/32/46 Tile{ HalfReuse: )/31 AsIs: e.0/36 HalfReuse: >/22 } )/48 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_open_bracket(vm, context[41]);
        refalrts::alloc_ident(vm, context[42], identifiers[ident_Tile]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_gen_Map_Z7]);
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::copy_evar(vm, context[46], context[47], context[32], context[33]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::reinit_close_bracket(context[31]);
        refalrts::reinit_close_call(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[41], context[48] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[43] );
        refalrts::link_brackets( context[45], context[31] );
        refalrts::link_brackets( context[21], context[40] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[31], context[22] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[41], context[45] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[13], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoMapAccum@2/4 (/7 e.new20/32 )/8 s.new16/9 (/13 e.new21/34 )/14 (/21 # Var/31 s.new17/40 e.new18/36 )/22 e.new19/38 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[27];
        context[39] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_Var], context[31] ) )
          continue;
        // closed e.new20 as range 32
        // closed e.new21 as range 34
        // closed e.new19 as range 38
        if( ! refalrts::svar_left( context[40], context[36], context[37] ) )
          continue;
        // closed e.new18 as range 36
        do {
          // </0 & DoMapAccum@2/4 (/7 e.PatternVars/41 )/8 s.Offset/9 (/13 e.Scanned/43 )/14 (/21 # Var/31 's'/40 e.1/45 )/22 e.Tail/47 >/1
          context[41] = context[32];
          context[42] = context[33];
          context[43] = context[34];
          context[44] = context[35];
          context[45] = context[36];
          context[46] = context[37];
          context[47] = context[38];
          context[48] = context[39];
          if( ! refalrts::char_term( 's', context[40] ) )
            continue;
          // closed e.PatternVars as range 41
          // closed e.Scanned as range 43
          // closed e.1 as range 45
          // closed e.Tail as range 47
          //DEBUG: s.Offset: 9
          //DEBUG: e.PatternVars: 41
          //DEBUG: e.Scanned: 43
          //DEBUG: e.1: 45
          //DEBUG: e.Tail: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/41 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/43 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/47 } )/49 </50 & Add/51 Tile{ AsIs: s.Offset/9 } 1/52 >/53 (/54 Tile{ Reuse: # VarCopy/31 } </55 & GetSampleOffset@1/56 (/57 e.PatternVars/41/58 Tile{ HalfReuse: )/40 AsIs: e.1/45 HalfReuse: >/22 } s.Offset/9/60 )/61 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_call(vm, context[50]);
          refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[52], 1UL);
          refalrts::alloc_close_call(vm, context[53]);
          refalrts::alloc_open_bracket(vm, context[54]);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_gen_GetSampleOffset_Z1]);
          refalrts::alloc_open_bracket(vm, context[57]);
          refalrts::copy_evar(vm, context[58], context[59], context[41], context[42]);
          refalrts::copy_stvar(vm, context[60], context[9]);
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::update_ident(context[31], identifiers[ident_VarCopy]);
          refalrts::reinit_close_bracket(context[40]);
          refalrts::reinit_close_call(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[54], context[61] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[55] );
          refalrts::link_brackets( context[57], context[40] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[50] );
          refalrts::link_brackets( context[21], context[49] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[60], context[61] );
          res = refalrts::splice_evar( res, context[40], context[22] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[55], context[57] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[52], context[54] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_evar( res, context[49], context[51] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[13], context[21] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 (/7 e.PatternVars/41 )/8 s.Offset/9 (/13 e.Scanned/43 )/14 (/21 # Var/31 't'/40 e.1/45 )/22 e.Tail/47 >/1
          context[41] = context[32];
          context[42] = context[33];
          context[43] = context[34];
          context[44] = context[35];
          context[45] = context[36];
          context[46] = context[37];
          context[47] = context[38];
          context[48] = context[39];
          if( ! refalrts::char_term( 't', context[40] ) )
            continue;
          // closed e.PatternVars as range 41
          // closed e.Scanned as range 43
          // closed e.1 as range 45
          // closed e.Tail as range 47
          //DEBUG: s.Offset: 9
          //DEBUG: e.PatternVars: 41
          //DEBUG: e.Scanned: 43
          //DEBUG: e.1: 45
          //DEBUG: e.Tail: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/41 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/43 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/47 } )/49 </50 & Add/51 Tile{ AsIs: s.Offset/9 } 2/52 >/53 (/54 Tile{ Reuse: # VarCopy/31 } </55 & GetSampleOffset@2/56 (/57 e.PatternVars/41/58 Tile{ HalfReuse: )/40 AsIs: e.1/45 HalfReuse: >/22 } s.Offset/9/60 )/61 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_call(vm, context[50]);
          refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[52], 2UL);
          refalrts::alloc_close_call(vm, context[53]);
          refalrts::alloc_open_bracket(vm, context[54]);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_gen_GetSampleOffset_Z2]);
          refalrts::alloc_open_bracket(vm, context[57]);
          refalrts::copy_evar(vm, context[58], context[59], context[41], context[42]);
          refalrts::copy_stvar(vm, context[60], context[9]);
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::update_ident(context[31], identifiers[ident_VarCopy]);
          refalrts::reinit_close_bracket(context[40]);
          refalrts::reinit_close_call(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[54], context[61] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[55] );
          refalrts::link_brackets( context[57], context[40] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[50] );
          refalrts::link_brackets( context[21], context[49] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[60], context[61] );
          res = refalrts::splice_evar( res, context[40], context[22] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[55], context[57] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[52], context[54] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_evar( res, context[49], context[51] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[13], context[21] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 (/7 e.PatternVars/41 )/8 s.Offset/9 (/13 e.Scanned/43 )/14 (/21 # Var/31 'e'/40 e.1/45 )/22 e.Tail/47 >/1
        context[41] = context[32];
        context[42] = context[33];
        context[43] = context[34];
        context[44] = context[35];
        context[45] = context[36];
        context[46] = context[37];
        context[47] = context[38];
        context[48] = context[39];
        if( ! refalrts::char_term( 'e', context[40] ) )
          continue;
        // closed e.PatternVars as range 41
        // closed e.Scanned as range 43
        // closed e.1 as range 45
        // closed e.Tail as range 47
        //DEBUG: s.Offset: 9
        //DEBUG: e.PatternVars: 41
        //DEBUG: e.Scanned: 43
        //DEBUG: e.1: 45
        //DEBUG: e.Tail: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/41 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/43 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/47 } )/49 </50 & Add/51 Tile{ AsIs: s.Offset/9 } 2/52 >/53 (/54 Tile{ Reuse: # VarCopy/31 } </55 & GetSampleOffset@3/56 (/57 e.PatternVars/41/58 Tile{ HalfReuse: )/40 AsIs: e.1/45 HalfReuse: >/22 } s.Offset/9/60 )/61 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_open_call(vm, context[50]);
        refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[52], 2UL);
        refalrts::alloc_close_call(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_open_call(vm, context[55]);
        refalrts::alloc_name(vm, context[56], functions[efunc_gen_GetSampleOffset_Z3]);
        refalrts::alloc_open_bracket(vm, context[57]);
        refalrts::copy_evar(vm, context[58], context[59], context[41], context[42]);
        refalrts::copy_stvar(vm, context[60], context[9]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::update_ident(context[31], identifiers[ident_VarCopy]);
        refalrts::reinit_close_bracket(context[40]);
        refalrts::reinit_close_call(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[54], context[61] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[55] );
        refalrts::link_brackets( context[57], context[40] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[50] );
        refalrts::link_brackets( context[21], context[49] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[40], context[22] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[55], context[57] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[52], context[54] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[49], context[51] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[13], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoMapAccum@2/4 (/7 e.PatternVars/32 )/8 s.Offset/9 (/13 e.Scanned/34 )/14 (/21 # TkString/31 e.0/36 )/22 e.Tail/38 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[27];
        context[39] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_TkString], context[31] ) )
          continue;
        // closed e.PatternVars as range 32
        // closed e.Scanned as range 34
        // closed e.0 as range 36
        // closed e.Tail as range 38
        //DEBUG: s.Offset: 9
        //DEBUG: e.PatternVars: 32
        //DEBUG: e.Scanned: 34
        //DEBUG: e.0: 36
        //DEBUG: e.Tail: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/32 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/34 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/38 } )/40 </41 & Inc2/42 Tile{ AsIs: s.Offset/9 } >/43 (/44 Tile{ AsIs: # TkString/31 AsIs: e.0/36 HalfReuse: s.Offset9 /22 } )/45 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_Inc2]);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_close_bracket(vm, context[45]);
        refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::reinit_svar( context[22], context[9] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[44], context[45] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[41] );
        refalrts::link_brackets( context[21], context[40] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[31], context[22] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[40], context[42] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[13], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/7 e.PatternVars/32 )/8 s.Offset/9 (/13 e.Scanned/34 )/14 (/21 s.Tag/31 e.0/36 )/22 e.Tail/38 >/1
      context[32] = context[23];
      context[33] = context[24];
      context[34] = context[25];
      context[35] = context[26];
      context[36] = context[29];
      context[37] = context[30];
      context[38] = context[27];
      context[39] = context[28];
      // closed e.PatternVars as range 32
      // closed e.Scanned as range 34
      // closed e.0 as range 36
      // closed e.Tail as range 38
      //DEBUG: s.Offset: 9
      //DEBUG: s.Tag: 31
      //DEBUG: e.PatternVars: 32
      //DEBUG: e.Scanned: 34
      //DEBUG: e.0: 36
      //DEBUG: e.Tail: 38

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/32 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/34 AsIs: )/14 AsIs: (/21 } Tile{ AsIs: e.Tail/38 } )/40 </41 & Add/42 1/43 Tile{ AsIs: s.Offset/9 } >/44 (/45 Tile{ AsIs: s.Tag/31 AsIs: e.0/36 HalfReuse: s.Offset9 /22 } )/46 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
      refalrts::reinit_svar( context[22], context[9] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[45], context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::link_brackets( context[21], context[40] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_evar( res, context[31], context[22] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 (/7 e.PatternVars/23 )/8 t.Acc/9 (/13 e.Scanned/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.PatternVars as range 23
    // closed e.Scanned as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Acc: 9
    //DEBUG: t.Next: 21
    //DEBUG: e.PatternVars: 23
    //DEBUG: e.Scanned: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.PatternVars/23 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/25 AsIs: )/14 } (/29 Tile{ AsIs: e.Tail/27 } )/30 </31 & AddOffsets\1*6/32 (/33 e.PatternVars/23/34 )/36 Tile{ AsIs: t.Acc/9 } Tile{ AsIs: t.Next/21 } >/37 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_AddOffsets_L1D6]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 (/7 e.PatternVars/15 )/8 t.Acc/9 (/13 e.Scanned/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.PatternVars as range 15
    // closed e.Scanned as range 17
    //DEBUG: t.Acc: 9
    //DEBUG: e.PatternVars: 15
    //DEBUG: e.Scanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 (/7 e.PatternVars/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/9 } Tile{ AsIs: e.Scanned/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 (/7 e.PatternVars/5 )/8 t.acc/9 (/13 e.scanned/11 )/14 e.items/2 >/1
  // closed e.PatternVars as range 5
  // closed e.scanned as range 11
  // closed e.items as range 2
  //DEBUG: t.acc: 9
  //DEBUG: e.PatternVars: 5
  //DEBUG: e.scanned: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & AddOffsets\1@0/15 (/16 Tile{ AsIs: e.PatternVars/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc/9 AsIs: (/13 AsIs: e.scanned/11 AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_AddOffsets_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0/13 } Tile{ AsIs: e.StepScanned/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & GenPushLink=1\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenPushLink_A1L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum$1=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum$1=1@2/4 (/7 e.PatternVars/17 )/8 (/11 e.Scanned0/19 )/12 (/15 e.Tail0/21 )/16 t.Acc$a/25 e.StepScanned/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.PatternVars as range 17
    // closed e.Scanned0 as range 19
    // closed e.Tail0 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned as range 23
    //DEBUG: e.PatternVars: 17
    //DEBUG: e.Scanned0: 19
    //DEBUG: e.Tail0: 21
    //DEBUG: t.Acc$a: 25
    //DEBUG: e.StepScanned: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: (/7 AsIs: e.PatternVars/17 AsIs: )/8 } Tile{ AsIs: t.Acc$a/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0/19 } Tile{ AsIs: e.StepScanned/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@2/4 (/7 e.PatternVars/5 )/8 (/11 e.Scanned0/9 )/12 (/15 e.Tail0/13 )/16 e.dyn/2 >/1
  // closed e.PatternVars as range 5
  // closed e.Scanned0 as range 9
  // closed e.Tail0 as range 13
  // closed e.dyn as range 2
  //DEBUG: e.PatternVars: 5
  //DEBUG: e.Scanned0: 9
  //DEBUG: e.Tail0: 13
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & AddOffsets\1@0/17 (/18 Tile{ AsIs: e.PatternVars/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0/13 AsIs: )/16 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_AddOffsets_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z2("DoMapAccum$1=1@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z2);


//End of file
