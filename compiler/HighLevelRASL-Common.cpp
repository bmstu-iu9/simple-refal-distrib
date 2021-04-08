// This file automatically generated from 'HighLevelRASL-Common.ref'
// Don't edit! Edit 'HighLevelRASL-Common.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_423837776_2529958753
#define COOKIE1_ 423837776U
#define COOKIE2_ 2529958753U

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
  efunc_gen_Map_Z3 = 18,
  efunc_TextFromExprm_Prepare = 19,
  efunc_gen_Map_Z2 = 20,
  efunc_DisplayName = 21,
  efunc_TextFromExprm_Preparem_Chars = 22,
  efunc_EscapeChar = 23,
  efunc_Symb = 24,
  efunc_gen_GenInitSubst_A5 = 25,
  efunc_gen_GenInitSubst_A4 = 26,
  efunc_gen_GenInitSubst_A3 = 27,
  efunc_gen_GenInitSubst_A2 = 28,
  efunc_FoldOpenELoops = 29,
  efunc_gen_Map_Z4 = 30,
  efunc_gen_GenResult_A1 = 31,
  efunc_SentenceTail = 32,
  efunc_gen_SentenceTail_S1A8 = 33,
  efunc_Max = 34,
  efunc_gen_SentenceTail_S1A7 = 35,
  efunc_gen_SentenceTail_S1A6 = 36,
  efunc_gen_SentenceTail_S1A4D1 = 37,
  efunc_gen_SentenceTail_S1A3 = 38,
  efunc_GenSubstm_Save = 39,
  efunc_gen_SentenceTail_S1A2 = 40,
  efunc_GenResultm_Condition = 41,
  efunc_gen_SentenceTail_S1A1 = 42,
  efunc_gen_Fetch_Z1 = 43,
  efunc_gen_BuildString_Z2 = 44,
  efunc_CollectStrings = 45,
  efunc_gen_DoMapAccum_Z1 = 46,
  efunc_gen_MakeSavers_A1 = 47,
  efunc_Mu = 48,
  efunc_Up = 49,
  efunc_Evm_met = 50,
  efunc_Residue = 51,
  efunc_u_u_Metau_Residue = 52,
  efunc_MapAccum = 53,
  efunc_UnBracket = 54,
  efunc_DelAccumulator = 55,
  efunc_Inc = 56,
  efunc_Dec = 57,
  efunc_Inc2 = 58,
  efunc_IncVarOffset = 59,
  efunc_PrintVar = 60,
  efunc_TextFromExpr = 61,
  efunc_SafeDisplayName = 62,
  efunc_Offset = 63,
  efunc_GenInitSubst = 64,
  efunc_GenPattern = 65,
  efunc_GenResult = 66,
  efunc_PutVariableDebugTable = 67,
  efunc_BuildString = 68,
  efunc_MakeSavers = 69,
  efunc_gen_Apply_Z4 = 70,
  efunc_gen_Map_Z1 = 71,
  efunc_gen_Map_Z0 = 72,
  efunc_gen_EscapeChar_Z0 = 73,
  efunc_gen_SafeDisplayName_L1D6 = 74,
  efunc_gen_SafeDisplayName_L1Z0 = 75,
  efunc_gen_TextFromExpr_L1D26 = 76,
  efunc_gen_TextFromExpr_L1Z0 = 77,
  efunc_gen_PutVariableDebugTable_L1D1 = 78,
  efunc_gen_PutVariableDebugTable_L1Z0 = 79,
  efunc_gen_CollectStrings_S1L1D1 = 80,
  efunc_gen_Fetch_Z0 = 81,
  efunc_gen_CollectStrings_S1L1Z0 = 82,
  efunc_gen_DoMapAccum_S1A1Z1 = 83,
  efunc_gen_MakeSavers_A1L1D4 = 84,
  efunc_gen_DoMapAccum_Z0 = 85,
  efunc_gen_MakeSavers_A1L1Z0 = 86,
  efunc_gen_BuildString_Z0 = 87,
  efunc_gen_DoMapAccum_S1A1Z0 = 88,
};


