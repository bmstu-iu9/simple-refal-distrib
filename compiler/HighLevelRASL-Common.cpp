// This file automatically generated from 'HighLevelRASL-Common.ref'
// Don't edit! Edit 'HighLevelRASL-Common.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3974631667_231356078
#define COOKIE1_ 3974631667U
#define COOKIE2_ 231356078U

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
  efunc_Symb = 18,
  efunc_gen_Map_Z3 = 19,
  efunc_TextFromExprm_Prepare = 20,
  efunc_gen_Map_Z2 = 21,
  efunc_DisplayName = 22,
  efunc_TextFromExprm_Preparem_Chars = 23,
  efunc_EscapeChar = 24,
  efunc_gen_GenInitSubst_A5 = 25,
  efunc_gen_GenInitSubst_A4 = 26,
  efunc_gen_GenInitSubst_A3 = 27,
  efunc_gen_GenInitSubst_A2 = 28,
  efunc_FoldOpenELoops = 29,
  efunc_gen_Map_Z4 = 30,
  efunc_gen_GenResult_A1 = 31,
  efunc_SentenceTail = 32,
  efunc_gen_Fetch_Z1 = 33,
  efunc_gen_BuildString_Z2 = 34,
  efunc_CollectStrings = 35,
  efunc_gen_DoMapAccum_Z1 = 36,
  efunc_gen_MakeSavers_A1 = 37,
  efunc_Mu = 38,
  efunc_Up = 39,
  efunc_Evm_met = 40,
  efunc_Residue = 41,
  efunc_u_u_Metau_Residue = 42,
  efunc_MapAccum = 43,
  efunc_UnBracket = 44,
  efunc_DelAccumulator = 45,
  efunc_Inc = 46,
  efunc_Dec = 47,
  efunc_Inc2 = 48,
  efunc_IncVarOffset = 49,
  efunc_PrintVar = 50,
  efunc_TextFromExpr = 51,
  efunc_SafeDisplayName = 52,
  efunc_Offset = 53,
  efunc_GenInitSubst = 54,
  efunc_GenPattern = 55,
  efunc_GenResult = 56,
  efunc_PutVariableDebugTable = 57,
  efunc_BuildString = 58,
  efunc_MakeSavers = 59,
  efunc_gen_Apply_Z4 = 60,
  efunc_gen_Map_Z1 = 61,
  efunc_gen_Map_Z0 = 62,
  efunc_gen_EscapeChar_Z0 = 63,
  efunc_gen_SafeDisplayName_L1D6 = 64,
  efunc_gen_SafeDisplayName_L1Z0 = 65,
  efunc_gen_TextFromExpr_L1D26 = 66,
  efunc_gen_TextFromExpr_L1Z0 = 67,
  efunc_gen_PutVariableDebugTable_L1D1 = 68,
  efunc_gen_PutVariableDebugTable_L1Z0 = 69,
  efunc_gen_CollectStrings_S1L1D1 = 70,
  efunc_gen_Fetch_Z0 = 71,
  efunc_gen_CollectStrings_S1L1Z0 = 72,
  efunc_gen_DoMapAccum_S1A1Z1 = 73,
  efunc_gen_MakeSavers_A1L1D4 = 74,
  efunc_gen_DoMapAccum_Z0 = 75,
  efunc_gen_MakeSavers_A1L1Z0 = 76,
  efunc_gen_BuildString_Z0 = 77,
  efunc_gen_DoMapAccum_S1A1Z0 = 78,
};


enum ident {
  ident_NoDepth = 0,
  ident_NoOffset = 1,
  ident_Symbol = 2,
  ident_Char = 3,
  ident_TkOpenADT = 4,
  ident_Name = 5,
  ident_TkChars = 6,
  ident_Junk = 7,
  ident_E = 8,
  ident_TkCloseCall = 9,
  ident_CmdCallSave = 10,
  ident_AlgLeft = 11,
  ident_TkOpenCall = 12,
  ident_CmdInitB0m_Lite = 13,
  ident_CmdIssueMemory = 14,
  ident_CmdOpenedE = 15,
  ident_CmdOpenELoop = 16,
  ident_TkString = 17,
  ident_Brackets = 18,
  ident_CallBrackets = 19,
  ident_ADTm_Brackets = 20,
  ident_Mu = 21,
  ident_Up = 22,
  ident_Evm_met = 23,
  ident_Residue = 24,
  ident_u_u_Metau_Residue = 25,
  ident_Apply = 26,
  ident_Map = 27,
  ident_Reduce = 28,
  ident_Fetch = 29,
  ident_MapAccum = 30,
  ident_DoMapAccum = 31,
  ident_UnBracket = 32,
  ident_DelAccumulator = 33,
  ident_Inc = 34,
  ident_Dec = 35,
  ident_Pipe = 36,
  ident_Inc2 = 37,
  ident_IncVarOffset = 38,
  ident_PrintVar = 39,
  ident_TextFromExpr = 40,
  ident_SafeDisplayName = 41,
  ident_TextFromExprm_Prepare = 42,
  ident_TextFromExprm_Preparem_Chars = 43,
  ident_Offset = 44,
  ident_GenInitSubst = 45,
  ident_GenPattern = 46,
  ident_GenResult = 47,
  ident_FoldOpenELoops = 48,
  ident_PutVariableDebugTable = 49,
  ident_CollectStrings = 50,
  ident_BuildString = 51,
  ident_MakeSavers = 52,
  ident_TkOpenBracket = 53,
  ident_TkCloseBracket = 54,
  ident_TkCloseADT = 55,
  ident_TkClosureHead = 56,
  ident_TkUnwrappedClosure = 57,
  ident_Number = 58,
  ident_Cookie1 = 59,
  ident_Cookie2 = 60,
  ident_TkVariable = 61,
  ident_TkVariableCopy = 62,
  ident_Identifier = 63,
  ident_Tile = 64,
  ident_AsIs = 65,
  ident_Reuse = 66,
  ident_HalfReuse = 67,
  ident_LEFTm_EDGE = 68,
  ident_RIGHTm_EDGE = 69,
  ident_RemovedTile = 70,
  ident_CmdVariableDebugTable = 71,
  ident_CmdSave = 72,
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


static refalrts::FnResult func_Inc2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc2/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num#1/5 AsIs: >/1 ]] }
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
  // </0 & IncVarOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IncVarOffset/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 2/7 Tile{ HalfReuse: s.ContextOffset1 #5/6 AsIs: >/1 ]] }
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
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset1 #5/6 AsIs: >/1 ]] }
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

  // </0 & IncVarOffset/4 s.ContextOffset#1/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset1 #5/6 AsIs: >/1 ]] }
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
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PrintVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintVar/4 s.new#1/5 e.new#2/2 s.new#3/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/7 # NoDepth/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoDepth], context[6] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} # NoDepth/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/7 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_char(context[4], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 >/1
  // closed e.Index#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Depth#1: 6
  //DEBUG: e.Index#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & Symb/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[7], '#');
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Symb]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char(context[4], '.');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[9] );
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
  // </0 & TextFromExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@3/6 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/7 Tile{ ]] }
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
  // </0 & SafeDisplayName/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@2/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
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
  // </0 & TextFromExpr-Prepare/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & TextFromExpr-Prepare/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & TextFromExpr-Prepare/4 (/7 e.new#3/11 s.new#4/14 s.new#5/13 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
        continue;
      // closed e.new#3 as range 11
      do {
        // </0 & TextFromExpr-Prepare/4 (/7 # Symbol/19 # Char/20 s.Char#1/14 # NoOffset/13 )/8 e.Tail#1/17 >/1
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
        // closed e.Tail#1 as range 17
        //DEBUG: s.Char#1: 14
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 HalfReuse: </19 HalfReuse: & EscapeChar/20 AsIs: s.Char#1/14 HalfReuse: >/13 AsIs: )/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
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

      // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/14 s.BracketOffset#1/13 )/8 (/19 # Symbol/21 # Name/22 e.Name#1/17 s.NameOffset#1/23 )/20 e.Tail#1/15 >/1
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
      // closed e.Tail#1 as range 15
      if( ! refalrts::svar_right( context[23], context[17], context[18] ) )
        continue;
      // closed e.Name#1 as range 17
      //DEBUG: s.BracketOffset#1: 13
      //DEBUG: e.Tail#1: 15
      //DEBUG: s.NameOffset#1: 23
      //DEBUG: e.Name#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/14 s.BracketOffset#1/13 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # TkOpenADT/21 HalfReuse: s.BracketOffset1 #13/22 AsIs: e.Name#1/17 AsIs: s.NameOffset#1/23 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
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

    // </0 & TextFromExpr-Prepare/4 t.Other#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Other#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/7 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  // </0 & TextFromExpr-Prepare-Chars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/9 )/8 (/15 # Symbol/17 # Char/18 s.Char#1/20 # NoOffset/19 )/16 e.Tail#1/11 >/1
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
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    if( ! refalrts::svar_left( context[20], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11
    //DEBUG: s.Char#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Char#1/20 # NoOffset/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 AsIs: e.Chars#1/9 HalfReuse: </8 HalfReuse: & EscapeChar/15 HalfReuse: s.Char1 #20/17 HalfReuse: >/18 } Tile{ AsIs: )/16 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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

  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Chars#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChars/4 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & TextFromExpr-Prepare/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
  // </0 & Offset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Offset/4 s.new#1/5 >/1
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

  // </0 & Offset/4 s.Offset#1/5 >/1
  //DEBUG: s.Offset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '/'/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.Offset#1/5 AsIs: >/1 ]] }
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
  // </0 & GenInitSubst=5/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 s.4#5/10 s.2#4/11 (/14 e.Pattern#1/12 )/15 s.1#3/16 s.5#6/17 >/1
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
  // closed e.FuncName#1 as range 6
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
  // closed e.Pattern#1 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: s.4#5: 10
  //DEBUG: s.2#4: 11
  //DEBUG: e.Pattern#1: 12
  //DEBUG: s.1#3: 16
  //DEBUG: s.5#6: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.5#6/17 HalfReuse: (/1 } # Junk/18 Tile{ HalfReuse: (/0 HalfReuse: # TkOpenCall/4 AsIs: s.0#2/5 HalfReuse: )/8 } (/19 # Symbol/20 # Name/21 Tile{ AsIs: e.FuncName#1/6 } Tile{ AsIs: s.4#5/10 } Tile{ AsIs: )/9 } )/22 (/23 # E/24 Tile{ HalfReuse: s.24 #11/14 AsIs: e.Pattern#1/12 AsIs: )/15 } (/25 # Junk/26 (/27 # TkCloseCall/28 Tile{ AsIs: s.1#3/16 } )/29 )/30 (/31 (/32 # CmdCallSave/33 # AlgLeft/34 s.0#2/5/35 Tile{ AsIs: s.2#4/11 } )/36 )/37 Tile{ ]] }
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
  // </0 & GenInitSubst=4/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 s.2#4/10 (/13 e.Pattern#1/11 )/14 s.1#3/15 s.ContextTop#1/16 s.4#5/17 >/1
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
  // closed e.FuncName#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Pattern#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: s.2#4: 10
  //DEBUG: e.Pattern#1: 11
  //DEBUG: s.1#3: 15
  //DEBUG: s.ContextTop#1: 16
  //DEBUG: s.4#5: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=5/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 } Tile{ AsIs: s.4#5/17 } Tile{ AsIs: s.2#4/10 AsIs: (/13 AsIs: e.Pattern#1/11 AsIs: )/14 AsIs: s.1#3/15 } </18 & Add/19 Tile{ AsIs: s.ContextTop#1/16 } 5/20 >/21 Tile{ AsIs: >/1 ]] }
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
  // </0 & GenInitSubst=3/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 (/12 e.Pattern#1/10 )/13 s.1#3/14 s.ContextTop#1/15 s.2#4/16 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 10
  //DEBUG: s.1#3: 14
  //DEBUG: s.ContextTop#1: 15
  //DEBUG: s.2#4: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.2#4/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=4/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 HalfReuse: s.24 #16/12 } (/17 Tile{ AsIs: e.Pattern#1/10 } Tile{ AsIs: )/13 AsIs: s.1#3/14 AsIs: s.ContextTop#1/15 } </18 & Add/19 s.ContextTop#1/15/20 4/21 >/22 Tile{ AsIs: >/1 ]] }
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
  // </0 & GenInitSubst=2/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 (/12 e.Pattern#1/10 )/13 s.ContextTop#1/14 s.1#3/15 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 10
  //DEBUG: s.ContextTop#1: 14
  //DEBUG: s.1#3: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=3/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Pattern#1/10 AsIs: )/13 } Tile{ AsIs: s.1#3/15 } Tile{ AsIs: s.ContextTop#1/14 } </16 & Add/17 s.ContextTop#1/14/18 2/19 >/20 Tile{ AsIs: >/1 ]] }
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
  // </0 & GenInitSubst/4 s.ContextTop#1/5 (/8 e.FuncName#1/6 )/9 e.Pattern#1/2 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 2
  //DEBUG: s.ContextTop#1: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=2/4 AsIs: s.ContextTop#1/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 } (/10 Tile{ AsIs: e.Pattern#1/2 } )/11 s.ContextTop#1/5/12 </13 & Add/14 s.ContextTop#1/5/15 1/16 >/17 Tile{ AsIs: >/1 ]] }
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
  // </0 & GenPattern/4 s.FnGenSubst#1/5 (/8 e.Name#1/6 )/9 e.Pattern#1/2 >/1
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
  // closed e.Pattern#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnGenSubst#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst1 #5/4 } 5/10 (/11 # Junk/12 (/13 # TkOpenCall/14 0/15 )/16 (/17 # Symbol/18 Tile{ HalfReuse: # Name/8 AsIs: e.Name#1/6 HalfReuse: 4/9 } )/19 )/20 (/21 # E/22 2/23 Tile{ AsIs: e.Pattern#1/2 } )/24 (/25 # Junk/26 (/27 # TkCloseCall/28 1/29 )/30 )/31 (/32 )/33 (/34 (/35 # CmdInitB0-Lite/36 )/37 (/38 # CmdCallSave/39 # AlgLeft/40 0/41 2/42 )/43 )/44 Tile{ AsIs: >/1 ]] }
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
  // </0 & GenResult=1/4 (/7 e.PatternCommands#1/5 )/8 (/11 e.PatternVars#1/9 )/12 s.ContextCount#2/13 e.SentenceTailCommands#2/2 >/1
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
  // closed e.PatternCommands#1 as range 5
  // closed e.PatternVars#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentenceTailCommands#2 as range 2
  //DEBUG: e.PatternCommands#1: 5
  //DEBUG: e.PatternVars#1: 9
  //DEBUG: s.ContextCount#2: 13
  //DEBUG: e.SentenceTailCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextCount#2/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & FoldOpenELoops/15 (/16 Tile{ HalfReuse: # CmdIssueMemory/0 HalfReuse: s.ContextCount2 #13/4 HalfReuse: )/7 AsIs: e.PatternCommands#1/5 HalfReuse: </8 HalfReuse: & Map@4/11 AsIs: e.PatternVars#1/9 HalfReuse: >/12 } Tile{ AsIs: e.SentenceTailCommands#2/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & GenResult/4 s.FnGenResult#1/5 (/8 e.Conditions#1/6 )/9 (/12 e.Result#1/10 )/13 s.ContextOffset#1/14 (/17 e.PatternVars#1/15 )/18 (/21 e.MarkedPattern#1/19 )/22 e.PatternCommands#1/2 >/1
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
  // closed e.Conditions#1 as range 6
  // closed e.Result#1 as range 10
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
  // closed e.PatternVars#1 as range 15
  // closed e.MarkedPattern#1 as range 19
  // closed e.PatternCommands#1 as range 2
  //DEBUG: s.FnGenResult#1: 5
  //DEBUG: e.Conditions#1: 6
  //DEBUG: e.Result#1: 10
  //DEBUG: s.ContextOffset#1: 14
  //DEBUG: e.PatternVars#1: 15
  //DEBUG: e.MarkedPattern#1: 19
  //DEBUG: e.PatternCommands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult=1/4 } Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands#1/2 } Tile{ AsIs: )/9 AsIs: (/12 } e.PatternVars#1/15/23 )/25 </26 Tile{ HalfReuse: & SentenceTail/13 AsIs: s.ContextOffset#1/14 AsIs: (/17 AsIs: e.PatternVars#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern#1/19 AsIs: )/22 } Tile{ AsIs: e.Conditions#1/6 } (/27 Tile{ AsIs: s.FnGenResult#1/5 } Tile{ AsIs: e.Result#1/10 } )/28 >/29 Tile{ AsIs: >/1 ]] }
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


static refalrts::FnResult func_FoldOpenELoops(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FoldOpenELoops/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FoldOpenELoops/4 e.Commands-B#1/7 (/13 # CmdOpenedE/15 # AlgLeft/16 s.BracketNum#1/17 s.VarNumber#1/18 )/14 e.Commands-E#1/9 >/1
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
      // closed e.Commands-E#1 as range 9
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B#1: 7
      //DEBUG: e.Commands-E#1: 9
      //DEBUG: s.BracketNum#1: 17
      //DEBUG: s.VarNumber#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands-B#1/7 } Tile{ AsIs: (/13 Reuse: # CmdOpenELoop/15 AsIs: # AlgLeft/16 AsIs: s.BracketNum#1/17 AsIs: s.VarNumber#1/18 HalfReuse: </14 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands-E#1/9 } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
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

  // </0 & FoldOpenELoops/4 e.Commands#1/2 >/1
  // closed e.Commands#1 as range 2
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldOpenELoops/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
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
  // </0 & PutVariableDebugTable/4 e.PatternVars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.PatternVars#1 as range 2
  //DEBUG: e.PatternVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.PatternVars#1/2 AsIs: >/1 ]] }
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
  // </0 & CollectStrings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectStrings/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & CollectStrings/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.new#6/25 )/8 (/21 # Symbol/23 # Char/24 s.new#7/26 )/22 e.new#8/16 >/1
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
        // closed e.new#8 as range 16
        if( ! refalrts::svar_left( context[25], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        do {
          // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.Value1#1/25 )/8 (/21 # Symbol/23 # Char/24 s.Value2#1/26 )/22 (/31 # Symbol/33 # Char/34 s.Value#1/35 )/32 e.#0/27 >/1
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
          // closed e.#0 as range 27
          if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: s.Value1#1: 25
          //DEBUG: s.Value2#1: 26
          //DEBUG: e.#0: 27
          //DEBUG: s.Value#1: 35

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} # Char/24 s.Value2#1/26 )/22 (/31 # Symbol/33 {REMOVED TILE} s.Value#1/35 )/32 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 HalfReuse: & BuildString@2/13 HalfReuse: (/18 AsIs: s.Value1#1/25 AsIs: )/8 HalfReuse: s.Value21 #26/21 HalfReuse: s.Value1 #35/23 } Tile{ AsIs: e.#0/27 } Tile{ HalfReuse: >/34 } Tile{ AsIs: >/1 ]] }
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

        // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.Value1#1/25 )/8 (/21 # Symbol/23 # Char/24 s.Value2#1/26 )/22 e.Tail#1/27 >/1
        context[27] = context[16];
        context[28] = context[17];
        // closed e.Tail#1 as range 27
        //DEBUG: s.Value1#1: 25
        //DEBUG: s.Value2#1: 26
        //DEBUG: e.Tail#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # Symbol/13 # Char/18 s.Value1#1/25 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/21 Reuse: # TkString/23 HalfReuse: s.Value11 #25/24 AsIs: s.Value2#1/26 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: >/1 ]] }
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
        // </0 & CollectStrings/4 (/7 # Brackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.InBrackets#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.InBrackets#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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
        // </0 & CollectStrings/4 (/7 # CallBrackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.InBrackets#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.InBrackets#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

      // </0 & CollectStrings/4 (/7 # ADT-Brackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.InBrackets#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.InBrackets#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & CollectStrings/4 t.OtherTerm#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/7 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  // </0 & BuildString/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BuildString/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & BuildString/4 (/7 e.Chars#1/9 )/8 (/15 # Symbol/17 # Char/18 s.Value#1/19 )/16 e.Tail#1/11 >/1
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
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11
    //DEBUG: s.Value#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/17 # Char/18 s.Value#1/19 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/9 HalfReuse: s.Value1 #19/8 HalfReuse: )/15 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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

  // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Chars#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BuildString/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
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
  // </0 & MakeSavers=1/4 (/7 s.ContextOffset#2/9 e.CmdSaves#2/5 )/8 e.SubstitutesAndJunks#2/2 >/1
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
  // closed e.SubstitutesAndJunks#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CmdSaves#2 as range 5
  //DEBUG: e.SubstitutesAndJunks#2: 2
  //DEBUG: s.ContextOffset#2: 9
  //DEBUG: e.CmdSaves#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 s.ContextOffset#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #9/0 HalfReuse: (/4 } Tile{ AsIs: e.CmdSaves#2/5 } Tile{ AsIs: )/8 } Tile{ AsIs: e.SubstitutesAndJunks#2/2 } Tile{ ]] }
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
  // </0 & MakeSavers/4 s.OriginContextOffset#1/5 e.SubstitutesAndJunks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubstitutesAndJunks#1 as range 2
  //DEBUG: s.OriginContextOffset#1: 5
  //DEBUG: e.SubstitutesAndJunks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeSavers=1/4 } </6 & DoMapAccum@1/7 (/8 Tile{ AsIs: s.OriginContextOffset#1/5 } )/9 (/10 )/11 Tile{ AsIs: e.SubstitutesAndJunks#1/2 } >/12 Tile{ AsIs: >/1 ]] }
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscapeChar/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & EscapeChar@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
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
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 s.new#3/7 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_term( context[7], context[7] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & Map@2/4 '\n'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\n', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'n'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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
        // </0 & Map@2/4 '\r'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\r', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'r'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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
        // </0 & Map@2/4 ' '/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( ' ', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '_'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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
        // </0 & Map@2/4 '\t'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\t', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 't'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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
        // </0 & Map@2/4 '$'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '$', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '$'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
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

      // </0 & Map@2/4 s.Other#2/7 e.Tail#1/11 >/1
      context[11] = context[9];
      context[12] = context[10];
      // closed e.Tail#1 as range 11
      //DEBUG: s.Other#2: 7
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#2/7 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SafeDisplayName\1*6/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@2/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & SafeDisplayName\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
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
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.new#2 as range 7
    do {
      // </0 & Map@3/4 (/9 s.new#5/11 e.new#6/12 s.new#7/16 )/10 e.new#4/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      // closed e.new#4 as range 14
      if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#6 as range 12
      do {
        // </0 & Map@3/4 (/9 s.new#9/11 s.new#10/16 )/10 e.new#8/17 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        // closed e.new#8 as range 17
        do {
          // </0 & Map@3/4 (/9 # TkOpenBracket/11 s.new#12/16 )/10 e.new#11/19 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[11] ) )
            continue;
          // closed e.new#11 as range 19
          do {
            // </0 & Map@3/4 (/9 # TkOpenBracket/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '('/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '(');
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkOpenBracket/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 16
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/23 Tile{ AsIs: s.ContextOffset#2/16 } >/24 </25 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '(');
          refalrts::reinit_char(context[9], '/');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/9 # TkCloseBracket/11 s.new#12/16 )/10 e.new#11/19 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[11] ) )
            continue;
          // closed e.new#11 as range 19
          do {
            // </0 & Map@3/4 (/9 # TkCloseBracket/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: ')'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], ')');
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkCloseBracket/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 16
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/23 Tile{ AsIs: s.ContextOffset#2/16 } >/24 </25 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], ')');
          refalrts::reinit_char(context[9], '/');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/9 # TkOpenCall/11 s.new#12/16 )/10 e.new#11/19 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[11] ) )
            continue;
          // closed e.new#11 as range 19
          do {
            // </0 & Map@3/4 (/9 # TkOpenCall/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '<'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], '<');
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkOpenCall/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 16
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/23 Tile{ AsIs: s.ContextOffset#2/16 } >/24 </25 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '<');
          refalrts::reinit_char(context[9], '/');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkCloseCall/11 s.new#12/16 )/10 e.new#11/19 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[11] ) )
          continue;
        // closed e.new#11 as range 19
        do {
          // </0 & Map@3/4 (/9 # TkCloseCall/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.Tail#1 as range 21
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '>'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_char(context[11], '>');
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkCloseCall/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Tail#1 as range 21
        //DEBUG: s.ContextOffset#2: 16
        //DEBUG: e.Tail#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/23 Tile{ AsIs: s.ContextOffset#2/16 } >/24 </25 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '>');
        refalrts::reinit_char(context[9], '/');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/9 # TkOpenADT/11 e.new#10/17 s.new#9/16 )/10 e.new#8/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[11] ) )
          continue;
        // closed e.new#10 as range 17
        // closed e.new#8 as range 19
        do {
          // </0 & Map@3/4 (/9 # TkOpenADT/11 s.new#13/25 e.new#14/21 s.new#12/16 )/10 e.new#11/23 >/1
          context[21] = context[17];
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[20];
          // closed e.new#11 as range 23
          if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
            continue;
          // closed e.new#14 as range 21
          do {
            // </0 & Map@3/4 (/9 # TkOpenADT/11 # NoOffset/25 e.new#17/26 s.new#16/16 )/10 e.new#15/28 >/1
            context[26] = context[21];
            context[27] = context[22];
            context[28] = context[23];
            context[29] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[25] ) )
              continue;
            // closed e.new#17 as range 26
            // closed e.new#15 as range 28
            do {
              // </0 & Map@3/4 (/9 # TkOpenADT/11 # NoOffset/25 e.2#0/30 # NoOffset/16 )/10 e.Tail#1/32 >/1
              context[30] = context[26];
              context[31] = context[27];
              context[32] = context[28];
              context[33] = context[29];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
                continue;
              // closed e.2#0 as range 30
              // closed e.Tail#1 as range 32
              //DEBUG: e.2#0: 30
              //DEBUG: e.Tail#1: 32

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </9 HalfReuse: & DisplayName/11 } Tile{ AsIs: e.2#0/30 } Tile{ HalfReuse: >/25 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_char(context[4], '[');
              refalrts::reinit_open_call(context[9]);
              refalrts::reinit_name(context[11], functions[efunc_DisplayName]);
              refalrts::reinit_close_call(context[25]);
              refalrts::reinit_open_call(context[16]);
              refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[16] );
              refalrts::push_stack( vm, context[25] );
              refalrts::push_stack( vm, context[9] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[16];
              res = refalrts::splice_elem( res, context[25] );
              res = refalrts::splice_evar( res, context[30], context[31] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/9 # TkOpenADT/11 # NoOffset/25 e.2#0/30 s.NameOffset#2/16 )/10 e.Tail#1/32 >/1
            context[30] = context[26];
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            // closed e.2#0 as range 30
            // closed e.Tail#1 as range 32
            //DEBUG: s.NameOffset#2: 16
            //DEBUG: e.2#0: 30
            //DEBUG: e.Tail#1: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NameOffset#2/16 {REMOVED TILE}
            //RESULT: Tile{ [[ }" ["/34 </36 & DisplayName/37 Tile{ AsIs: e.2#0/30 } >/38 '/'/39 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.NameOffset2 #16/9 HalfReuse: >/11 HalfReuse: </25 } Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[34], context[35], " [", 2);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[38]);
            refalrts::alloc_char(vm, context[39], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[9], context[16] );
            refalrts::reinit_close_call(context[11]);
            refalrts::reinit_open_call(context[25]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[10];
            res = refalrts::splice_evar( res, context[0], context[25] );
            res = refalrts::splice_evar( res, context[38], context[39] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_evar( res, context[34], context[37] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/9 # TkOpenADT/11 s.ContextOffset#2/25 e.2#0/26 # NoOffset/16 )/10 e.Tail#1/28 >/1
            context[26] = context[21];
            context[27] = context[22];
            context[28] = context[23];
            context[29] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.2#0 as range 26
            // closed e.Tail#1 as range 28
            //DEBUG: s.ContextOffset#2: 25
            //DEBUG: e.2#0: 26
            //DEBUG: e.Tail#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/30 Tile{ HalfReuse: '['/0 HalfReuse: '/'/4 HalfReuse: </9 HalfReuse: & Symb/11 AsIs: s.ContextOffset#2/25 } >/31 </32 & DisplayName/33 Tile{ AsIs: e.2#0/26 } >/34 Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[30], ' ');
            refalrts::alloc_close_call(vm, context[31]);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[34]);
            refalrts::reinit_char(context[0], '[');
            refalrts::reinit_char(context[4], '/');
            refalrts::reinit_open_call(context[9]);
            refalrts::reinit_name(context[11], functions[efunc_Symb]);
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[9] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_elem( res, context[34] );
            res = refalrts::splice_evar( res, context[26], context[27] );
            res = refalrts::splice_evar( res, context[31], context[33] );
            res = refalrts::splice_evar( res, context[0], context[25] );
            res = refalrts::splice_elem( res, context[30] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkOpenADT/11 s.ContextOffset#2/25 e.2#0/26 s.NameOffset#2/16 )/10 e.Tail#1/28 >/1
          context[26] = context[21];
          context[27] = context[22];
          context[28] = context[23];
          context[29] = context[24];
          // closed e.2#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: s.ContextOffset#2: 25
          //DEBUG: s.NameOffset#2: 16
          //DEBUG: e.2#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/30 Tile{ HalfReuse: '['/0 HalfReuse: '/'/4 HalfReuse: </9 HalfReuse: & Symb/11 AsIs: s.ContextOffset#2/25 } >/31 </32 & DisplayName/33 Tile{ AsIs: e.2#0/26 } >/34 '/'/35 </36 & Symb/37 Tile{ AsIs: s.NameOffset#2/16 } >/38 </39 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[30], ' ');
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_char(vm, context[35], '/');
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_open_call(vm, context[39]);
          refalrts::reinit_char(context[0], '[');
          refalrts::reinit_char(context[4], '/');
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[11], functions[efunc_Symb]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[34], context[37] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[31], context[33] );
          res = refalrts::splice_evar( res, context[0], context[25] );
          res = refalrts::splice_elem( res, context[30] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkOpenADT/11 s.new#12/16 )/10 e.new#11/21 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        // closed e.new#11 as range 21
        do {
          // </0 & Map@3/4 (/9 # TkOpenADT/11 # NoOffset/16 )/10 e.Tail#1/23 >/1
          context[23] = context[21];
          context[24] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.Tail#1 as range 23
          //DEBUG: e.Tail#1: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '['/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_char(context[11], '[');
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkOpenADT/11 s.ContextOffset#2/16 )/10 e.Tail#1/23 >/1
        context[23] = context[21];
        context[24] = context[22];
        // closed e.Tail#1 as range 23
        //DEBUG: s.ContextOffset#2: 16
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/25 Tile{ AsIs: s.ContextOffset#2/16 } >/26 </27 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '[');
        refalrts::reinit_char(context[9], '/');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/9 s.new#9/11 s.new#10/16 )/10 e.new#8/17 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        // closed e.new#8 as range 17
        do {
          // </0 & Map@3/4 (/9 # TkCloseADT/11 s.new#12/16 )/10 e.new#11/19 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[11] ) )
            continue;
          // closed e.new#11 as range 19
          do {
            // </0 & Map@3/4 (/9 # TkCloseADT/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@3/4 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: ']'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::reinit_char(context[9], ' ');
            refalrts::reinit_char(context[11], ']');
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkCloseADT/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 16
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: '/'/9 HalfReuse: </11 } & Symb/23 Tile{ AsIs: s.ContextOffset#2/16 } >/24 </25 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[24]);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], ']');
          refalrts::reinit_char(context[9], '/');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/9 # TkClosureHead/11 s.new#12/16 )/10 e.new#11/19 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[11] ) )
            continue;
          // closed e.new#11 as range 19
          do {
            // </0 & Map@3/4 (/9 # TkClosureHead/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '*'/9 HalfReuse: ']'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '[');
            refalrts::reinit_char(context[9], '*');
            refalrts::reinit_char(context[11], ']');
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkClosureHead/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 16
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '*'/9 HalfReuse: ']'/11 } '/'/23 </24 & Symb/25 Tile{ AsIs: s.ContextOffset#2/16 } >/26 </27 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[23], '/');
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '[');
          refalrts::reinit_char(context[9], '*');
          refalrts::reinit_char(context[11], ']');
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkUnwrappedClosure/11 s.new#12/16 )/10 e.new#11/19 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[11] ) )
          continue;
        // closed e.new#11 as range 19
        do {
          // </0 & Map@3/4 (/9 # TkUnwrappedClosure/11 # NoOffset/16 )/10 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.Tail#1 as range 21
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: '*'/9 HalfReuse: '}'/11 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '{');
          refalrts::reinit_char(context[9], '*');
          refalrts::reinit_char(context[11], '}');
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[16] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkUnwrappedClosure/11 s.ContextOffset#2/16 )/10 e.Tail#1/21 >/1
        context[21] = context[19];
        context[22] = context[20];
        // closed e.Tail#1 as range 21
        //DEBUG: s.ContextOffset#2: 16
        //DEBUG: e.Tail#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: '*'/9 HalfReuse: '}'/11 } '/'/23 </24 & Symb/25 Tile{ AsIs: s.ContextOffset#2/16 } >/26 </27 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[23], '/');
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '{');
        refalrts::reinit_char(context[9], '*');
        refalrts::reinit_char(context[11], '}');
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/9 # Symbol/11 # Char/21 s.new#10/22 s.new#9/16 )/10 e.new#8/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_Char], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.new#8 as range 19
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      do {
        // </0 & Map@3/4 (/9 # Symbol/11 # Char/21 s.Char#2/22 # NoOffset/16 )/10 e.Tail#1/23 >/1
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
          continue;
        // closed e.Tail#1 as range 23
        //DEBUG: s.Char#2: 22
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Char#2/22 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </9 HalfReuse: & EscapeChar/11 HalfReuse: s.Char2 #22/21 } >/25 '\''/26 Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_char(vm, context[26], '\'');
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[11], functions[efunc_EscapeChar]);
        refalrts::reinit_svar( context[21], context[22] );
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/9 # Symbol/11 # Char/21 s.Char#2/22 s.Offset#2/16 )/10 e.Tail#1/23 >/1
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Tail#1 as range 23
      //DEBUG: s.Char#2: 22
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char#2/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" \'"/25 Tile{ AsIs: </0 Reuse: & EscapeChar/4 HalfReuse: s.Char2 #22/9 HalfReuse: >/11 HalfReuse: '\''/21 } '/'/27 </28 & Symb/29 Tile{ AsIs: s.Offset#2/16 } >/30 </31 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[25], context[26], " \'", 2);
      refalrts::alloc_char(vm, context[27], '/');
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_EscapeChar]);
      refalrts::reinit_svar( context[9], context[22] );
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_char(context[21], '\'');
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[0], context[21] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 (/9 # TkChars/11 e.0#0/12 )/10 e.Tail#1/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_TkChars], context[11] ) )
        continue;
      // closed e.0#0 as range 12
      // closed e.Tail#1 as range 14
      //DEBUG: e.0#0: 12
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 } Tile{ AsIs: e.0#0/12 } Tile{ HalfReuse: '\''/9 HalfReuse: </11 } Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_char(context[9], '\'');
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[9], context[11] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 (/9 s.new#5/11 e.new#6/12 s.new#7/16 )/10 e.new#4/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      // closed e.new#4 as range 14
      if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#6 as range 12
      do {
        // </0 & Map@3/4 (/9 # Symbol/11 s.new#10/21 e.new#11/17 s.new#9/16 )/10 e.new#8/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
          continue;
        // closed e.new#8 as range 19
        if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
          continue;
        // closed e.new#11 as range 17
        do {
          // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 s.new#14/26 s.new#13/16 )/10 e.new#12/24 >/1
          context[22] = context[17];
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_Number], context[21] ) )
            continue;
          // closed e.new#12 as range 24
          if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
            continue;
          if( ! refalrts::empty_seq( context[22], context[23] ) )
            continue;
          do {
            // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie1/26 s.new#16/16 )/10 e.new#15/27 >/1
            context[27] = context[24];
            context[28] = context[25];
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[26] ) )
              continue;
            // closed e.new#15 as range 27
            do {
              // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie1/26 # NoOffset/16 )/10 e.Tail#1/29 >/1
              context[29] = context[27];
              context[30] = context[28];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
                continue;
              // closed e.Tail#1 as range 29
              //DEBUG: e.Tail#1: 29

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Co"/31 Tile{ HalfReuse: 'o'/0 HalfReuse: 'k'/4 HalfReuse: 'i'/9 HalfReuse: 'e'/11 HalfReuse: '1'/21 HalfReuse: '>'/26 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[31], context[32], " <Co", 4);
              refalrts::reinit_char(context[0], 'o');
              refalrts::reinit_char(context[4], 'k');
              refalrts::reinit_char(context[9], 'i');
              refalrts::reinit_char(context[11], 'e');
              refalrts::reinit_char(context[21], '1');
              refalrts::reinit_char(context[26], '>');
              refalrts::reinit_open_call(context[16]);
              refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[16] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[0];
              res = refalrts::splice_evar( res, context[31], context[32] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie1/26 s.Offset#2/16 )/10 e.Tail#1/29 >/1
            context[29] = context[27];
            context[30] = context[28];
            // closed e.Tail#1 as range 29
            //DEBUG: s.Offset#2: 16
            //DEBUG: e.Tail#1: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" <Cooki"/31 Tile{ HalfReuse: 'e'/0 HalfReuse: '1'/4 HalfReuse: '>'/9 HalfReuse: '/'/11 HalfReuse: </21 HalfReuse: & Symb/26 AsIs: s.Offset#2/16 HalfReuse: >/10 } </33 & Map@3/34 Tile{ AsIs: e.Tail#1/29 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[31], context[32], " <Cooki", 7);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z3]);
            refalrts::reinit_char(context[0], 'e');
            refalrts::reinit_char(context[4], '1');
            refalrts::reinit_char(context[9], '>');
            refalrts::reinit_char(context[11], '/');
            refalrts::reinit_open_call(context[21]);
            refalrts::reinit_name(context[26], functions[efunc_Symb]);
            refalrts::reinit_close_call(context[10]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[21] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[29], context[30] );
            res = refalrts::splice_evar( res, context[33], context[34] );
            res = refalrts::splice_evar( res, context[0], context[10] );
            res = refalrts::splice_evar( res, context[31], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie2/26 s.new#16/16 )/10 e.new#15/27 >/1
            context[27] = context[24];
            context[28] = context[25];
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[26] ) )
              continue;
            // closed e.new#15 as range 27
            do {
              // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie2/26 # NoOffset/16 )/10 e.Tail#1/29 >/1
              context[29] = context[27];
              context[30] = context[28];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
                continue;
              // closed e.Tail#1 as range 29
              //DEBUG: e.Tail#1: 29

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Co"/31 Tile{ HalfReuse: 'o'/0 HalfReuse: 'k'/4 HalfReuse: 'i'/9 HalfReuse: 'e'/11 HalfReuse: '2'/21 HalfReuse: '>'/26 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[31], context[32], " <Co", 4);
              refalrts::reinit_char(context[0], 'o');
              refalrts::reinit_char(context[4], 'k');
              refalrts::reinit_char(context[9], 'i');
              refalrts::reinit_char(context[11], 'e');
              refalrts::reinit_char(context[21], '2');
              refalrts::reinit_char(context[26], '>');
              refalrts::reinit_open_call(context[16]);
              refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[16] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[0];
              res = refalrts::splice_evar( res, context[31], context[32] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 # Cookie2/26 s.Offset#2/16 )/10 e.Tail#1/29 >/1
            context[29] = context[27];
            context[30] = context[28];
            // closed e.Tail#1 as range 29
            //DEBUG: s.Offset#2: 16
            //DEBUG: e.Tail#1: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" <Cooki"/31 Tile{ HalfReuse: 'e'/0 HalfReuse: '2'/4 HalfReuse: '>'/9 HalfReuse: '/'/11 HalfReuse: </21 HalfReuse: & Symb/26 AsIs: s.Offset#2/16 HalfReuse: >/10 } </33 & Map@3/34 Tile{ AsIs: e.Tail#1/29 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[31], context[32], " <Cooki", 7);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z3]);
            refalrts::reinit_char(context[0], 'e');
            refalrts::reinit_char(context[4], '2');
            refalrts::reinit_char(context[9], '>');
            refalrts::reinit_char(context[11], '/');
            refalrts::reinit_open_call(context[21]);
            refalrts::reinit_name(context[26], functions[efunc_Symb]);
            refalrts::reinit_close_call(context[10]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[10] );
            refalrts::push_stack( vm, context[21] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[29], context[30] );
            res = refalrts::splice_evar( res, context[33], context[34] );
            res = refalrts::splice_evar( res, context[0], context[10] );
            res = refalrts::splice_evar( res, context[31], context[32] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 s.Number#2/26 # NoOffset/16 )/10 e.Tail#1/27 >/1
            context[27] = context[24];
            context[28] = context[25];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.Tail#1 as range 27
            //DEBUG: s.Number#2: 26
            //DEBUG: e.Tail#1: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Number#2/26 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & Symb/9 HalfReuse: s.Number2 #26/11 HalfReuse: >/21 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/27 AsIs: >/1 ]] }
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_open_call(context[4]);
            refalrts::reinit_name(context[9], functions[efunc_Symb]);
            refalrts::reinit_svar( context[11], context[26] );
            refalrts::reinit_close_call(context[21]);
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[21] );
            refalrts::push_stack( vm, context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            refalrts::splice_to_freelist_open( vm, context[21], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # Symbol/11 # Number/21 s.Number#2/26 s.Offset#2/16 )/10 e.Tail#1/27 >/1
          context[27] = context[24];
          context[28] = context[25];
          // closed e.Tail#1 as range 27
          //DEBUG: s.Number#2: 26
          //DEBUG: s.Offset#2: 16
          //DEBUG: e.Tail#1: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Number#2/26 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/29 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Number2 #26/9 HalfReuse: >/11 HalfReuse: '/'/21 } </30 & Symb/31 Tile{ AsIs: s.Offset#2/16 } >/32 </33 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/27 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[29], ' ');
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[26] );
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_char(context[21], '/');
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[0], context[21] );
          res = refalrts::splice_elem( res, context[29] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # Symbol/11 # Name/21 e.new#14/22 s.new#13/16 )/10 e.new#12/24 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[21] ) )
          continue;
        // closed e.new#14 as range 22
        // closed e.new#12 as range 24
        do {
          // </0 & Map@3/4 (/9 # Symbol/11 # Name/21 e.2#0/26 # NoOffset/16 )/10 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.2#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: e.2#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/9 HalfReuse: </11 HalfReuse: & DisplayName/21 AsIs: e.2#0/26 HalfReuse: >/16 HalfReuse: </10 } & Map@3/30 Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[30], functions[efunc_gen_Map_Z3]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '&');
          refalrts::reinit_char(context[9], ' ');
          refalrts::reinit_open_call(context[11]);
          refalrts::reinit_name(context[21], functions[efunc_DisplayName]);
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_open_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[30] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # Symbol/11 # Name/21 e.2#0/26 s.Offset#2/16 )/10 e.Tail#1/28 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.2#0 as range 26
        // closed e.Tail#1 as range 28
        //DEBUG: s.Offset#2: 16
        //DEBUG: e.2#0: 26
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/9 HalfReuse: </11 HalfReuse: & DisplayName/21 } Tile{ AsIs: e.2#0/26 } >/30 '/'/31 </32 & Symb/33 Tile{ AsIs: s.Offset#2/16 } >/34 </35 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_char(vm, context[31], '/');
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '&');
        refalrts::reinit_char(context[9], ' ');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[21], functions[efunc_DisplayName]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[30], context[33] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 (/9 # TkString/11 e.new#10/17 s.new#9/16 )/10 e.new#8/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_TkString], context[11] ) )
          continue;
        // closed e.new#10 as range 17
        // closed e.new#8 as range 19
        do {
          // </0 & Map@3/4 (/9 # TkString/11 e.1#0/21 # NoOffset/16 )/10 e.Tail#1/23 >/1
          context[21] = context[17];
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.1#0 as range 21
          // closed e.Tail#1 as range 23
          //DEBUG: e.1#0: 21
          //DEBUG: e.Tail#1: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map@1/9 } Tile{ AsIs: e.1#0/21 } Tile{ HalfReuse: >/11 } '\"'/25 Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[25], '\"');
          refalrts::reinit_char(context[0], '\"');
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z1]);
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_elem( res, context[25] );
          res = refalrts::splice_elem( res, context[11] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkString/11 e.1#0/21 s.Offset#2/16 )/10 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        // closed e.1#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.Offset#2: 16
        //DEBUG: e.1#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/16 {REMOVED TILE}
        //RESULT: Tile{ [[ } '\"'/25 </26 & Map@1/27 Tile{ AsIs: e.1#0/21 } >/28"\"/"/29 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Offset2 #16/9 HalfReuse: >/11 } </31 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[25], '\"');
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z1]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_chars(vm, context[29], context[30], "\"/", 2);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::update_name(context[4], functions[efunc_Symb]);
        refalrts::reinit_svar( context[9], context[16] );
        refalrts::reinit_close_call(context[11]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/9 s.new#9/11 s.new#11/21 e.new#12/17 s.new#10/16 )/10 e.new#8/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      // closed e.new#8 as range 19
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      // closed e.new#12 as range 17
      do {
        // </0 & Map@3/4 (/9 s.new#14/11 s.new#16/21 e.new#17/22 s.new#18/26 s.new#15/16 )/10 e.new#13/24 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        // closed e.new#13 as range 24
        if( ! refalrts::svar_right( context[26], context[22], context[23] ) )
          continue;
        // closed e.new#17 as range 22
        do {
          // </0 & Map@3/4 (/9 # TkVariable/11 s.new#21/21 e.new#23/27 s.new#22/26 s.new#20/16 )/10 e.new#19/29 >/1
          context[27] = context[22];
          context[28] = context[23];
          context[29] = context[24];
          context[30] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
            continue;
          // closed e.new#23 as range 27
          // closed e.new#19 as range 29
          do {
            // </0 & Map@3/4 (/9 # TkVariable/11 s.new#26/21 e.new#27/31 # NoDepth/26 s.new#25/16 )/10 e.new#24/33 >/1
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            context[34] = context[30];
            if( ! refalrts::ident_term( identifiers[ident_NoDepth], context[26] ) )
              continue;
            // closed e.new#27 as range 31
            // closed e.new#24 as range 33
            do {
              // </0 & Map@3/4 (/9 # TkVariable/11 s.Mode#2/21 e.3#0/35 # NoDepth/26 # NoOffset/16 )/10 e.Tail#1/37 >/1
              context[35] = context[31];
              context[36] = context[32];
              context[37] = context[33];
              context[38] = context[34];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
                continue;
              // closed e.3#0 as range 35
              // closed e.Tail#1 as range 37
              //DEBUG: s.Mode#2: 21
              //DEBUG: e.3#0: 35
              //DEBUG: e.Tail#1: 37

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} # TkVariable/11 s.Mode#2/21 {REMOVED TILE} # NoDepth/26 {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: s.Mode2 #21/4 HalfReuse: '.'/9 } Tile{ AsIs: e.3#0/35 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/37 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_svar( context[4], context[21] );
              refalrts::reinit_char(context[9], '.');
              refalrts::reinit_open_call(context[16]);
              refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[16] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[16];
              res = refalrts::splice_evar( res, context[35], context[36] );
              refalrts::splice_to_freelist_open( vm, context[9], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/9 # TkVariable/11 s.Mode#2/21 e.3#0/35 # NoDepth/26 s.Offset#2/16 )/10 e.Tail#1/37 >/1
            context[35] = context[31];
            context[36] = context[32];
            context[37] = context[33];
            context[38] = context[34];
            // closed e.3#0 as range 35
            // closed e.Tail#1 as range 37
            //DEBUG: s.Mode#2: 21
            //DEBUG: s.Offset#2: 16
            //DEBUG: e.3#0: 35
            //DEBUG: e.Tail#1: 37

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/16 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/39 Tile{ AsIs: s.Mode#2/21 } '.'/40 Tile{ AsIs: e.3#0/35 } Tile{ HalfReuse: '/'/26 } Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Offset2 #16/9 HalfReuse: >/11 } </41 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/37 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[39], ' ');
            refalrts::alloc_char(vm, context[40], '.');
            refalrts::alloc_open_call(vm, context[41]);
            refalrts::reinit_char(context[26], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[9], context[16] );
            refalrts::reinit_close_call(context[11]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[41] );
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[10];
            res = refalrts::splice_elem( res, context[41] );
            res = refalrts::splice_evar( res, context[0], context[11] );
            res = refalrts::splice_elem( res, context[26] );
            res = refalrts::splice_evar( res, context[35], context[36] );
            res = refalrts::splice_elem( res, context[40] );
            res = refalrts::splice_elem( res, context[21] );
            res = refalrts::splice_elem( res, context[39] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/9 # TkVariable/11 s.Mode#2/21 e.3#0/31 s.Depth#2/26 # NoOffset/16 )/10 e.Tail#1/33 >/1
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            context[34] = context[30];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.3#0 as range 31
            // closed e.Tail#1 as range 33
            //DEBUG: s.Mode#2: 21
            //DEBUG: s.Depth#2: 26
            //DEBUG: e.3#0: 31
            //DEBUG: e.Tail#1: 33

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#2/26 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/35 Tile{ AsIs: s.Mode#2/21 } '.'/36 Tile{ AsIs: e.3#0/31 } '#'/37 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Depth2 #26/9 HalfReuse: >/11 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/33 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[35], ' ');
            refalrts::alloc_char(vm, context[36], '.');
            refalrts::alloc_char(vm, context[37], '#');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[9], context[26] );
            refalrts::reinit_close_call(context[11]);
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[0], context[11] );
            res = refalrts::splice_elem( res, context[37] );
            res = refalrts::splice_evar( res, context[31], context[32] );
            res = refalrts::splice_elem( res, context[36] );
            res = refalrts::splice_elem( res, context[21] );
            res = refalrts::splice_elem( res, context[35] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkVariable/11 s.Mode#2/21 e.3#0/31 s.Depth#2/26 s.Offset#2/16 )/10 e.Tail#1/33 >/1
          context[31] = context[27];
          context[32] = context[28];
          context[33] = context[29];
          context[34] = context[30];
          // closed e.3#0 as range 31
          // closed e.Tail#1 as range 33
          //DEBUG: s.Mode#2: 21
          //DEBUG: s.Depth#2: 26
          //DEBUG: s.Offset#2: 16
          //DEBUG: e.3#0: 31
          //DEBUG: e.Tail#1: 33

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#2/26 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/35 Tile{ AsIs: s.Mode#2/21 } '.'/36 Tile{ AsIs: e.3#0/31 } '#'/37 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Depth2 #26/9 HalfReuse: >/11 } '/'/38 </39 & Symb/40 Tile{ AsIs: s.Offset#2/16 } >/41 </42 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/33 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[35], ' ');
          refalrts::alloc_char(vm, context[36], '.');
          refalrts::alloc_char(vm, context[37], '#');
          refalrts::alloc_char(vm, context[38], '/');
          refalrts::alloc_open_call(vm, context[39]);
          refalrts::alloc_name(vm, context[40], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[26] );
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[38], context[40] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_elem( res, context[35] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.new#21/21 e.new#23/27 s.new#24/31 s.new#22/26 s.new#20/16 )/10 e.new#19/29 >/1
        context[27] = context[22];
        context[28] = context[23];
        context[29] = context[24];
        context[30] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[11] ) )
          continue;
        // closed e.new#19 as range 29
        if( ! refalrts::svar_right( context[31], context[27], context[28] ) )
          continue;
        // closed e.new#23 as range 27
        do {
          // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.new#27/21 e.new#29/32 # NoDepth/31 s.new#28/26 s.new#26/16 )/10 e.new#25/34 >/1
          context[32] = context[27];
          context[33] = context[28];
          context[34] = context[29];
          context[35] = context[30];
          if( ! refalrts::ident_term( identifiers[ident_NoDepth], context[31] ) )
            continue;
          // closed e.new#29 as range 32
          // closed e.new#25 as range 34
          do {
            // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.new#32/21 e.new#33/36 # NoDepth/31 # NoOffset/26 s.new#31/16 )/10 e.new#30/38 >/1
            context[36] = context[32];
            context[37] = context[33];
            context[38] = context[34];
            context[39] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[26] ) )
              continue;
            // closed e.new#33 as range 36
            // closed e.new#30 as range 38
            do {
              // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/40 # NoDepth/31 # NoOffset/26 # NoOffset/16 )/10 e.Tail#1/42 >/1
              context[40] = context[36];
              context[41] = context[37];
              context[42] = context[38];
              context[43] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
                continue;
              // closed e.4#0 as range 40
              // closed e.Tail#1 as range 42
              //DEBUG: s.Mode#2: 21
              //DEBUG: e.4#0: 40
              //DEBUG: e.Tail#1: 42

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} # TkVariableCopy/11 s.Mode#2/21 {REMOVED TILE} # NoDepth/31 # NoOffset/26 {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: s.Mode2 #21/4 HalfReuse: '.'/9 } Tile{ AsIs: e.4#0/40 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
              refalrts::reinit_char(context[0], ' ');
              refalrts::reinit_svar( context[4], context[21] );
              refalrts::reinit_char(context[9], '.');
              refalrts::reinit_open_call(context[16]);
              refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[16] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[16];
              res = refalrts::splice_evar( res, context[40], context[41] );
              refalrts::splice_to_freelist_open( vm, context[9], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/40 # NoDepth/31 # NoOffset/26 s.CopyOffset#2/16 )/10 e.Tail#1/42 >/1
            context[40] = context[36];
            context[41] = context[37];
            context[42] = context[38];
            context[43] = context[39];
            // closed e.4#0 as range 40
            // closed e.Tail#1 as range 42
            //DEBUG: s.Mode#2: 21
            //DEBUG: s.CopyOffset#2: 16
            //DEBUG: e.4#0: 40
            //DEBUG: e.Tail#1: 42

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CopyOffset#2/16 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/44 Tile{ AsIs: s.Mode#2/21 } Tile{ HalfReuse: '.'/31 } Tile{ AsIs: e.4#0/40 } Tile{ HalfReuse: '/'/26 } Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.CopyOffset2 #16/9 HalfReuse: >/11 } </45 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[44], ' ');
            refalrts::alloc_open_call(vm, context[45]);
            refalrts::reinit_char(context[31], '.');
            refalrts::reinit_char(context[26], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[9], context[16] );
            refalrts::reinit_close_call(context[11]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[45] );
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[10];
            res = refalrts::splice_elem( res, context[45] );
            res = refalrts::splice_evar( res, context[0], context[11] );
            res = refalrts::splice_elem( res, context[26] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[31] );
            res = refalrts::splice_elem( res, context[21] );
            res = refalrts::splice_elem( res, context[44] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/36 # NoDepth/31 s.SampleOffset#2/26 # NoOffset/16 )/10 e.Tail#1/38 >/1
            context[36] = context[32];
            context[37] = context[33];
            context[38] = context[34];
            context[39] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.4#0 as range 36
            // closed e.Tail#1 as range 38
            //DEBUG: s.Mode#2: 21
            //DEBUG: s.SampleOffset#2: 26
            //DEBUG: e.4#0: 36
            //DEBUG: e.Tail#1: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SampleOffset#2/26 {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/40 Tile{ AsIs: s.Mode#2/21 } '.'/41 Tile{ AsIs: e.4#0/36 } Tile{ HalfReuse: '/'/31 } Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.SampleOffset2 #26/9 HalfReuse: >/11 } Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[40], ' ');
            refalrts::alloc_char(vm, context[41], '.');
            refalrts::reinit_char(context[31], '/');
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[9], context[26] );
            refalrts::reinit_close_call(context[11]);
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[11] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[0], context[11] );
            res = refalrts::splice_elem( res, context[31] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_elem( res, context[41] );
            res = refalrts::splice_elem( res, context[21] );
            res = refalrts::splice_elem( res, context[40] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/36 # NoDepth/31 s.SampleOffset#2/26 s.CopyOffset#2/16 )/10 e.Tail#1/38 >/1
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          context[39] = context[35];
          // closed e.4#0 as range 36
          // closed e.Tail#1 as range 38
          //DEBUG: s.Mode#2: 21
          //DEBUG: s.SampleOffset#2: 26
          //DEBUG: s.CopyOffset#2: 16
          //DEBUG: e.4#0: 36
          //DEBUG: e.Tail#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SampleOffset#2/26 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/40 Tile{ AsIs: s.Mode#2/21 } '.'/41 Tile{ AsIs: e.4#0/36 } '/'/42 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.SampleOffset2 #26/9 HalfReuse: >/11 } Tile{ HalfReuse: '/'/31 } </43 & Symb/44 Tile{ AsIs: s.CopyOffset#2/16 } >/45 </46 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[40], ' ');
          refalrts::alloc_char(vm, context[41], '.');
          refalrts::alloc_char(vm, context[42], '/');
          refalrts::alloc_open_call(vm, context[43]);
          refalrts::alloc_name(vm, context[44], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::alloc_open_call(vm, context[46]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[26] );
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_char(context[31], '/');
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_elem( res, context[16] );
          res = refalrts::splice_evar( res, context[43], context[44] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_elem( res, context[40] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.new#27/21 e.new#29/32 s.new#28/31 # NoOffset/26 s.new#26/16 )/10 e.new#25/34 >/1
          context[32] = context[27];
          context[33] = context[28];
          context[34] = context[29];
          context[35] = context[30];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[26] ) )
            continue;
          // closed e.new#29 as range 32
          // closed e.new#25 as range 34
          do {
            // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/36 s.Depth#2/31 # NoOffset/26 # NoOffset/16 )/10 e.Tail#1/38 >/1
            context[36] = context[32];
            context[37] = context[33];
            context[38] = context[34];
            context[39] = context[35];
            if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
              continue;
            // closed e.4#0 as range 36
            // closed e.Tail#1 as range 38
            //DEBUG: s.Mode#2: 21
            //DEBUG: s.Depth#2: 31
            //DEBUG: e.4#0: 36
            //DEBUG: e.Tail#1: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#2/21 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: s.Mode2 #21/4 HalfReuse: '.'/9 } Tile{ AsIs: e.4#0/36 } Tile{ HalfReuse: '#'/11 } </40 & Symb/41 Tile{ AsIs: s.Depth#2/31 HalfReuse: >/26 HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[40]);
            refalrts::alloc_name(vm, context[41], functions[efunc_Symb]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_svar( context[4], context[21] );
            refalrts::reinit_char(context[9], '.');
            refalrts::reinit_char(context[11], '#');
            refalrts::reinit_close_call(context[26]);
            refalrts::reinit_open_call(context[16]);
            refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[16] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[40] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[31];
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[11] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/36 s.Depth#2/31 # NoOffset/26 s.CopyOffset#2/16 )/10 e.Tail#1/38 >/1
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          context[39] = context[35];
          // closed e.4#0 as range 36
          // closed e.Tail#1 as range 38
          //DEBUG: s.Mode#2: 21
          //DEBUG: s.Depth#2: 31
          //DEBUG: s.CopyOffset#2: 16
          //DEBUG: e.4#0: 36
          //DEBUG: e.Tail#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#2/31 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/40 Tile{ AsIs: s.Mode#2/21 } '.'/41 Tile{ AsIs: e.4#0/36 } '#'/42 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Depth2 #31/9 HalfReuse: >/11 } '/'/43 </44 Tile{ HalfReuse: & Symb/26 AsIs: s.CopyOffset#2/16 } >/45 </46 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[40], ' ');
          refalrts::alloc_char(vm, context[41], '.');
          refalrts::alloc_char(vm, context[42], '#');
          refalrts::alloc_char(vm, context[43], '/');
          refalrts::alloc_open_call(vm, context[44]);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::alloc_open_call(vm, context[46]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[31] );
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_name(context[26], functions[efunc_Symb]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[44] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[26], context[16] );
          res = refalrts::splice_evar( res, context[43], context[44] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_elem( res, context[40] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/32 s.Depth#2/31 s.SampleOffset#2/26 # NoOffset/16 )/10 e.Tail#1/34 >/1
          context[32] = context[27];
          context[33] = context[28];
          context[34] = context[29];
          context[35] = context[30];
          if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
            continue;
          // closed e.4#0 as range 32
          // closed e.Tail#1 as range 34
          //DEBUG: s.Mode#2: 21
          //DEBUG: s.Depth#2: 31
          //DEBUG: s.SampleOffset#2: 26
          //DEBUG: e.4#0: 32
          //DEBUG: e.Tail#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#2/31 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } ' '/36 Tile{ AsIs: s.Mode#2/21 } '.'/37 Tile{ AsIs: e.4#0/32 } '#'/38 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Depth2 #31/9 HalfReuse: >/11 } '/'/39 </40 & Symb/41 Tile{ AsIs: s.SampleOffset#2/26 } >/42 Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/34 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[36], ' ');
          refalrts::alloc_char(vm, context[37], '.');
          refalrts::alloc_char(vm, context[38], '#');
          refalrts::alloc_char(vm, context[39], '/');
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::update_name(context[4], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[31] );
          refalrts::reinit_close_call(context[11]);
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_evar( res, context[39], context[41] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_elem( res, context[36] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/9 # TkVariableCopy/11 s.Mode#2/21 e.4#0/32 s.Depth#2/31 s.SampleOffset#2/26 s.CopyOffset#2/16 )/10 e.Tail#1/34 >/1
        context[32] = context[27];
        context[33] = context[28];
        context[34] = context[29];
        context[35] = context[30];
        // closed e.4#0 as range 32
        // closed e.Tail#1 as range 34
        //DEBUG: s.Mode#2: 21
        //DEBUG: s.Depth#2: 31
        //DEBUG: s.SampleOffset#2: 26
        //DEBUG: s.CopyOffset#2: 16
        //DEBUG: e.4#0: 32
        //DEBUG: e.Tail#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SampleOffset#2/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } ' '/36 Tile{ AsIs: s.Mode#2/21 } '.'/37 Tile{ AsIs: e.4#0/32 } '#'/38 </39 & Symb/40 Tile{ AsIs: s.Depth#2/31 } >/41 '/'/42 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.SampleOffset2 #26/9 HalfReuse: >/11 } '/'/43 </44 & Symb/45 Tile{ AsIs: s.CopyOffset#2/16 } >/46 </47 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/34 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[36], ' ');
        refalrts::alloc_char(vm, context[37], '.');
        refalrts::alloc_char(vm, context[38], '#');
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_char(vm, context[42], '/');
        refalrts::alloc_char(vm, context[43], '/');
        refalrts::alloc_open_call(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::update_name(context[4], functions[efunc_Symb]);
        refalrts::reinit_svar( context[9], context[26] );
        refalrts::reinit_close_call(context[11]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[43], context[45] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[38], context[40] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/9 # Symbol/11 # Identifier/21 e.new#15/22 s.new#14/16 )/10 e.new#13/24 >/1
      context[22] = context[17];
      context[23] = context[18];
      context[24] = context[19];
      context[25] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[21] ) )
        continue;
      // closed e.new#15 as range 22
      // closed e.new#13 as range 24
      do {
        // </0 & Map@3/4 (/9 # Symbol/11 # Identifier/21 e.2#0/26 # NoOffset/16 )/10 e.Tail#1/28 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[16] ) )
          continue;
        // closed e.2#0 as range 26
        // closed e.Tail#1 as range 28
        //DEBUG: e.2#0: 26
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/9 HalfReuse: </11 HalfReuse: & Map@2/21 } </30 & DisplayName/31 Tile{ AsIs: e.2#0/26 } >/32 >/33 Tile{ HalfReuse: </16 HalfReuse: & Map@3/10 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '#');
        refalrts::reinit_char(context[9], ' ');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[21], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/9 # Symbol/11 # Identifier/21 e.2#0/26 s.Offset#2/16 )/10 e.Tail#1/28 >/1
      context[26] = context[22];
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      // closed e.2#0 as range 26
      // closed e.Tail#1 as range 28
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.2#0: 26
      //DEBUG: e.Tail#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/9 HalfReuse: </11 HalfReuse: & Map@2/21 } </30 & DisplayName/31 Tile{ AsIs: e.2#0/26 } >/32 >/33 '/'/34 </35 & Symb/36 Tile{ AsIs: s.Offset#2/16 } >/37 </38 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_char(vm, context[34], '/');
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '#');
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[21], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[32], context[36] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 (/9 # Tile/11 e.0#0/12 )/10 e.Tail#1/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Tile], context[11] ) )
        continue;
      // closed e.0#0 as range 12
      // closed e.Tail#1 as range 14
      //DEBUG: e.0#0: 12
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'T'/4 HalfReuse: 'i'/9 HalfReuse: 'l'/11 }"e{"/16 </18 & TextFromExpr/19 Tile{ AsIs: e.0#0/12 } >/20" }"/21 </23 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "e{", 2);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], " }", 2);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], 'T');
      refalrts::reinit_char(context[9], 'i');
      refalrts::reinit_char(context[11], 'l');
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 (/9 # AsIs/11 e.0#0/12 )/10 e.Tail#1/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[11] ) )
        continue;
      // closed e.0#0 as range 12
      // closed e.Tail#1 as range 14
      //DEBUG: e.0#0: 12
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'A'/4 HalfReuse: 's'/9 HalfReuse: 'I'/11 }"s:"/16 </18 & TextFromExpr/19 Tile{ AsIs: e.0#0/12 } >/20 </21 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "s:", 2);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], 'A');
      refalrts::reinit_char(context[9], 's');
      refalrts::reinit_char(context[11], 'I');
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@3/4 (/9 # Reuse/11 e.0#0/12 )/10 e.Tail#1/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Reuse], context[11] ) )
        continue;
      // closed e.0#0 as range 12
      // closed e.Tail#1 as range 14
      //DEBUG: e.0#0: 12
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'R'/4 HalfReuse: 'e'/9 HalfReuse: 'u'/11 }"se:"/16 </18 & TextFromExpr/19 Tile{ AsIs: e.0#0/12 } >/20 </21 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "se:", 3);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_TextFromExpr]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], 'R');
      refalrts::reinit_char(context[9], 'e');
      refalrts::reinit_char(context[11], 'u');
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 (/9 # HalfReuse/11 e.0#0/12 )/10 e.Tail#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[11] ) )
      continue;
    // closed e.0#0 as range 12
    // closed e.Tail#1 as range 14
    //DEBUG: e.0#0: 12
    //DEBUG: e.Tail#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'H'/4 HalfReuse: 'a'/9 HalfReuse: 'l'/11 }"fReuse:"/16 </18 & TextFromExpr/19 Tile{ AsIs: e.0#0/12 } >/20 </21 Tile{ HalfReuse: & Map@3/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[16], context[17], "fReuse:", 7);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_TextFromExpr]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], 'H');
    refalrts::reinit_char(context[9], 'a');
    refalrts::reinit_char(context[11], 'l');
    refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 s.new#3/13 )/8 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#4 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@3/4 (/7 # LEFT-EDGE/13 )/8 e.Tail#1/14 >/1
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail#1 as range 14
        //DEBUG: e.Tail#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '['/7 HalfReuse: </13 HalfReuse: & Map@3/8 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
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

      // </0 & Map@3/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail#1/14 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
        continue;
      // closed e.Tail#1 as range 14
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: ']'/7 HalfReuse: </13 HalfReuse: & Map@3/8 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
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
      // </0 & Map@3/4 # RemovedTile/7 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" {REMOVED TILE"/11 Tile{ HalfReuse: '}'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
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

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & TextFromExpr\1*26/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@3/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & TextFromExpr\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
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
      // </0 & Map@4/4 (/7 s.Mode#2/13 (/16 e.2#0/14 )/17 s.FirstOffset#2/18 e.3#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.2#0 as range 14
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.3#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Mode#2: 13
      //DEBUG: e.2#0: 14
      //DEBUG: s.FirstOffset#2: 18
      //DEBUG: e.3#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#2/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3#0/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdVariableDebugTable/4 HalfReuse: s.Mode2 #13/7 } Tile{ AsIs: e.2#0/14 } Tile{ AsIs: s.FirstOffset#2/18 } Tile{ AsIs: )/17 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
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

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutVariableDebugTable\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@4/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PutVariableDebugTable\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
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
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 (/9 e.0#0/7 )/10 e.#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.0#0 as range 7
    // closed e.#0 as range 5
    //DEBUG: e.0#0: 7
    //DEBUG: e.#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.0#0/7 } Tile{ HalfReuse: )/9 } </11 Tile{ HalfReuse: & CollectStrings/10 AsIs: e.#0/5 AsIs: >/1 ]] }
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
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectStrings$1\1*1/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_CollectStrings_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & CollectStrings$1\1@0/1 } >/5 Tile{ ]] }
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
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoMapAccum@1/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
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
      // </0 & DoMapAccum@1/4 (/5 s.new#8/25 e.new#9/21 )/6 (/9 e.new#13/17 )/10 (/15 s.new#10/26 e.new#11/23 )/16 e.new#12/19 >/1
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
      // closed e.new#9 as range 21
      if( ! refalrts::svar_left( context[26], context[23], context[24] ) )
        continue;
      // closed e.new#11 as range 23
      do {
        // </0 & DoMapAccum@1/4 (/5 s.ContextOffset#2/25 e.1#0/27 )/6 (/9 e.Scanned#1/29 )/10 (/15 # Junk/26 e.2#0/31 )/16 e.Tail#1/33 >/1
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
        // closed e.1#0 as range 27
        // closed e.Scanned#1 as range 29
        // closed e.2#0 as range 31
        // closed e.Tail#1 as range 33
        //DEBUG: s.ContextOffset#2: 25
        //DEBUG: e.1#0: 27
        //DEBUG: e.Scanned#1: 29
        //DEBUG: e.2#0: 31
        //DEBUG: e.Tail#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset#2/25 AsIs: e.1#0/27 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/29 HalfReuse: (/10 HalfReuse: # Junk/15 } Tile{ AsIs: e.2#0/31 } Tile{ HalfReuse: )/26 } Tile{ AsIs: )/16 AsIs: e.Tail#1/33 AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@1/4 (/5 s.new#14/25 e.new#15/27 )/6 (/9 e.new#20/29 )/10 (/15 s.new#16/26 s.new#17/35 e.new#18/31 )/16 e.new#19/33 >/1
      context[27] = context[21];
      context[28] = context[22];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[23];
      context[32] = context[24];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.new#15 as range 27
      // closed e.new#20 as range 29
      // closed e.new#19 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      // closed e.new#18 as range 31
      do {
        // </0 & DoMapAccum@1/4 (/5 s.new#21/25 e.new#22/36 )/6 (/9 e.new#26/38 )/10 (/15 # E/26 s.new#23/35 e.new#24/40 )/16 e.new#25/42 >/1
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
        // closed e.new#22 as range 36
        // closed e.new#26 as range 38
        // closed e.new#24 as range 40
        // closed e.new#25 as range 42
        do {
          // </0 & DoMapAccum@1/4 (/5 s.ContextOffset#2/25 e.1#0/44 )/6 (/9 e.Scanned#1/46 )/10 (/15 # E/26 s.Num#2/35 )/16 e.Tail#1/48 >/1
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[42];
          context[49] = context[43];
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          // closed e.1#0 as range 44
          // closed e.Scanned#1 as range 46
          // closed e.Tail#1 as range 48
          //DEBUG: s.ContextOffset#2: 25
          //DEBUG: s.Num#2: 35
          //DEBUG: e.1#0: 44
          //DEBUG: e.Scanned#1: 46
          //DEBUG: e.Tail#1: 48

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Num#2/35 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset#2/25 AsIs: e.1#0/44 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/46 HalfReuse: (/10 HalfReuse: # E/15 HalfReuse: s.Num2 #35/26 } )/50 Tile{ AsIs: )/16 AsIs: e.Tail#1/48 AsIs: >/1 ]] }
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

        // </0 & DoMapAccum@1/4 (/5 s.ContextOffset#2/25 e.1#0/44 )/6 (/9 e.Scanned#1/46 )/10 (/15 # E/26 s.Num#2/35 e.3#0/48 )/16 e.Tail#1/50 >/1
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        // closed e.1#0 as range 44
        // closed e.Scanned#1 as range 46
        // closed e.3#0 as range 48
        // closed e.Tail#1 as range 50
        //DEBUG: s.ContextOffset#2: 25
        //DEBUG: s.Num#2: 35
        //DEBUG: e.1#0: 44
        //DEBUG: e.Scanned#1: 46
        //DEBUG: e.3#0: 48
        //DEBUG: e.Tail#1: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </52 Tile{ HalfReuse: & DoMapAccum$1=1@1/6 AsIs: (/9 AsIs: e.Scanned#1/46 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/50 } )/53 (/54 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 2/5 AsIs: s.ContextOffset#2/25 } >/55 Tile{ AsIs: e.1#0/44 } (/56 Tile{ Reuse: # CmdSave/26 AsIs: s.Num#2/35 } s.ContextOffset#2/25/57 Tile{ AsIs: )/16 } )/58 (/59 # E/60 s.ContextOffset#2/25/61 Tile{ AsIs: e.3#0/48 } )/62 Tile{ AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@1/4 (/5 s.ContextOffset#2/25 e.1#0/36 )/6 (/9 e.Scanned#1/38 )/10 (/15 s.S-or-T#2/26 s.Num#2/35 e.3#0/40 )/16 e.Tail#1/42 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[31];
      context[41] = context[32];
      context[42] = context[33];
      context[43] = context[34];
      // closed e.1#0 as range 36
      // closed e.Scanned#1 as range 38
      // closed e.3#0 as range 40
      // closed e.Tail#1 as range 42
      //DEBUG: s.ContextOffset#2: 25
      //DEBUG: s.S-or-T#2: 26
      //DEBUG: s.Num#2: 35
      //DEBUG: e.1#0: 36
      //DEBUG: e.Scanned#1: 38
      //DEBUG: e.3#0: 40
      //DEBUG: e.Tail#1: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.S-or-T#2/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: s.ContextOffset#2/25 AsIs: e.1#0/36 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/38 HalfReuse: (/10 HalfReuse: s.S-or-T2 #26/15 } Tile{ AsIs: s.Num#2/35 } Tile{ AsIs: e.3#0/40 } )/44 Tile{ AsIs: )/16 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
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

    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & MakeSavers=1\1*4/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
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
    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@1/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & MakeSavers=1\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_BuildString_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & BuildString@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BuildString@2/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 e.new#4/2 >/1
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
    // </0 & BuildString@2/4 (/7 e.X#0/11 )/8 s.X#0/9 s.X0#0/10 (/17 # Symbol/19 # Char/20 s.Value#1/21 )/18 e.Tail#1/13 >/1
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
    // closed e.X#0 as range 11
    // closed e.Tail#1 as range 13
    if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.X#0: 9
    //DEBUG: s.X0#0: 10
    //DEBUG: e.X#0: 11
    //DEBUG: e.Tail#1: 13
    //DEBUG: s.Value#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.X#0/9 {REMOVED TILE} (/17 # Symbol/19 {REMOVED TILE} s.Value#1/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString@2/4 AsIs: (/7 AsIs: e.X#0/11 HalfReuse: s.X0 #9/8 } Tile{ HalfReuse: )/20 } Tile{ AsIs: s.X0#0/10 } Tile{ HalfReuse: s.Value1 #21/18 AsIs: e.Tail#1/13 AsIs: >/1 ]] }
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
    // </0 & BuildString@2/4 (/7 e.X#0/11 )/8 s.X#0/9 s.X0#0/10 e.Tail#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.X#0 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: s.X#0: 9
    //DEBUG: s.X0#0: 10
    //DEBUG: e.X#0: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BuildString@2/4 {REMOVED TILE} s.X#0/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.X#0/11 HalfReuse: s.X0 #9/8 } Tile{ AsIs: s.X0#0/10 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tail#1/13 } Tile{ ]] }
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

  // </0 & BuildString@2/4 (/7 e.X#0/5 )/8 s.X#0/9 s.X0#0/10 e.dyn#1/2 >/1
  // closed e.X#0 as range 5
  // closed e.dyn#1 as range 2
  //DEBUG: s.X#0: 9
  //DEBUG: s.X0#0: 10
  //DEBUG: e.X#0: 5
  //DEBUG: e.dyn#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.X#0/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BuildString@0/4 AsIs: (/7 AsIs: e.X#0/5 HalfReuse: s.X0 #9/8 } Tile{ AsIs: s.X0#0/10 } )/11 Tile{ AsIs: e.dyn#1/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & MakeSavers=1\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
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