enum ident {
  ident_NoOffset = 0,
  ident_Symbol = 1,
  ident_Char = 2,
  ident_TkOpenADT = 3,
  ident_Name = 4,
  ident_TkChars = 5,
  ident_Junk = 6,
  ident_E = 7,
  ident_TkCloseCall = 8,
  ident_CmdCallSave = 9,
  ident_AlgLeft = 10,
  ident_TkOpenCall = 11,
  ident_CmdInitB0m_Lite = 12,
  ident_CmdIssueMemory = 13,
  ident_CmdCallCondition = 14,
  ident_CmdProfileFunction = 15,
  ident_CmdFail = 16,
  ident_CmdSentence = 17,
  ident_CmdSpliceToFreeListm_Range = 18,
  ident_Condition = 19,
  ident_TkOpenCallCond = 20,
  ident_TkCloseCallCond = 21,
  ident_CmdOpenedE = 22,
  ident_CmdOpenELoop = 23,
  ident_TkString = 24,
  ident_Brackets = 25,
  ident_CallBrackets = 26,
  ident_ADTm_Brackets = 27,
  ident_Mu = 28,
  ident_Up = 29,
  ident_Evm_met = 30,
  ident_Residue = 31,
  ident_u_u_Metau_Residue = 32,
  ident_Apply = 33,
  ident_Map = 34,
  ident_Reduce = 35,
  ident_Fetch = 36,
  ident_MapAccum = 37,
  ident_DoMapAccum = 38,
  ident_UnBracket = 39,
  ident_DelAccumulator = 40,
  ident_Inc = 41,
  ident_Dec = 42,
  ident_Pipe = 43,
  ident_Inc2 = 44,
  ident_IncVarOffset = 45,
  ident_PrintVar = 46,
  ident_TextFromExpr = 47,
  ident_SafeDisplayName = 48,
  ident_TextFromExprm_Prepare = 49,
  ident_TextFromExprm_Preparem_Chars = 50,
  ident_Offset = 51,
  ident_GenInitSubst = 52,
  ident_GenPattern = 53,
  ident_GenResult = 54,
  ident_SentenceTail = 55,
  ident_FoldOpenELoops = 56,
  ident_PutVariableDebugTable = 57,
  ident_CollectStrings = 58,
  ident_BuildString = 59,
  ident_MakeSavers = 60,
  ident_TkOpenBracket = 61,
  ident_TkCloseBracket = 62,
  ident_TkCloseADT = 63,
  ident_TkClosureHead = 64,
  ident_TkUnwrappedClosure = 65,
  ident_Number = 66,
  ident_Cookie1 = 67,
  ident_Cookie2 = 68,
  ident_Var = 69,
  ident_VarCopy = 70,
  ident_Identifier = 71,
  ident_Tile = 72,
  ident_AsIs = 73,
  ident_Reuse = 74,
  ident_HalfReuse = 75,
  ident_LEFTm_EDGE = 76,
  ident_RIGHTm_EDGE = 77,
  ident_RemovedTile = 78,
  ident_CmdVariableDebugTable = 79,
  ident_CmdSave = 80,
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


static refalrts::FnResult func_Inc2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc2/4 s.Num/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 2UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc2("Inc2", 0U, 0U, func_Inc2);


static refalrts::FnResult func_IncVarOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IncVarOffset/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & IncVarOffset/4 s.new1/5 s.new2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IncVarOffset/4 s.ContextOffset/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 2/7 Tile{ HalfReuse: s.ContextOffset5 /6 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[7], 2UL);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_elem( res, context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IncVarOffset/4 s.ContextOffset/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset5 /6 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[7], 1UL);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_elem( res, context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncVarOffset/4 s.ContextOffset/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset5 /6 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[6], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncVarOffset("IncVarOffset", 0U, 0U, func_IncVarOffset);


static refalrts::FnResult func_PrintVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PrintVar/4 s.Mode/5 e.Index/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index as range 2
  //DEBUG: s.Mode: 5
  //DEBUG: e.Index: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Mode5 /0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char(context[4], '.');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintVar("PrintVar", 0U, 0U, func_PrintVar);


static refalrts::FnResult func_TextFromExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TextFromExpr/4 e.Expr/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr as range 2
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@3/6 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_TextFromExprm_Prepare]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExpr("TextFromExpr", 0U, 0U, func_TextFromExpr);


static refalrts::FnResult func_SafeDisplayName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & SafeDisplayName/4 e.Name/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name as range 2
  //DEBUG: e.Name: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@2/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_DisplayName]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SafeDisplayName("SafeDisplayName", COOKIE1_, COOKIE2_, func_SafeDisplayName);


static refalrts::FnResult func_TextFromExprm_Prepare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & TextFromExpr-Prepare/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & TextFromExpr-Prepare/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & TextFromExpr-Prepare/4 (/7 e.new3/11 s.new4/14 s.new5/13 )/8 e.new6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new6 as range 9
      if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
        continue;
      // closed e.new3 as range 11
      do {
        // </0 & TextFromExpr-Prepare/4 (/7 # Symbol/19 # Char/20 s.Char/14 # NoOffset/13 )/8 e.Tail/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[13] ) )
          continue;
        context[19] = refalrts::ident_left( identifiers[ident_Symbol], context[15], context[16] );
        if( ! context[19] )
          continue;
        context[20] = refalrts::ident_left( identifiers[ident_Char], context[15], context[16] );
        if( ! context[20] )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        // closed e.Tail as range 17
        //DEBUG: s.Char: 14
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 HalfReuse: </19 HalfReuse: & EscapeChar/20 AsIs: s.Char/14 HalfReuse: >/13 AsIs: )/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_TextFromExprm_Preparem_Chars]);
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[20], functions[efunc_EscapeChar]);
        refalrts::reinit_close_call(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[19] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/14 s.BracketOffset/13 )/8 (/19 # Symbol/21 # Name/22 e.Name/17 s.NameOffset/23 )/20 e.Tail/15 >/1
      context[15] = context[9];
      context[16] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[14] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_Symbol], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::ident_left( identifiers[ident_Name], context[17], context[18] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Tail as range 15
      if( ! refalrts::svar_right( context[23], context[17], context[18] ) )
        continue;
      // closed e.Name as range 17
      //DEBUG: s.BracketOffset: 13
      //DEBUG: e.Tail: 15
      //DEBUG: s.NameOffset: 23
      //DEBUG: e.Name: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/14 s.BracketOffset/13 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # TkOpenADT/21 HalfReuse: s.BracketOffset13 /22 AsIs: e.Name/17 AsIs: s.NameOffset/23 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[21], identifiers[ident_TkOpenADT]);
      refalrts::reinit_svar( context[22], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TextFromExpr-Prepare/4 t.Other/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Other: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other/7 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & TextFromExpr-Prepare/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TextFromExpr-Prepare/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExprm_Prepare("TextFromExpr-Prepare", COOKIE1_, COOKIE2_, func_TextFromExprm_Prepare);


static refalrts::FnResult func_TextFromExprm_Preparem_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & TextFromExpr-Prepare-Chars/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars/9 )/8 (/15 # Symbol/17 # Char/18 s.Char/20 # NoOffset/19 )/16 e.Tail/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left( identifiers[ident_Symbol], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::ident_right( identifiers[ident_NoOffset], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Chars as range 9
    // closed e.Tail as range 11
    if( ! refalrts::svar_left( context[20], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars: 9
    //DEBUG: e.Tail: 11
    //DEBUG: s.Char: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Char/20 # NoOffset/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 AsIs: e.Chars/9 HalfReuse: </8 HalfReuse: & EscapeChar/15 HalfReuse: s.Char20 /17 HalfReuse: >/18 } Tile{ AsIs: )/16 AsIs: e.Tail/11 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[15], functions[efunc_EscapeChar]);
    refalrts::reinit_svar( context[17], context[20] );
    refalrts::reinit_close_call(context[18]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::splice_to_freelist_open( vm, context[18], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars/5 )/8 e.Tail/2 >/1
  // closed e.Chars as range 5
  // closed e.Tail as range 2
  //DEBUG: e.Chars: 5
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChars/4 } Tile{ AsIs: e.Chars/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & TextFromExpr-Prepare/8 AsIs: e.Tail/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkChars]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_TextFromExprm_Prepare]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExprm_Preparem_Chars("TextFromExpr-Prepare-Chars", COOKIE1_, COOKIE2_, func_TextFromExprm_Preparem_Chars);


static refalrts::FnResult func_Offset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Offset/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Offset/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Offset/4 # NoOffset/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Offset/4 # NoOffset/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Offset/4 s.Offset/5 >/1
  //DEBUG: s.Offset: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '/'/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.Offset/5 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[6], '/');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Offset("Offset", COOKIE1_, COOKIE2_, func_Offset);


static refalrts::FnResult func_gen_GenInitSubst_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & GenInitSubst=5/4 s.0/5 (/8 e.FuncName/6 )/9 s.4/10 s.2/11 (/14 e.Pattern/12 )/15 s.1/16 s.5/17 >/1
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
  // closed e.FuncName as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Pattern as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0: 5
  //DEBUG: e.FuncName: 6
  //DEBUG: s.4: 10
  //DEBUG: s.2: 11
  //DEBUG: e.Pattern: 12
  //DEBUG: s.1: 16
  //DEBUG: s.5: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.5/17 HalfReuse: (/1 } # Junk/18 Tile{ HalfReuse: (/0 HalfReuse: # TkOpenCall/4 AsIs: s.0/5 HalfReuse: )/8 } (/19 # Symbol/20 # Name/21 Tile{ AsIs: e.FuncName/6 } Tile{ AsIs: s.4/10 } Tile{ AsIs: )/9 } )/22 (/23 # E/24 Tile{ HalfReuse: s.211 /14 AsIs: e.Pattern/12 AsIs: )/15 } (/25 # Junk/26 (/27 # TkCloseCall/28 Tile{ AsIs: s.1/16 } )/29 )/30 (/31 (/32 # CmdCallSave/33 # AlgLeft/34 s.0/5/35 Tile{ AsIs: s.2/11 } )/36 )/37 Tile{ ]] }
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Name]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_E]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseCall]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_CmdCallSave]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_AlgLeft]);
  refalrts::copy_stvar(vm, context[35], context[5]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkOpenCall]);
  refalrts::reinit_close_bracket(context[8]);
  refalrts::reinit_svar( context[14], context[11] );
  refalrts::link_brackets( context[31], context[37] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::link_brackets( context[25], context[30] );
  refalrts::link_brackets( context[27], context[29] );
  refalrts::link_brackets( context[23], context[15] );
  refalrts::link_brackets( context[1], context[22] );
  refalrts::link_brackets( context[19], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[29], context[35] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A5("GenInitSubst=5", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A5);


static refalrts::FnResult func_gen_GenInitSubst_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenInitSubst=4/4 s.0/5 (/8 e.FuncName/6 )/9 s.2/10 (/13 e.Pattern/11 )/14 s.1/15 s.ContextTop/16 s.4/17 >/1
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
  // closed e.FuncName as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Pattern as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0: 5
  //DEBUG: e.FuncName: 6
  //DEBUG: s.2: 10
  //DEBUG: e.Pattern: 11
  //DEBUG: s.1: 15
  //DEBUG: s.ContextTop: 16
  //DEBUG: s.4: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=5/4 AsIs: s.0/5 AsIs: (/8 AsIs: e.FuncName/6 AsIs: )/9 } Tile{ AsIs: s.4/17 } Tile{ AsIs: s.2/10 AsIs: (/13 AsIs: e.Pattern/11 AsIs: )/14 AsIs: s.1/15 } </18 & Add/19 Tile{ AsIs: s.ContextTop/16 } 5/20 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[20], 5UL);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A4("GenInitSubst=4", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A4);


static refalrts::FnResult func_gen_GenInitSubst_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & GenInitSubst=3/4 s.0/5 (/8 e.FuncName/6 )/9 (/12 e.Pattern/10 )/13 s.1/14 s.ContextTop/15 s.2/16 >/1
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
  // closed e.FuncName as range 6
  // closed e.Pattern as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0: 5
  //DEBUG: e.FuncName: 6
  //DEBUG: e.Pattern: 10
  //DEBUG: s.1: 14
  //DEBUG: s.ContextTop: 15
  //DEBUG: s.2: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.2/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=4/4 AsIs: s.0/5 AsIs: (/8 AsIs: e.FuncName/6 AsIs: )/9 HalfReuse: s.216 /12 } (/17 Tile{ AsIs: e.Pattern/10 } Tile{ AsIs: )/13 AsIs: s.1/14 AsIs: s.ContextTop/15 } </18 & Add/19 s.ContextTop/15/20 4/21 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[20], context[15]);
  refalrts::alloc_number(vm, context[21], 4UL);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A4]);
  refalrts::reinit_svar( context[12], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[17], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A3("GenInitSubst=3", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A3);


static refalrts::FnResult func_gen_GenInitSubst_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GenInitSubst=2/4 s.0/5 (/8 e.FuncName/6 )/9 (/12 e.Pattern/10 )/13 s.ContextTop/14 s.1/15 >/1
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
  // closed e.FuncName as range 6
  // closed e.Pattern as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0: 5
  //DEBUG: e.FuncName: 6
  //DEBUG: e.Pattern: 10
  //DEBUG: s.ContextTop: 14
  //DEBUG: s.1: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=3/4 AsIs: s.0/5 AsIs: (/8 AsIs: e.FuncName/6 AsIs: )/9 AsIs: (/12 AsIs: e.Pattern/10 AsIs: )/13 } Tile{ AsIs: s.1/15 } Tile{ AsIs: s.ContextTop/14 } </16 & Add/17 s.ContextTop/14/18 2/19 >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[18], context[14]);
  refalrts::alloc_number(vm, context[19], 2UL);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A2("GenInitSubst=2", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A2);


static refalrts::FnResult func_GenInitSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenInitSubst/4 s.ContextTop/5 (/8 e.FuncName/6 )/9 e.Pattern/2 >/1
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
  // closed e.FuncName as range 6
  // closed e.Pattern as range 2
  //DEBUG: s.ContextTop: 5
  //DEBUG: e.FuncName: 6
  //DEBUG: e.Pattern: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=2/4 AsIs: s.ContextTop/5 AsIs: (/8 AsIs: e.FuncName/6 AsIs: )/9 } (/10 Tile{ AsIs: e.Pattern/2 } )/11 s.ContextTop/5/12 </13 & Add/14 s.ContextTop/5/15 1/16 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenInitSubst("GenInitSubst", 0U, 0U, func_GenInitSubst);


static refalrts::FnResult func_GenPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & GenPattern/4 s.FnGenSubst/5 (/8 e.Name/6 )/9 e.Pattern/2 >/1
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
  // closed e.Pattern as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: e.Name: 6
  //DEBUG: e.Pattern: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnGenSubst/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst5 /4 } 5/10 (/11 # Junk/12 (/13 # TkOpenCall/14 0/15 )/16 (/17 # Symbol/18 Tile{ HalfReuse: # Name/8 AsIs: e.Name/6 HalfReuse: 4/9 } )/19 )/20 (/21 # E/22 2/23 Tile{ AsIs: e.Pattern/2 } )/24 (/25 # Junk/26 (/27 # TkCloseCall/28 1/29 )/30 )/31 (/32 )/33 (/34 (/35 # CmdInitB0-Lite/36 )/37 (/38 # CmdCallSave/39 # AlgLeft/40 0/41 2/42 )/43 )/44 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[10], 5UL);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_TkOpenCall]);
  refalrts::alloc_number(vm, context[15], 0UL);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Symbol]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_E]);
  refalrts::alloc_number(vm, context[23], 2UL);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseCall]);
  refalrts::alloc_number(vm, context[29], 1UL);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdInitB0m_Lite]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdCallSave]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_AlgLeft]);
  refalrts::alloc_number(vm, context[41], 0UL);
  refalrts::alloc_number(vm, context[42], 2UL);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::reinit_svar( context[4], context[5] );
  refalrts::reinit_ident(context[8], identifiers[ident_Name]);
  refalrts::reinit_number(context[9], 4UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[34], context[44] );
  refalrts::link_brackets( context[38], context[43] );
  refalrts::link_brackets( context[35], context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[25], context[31] );
  refalrts::link_brackets( context[27], context[30] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[44] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[18] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenPattern("GenPattern", 0U, 0U, func_GenPattern);


static refalrts::FnResult func_gen_GenResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenResult=1/4 (/7 e.PatternCommands/5 )/8 (/11 e.PatternVars/9 )/12 s.ContextCount/13 e.SentenceTailCommands/2 >/1
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
  // closed e.PatternCommands as range 5
  // closed e.PatternVars as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentenceTailCommands as range 2
  //DEBUG: e.PatternCommands: 5
  //DEBUG: e.PatternVars: 9
  //DEBUG: s.ContextCount: 13
  //DEBUG: e.SentenceTailCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextCount/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & FoldOpenELoops/15 (/16 Tile{ HalfReuse: # CmdIssueMemory/0 HalfReuse: s.ContextCount13 /4 HalfReuse: )/7 AsIs: e.PatternCommands/5 HalfReuse: </8 HalfReuse: & Map@4/11 AsIs: e.PatternVars/9 HalfReuse: >/12 } Tile{ AsIs: e.SentenceTailCommands/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_FoldOpenELoops]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::reinit_ident(context[0], identifiers[ident_CmdIssueMemory]);
  refalrts::reinit_svar( context[4], context[13] );
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z4]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[16], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", COOKIE1_, COOKIE2_, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & GenResult/4 s.FnGenResult/5 (/8 e.Conditions/6 )/9 (/12 e.Result/10 )/13 s.ContextOffset/14 (/17 e.PatternVars/15 )/18 (/21 e.MarkedPattern/19 )/22 e.PatternCommands/2 >/1
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
  // closed e.Conditions as range 6
  // closed e.Result as range 10
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
  // closed e.PatternVars as range 15
  // closed e.MarkedPattern as range 19
  // closed e.PatternCommands as range 2
  //DEBUG: s.FnGenResult: 5
  //DEBUG: e.Conditions: 6
  //DEBUG: e.Result: 10
  //DEBUG: s.ContextOffset: 14
  //DEBUG: e.PatternVars: 15
  //DEBUG: e.MarkedPattern: 19
  //DEBUG: e.PatternCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult=1/4 } Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands/2 } Tile{ AsIs: )/9 AsIs: (/12 } e.PatternVars/15/23 )/25 </26 Tile{ HalfReuse: & SentenceTail/13 AsIs: s.ContextOffset/14 AsIs: (/17 AsIs: e.PatternVars/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern/19 AsIs: )/22 } Tile{ AsIs: e.Conditions/6 } (/27 Tile{ AsIs: s.FnGenResult/5 } Tile{ AsIs: e.Result/10 } )/28 >/29 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResult_A1]);
  refalrts::reinit_name(context[13], functions[efunc_SentenceTail]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[25] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResult("GenResult", 0U, 0U, func_GenResult);


static refalrts::FnResult func_gen_SentenceTail_S1A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SentenceTail$1=8/4 s.StackTop/5 (/8 e.CondResultCommands/6 )/9 e.CmdSentenceCommands/2 >/1
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
  // closed e.CondResultCommands as range 6
  // closed e.CmdSentenceCommands as range 2
  //DEBUG: s.StackTop: 5
  //DEBUG: e.CondResultCommands: 6
  //DEBUG: e.CmdSentenceCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.StackTop/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.StackTop5 /0 } Tile{ AsIs: e.CondResultCommands/6 } Tile{ AsIs: (/8 } # CmdCallCondition/10 Tile{ HalfReuse: )/4 } (/11 # CmdProfileFunction/12 Tile{ AsIs: )/9 AsIs: e.CmdSentenceCommands/2 HalfReuse: (/1 } # CmdFail/13 )/14 Tile{ ]] }
  refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdCallCondition]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdProfileFunction]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_CmdFail]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[14] );
  refalrts::link_brackets( context[11], context[9] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A8("SentenceTail$1=8", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A8);


static refalrts::FnResult func_gen_SentenceTail_S1A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail$1=7/4 (/7 e.CondResultCommands/5 )/8 (/11 e.CondPatternCommands/9 )/12 (/15 e.PatternVars$a/13 )/16 (/19 e.NestedSentence/17 )/20 s.StartOffsetCond/21 s.StackTop/22 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.CondResultCommands as range 5
  // closed e.CondPatternCommands as range 9
  // closed e.PatternVars$a as range 13
  // closed e.NestedSentence as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.CondResultCommands: 5
  //DEBUG: e.CondPatternCommands: 9
  //DEBUG: e.PatternVars$a: 13
  //DEBUG: e.NestedSentence: 17
  //DEBUG: s.StartOffsetCond: 21
  //DEBUG: s.StackTop: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.StackTop/22 {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: & SentenceTail$1=8/0 HalfReuse: s.StackTop22 /4 AsIs: (/7 AsIs: e.CondResultCommands/5 AsIs: )/8 AsIs: (/11 } # CmdSentence/24 </25 & FoldOpenELoops/26 Tile{ AsIs: e.CondPatternCommands/9 } Tile{ HalfReuse: </12 HalfReuse: & Map@4/15 AsIs: e.PatternVars$a/13 HalfReuse: >/16 } Tile{ AsIs: e.NestedSentence/17 } >/27 )/28 Tile{ AsIs: (/19 } # CmdSpliceToFreeList-Range/29 s.StartOffsetCond/21/30 </31 & Add/32 Tile{ HalfReuse: 1/20 AsIs: s.StartOffsetCond/21 } >/33 )/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdSentence]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FoldOpenELoops]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_CmdSpliceToFreeListm_Range]);
  refalrts::copy_stvar(vm, context[30], context[21]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::reinit_name(context[0], functions[efunc_gen_SentenceTail_S1A8]);
  refalrts::reinit_svar( context[4], context[22] );
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_gen_Map_Z4]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_number(context[20], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[19], context[34] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[11], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A7("SentenceTail$1=7", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A7);


static refalrts::FnResult func_gen_SentenceTail_S1A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & SentenceTail$1=6/4 (/7 e.CondResultCommands/5 )/8 (/11 e.CondPatternCommands/9 )/12 (/15 e.PatternVars$a/13 )/16 s.StartOffsetCond/17 s.EndOffsetCond-Res/18 s.NestedStackTop/19 e.NestedSentence/2 >/1
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
  // closed e.CondResultCommands as range 5
  // closed e.CondPatternCommands as range 9
  // closed e.PatternVars$a as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedSentence as range 2
  //DEBUG: e.CondResultCommands: 5
  //DEBUG: e.CondPatternCommands: 9
  //DEBUG: e.PatternVars$a: 13
  //DEBUG: s.StartOffsetCond: 17
  //DEBUG: s.EndOffsetCond-Res: 18
  //DEBUG: s.NestedStackTop: 19
  //DEBUG: e.NestedSentence: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=7/4 AsIs: (/7 AsIs: e.CondResultCommands/5 AsIs: )/8 AsIs: (/11 AsIs: e.CondPatternCommands/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatternVars$a/13 AsIs: )/16 } (/20 Tile{ AsIs: e.NestedSentence/2 } )/21 Tile{ AsIs: s.StartOffsetCond/17 } </22 & Max/23 Tile{ AsIs: s.EndOffsetCond-Res/18 AsIs: s.NestedStackTop/19 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Max]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A6("SentenceTail$1=6", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A6);


static refalrts::FnResult func_gen_SentenceTail_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & SentenceTail$1=3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SentenceTail$1=3/4 (/7 e.new1/5 )/8 s.new2/9 s.new3/10 (/13 e.new4/11 )/14 (/17 e.new5/15 )/18 (/21 e.new6/19 )/22 s.new7/23 (/26 e.new8/24 )/27 (/30 e.new9/28 )/31 e.new10/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
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
  // closed e.new4 as range 11
  // closed e.new5 as range 15
  // closed e.new6 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.new8 as range 24
  // closed e.new9 as range 28
  // closed e.new10 as range 2
  do {
    // </0 & SentenceTail$1=3/4 (/7 e.CondResultCommands/32 )/8 s.StartOffsetCond/9 s.EndOffsetCond-Res/10 (/13 e.ConditionsTail/34 )/14 (/17 e.ResultSentence/36 )/18 (/21 e./38 t./46 )/22 s.StartOffsetCondNext/23 (/26 e.PatternVars$a/40 )/27 (/30 e.MarkedPatternCond/42 )/31 e.CondPatternCommands/44 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[11];
    context[35] = context[12];
    context[36] = context[15];
    context[37] = context[16];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = context[24];
    context[41] = context[25];
    context[42] = context[28];
    context[43] = context[29];
    context[44] = context[2];
    context[45] = context[3];
    // closed e.CondResultCommands as range 32
    // closed e.ConditionsTail as range 34
    // closed e.ResultSentence as range 36
    // closed e.PatternVars$a as range 40
    // closed e.MarkedPatternCond as range 42
    // closed e.CondPatternCommands as range 44
    context[47] = refalrts::tvar_right( context[46], context[38], context[39] );
    if( ! context[47] )
      continue;
    // closed e. as range 38
    //DEBUG: s.StartOffsetCond: 9
    //DEBUG: s.EndOffsetCond-Res: 10
    //DEBUG: s.StartOffsetCondNext: 23
    //DEBUG: e.CondResultCommands: 32
    //DEBUG: e.ConditionsTail: 34
    //DEBUG: e.ResultSentence: 36
    //DEBUG: e.PatternVars$a: 40
    //DEBUG: e.MarkedPatternCond: 42
    //DEBUG: e.CondPatternCommands: 44
    //DEBUG: t.: 46
    //DEBUG: e.: 38

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=6/4 AsIs: (/7 AsIs: e.CondResultCommands/32 AsIs: )/8 } (/48 Tile{ AsIs: e.CondPatternCommands/44 } Tile{ AsIs: )/31 } (/49 e.PatternVars$a/40/50 Tile{ AsIs: )/14 } Tile{ AsIs: s.StartOffsetCond/9 AsIs: s.EndOffsetCond-Res/10 HalfReuse: </13 } Tile{ HalfReuse: & SentenceTail/22 AsIs: s.StartOffsetCondNext/23 AsIs: (/26 AsIs: e.PatternVars$a/40 AsIs: )/27 AsIs: (/30 } Tile{ AsIs: e./38 } Tile{ AsIs: e.MarkedPatternCond/42 } Tile{ AsIs: t./46 } )/52 Tile{ AsIs: e.ConditionsTail/34 } Tile{ AsIs: (/17 AsIs: e.ResultSentence/36 AsIs: )/18 HalfReuse: >/21 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::copy_evar(vm, context[50], context[51], context[40], context[41]);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A6]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[22], functions[efunc_SentenceTail]);
    refalrts::reinit_close_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[30], context[52] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[49], context[14] );
    refalrts::link_brackets( context[48], context[31] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[22], context[30] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentenceTail$1=3/4 (/7 e.CondResultCommands/5 )/8 s.StartOffsetCond/9 s.EndOffsetCond-Res/10 (/13 e.ConditionsTail/11 )/14 (/17 e.ResultSentence/15 )/18 (/21 e.MarkedPattern/19 )/22 s.StartOffsetCondNext/23 (/26 e.PatternVars$a/24 )/27 (/30 e.MarkedPatternCond/28 )/31 e.CondPatternCommands/2 >/1
  // closed e.CondResultCommands as range 5
  // closed e.ConditionsTail as range 11
  // closed e.ResultSentence as range 15
  // closed e.MarkedPattern as range 19
  // closed e.PatternVars$a as range 24
  // closed e.MarkedPatternCond as range 28
  // closed e.CondPatternCommands as range 2
  //DEBUG: s.StartOffsetCond: 9
  //DEBUG: s.EndOffsetCond-Res: 10
  //DEBUG: s.StartOffsetCondNext: 23
  //DEBUG: e.CondResultCommands: 5
  //DEBUG: e.ConditionsTail: 11
  //DEBUG: e.ResultSentence: 15
  //DEBUG: e.MarkedPattern: 19
  //DEBUG: e.PatternVars$a: 24
  //DEBUG: e.MarkedPatternCond: 28
  //DEBUG: e.CondPatternCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.StartOffsetCond/9 s.EndOffsetCond-Res/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=4*1/4 AsIs: (/7 AsIs: e.CondResultCommands/5 AsIs: )/8 } (/32 Tile{ AsIs: e.CondPatternCommands/2 } Tile{ AsIs: )/31 } Tile{ AsIs: (/26 AsIs: e.PatternVars$a/24 AsIs: )/27 HalfReuse: s.StartOffsetCond9 /30 } Tile{ HalfReuse: s.EndOffsetCond-Res10 /22 AsIs: s.StartOffsetCondNext/23 } Tile{ AsIs: (/13 AsIs: e.ConditionsTail/11 AsIs: )/14 AsIs: (/17 AsIs: e.ResultSentence/15 AsIs: )/18 AsIs: (/21 } Tile{ AsIs: e.MarkedPatternCond/28 } )/33 Tile{ AsIs: e.MarkedPattern/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A4D1]);
  refalrts::reinit_svar( context[30], context[9] );
  refalrts::reinit_svar( context[22], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[33] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[32], context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[26], context[30] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail$1=2/4 (/7 e.CondResultCommands/5 )/8 s.StartOffsetCond/13 s.EndOffsetCond-Res/14 (/17 e.ConditionsTail/15 )/18 (/21 e.ResultSentence/19 )/22 (/25 e.MarkedPattern/23 )/26 (/29 e.PatternVars/27 )/30 s.OffsetCond/31 e.CondSubstitutes/2 (/11 e.FirstCondPatternCommands/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.CondResultCommands as range 5
  // closed e.FirstCondPatternCommands as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  // closed e.ConditionsTail as range 15
  // closed e.ResultSentence as range 19
  // closed e.MarkedPattern as range 23
  // closed e.PatternVars as range 27
  if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CondSubstitutes as range 2
  //DEBUG: e.CondResultCommands: 5
  //DEBUG: e.FirstCondPatternCommands: 9
  //DEBUG: s.StartOffsetCond: 13
  //DEBUG: s.EndOffsetCond-Res: 14
  //DEBUG: e.ConditionsTail: 15
  //DEBUG: e.ResultSentence: 19
  //DEBUG: e.MarkedPattern: 23
  //DEBUG: e.PatternVars: 27
  //DEBUG: s.OffsetCond: 31
  //DEBUG: e.CondSubstitutes: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=3/4 AsIs: (/7 AsIs: e.CondResultCommands/5 AsIs: )/8 AsIs: s.StartOffsetCond/13 AsIs: s.EndOffsetCond-Res/14 AsIs: (/17 AsIs: e.ConditionsTail/15 AsIs: )/18 AsIs: (/21 AsIs: e.ResultSentence/19 AsIs: )/22 AsIs: (/25 AsIs: e.MarkedPattern/23 AsIs: )/26 HalfReuse: </29 } Tile{ HalfReuse: & GenSubst-Save/30 AsIs: s.OffsetCond/31 } Tile{ AsIs: e.CondSubstitutes/2 } (/32 Tile{ AsIs: e.PatternVars/27 } )/33 Tile{ AsIs: (/11 AsIs: e.FirstCondPatternCommands/9 AsIs: )/12 AsIs: >/1 } >/34 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A3]);
  refalrts::reinit_open_call(context[29]);
  refalrts::reinit_name(context[30], functions[efunc_GenSubstm_Save]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & SentenceTail$1=1/4 s.StartOffsetCond/5 (/8 e.ConditionsTail/6 )/9 (/12 e.ResultSentence/10 )/13 (/16 e.MarkedPattern/14 )/17 (/20 e.PatternVars/18 )/21 (/24 e.CondName/22 )/25 (/28 e.CondPattern/26 )/29 s.EndOffsetCond-Res/30 e.CondResultCommands/2 >/1
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
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.ConditionsTail as range 6
  // closed e.ResultSentence as range 10
  // closed e.MarkedPattern as range 14
  // closed e.PatternVars as range 18
  // closed e.CondName as range 22
  // closed e.CondPattern as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CondResultCommands as range 2
  //DEBUG: s.StartOffsetCond: 5
  //DEBUG: e.ConditionsTail: 6
  //DEBUG: e.ResultSentence: 10
  //DEBUG: e.MarkedPattern: 14
  //DEBUG: e.PatternVars: 18
  //DEBUG: e.CondName: 22
  //DEBUG: e.CondPattern: 26
  //DEBUG: s.EndOffsetCond-Res: 30
  //DEBUG: e.CondResultCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=2/4 } (/31 Tile{ AsIs: e.CondResultCommands/2 } )/32 Tile{ AsIs: s.StartOffsetCond/5 } Tile{ AsIs: s.EndOffsetCond-Res/30 } Tile{ AsIs: (/8 AsIs: e.ConditionsTail/6 AsIs: )/9 AsIs: (/12 AsIs: e.ResultSentence/10 AsIs: )/13 AsIs: (/16 AsIs: e.MarkedPattern/14 AsIs: )/17 AsIs: (/20 AsIs: e.PatternVars/18 AsIs: )/21 HalfReuse: </24 } & GenInitSubst=2/33 s.StartOffsetCond/5/34 (/35 Tile{ AsIs: e.CondName/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.CondPattern/26 AsIs: )/29 } s.StartOffsetCond/5/36 </37 & Add/38 s.StartOffsetCond/5/39 1/40 >/41 >/42 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_gen_GenInitSubst_A2]);
  refalrts::copy_stvar(vm, context[34], context[5]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::copy_stvar(vm, context[36], context[5]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[39], context[5]);
  refalrts::alloc_number(vm, context[40], 1UL);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_close_call(vm, context[42]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A2]);
  refalrts::reinit_open_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[35], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[42] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[8], context[24] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A1);


static refalrts::FnResult func_SentenceTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & SentenceTail/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SentenceTail/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 (/16 s.new4/18 e.new5/14 )/17 e.new6/2 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new2 as range 6
  // closed e.new3 as range 10
  // closed e.new6 as range 2
  if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 14
  do {
    // </0 & SentenceTail/4 s.StartOffsetCond/5 (/8 e.PatternVars/19 )/9 (/12 e.MarkedPattern/21 )/13 (/16 # Condition/18 (/29 e.CondName/27 )/30 (/33 e.CondResult/31 )/34 (/37 e.CondPattern/35 )/38 )/17 e.ConditionsTail/25 (/41 e.ResultSentence/39 )/42 >/1
    context[19] = context[6];
    context[20] = context[7];
    context[21] = context[10];
    context[22] = context[11];
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Condition], context[18] ) )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[23], context[24] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[23], context[24] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_right( context[39], context[40], context[25], context[26] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.PatternVars as range 19
    // closed e.MarkedPattern as range 21
    // closed e.CondName as range 27
    // closed e.CondResult as range 31
    // closed e.CondPattern as range 35
    // closed e.ConditionsTail as range 25
    // closed e.ResultSentence as range 39
    //DEBUG: s.StartOffsetCond: 5
    //DEBUG: e.PatternVars: 19
    //DEBUG: e.MarkedPattern: 21
    //DEBUG: e.CondName: 27
    //DEBUG: e.CondResult: 31
    //DEBUG: e.CondPattern: 35
    //DEBUG: e.ConditionsTail: 25
    //DEBUG: e.ResultSentence: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=1/4 AsIs: s.StartOffsetCond/5 AsIs: (/8 } Tile{ AsIs: e.ConditionsTail/25 } )/43 (/44 Tile{ AsIs: e.ResultSentence/39 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern/21 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.PatternVars/19 } )/45 Tile{ AsIs: (/41 } e.CondName/27/46 Tile{ AsIs: )/34 AsIs: (/37 AsIs: e.CondPattern/35 AsIs: )/38 HalfReuse: </17 } & GenResult-Condition/48 </49 & Add/50 2/51 s.StartOffsetCond/5/52 >/53 Tile{ AsIs: (/33 } e.PatternVars/19/54 )/56 (/57 # TkOpenCallCond/58 s.StartOffsetCond/5/59 )/60 (/61 Tile{ Reuse: # Symbol/18 HalfReuse: # Name/29 AsIs: e.CondName/27 AsIs: )/30 } Tile{ AsIs: e.CondResult/31 } (/62 # TkCloseCallCond/63 </64 & Add/65 1/66 s.StartOffsetCond/5/67 >/68 )/69 Tile{ HalfReuse: >/42 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::copy_evar(vm, context[46], context[47], context[27], context[28]);
    refalrts::alloc_name(vm, context[48], functions[efunc_GenResultm_Condition]);
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[51], 2UL);
    refalrts::copy_stvar(vm, context[52], context[5]);
    refalrts::alloc_close_call(vm, context[53]);
    refalrts::copy_evar(vm, context[54], context[55], context[19], context[20]);
    refalrts::alloc_close_bracket(vm, context[56]);
    refalrts::alloc_open_bracket(vm, context[57]);
    refalrts::alloc_ident(vm, context[58], identifiers[ident_TkOpenCallCond]);
    refalrts::copy_stvar(vm, context[59], context[5]);
    refalrts::alloc_close_bracket(vm, context[60]);
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::alloc_open_bracket(vm, context[62]);
    refalrts::alloc_ident(vm, context[63], identifiers[ident_TkCloseCallCond]);
    refalrts::alloc_open_call(vm, context[64]);
    refalrts::alloc_name(vm, context[65], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[66], 1UL);
    refalrts::copy_stvar(vm, context[67], context[5]);
    refalrts::alloc_close_call(vm, context[68]);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A1]);
    refalrts::reinit_open_call(context[17]);
    refalrts::update_ident(context[18], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[29], identifiers[ident_Name]);
    refalrts::reinit_close_call(context[42]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[62], context[69] );
    refalrts::push_stack( vm, context[68] );
    refalrts::push_stack( vm, context[64] );
    refalrts::link_brackets( context[61], context[30] );
    refalrts::link_brackets( context[57], context[60] );
    refalrts::link_brackets( context[33], context[56] );
    refalrts::push_stack( vm, context[53] );
    refalrts::push_stack( vm, context[49] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[41], context[34] );
    refalrts::link_brackets( context[16], context[45] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[44], context[9] );
    refalrts::link_brackets( context[8], context[43] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[42];
    res = refalrts::splice_evar( res, context[62], context[69] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[18], context[30] );
    res = refalrts::splice_evar( res, context[56], context[61] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[48], context[53] );
    res = refalrts::splice_evar( res, context[34], context[17] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentenceTail/4 s.ContextOffset/5 (/8 e.PatternVars/6 )/9 (/12 e.MarkedPattern/10 )/13 (/16 s.FnGenResult/18 e.Result/14 )/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternVars as range 6
  // closed e.MarkedPattern as range 10
  // closed e.Result as range 14
  //DEBUG: s.ContextOffset: 5
  //DEBUG: s.FnGenResult: 18
  //DEBUG: e.PatternVars: 6
  //DEBUG: e.MarkedPattern: 10
  //DEBUG: e.Result: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/16 s.FnGenResult/18 {REMOVED TILE} )/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenResult18 /4 AsIs: s.ContextOffset/5 AsIs: (/8 AsIs: e.PatternVars/6 AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern/10 AsIs: )/13 } Tile{ AsIs: e.Result/14 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_svar( context[4], context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", COOKIE1_, COOKIE2_, func_SentenceTail);


static refalrts::FnResult func_FoldOpenELoops(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FoldOpenELoops/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & FoldOpenELoops/4 e.Commands-B/7 (/13 # CmdOpenedE/15 # AlgLeft/16 s.BracketNum/17 s.VarNumber/18 )/14 e.Commands-E/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_CmdOpenedE], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_AlgLeft], context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.Commands-E as range 9
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B: 7
      //DEBUG: e.Commands-E: 9
      //DEBUG: s.BracketNum: 17
      //DEBUG: s.VarNumber: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands-B/7 } Tile{ AsIs: (/13 Reuse: # CmdOpenELoop/15 AsIs: # AlgLeft/16 AsIs: s.BracketNum/17 AsIs: s.VarNumber/18 HalfReuse: </14 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands-E/9 } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_CmdOpenELoop]);
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[13], context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldOpenELoops/4 e.Commands/2 >/1
  // closed e.Commands as range 2
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldOpenELoops/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldOpenELoops("FoldOpenELoops", 0U, 0U, func_FoldOpenELoops);


static refalrts::FnResult func_PutVariableDebugTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & PutVariableDebugTable/4 e.PatternVars/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.PatternVars as range 2
  //DEBUG: e.PatternVars: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.PatternVars/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutVariableDebugTable("PutVariableDebugTable", 0U, 0U, func_PutVariableDebugTable);


static refalrts::FnResult func_CollectStrings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & CollectStrings/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & CollectStrings/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & CollectStrings/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
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
        // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.new6/25 )/8 (/21 # Symbol/23 # Char/24 s.new7/26 )/22 e.new8/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        context[18] = refalrts::ident_left( identifiers[ident_Char], context[14], context[15] );
        if( ! context[18] )
          continue;
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_Symbol], context[19], context[20] );
        if( ! context[23] )
          continue;
        context[24] = refalrts::ident_left( identifiers[ident_Char], context[19], context[20] );
        if( ! context[24] )
          continue;
        // closed e.new8 as range 16
        if( ! refalrts::svar_left( context[25], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        do {
          // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.Value1/25 )/8 (/21 # Symbol/23 # Char/24 s.Value2/26 )/22 (/31 # Symbol/33 # Char/34 s.Value/35 )/32 e./27 >/1
          context[27] = context[16];
          context[28] = context[17];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          context[33] = refalrts::ident_left( identifiers[ident_Symbol], context[29], context[30] );
          if( ! context[33] )
            continue;
          context[34] = refalrts::ident_left( identifiers[ident_Char], context[29], context[30] );
          if( ! context[34] )
            continue;
          // closed e. as range 27
          if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: s.Value1: 25
          //DEBUG: s.Value2: 26
          //DEBUG: e.: 27
          //DEBUG: s.Value: 35

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} # Char/24 s.Value2/26 )/22 (/31 # Symbol/33 {REMOVED TILE} s.Value/35 )/32 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 HalfReuse: & BuildString@2/13 HalfReuse: (/18 AsIs: s.Value1/25 AsIs: )/8 HalfReuse: s.Value226 /21 HalfReuse: s.Value35 /23 } Tile{ AsIs: e./27 } Tile{ HalfReuse: >/34 } Tile{ AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[13], functions[efunc_gen_BuildString_Z2]);
          refalrts::reinit_open_bracket(context[18]);
          refalrts::reinit_svar( context[21], context[26] );
          refalrts::reinit_svar( context[23], context[35] );
          refalrts::reinit_close_call(context[34]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[7] );
          refalrts::link_brackets( context[18], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::splice_to_freelist_open( vm, context[23], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.Value1/25 )/8 (/21 # Symbol/23 # Char/24 s.Value2/26 )/22 e.Tail/27 >/1
        context[27] = context[16];
        context[28] = context[17];
        // closed e.Tail as range 27
        //DEBUG: s.Value1: 25
        //DEBUG: s.Value2: 26
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # Symbol/13 # Char/18 s.Value1/25 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/21 Reuse: # TkString/23 HalfReuse: s.Value125 /24 AsIs: s.Value2/26 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[23], identifiers[ident_TkString]);
        refalrts::reinit_svar( context[24], context[25] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CollectStrings/4 (/7 # Brackets/13 e.InBrackets/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.InBrackets as range 14
        // closed e.Tail as range 16
        //DEBUG: e.InBrackets: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
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

      do {
        // </0 & CollectStrings/4 (/7 # CallBrackets/13 e.InBrackets/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.InBrackets as range 14
        // closed e.Tail as range 16
        //DEBUG: e.InBrackets: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
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

      // </0 & CollectStrings/4 (/7 # ADT-Brackets/13 e.InBrackets/14 )/8 e.Tail/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.InBrackets as range 14
      // closed e.Tail as range 16
      //DEBUG: e.InBrackets: 14
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
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

    // </0 & CollectStrings/4 t.OtherTerm/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.OtherTerm: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm/7 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & CollectStrings/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CollectStrings/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectStrings("CollectStrings", 0U, 0U, func_CollectStrings);


static refalrts::FnResult func_BuildString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & BuildString/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & BuildString/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & BuildString/4 (/7 e.Chars/9 )/8 (/15 # Symbol/17 # Char/18 s.Value/19 )/16 e.Tail/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left( identifiers[ident_Symbol], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.Chars as range 9
    // closed e.Tail as range 11
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars: 9
    //DEBUG: e.Tail: 11
    //DEBUG: s.Value: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/17 # Char/18 s.Value/19 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars/9 HalfReuse: s.Value19 /8 HalfReuse: )/15 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[19] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BuildString/4 (/7 e.Chars/5 )/8 e.Tail/2 >/1
  // closed e.Chars as range 5
  // closed e.Tail as range 2
  //DEBUG: e.Chars: 5
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BuildString/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars/5 AsIs: )/8 } Tile{ AsIs: e.Tail/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BuildString("BuildString", COOKIE1_, COOKIE2_, func_BuildString);


static refalrts::FnResult func_gen_MakeSavers_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeSavers=1/4 (/7 s.ContextOffset/9 e.CmdSaves/5 )/8 e.SubstitutesAndJunks$a/2 >/1
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
  // closed e.SubstitutesAndJunks$a as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CmdSaves as range 5
  //DEBUG: e.SubstitutesAndJunks$a: 2
  //DEBUG: s.ContextOffset: 9
  //DEBUG: e.CmdSaves: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 s.ContextOffset/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset9 /0 HalfReuse: (/4 } Tile{ AsIs: e.CmdSaves/5 } Tile{ AsIs: )/8 } Tile{ AsIs: e.SubstitutesAndJunks$a/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSavers_A1("MakeSavers=1", COOKIE1_, COOKIE2_, func_gen_MakeSavers_A1);


static refalrts::FnResult func_MakeSavers(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & MakeSavers/4 s.OriginContextOffset/5 e.SubstitutesAndJunks/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubstitutesAndJunks as range 2
  //DEBUG: s.OriginContextOffset: 5
  //DEBUG: e.SubstitutesAndJunks: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeSavers=1/4 } </6 & DoMapAccum@1/7 (/8 Tile{ AsIs: s.OriginContextOffset/5 } )/9 (/10 )/11 Tile{ AsIs: e.SubstitutesAndJunks/2 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeSavers_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeSavers("MakeSavers", 0U, 0U, func_MakeSavers);


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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@1/4 t.Next/7 e.Tail/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail as range 5
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscapeChar/4 AsIs: t.Next/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_EscapeChar]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & EscapeChar@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_EscapeChar_Z0]);
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
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
      // </0 & Map@2/4 s.new3/7 e.new4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_term( context[7], context[7] ) )
        continue;
      // closed e.new4 as range 9
      do {
        // </0 & Map@2/4 '\n'/7 e.Tail/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\n', context[7] ) )
          continue;
        // closed e.Tail as range 11
        //DEBUG: e.Tail: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'n'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 'n');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 '\r'/7 e.Tail/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\r', context[7] ) )
          continue;
        // closed e.Tail as range 11
        //DEBUG: e.Tail: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'r'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 ' '/7 e.Tail/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( ' ', context[7] ) )
          continue;
        // closed e.Tail as range 11
        //DEBUG: e.Tail: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '_'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], '_');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 '\t'/7 e.Tail/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\t', context[7] ) )
          continue;
        // closed e.Tail as range 11
        //DEBUG: e.Tail: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 't'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 't');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 '$'/7 e.Tail/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '$', context[7] ) )
          continue;
        // closed e.Tail as range 11
        //DEBUG: e.Tail: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '$'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], '$');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_elem( res, context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 s.Other/7 e.Tail/11 >/1
      context[11] = context[9];
      context[12] = context[10];
      // closed e.Tail as range 11
      //DEBUG: s.Other: 7
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Other/7 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_elem( res, context[7] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SafeDisplayName\1*6/4 AsIs: t.Next/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_SafeDisplayName_L1D6]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & SafeDisplayName\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SafeDisplayName_L1Z0]);
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
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
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
      // </0 & Map@3/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
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
        // </0 & Map@3/4 (/7 s.new6/13 e.new7/14 s.new8/18 )/8 e.new9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new9 as range 16
        if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
          continue;
        // closed e.new7 as range 14
        do {
          // </0 & Map@3/4 (/7 s.new10/13 s.new11/18 )/8 e.new12/19 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::empty_seq( context[14], context[15] ) )
            continue;
          // closed e.new12 as range 19
          do {
            // </0 & Map@3/4 (/7 # TkOpenBracket/13 s.new13/18 )/8 e.new14/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[13] ) )
              continue;
            // closed e.new14 as range 21
            do {
              // </0 & Map@3/4 (/7 # TkOpenBracket/13 # NoOffset/18 )/8 e.Tail/23 >/1
              context[23] = context[21];
              context[24] = context[22];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 23
              //DEBUG: e.Tail: 23

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '('/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[13], '(');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[7];
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkOpenBracket/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            // closed e.Tail as range 23
            //DEBUG: s.ContextOffset: 18
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/25 Tile{ AsIs: s.ContextOffset/18 } >/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '(');
            refalrts::reinit_char(context[7], '/');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_elem( res, context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/7 # TkCloseBracket/13 s.new13/18 )/8 e.new14/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[13] ) )
              continue;
            // closed e.new14 as range 21
            do {
              // </0 & Map@3/4 (/7 # TkCloseBracket/13 # NoOffset/18 )/8 e.Tail/23 >/1
              context[23] = context[21];
              context[24] = context[22];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 23
              //DEBUG: e.Tail: 23

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: ')'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[13], ')');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[7];
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkCloseBracket/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            // closed e.Tail as range 23
            //DEBUG: s.ContextOffset: 18
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/25 Tile{ AsIs: s.ContextOffset/18 } >/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], ')');
            refalrts::reinit_char(context[7], '/');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_elem( res, context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/7 # TkOpenCall/13 s.new13/18 )/8 e.new14/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[13] ) )
              continue;
            // closed e.new14 as range 21
            do {
              // </0 & Map@3/4 (/7 # TkOpenCall/13 # NoOffset/18 )/8 e.Tail/23 >/1
              context[23] = context[21];
              context[24] = context[22];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 23
              //DEBUG: e.Tail: 23

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '<'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[13], '<');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[7];
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkOpenCall/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            // closed e.Tail as range 23
            //DEBUG: s.ContextOffset: 18
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/25 Tile{ AsIs: s.ContextOffset/18 } >/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '<');
            refalrts::reinit_char(context[7], '/');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_elem( res, context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkCloseCall/13 s.new13/18 )/8 e.new14/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[13] ) )
            continue;
          // closed e.new14 as range 21
          do {
            // </0 & Map@3/4 (/7 # TkCloseCall/13 # NoOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.Tail as range 23
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '>'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[13], '>');
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[7];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkCloseCall/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
          context[23] = context[21];
          context[24] = context[22];
          // closed e.Tail as range 23
          //DEBUG: s.ContextOffset: 18
          //DEBUG: e.Tail: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/25 Tile{ AsIs: s.ContextOffset/18 } >/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '>');
          refalrts::reinit_char(context[7], '/');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_elem( res, context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/7 # TkOpenADT/13 e.new11/19 s.new10/18 )/8 e.new12/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[13] ) )
            continue;
          // closed e.new11 as range 19
          // closed e.new12 as range 21
          do {
            // </0 & Map@3/4 (/7 # TkOpenADT/13 s.new14/27 e.new15/23 s.new13/18 )/8 e.new16/25 >/1
            context[23] = context[19];
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            // closed e.new16 as range 25
            if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
              continue;
            // closed e.new15 as range 23
            do {
              // </0 & Map@3/4 (/7 # TkOpenADT/13 # NoOffset/27 e.new18/28 s.new17/18 )/8 e.new19/30 >/1
              context[28] = context[23];
              context[29] = context[24];
              context[30] = context[25];
              context[31] = context[26];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[27] ) )
                continue;
              // closed e.new18 as range 28
              // closed e.new19 as range 30
              do {
                // </0 & Map@3/4 (/7 # TkOpenADT/13 # NoOffset/27 e.2/32 # NoOffset/18 )/8 e.Tail/34 >/1
                context[32] = context[28];
                context[33] = context[29];
                context[34] = context[30];
                context[35] = context[31];
                if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                  continue;
                // closed e.2 as range 32
                // closed e.Tail as range 34
                //DEBUG: e.2: 32
                //DEBUG: e.Tail: 34

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </7 HalfReuse: & DisplayName/13 } Tile{ AsIs: e.2/32 } Tile{ HalfReuse: >/27 } Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/34 AsIs: >/1 ]] }
                refalrts::reinit_char(context[0], ' ');
                refalrts::reinit_char(context[4], '[');
                refalrts::reinit_open_call(context[7]);
                refalrts::reinit_name(context[13], functions[efunc_DisplayName]);
                refalrts::reinit_close_call(context[27]);
                refalrts::reinit_open_call(context[18]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[18] );
                refalrts::push_stack( vm, context[27] );
                refalrts::push_stack( vm, context[7] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[18];
                res = refalrts::splice_elem( res, context[27] );
                res = refalrts::splice_evar( res, context[32], context[33] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@3/4 (/7 # TkOpenADT/13 # NoOffset/27 e.2/32 s.NameOffset/18 )/8 e.Tail/34 >/1
              context[32] = context[28];
              context[33] = context[29];
              context[34] = context[30];
              context[35] = context[31];
              // closed e.2 as range 32
              // closed e.Tail as range 34
              //DEBUG: s.NameOffset: 18
              //DEBUG: e.2: 32
              //DEBUG: e.Tail: 34

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NameOffset/18 {REMOVED TILE}
              //RESULT: Tile{ [[ }" ["/36 </38 & DisplayName/39 Tile{ AsIs: e.2/32 } >/40 '/'/41 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.NameOffset18 /7 HalfReuse: >/13 HalfReuse: </27 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/34 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[36], context[37], " [", 2);
              refalrts::alloc_open_call(vm, context[38]);
              refalrts::alloc_name(vm, context[39], functions[efunc_DisplayName]);
              refalrts::alloc_close_call(vm, context[40]);
              refalrts::alloc_char(vm, context[41], '/');
              refalrts::update_name(context[4], functions[efunc_Symb]);
              refalrts::reinit_svar( context[7], context[18] );
              refalrts::reinit_close_call(context[13]);
              refalrts::reinit_open_call(context[27]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[27] );
              refalrts::push_stack( vm, context[13] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[40] );
              refalrts::push_stack( vm, context[38] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[8];
              res = refalrts::splice_evar( res, context[0], context[27] );
              res = refalrts::splice_evar( res, context[40], context[41] );
              res = refalrts::splice_evar( res, context[32], context[33] );
              res = refalrts::splice_evar( res, context[36], context[39] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@3/4 (/7 # TkOpenADT/13 s.ContextOffset/27 e.2/28 # NoOffset/18 )/8 e.Tail/30 >/1
              context[28] = context[23];
              context[29] = context[24];
              context[30] = context[25];
              context[31] = context[26];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.2 as range 28
              // closed e.Tail as range 30
              //DEBUG: s.ContextOffset: 27
              //DEBUG: e.2: 28
              //DEBUG: e.Tail: 30

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } ' '/32 Tile{ HalfReuse: '['/0 HalfReuse: '/'/4 HalfReuse: </7 HalfReuse: & Symb/13 AsIs: s.ContextOffset/27 } >/33 </34 & DisplayName/35 Tile{ AsIs: e.2/28 } >/36 Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
              refalrts::alloc_char(vm, context[32], ' ');
              refalrts::alloc_close_call(vm, context[33]);
              refalrts::alloc_open_call(vm, context[34]);
              refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
              refalrts::alloc_close_call(vm, context[36]);
              refalrts::reinit_char(context[0], '[');
              refalrts::reinit_char(context[4], '/');
              refalrts::reinit_open_call(context[7]);
              refalrts::reinit_name(context[13], functions[efunc_Symb]);
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::push_stack( vm, context[36] );
              refalrts::push_stack( vm, context[34] );
              refalrts::push_stack( vm, context[33] );
              refalrts::push_stack( vm, context[7] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[18];
              res = refalrts::splice_elem( res, context[36] );
              res = refalrts::splice_evar( res, context[28], context[29] );
              res = refalrts::splice_evar( res, context[33], context[35] );
              res = refalrts::splice_evar( res, context[0], context[27] );
              res = refalrts::splice_elem( res, context[32] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkOpenADT/13 s.ContextOffset/27 e.2/28 s.NameOffset/18 )/8 e.Tail/30 >/1
            context[28] = context[23];
            context[29] = context[24];
            context[30] = context[25];
            context[31] = context[26];
            // closed e.2 as range 28
            // closed e.Tail as range 30
            //DEBUG: s.ContextOffset: 27
            //DEBUG: s.NameOffset: 18
            //DEBUG: e.2: 28
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/32 Tile{ HalfReuse: '['/0 HalfReuse: '/'/4 HalfReuse: </7 HalfReuse: & Symb/13 AsIs: s.ContextOffset/27 } >/33 </34 & DisplayName/35 Tile{ AsIs: e.2/28 } >/36 '/'/37 </38 & Symb/39 Tile{ AsIs: s.NameOffset/18 } >/40 </41 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[32], ' ');
            refalrts::alloc_close_call(vm, context[33]);
            refalrts::alloc_open_call(vm, context[34]);
            refalrts::alloc_name(vm, context[35], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[36]);
            refalrts::alloc_char(vm, context[37], '/');
            refalrts::alloc_open_call(vm, context[38]);
            refalrts::alloc_name(vm, context[39], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[40]);
            refalrts::alloc_open_call(vm, context[41]);
            refalrts::reinit_char(context[0], '[');
            refalrts::reinit_char(context[4], '/');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Symb]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[41] );
            refalrts::push_stack( vm, context[40] );
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_evar( res, context[36], context[39] );
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[33], context[35] );
            res = refalrts::splice_evar( res, context[0], context[27] );
            res = refalrts::splice_elem( res, context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkOpenADT/13 s.new13/18 )/8 e.new14/23 >/1
          context[23] = context[21];
          context[24] = context[22];
          if( ! refalrts::empty_seq( context[19], context[20] ) )
            continue;
          // closed e.new14 as range 23
          do {
            // </0 & Map@3/4 (/7 # TkOpenADT/13 # NoOffset/18 )/8 e.Tail/25 >/1
            context[25] = context[23];
            context[26] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.Tail as range 25
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '['/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[13], '[');
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[7];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkOpenADT/13 s.ContextOffset/18 )/8 e.Tail/25 >/1
          context[25] = context[23];
          context[26] = context[24];
          // closed e.Tail as range 25
          //DEBUG: s.ContextOffset: 18
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/27 Tile{ AsIs: s.ContextOffset/18 } >/28 </29 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[27], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '[');
          refalrts::reinit_char(context[7], '/');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_elem( res, context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/7 s.new10/13 s.new11/18 )/8 e.new12/19 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::empty_seq( context[14], context[15] ) )
            continue;
          // closed e.new12 as range 19
          do {
            // </0 & Map@3/4 (/7 # TkCloseADT/13 s.new13/18 )/8 e.new14/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[13] ) )
              continue;
            // closed e.new14 as range 21
            do {
              // </0 & Map@3/4 (/7 # TkCloseADT/13 # NoOffset/18 )/8 e.Tail/23 >/1
              context[23] = context[21];
              context[24] = context[22];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 23
              //DEBUG: e.Tail: 23

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: ']'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[13], ']');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[7];
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkCloseADT/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            // closed e.Tail as range 23
            //DEBUG: s.ContextOffset: 18
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: '/'/7 HalfReuse: </13 } & Symb/25 Tile{ AsIs: s.ContextOffset/18 } >/26 </27 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[26]);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], ']');
            refalrts::reinit_char(context[7], '/');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_elem( res, context[25] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/7 # TkClosureHead/13 s.new13/18 )/8 e.new14/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[13] ) )
              continue;
            // closed e.new14 as range 21
            do {
              // </0 & Map@3/4 (/7 # TkClosureHead/13 # NoOffset/18 )/8 e.Tail/23 >/1
              context[23] = context[21];
              context[24] = context[22];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 23
              //DEBUG: e.Tail: 23

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '*'/7 HalfReuse: ']'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_char(context[4], '[');
              refalrts::reinit_char(context[7], '*');
              refalrts::reinit_char(context[13], ']');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # TkClosureHead/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            // closed e.Tail as range 23
            //DEBUG: s.ContextOffset: 18
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '*'/7 HalfReuse: ']'/13 } '/'/25 </26 & Symb/27 Tile{ AsIs: s.ContextOffset/18 } >/28 </29 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[25], '/');
            refalrts::alloc_open_call(vm, context[26]);
            refalrts::alloc_name(vm, context[27], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '[');
            refalrts::reinit_char(context[7], '*');
            refalrts::reinit_char(context[13], ']');
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[28] );
            refalrts::push_stack( vm, context[26] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_evar( res, context[25], context[27] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkUnwrappedClosure/13 s.new13/18 )/8 e.new14/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[13] ) )
            continue;
          // closed e.new14 as range 21
          do {
            // </0 & Map@3/4 (/7 # TkUnwrappedClosure/13 # NoOffset/18 )/8 e.Tail/23 >/1
            context[23] = context[21];
            context[24] = context[22];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.Tail as range 23
            //DEBUG: e.Tail: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: '*'/7 HalfReuse: '}'/13 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '{');
            refalrts::reinit_char(context[7], '*');
            refalrts::reinit_char(context[13], '}');
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkUnwrappedClosure/13 s.ContextOffset/18 )/8 e.Tail/23 >/1
          context[23] = context[21];
          context[24] = context[22];
          // closed e.Tail as range 23
          //DEBUG: s.ContextOffset: 18
          //DEBUG: e.Tail: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: '*'/7 HalfReuse: '}'/13 } '/'/25 </26 & Symb/27 Tile{ AsIs: s.ContextOffset/18 } >/28 </29 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/23 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[25], '/');
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[27], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '{');
          refalrts::reinit_char(context[7], '*');
          refalrts::reinit_char(context[13], '}');
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[25], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 # Symbol/13 # Char/23 s.new11/24 s.new10/18 )/8 e.new12/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        context[23] = refalrts::ident_left( identifiers[ident_Char], context[19], context[20] );
        if( ! context[23] )
          continue;
        // closed e.new12 as range 21
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        do {
          // </0 & Map@3/4 (/7 # Symbol/13 # Char/23 s.Char/24 # NoOffset/18 )/8 e.Tail/25 >/1
          context[25] = context[21];
          context[26] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
            continue;
          // closed e.Tail as range 25
          //DEBUG: s.Char: 24
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Char/24 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/13 HalfReuse: s.Char24 /23 } >/27 '\''/28 Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::alloc_char(vm, context[28], '\'');
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '\'');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[13], functions[efunc_EscapeChar]);
          refalrts::reinit_svar( context[23], context[24] );
          refalrts::reinit_open_call(context[18]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::splice_to_freelist_open( vm, context[23], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 # Symbol/13 # Char/23 s.Char/24 s.Offset/18 )/8 e.Tail/25 >/1
        context[25] = context[21];
        context[26] = context[22];
        // closed e.Tail as range 25
        //DEBUG: s.Char: 24
        //DEBUG: s.Offset: 18
        //DEBUG: e.Tail: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" \'"/27 Tile{ AsIs: </0 Reuse: & EscapeChar/4 HalfReuse: s.Char24 /7 HalfReuse: >/13 HalfReuse: '\''/23 } '/'/29 </30 & Symb/31 Tile{ AsIs: s.Offset/18 } >/32 </33 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[27], context[28], " \'", 2);
        refalrts::alloc_char(vm, context[29], '/');
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_EscapeChar]);
        refalrts::reinit_svar( context[7], context[24] );
        refalrts::reinit_close_call(context[13]);
        refalrts::reinit_char(context[23], '\'');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[29], context[31] );
        res = refalrts::splice_evar( res, context[0], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 # TkChars/13 e.0/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkChars], context[13] ) )
          continue;
        // closed e.0 as range 14
        // closed e.Tail as range 16
        //DEBUG: e.0: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 } Tile{ AsIs: e.0/14 } Tile{ HalfReuse: '\''/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_char(context[7], '\'');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[7], context[13] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 s.new6/13 e.new7/14 s.new8/18 )/8 e.new9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new9 as range 16
        if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
          continue;
        // closed e.new7 as range 14
        do {
          // </0 & Map@3/4 (/7 # Symbol/13 s.new11/23 e.new12/19 s.new10/18 )/8 e.new13/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
            continue;
          // closed e.new13 as range 21
          if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
            continue;
          // closed e.new12 as range 19
          do {
            // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 s.new15/28 s.new14/18 )/8 e.new16/26 >/1
            context[24] = context[19];
            context[25] = context[20];
            context[26] = context[21];
            context[27] = context[22];
            if( ! refalrts::ident_term( identifiers[ident_Number], context[23] ) )
              continue;
            // closed e.new16 as range 26
            if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
              continue;
            if( ! refalrts::empty_seq( context[24], context[25] ) )
              continue;
            do {
              // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie1/28 s.new17/18 )/8 e.new18/29 >/1
              context[29] = context[26];
              context[30] = context[27];
              if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[28] ) )
                continue;
              // closed e.new18 as range 29
              do {
                // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie1/28 # NoOffset/18 )/8 e.Tail/31 >/1
                context[31] = context[29];
                context[32] = context[30];
                if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                  continue;
                // closed e.Tail as range 31
                //DEBUG: e.Tail: 31

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ }" <Co"/33 Tile{ HalfReuse: 'o'/0 HalfReuse: 'k'/4 HalfReuse: 'i'/7 HalfReuse: 'e'/13 HalfReuse: '1'/23 HalfReuse: '>'/28 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[33], context[34], " <Co", 4);
                refalrts::reinit_char(context[0], 'o');
                refalrts::reinit_char(context[4], 'k');
                refalrts::reinit_char(context[7], 'i');
                refalrts::reinit_char(context[13], 'e');
                refalrts::reinit_char(context[23], '1');
                refalrts::reinit_char(context[28], '>');
                refalrts::reinit_open_call(context[18]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[18] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[0];
                res = refalrts::splice_evar( res, context[33], context[34] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie1/28 s.Offset/18 )/8 e.Tail/31 >/1
              context[31] = context[29];
              context[32] = context[30];
              // closed e.Tail as range 31
              //DEBUG: s.Offset: 18
              //DEBUG: e.Tail: 31

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Cooki"/33 Tile{ HalfReuse: 'e'/0 HalfReuse: '1'/4 HalfReuse: '>'/7 HalfReuse: '/'/13 HalfReuse: </23 HalfReuse: & Symb/28 AsIs: s.Offset/18 HalfReuse: >/8 } </35 & Map@3/36 Tile{ AsIs: e.Tail/31 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[33], context[34], " <Cooki", 7);
              refalrts::alloc_open_call(vm, context[35]);
              refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z3]);
              refalrts::reinit_char(context[0], 'e');
              refalrts::reinit_char(context[4], '1');
              refalrts::reinit_char(context[7], '>');
              refalrts::reinit_char(context[13], '/');
              refalrts::reinit_open_call(context[23]);
              refalrts::reinit_name(context[28], functions[efunc_Symb]);
              refalrts::reinit_close_call(context[8]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[35] );
              refalrts::push_stack( vm, context[8] );
              refalrts::push_stack( vm, context[23] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[31], context[32] );
              res = refalrts::splice_evar( res, context[35], context[36] );
              res = refalrts::splice_evar( res, context[0], context[8] );
              res = refalrts::splice_evar( res, context[33], context[34] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie2/28 s.new17/18 )/8 e.new18/29 >/1
              context[29] = context[26];
              context[30] = context[27];
              if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[28] ) )
                continue;
              // closed e.new18 as range 29
              do {
                // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie2/28 # NoOffset/18 )/8 e.Tail/31 >/1
                context[31] = context[29];
                context[32] = context[30];
                if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                  continue;
                // closed e.Tail as range 31
                //DEBUG: e.Tail: 31

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ }" <Co"/33 Tile{ HalfReuse: 'o'/0 HalfReuse: 'k'/4 HalfReuse: 'i'/7 HalfReuse: 'e'/13 HalfReuse: '2'/23 HalfReuse: '>'/28 HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[33], context[34], " <Co", 4);
                refalrts::reinit_char(context[0], 'o');
                refalrts::reinit_char(context[4], 'k');
                refalrts::reinit_char(context[7], 'i');
                refalrts::reinit_char(context[13], 'e');
                refalrts::reinit_char(context[23], '2');
                refalrts::reinit_char(context[28], '>');
                refalrts::reinit_open_call(context[18]);
                refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[18] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[0];
                res = refalrts::splice_evar( res, context[33], context[34] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 # Cookie2/28 s.Offset/18 )/8 e.Tail/31 >/1
              context[31] = context[29];
              context[32] = context[30];
              // closed e.Tail as range 31
              //DEBUG: s.Offset: 18
              //DEBUG: e.Tail: 31

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Cooki"/33 Tile{ HalfReuse: 'e'/0 HalfReuse: '2'/4 HalfReuse: '>'/7 HalfReuse: '/'/13 HalfReuse: </23 HalfReuse: & Symb/28 AsIs: s.Offset/18 HalfReuse: >/8 } </35 & Map@3/36 Tile{ AsIs: e.Tail/31 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[33], context[34], " <Cooki", 7);
              refalrts::alloc_open_call(vm, context[35]);
              refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z3]);
              refalrts::reinit_char(context[0], 'e');
              refalrts::reinit_char(context[4], '2');
              refalrts::reinit_char(context[7], '>');
              refalrts::reinit_char(context[13], '/');
              refalrts::reinit_open_call(context[23]);
              refalrts::reinit_name(context[28], functions[efunc_Symb]);
              refalrts::reinit_close_call(context[8]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[35] );
              refalrts::push_stack( vm, context[8] );
              refalrts::push_stack( vm, context[23] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[31], context[32] );
              res = refalrts::splice_evar( res, context[35], context[36] );
              res = refalrts::splice_evar( res, context[0], context[8] );
              res = refalrts::splice_evar( res, context[33], context[34] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 s.Number/28 # NoOffset/18 )/8 e.Tail/29 >/1
              context[29] = context[26];
              context[30] = context[27];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.Tail as range 29
              //DEBUG: s.Number: 28
              //DEBUG: e.Tail: 29

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} s.Number/28 {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & Symb/7 HalfReuse: s.Number28 /13 HalfReuse: >/23 } Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/29 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_open_call(context[4]);
              refalrts::reinit_name(context[7], functions[efunc_Symb]);
              refalrts::reinit_svar( context[13], context[28] );
              refalrts::reinit_close_call(context[23]);
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::push_stack( vm, context[23] );
              refalrts::push_stack( vm, context[4] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[18];
              refalrts::splice_to_freelist_open( vm, context[23], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # Symbol/13 # Number/23 s.Number/28 s.Offset/18 )/8 e.Tail/29 >/1
            context[29] = context[26];
            context[30] = context[27];
            // closed e.Tail as range 29
            //DEBUG: s.Number: 28
            //DEBUG: s.Offset: 18
            //DEBUG: e.Tail: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Number/28 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/31 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Number28 /7 HalfReuse: >/13 HalfReuse: '/'/23 } </32 & Symb/33 Tile{ AsIs: s.Offset/18 } >/34 </35 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/29 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[31], ' ');
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[34]);
            refalrts::alloc_open_call(vm, context[35]);
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[7], context[28] );
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_char(context[23], '/');
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[34], context[35] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[0], context[23] );
            res = refalrts::splice_elem( res, context[31] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # Symbol/13 # Name/23 e.new15/24 s.new14/18 )/8 e.new16/26 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          context[27] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_Name], context[23] ) )
            continue;
          // closed e.new15 as range 24
          // closed e.new16 as range 26
          do {
            // </0 & Map@3/4 (/7 # Symbol/13 # Name/23 e.2/28 # NoOffset/18 )/8 e.Tail/30 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            context[31] = context[27];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.2 as range 28
            // closed e.Tail as range 30
            //DEBUG: e.2: 28
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & DisplayName/23 AsIs: e.2/28 HalfReuse: >/18 HalfReuse: </8 } & Map@3/32 Tile{ AsIs: e.Tail/30 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z3]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '&');
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[23], functions[efunc_DisplayName]);
            refalrts::reinit_close_call(context[18]);
            refalrts::reinit_open_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[18] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_elem( res, context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # Symbol/13 # Name/23 e.2/28 s.Offset/18 )/8 e.Tail/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          // closed e.2 as range 28
          // closed e.Tail as range 30
          //DEBUG: s.Offset: 18
          //DEBUG: e.2: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & DisplayName/23 } Tile{ AsIs: e.2/28 } >/32 '/'/33 </34 & Symb/35 Tile{ AsIs: s.Offset/18 } >/36 </37 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::alloc_char(vm, context[33], '/');
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '&');
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[23], functions[efunc_DisplayName]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[32], context[35] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/7 # TkString/13 e.new11/19 s.new10/18 )/8 e.new12/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkString], context[13] ) )
            continue;
          // closed e.new11 as range 19
          // closed e.new12 as range 21
          do {
            // </0 & Map@3/4 (/7 # TkString/13 e.1/23 # NoOffset/18 )/8 e.Tail/25 >/1
            context[23] = context[19];
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.1 as range 23
            // closed e.Tail as range 25
            //DEBUG: e.1: 23
            //DEBUG: e.Tail: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map@1/7 } Tile{ AsIs: e.1/23 } Tile{ HalfReuse: >/13 } '\"'/27 Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[27], '\"');
            refalrts::reinit_char(context[0], '\"');
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z1]);
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[18];
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_elem( res, context[13] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # TkString/13 e.1/23 s.Offset/18 )/8 e.Tail/25 >/1
          context[23] = context[19];
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          // closed e.1 as range 23
          // closed e.Tail as range 25
          //DEBUG: s.Offset: 18
          //DEBUG: e.1: 23
          //DEBUG: e.Tail: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/18 {REMOVED TILE}
          //RESULT: Tile{ [[ } '\"'/27 </28 & Map@1/29 Tile{ AsIs: e.1/23 } >/30"\"/"/31 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Offset18 /7 HalfReuse: >/13 } </33 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/25 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[27], '\"');
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z1]);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_chars(vm, context[31], context[32], "\"/", 2);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[7], context[18] );
          refalrts::reinit_close_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[13] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_evar( res, context[30], context[32] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[27], context[29] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 s.new10/13 s.new12/23 e.new13/19 s.new11/18 )/8 e.new14/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        // closed e.new14 as range 21
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        // closed e.new13 as range 19
        do {
          // </0 & Map@3/4 (/7 # Var/13 s.new16/23 e.new17/24 s.new15/18 )/8 e.new18/26 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          context[27] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_Var], context[13] ) )
            continue;
          // closed e.new17 as range 24
          // closed e.new18 as range 26
          do {
            // </0 & Map@3/4 (/7 # Var/13 s.Mode/23 e.2/28 # NoOffset/18 )/8 e.Tail/30 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            context[31] = context[27];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.2 as range 28
            // closed e.Tail as range 30
            //DEBUG: s.Mode: 23
            //DEBUG: e.2: 28
            //DEBUG: e.Tail: 30

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} # Var/13 s.Mode/23 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: s.Mode23 /4 HalfReuse: '.'/7 } Tile{ AsIs: e.2/28 } Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_svar( context[4], context[23] );
            refalrts::reinit_char(context[7], '.');
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[18];
            res = refalrts::splice_evar( res, context[28], context[29] );
            refalrts::splice_to_freelist_open( vm, context[7], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # Var/13 s.Mode/23 e.2/28 s.Offset/18 )/8 e.Tail/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          // closed e.2 as range 28
          // closed e.Tail as range 30
          //DEBUG: s.Mode: 23
          //DEBUG: s.Offset: 18
          //DEBUG: e.2: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset/18 {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/32 Tile{ AsIs: s.Mode/23 } '.'/33 Tile{ AsIs: e.2/28 } '/'/34 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Offset18 /7 HalfReuse: >/13 } </35 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[32], ' ');
          refalrts::alloc_char(vm, context[33], '.');
          refalrts::alloc_char(vm, context[34], '/');
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[7], context[18] );
          refalrts::reinit_close_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[13] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_elem( res, context[23] );
          res = refalrts::splice_elem( res, context[32] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/7 # VarCopy/13 s.new16/23 e.new17/24 s.new18/28 s.new15/18 )/8 e.new19/26 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          context[27] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_VarCopy], context[13] ) )
            continue;
          // closed e.new19 as range 26
          if( ! refalrts::svar_right( context[28], context[24], context[25] ) )
            continue;
          // closed e.new17 as range 24
          do {
            // </0 & Map@3/4 (/7 # VarCopy/13 s.new21/23 e.new22/29 # NoOffset/28 s.new20/18 )/8 e.new23/31 >/1
            context[29] = context[24];
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[27];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[28] ) )
              continue;
            // closed e.new22 as range 29
            // closed e.new23 as range 31
            do {
              // </0 & Map@3/4 (/7 # VarCopy/13 s.Mode/23 e.3/33 # NoOffset/28 # NoOffset/18 )/8 e.Tail/35 >/1
              context[33] = context[29];
              context[34] = context[30];
              context[35] = context[31];
              context[36] = context[32];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
                continue;
              // closed e.3 as range 33
              // closed e.Tail as range 35
              //DEBUG: s.Mode: 23
              //DEBUG: e.3: 33
              //DEBUG: e.Tail: 35

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} # VarCopy/13 s.Mode/23 {REMOVED TILE} # NoOffset/28 {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: s.Mode23 /4 HalfReuse: '.'/7 } Tile{ AsIs: e.3/33 } Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/35 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_svar( context[4], context[23] );
              refalrts::reinit_char(context[7], '.');
              refalrts::reinit_open_call(context[18]);
              refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[18] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[18];
              res = refalrts::splice_evar( res, context[33], context[34] );
              refalrts::splice_to_freelist_open( vm, context[7], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/7 # VarCopy/13 s.Mode/23 e.3/33 # NoOffset/28 s.CopyOffset/18 )/8 e.Tail/35 >/1
            context[33] = context[29];
            context[34] = context[30];
            context[35] = context[31];
            context[36] = context[32];
            // closed e.3 as range 33
            // closed e.Tail as range 35
            //DEBUG: s.Mode: 23
            //DEBUG: s.CopyOffset: 18
            //DEBUG: e.3: 33
            //DEBUG: e.Tail: 35

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CopyOffset/18 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/37 Tile{ AsIs: s.Mode/23 } '.'/38 Tile{ AsIs: e.3/33 } Tile{ HalfReuse: '/'/28 } Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.CopyOffset18 /7 HalfReuse: >/13 } </39 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/35 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[37], ' ');
            refalrts::alloc_char(vm, context[38], '.');
            refalrts::alloc_open_call(vm, context[39]);
            refalrts::reinit_char(context[28], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[7], context[18] );
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[39] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_elem( res, context[39] );
            res = refalrts::splice_evar( res, context[0], context[13] );
            res = refalrts::splice_elem( res, context[28] );
            res = refalrts::splice_evar( res, context[33], context[34] );
            res = refalrts::splice_elem( res, context[38] );
            res = refalrts::splice_elem( res, context[23] );
            res = refalrts::splice_elem( res, context[37] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/7 # VarCopy/13 s.Mode/23 e.3/29 s.SampleOffset/28 # NoOffset/18 )/8 e.Tail/31 >/1
            context[29] = context[24];
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[27];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
              continue;
            // closed e.3 as range 29
            // closed e.Tail as range 31
            //DEBUG: s.Mode: 23
            //DEBUG: s.SampleOffset: 28
            //DEBUG: e.3: 29
            //DEBUG: e.Tail: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SampleOffset/28 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/33 Tile{ AsIs: s.Mode/23 } '.'/34 Tile{ AsIs: e.3/29 } '/'/35 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.SampleOffset28 /7 HalfReuse: >/13 } Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[33], ' ');
            refalrts::alloc_char(vm, context[34], '.');
            refalrts::alloc_char(vm, context[35], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[7], context[28] );
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_open_call(context[18]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[18] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[18];
            res = refalrts::splice_evar( res, context[0], context[13] );
            res = refalrts::splice_elem( res, context[35] );
            res = refalrts::splice_evar( res, context[29], context[30] );
            res = refalrts::splice_elem( res, context[34] );
            res = refalrts::splice_elem( res, context[23] );
            res = refalrts::splice_elem( res, context[33] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/7 # VarCopy/13 s.Mode/23 e.3/29 s.SampleOffset/28 s.CopyOffset/18 )/8 e.Tail/31 >/1
          context[29] = context[24];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[27];
          // closed e.3 as range 29
          // closed e.Tail as range 31
          //DEBUG: s.Mode: 23
          //DEBUG: s.SampleOffset: 28
          //DEBUG: s.CopyOffset: 18
          //DEBUG: e.3: 29
          //DEBUG: e.Tail: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SampleOffset/28 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/33 Tile{ AsIs: s.Mode/23 } '.'/34 Tile{ AsIs: e.3/29 } '/'/35 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.SampleOffset28 /7 HalfReuse: >/13 } '/'/36 </37 & Symb/38 Tile{ AsIs: s.CopyOffset/18 } >/39 </40 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/31 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[33], ' ');
          refalrts::alloc_char(vm, context[34], '.');
          refalrts::alloc_char(vm, context[35], '/');
          refalrts::alloc_char(vm, context[36], '/');
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[7], context[28] );
          refalrts::reinit_close_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[13] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[36], context[38] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_elem( res, context[23] );
          res = refalrts::splice_elem( res, context[33] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 # Symbol/13 # Identifier/23 e.new16/24 s.new15/18 )/8 e.new17/26 >/1
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Identifier], context[23] ) )
          continue;
        // closed e.new16 as range 24
        // closed e.new17 as range 26
        do {
          // </0 & Map@3/4 (/7 # Symbol/13 # Identifier/23 e.2/28 # NoOffset/18 )/8 e.Tail/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[18] ) )
            continue;
          // closed e.2 as range 28
          // closed e.Tail as range 30
          //DEBUG: e.2: 28
          //DEBUG: e.Tail: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & Map@2/23 } </32 & DisplayName/33 Tile{ AsIs: e.2/28 } >/34 >/35 Tile{ HalfReuse: </18 HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '#');
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[23], functions[efunc_gen_Map_Z2]);
          refalrts::reinit_open_call(context[18]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[13] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 # Symbol/13 # Identifier/23 e.2/28 s.Offset/18 )/8 e.Tail/30 >/1
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        // closed e.2 as range 28
        // closed e.Tail as range 30
        //DEBUG: s.Offset: 18
        //DEBUG: e.2: 28
        //DEBUG: e.Tail: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & Map@2/23 } </32 & DisplayName/33 Tile{ AsIs: e.2/28 } >/34 >/35 '/'/36 </37 & Symb/38 Tile{ AsIs: s.Offset/18 } >/39 </40 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/30 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_char(vm, context[36], '/');
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '#');
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[23], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[34], context[38] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 # Tile/13 e.0/14 )/8 e.Tail/16 >/1
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'T'/4 HalfReuse: 'i'/7 HalfReuse: 'l'/13 }"e{"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0/14 } >/22" }"/23 </25 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "e{", 2);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " }", 2);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'T');
        refalrts::reinit_char(context[7], 'i');
        refalrts::reinit_char(context[13], 'l');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[25] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 # AsIs/13 e.0/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
          continue;
        // closed e.0 as range 14
        // closed e.Tail as range 16
        //DEBUG: e.0: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'A'/4 HalfReuse: 's'/7 HalfReuse: 'I'/13 }"s:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0/14 } >/22 </23 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "s:", 2);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'A');
        refalrts::reinit_char(context[7], 's');
        refalrts::reinit_char(context[13], 'I');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 # Reuse/13 e.0/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
          continue;
        // closed e.0 as range 14
        // closed e.Tail as range 16
        //DEBUG: e.0: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'R'/4 HalfReuse: 'e'/7 HalfReuse: 'u'/13 }"se:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0/14 } >/22 </23 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "se:", 3);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'R');
        refalrts::reinit_char(context[7], 'e');
        refalrts::reinit_char(context[13], 'u');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/7 # HalfReuse/13 e.0/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
          continue;
        // closed e.0 as range 14
        // closed e.Tail as range 16
        //DEBUG: e.0: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'H'/4 HalfReuse: 'a'/7 HalfReuse: 'l'/13 }"fReuse:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0/14 } >/22 </23 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "fReuse:", 7);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'H');
        refalrts::reinit_char(context[7], 'a');
        refalrts::reinit_char(context[13], 'l');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 s.new6/13 )/8 e.new7/14 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.new7 as range 14
      do {
        // </0 & Map@3/4 (/7 # LEFT-EDGE/13 )/8 e.Tail/16 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail as range 16
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '['/7 HalfReuse: </13 HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '[');
        refalrts::reinit_char(context[7], '[');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail/16 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
        continue;
      // closed e.Tail as range 16
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: ']'/7 HalfReuse: </13 HalfReuse: & Map@3/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], ']');
      refalrts::reinit_char(context[7], ']');
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 # RemovedTile/7 e.Tail/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[7] ) )
        continue;
      // closed e.Tail as range 9
      //DEBUG: e.Tail: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" {REMOVED TILE"/11 Tile{ HalfReuse: '}'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail/9 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[11], context[12], " {REMOVED TILE", 14);
      refalrts::reinit_char(context[0], '}');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & TextFromExpr\1*26/4 AsIs: t.Next/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_TextFromExpr_L1D26]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & TextFromExpr\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_TextFromExpr_L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
      // </0 & Map@4/4 (/7 s.Mode/13 (/16 e.2/14 )/17 s.FirstOffset/18 e.3/11 )/8 e.Tail/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.2 as range 14
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.3 as range 11
      //DEBUG: e.Tail: 9
      //DEBUG: s.Mode: 13
      //DEBUG: e.2: 14
      //DEBUG: s.FirstOffset: 18
      //DEBUG: e.3: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdVariableDebugTable/4 HalfReuse: s.Mode13 /7 } Tile{ AsIs: e.2/14 } Tile{ AsIs: s.FirstOffset/18 } Tile{ AsIs: )/17 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail/9 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdVariableDebugTable]);
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[0], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutVariableDebugTable\1*1/4 AsIs: t.Next/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_PutVariableDebugTable_L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PutVariableDebugTable\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PutVariableDebugTable_L1Z0]);
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


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Fetch@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Fetch@1/4 (/9 e.0/7 )/10 e./5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.0 as range 7
    // closed e. as range 5
    //DEBUG: e.0: 7
    //DEBUG: e.: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.0/7 } Tile{ HalfReuse: )/9 } </11 Tile{ HalfReuse: & CollectStrings/10 AsIs: e./5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkString]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_name(context[10], functions[efunc_CollectStrings]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@1/4 e.Argument/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument as range 5
    //DEBUG: e.Argument: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectStrings$1\1*1/4 AsIs: e.Argument/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_CollectStrings_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg/2 >/1
  // closed e.arg as range 2
  //DEBUG: e.arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg/2 HalfReuse: & CollectStrings$1\1@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_CollectStrings_S1L1Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
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
      // </0 & DoMapAccum@1/4 (/5 s.new8/25 e.new9/21 )/6 (/9 e.new13/17 )/10 (/15 s.new10/26 e.new11/23 )/16 e.new12/19 >/1
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
      // closed e.new9 as range 21
      if( ! refalrts::svar_left( context[26], context[23], context[24] ) )
        continue;
      // closed e.new11 as range 23
      do {
        // </0 & DoMapAccum@1/4 (/5 s.ContextOffset/25 e.1/27 )/6 (/9 e.Scanned/29 )/10 (/15 # Junk/26 e.2/31 )/16 e.Tail/33 >/1
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[17];
        context[30] = context[18];
        context[31] = context[23];
        context[32] = context[24];
        context[33] = context[19];
        context[34] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Junk], context[26] ) )
          continue;
        // closed e.1 as range 27
        // closed e.Scanned as range 29
        // closed e.2 as range 31
        // closed e.Tail as range 33
        //DEBUG: s.ContextOffset: 25
        //DEBUG: e.1: 27
        //DEBUG: e.Scanned: 29
        //DEBUG: e.2: 31
        //DEBUG: e.Tail: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset/25 AsIs: e.1/27 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/29 HalfReuse: (/10 HalfReuse: # Junk/15 } Tile{ AsIs: e.2/31 } Tile{ HalfReuse: )/26 } Tile{ AsIs: )/16 AsIs: e.Tail/33 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_Junk]);
        refalrts::reinit_close_bracket(context[26]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[16] );
        refalrts::link_brackets( context[10], context[26] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 (/5 s.new14/25 e.new15/27 )/6 (/9 e.new20/29 )/10 (/15 s.new16/26 s.new17/35 e.new18/31 )/16 e.new19/33 >/1
      context[27] = context[21];
      context[28] = context[22];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[23];
      context[32] = context[24];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.new15 as range 27
      // closed e.new20 as range 29
      // closed e.new19 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      // closed e.new18 as range 31
      do {
        // </0 & DoMapAccum@1/4 (/5 s.new21/25 e.new22/36 )/6 (/9 e.new26/38 )/10 (/15 # E/26 s.new23/35 e.new24/40 )/16 e.new25/42 >/1
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[31];
        context[41] = context[32];
        context[42] = context[33];
        context[43] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_E], context[26] ) )
          continue;
        // closed e.new22 as range 36
        // closed e.new26 as range 38
        // closed e.new24 as range 40
        // closed e.new25 as range 42
        do {
          // </0 & DoMapAccum@1/4 (/5 s.ContextOffset/25 e.1/44 )/6 (/9 e.Scanned/46 )/10 (/15 # E/26 s.Num/35 )/16 e.Tail/48 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[42];
          context[49] = context[43];
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          // closed e.1 as range 44
          // closed e.Scanned as range 46
          // closed e.Tail as range 48
          //DEBUG: s.ContextOffset: 25
          //DEBUG: s.Num: 35
          //DEBUG: e.1: 44
          //DEBUG: e.Scanned: 46
          //DEBUG: e.Tail: 48

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Num/35 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset/25 AsIs: e.1/44 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/46 HalfReuse: (/10 HalfReuse: # E/15 HalfReuse: s.Num35 /26 } )/50 Tile{ AsIs: )/16 AsIs: e.Tail/48 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[50]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[15], identifiers[ident_E]);
          refalrts::reinit_svar( context[26], context[35] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[16] );
          refalrts::link_brackets( context[10], context[50] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_elem( res, context[50] );
          refalrts::splice_to_freelist_open( vm, context[26], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/5 s.ContextOffset/25 e.1/44 )/6 (/9 e.Scanned/46 )/10 (/15 # E/26 s.Num/35 e.3/48 )/16 e.Tail/50 >/1
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        // closed e.1 as range 44
        // closed e.Scanned as range 46
        // closed e.3 as range 48
        // closed e.Tail as range 50
        //DEBUG: s.ContextOffset: 25
        //DEBUG: s.Num: 35
        //DEBUG: e.1: 44
        //DEBUG: e.Scanned: 46
        //DEBUG: e.3: 48
        //DEBUG: e.Tail: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </52 Tile{ HalfReuse: & DoMapAccum$1=1@1/6 AsIs: (/9 AsIs: e.Scanned/46 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/50 } )/53 (/54 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 2/5 AsIs: s.ContextOffset/25 } >/55 Tile{ AsIs: e.1/44 } (/56 Tile{ Reuse: # CmdSave/26 AsIs: s.Num/35 } s.ContextOffset/25/57 Tile{ AsIs: )/16 } )/58 (/59 # E/60 s.ContextOffset/25/61 Tile{ AsIs: e.3/48 } )/62 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[52]);
        refalrts::alloc_close_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_close_call(vm, context[55]);
        refalrts::alloc_open_bracket(vm, context[56]);
        refalrts::copy_stvar(vm, context[57], context[25]);
        refalrts::alloc_close_bracket(vm, context[58]);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::alloc_ident(vm, context[60], identifiers[ident_E]);
        refalrts::copy_stvar(vm, context[61], context[25]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::reinit_name(context[6], functions[efunc_gen_DoMapAccum_S1A1Z1]);
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::reinit_number(context[5], 2UL);
        refalrts::update_ident(context[26], identifiers[ident_CmdSave]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[52] );
        refalrts::link_brackets( context[59], context[62] );
        refalrts::link_brackets( context[54], context[58] );
        refalrts::link_brackets( context[56], context[16] );
        refalrts::push_stack( vm, context[55] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[53] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[62] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[58], context[61] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[26], context[35] );
        res = refalrts::splice_elem( res, context[56] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[55] );
        res = refalrts::splice_evar( res, context[0], context[25] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[6], context[15] );
        res = refalrts::splice_elem( res, context[52] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 (/5 s.ContextOffset/25 e.1/36 )/6 (/9 e.Scanned/38 )/10 (/15 s.S-or-T/26 s.Num/35 e.3/40 )/16 e.Tail/42 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[31];
      context[41] = context[32];
      context[42] = context[33];
      context[43] = context[34];
      // closed e.1 as range 36
      // closed e.Scanned as range 38
      // closed e.3 as range 40
      // closed e.Tail as range 42
      //DEBUG: s.ContextOffset: 25
      //DEBUG: s.S-or-T: 26
      //DEBUG: s.Num: 35
      //DEBUG: e.1: 36
      //DEBUG: e.Scanned: 38
      //DEBUG: e.3: 40
      //DEBUG: e.Tail: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.S-or-T/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset/25 AsIs: e.1/36 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned/38 HalfReuse: (/10 HalfReuse: s.S-or-T26 /15 } Tile{ AsIs: s.Num/35 } Tile{ AsIs: e.3/40 } )/44 Tile{ AsIs: )/16 AsIs: e.Tail/42 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_svar( context[15], context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[16] );
      refalrts::link_brackets( context[10], context[44] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & MakeSavers=1\1*4/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_MakeSavers_A1L1D4]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & MakeSavers=1\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeSavers_A1L1Z0]);
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


static refalrts::FnResult func_gen_BuildString_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & BuildString@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & BuildString@2/4 (/7 e.new1/5 )/8 s.new2/9 s.new3/10 e.new4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & BuildString@2/4 (/7 e.X/11 )/8 s.X/9 s.X0/10 (/17 # Symbol/19 # Char/20 s.Value/21 )/18 e.Tail/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_Symbol], context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::ident_left( identifiers[ident_Char], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.X as range 11
    // closed e.Tail as range 13
    if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.X: 9
    //DEBUG: s.X0: 10
    //DEBUG: e.X: 11
    //DEBUG: e.Tail: 13
    //DEBUG: s.Value: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.X/9 {REMOVED TILE} (/17 # Symbol/19 {REMOVED TILE} s.Value/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString@2/4 AsIs: (/7 AsIs: e.X/11 HalfReuse: s.X9 /8 } Tile{ HalfReuse: )/20 } Tile{ AsIs: s.X0/10 } Tile{ HalfReuse: s.Value21 /18 AsIs: e.Tail/13 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_close_bracket(context[20]);
    refalrts::reinit_svar( context[18], context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BuildString@2/4 (/7 e.X/11 )/8 s.X/9 s.X0/10 e.Tail/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.X as range 11
    // closed e.Tail as range 13
    //DEBUG: s.X: 9
    //DEBUG: s.X0: 10
    //DEBUG: e.X: 11
    //DEBUG: e.Tail: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BuildString@2/4 {REMOVED TILE} s.X/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.X/11 HalfReuse: s.X9 /8 } Tile{ AsIs: s.X0/10 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tail/13 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BuildString@2/4 (/7 e.X/5 )/8 s.X/9 s.X0/10 e.dyn1/2 >/1
  // closed e.X as range 5
  // closed e.dyn1 as range 2
  //DEBUG: s.X: 9
  //DEBUG: s.X0: 10
  //DEBUG: e.X: 5
  //DEBUG: e.dyn1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.X/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BuildString@0/4 AsIs: (/7 AsIs: e.X/5 HalfReuse: s.X9 /8 } Tile{ AsIs: s.X0/10 } )/11 Tile{ AsIs: e.dyn1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_BuildString_Z0]);
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BuildString_Z2("BuildString@2", COOKIE1_, COOKIE2_, func_gen_BuildString_Z2);


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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & MakeSavers=1\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeSavers_A1L1Z0]);
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


//End of file
