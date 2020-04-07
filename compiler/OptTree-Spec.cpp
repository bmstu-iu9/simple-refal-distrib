// This file automatically generated from 'OptTree-Spec.ref'
// Don't edit! Edit 'OptTree-Spec.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1372363746_3676383312
#define COOKIE1_ 1372363746U
#define COOKIE2_ 3676383312U

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_u_u_Stepm_Start = 1,
  efunc_u_u_Mum_Aux = 2,
  efunc_u_u_Stepm_End = 3,
  efunc_u_u_FindMuPtr = 4,
  efunc_Add = 5,
  efunc_Div = 6,
  efunc_Mod = 7,
  efunc_Mul = 8,
  efunc_Residue = 9,
  efunc_Sub = 10,
  efunc_gen_u_u_Mum_Aux_S13B1 = 11,
  efunc_Type = 12,
  efunc_gen_Residue_C1 = 13,
  efunc_Map = 14,
  efunc_Apply = 15,
  efunc_Reduce = 16,
  efunc_DoMapAccum = 17,
  efunc_DoMapAccumm_Aux = 18,
  efunc_Fetch = 19,
  efunc_Pipe = 20,
  efunc_gen_Pipe_S2L1 = 21,
  efunc_gen_Pipe_S3L1 = 22,
  efunc_gen_MapAccum_Z2 = 23,
  efunc_MapAccum = 24,
  efunc_gen_OptTreem_Specm_ExtractOptInfo_A1L2 = 25,
  efunc_gen_OptTreem_Specm_ExtractOptInfo_A1 = 26,
  efunc_SpecUnit = 27,
  efunc_gen_OptTreem_Spec_S3A1 = 28,
  efunc_gen_SpecUnit_S1A1 = 29,
  efunc_SpecSentence = 30,
  efunc_gen_SpecSentence_A2 = 31,
  efunc_SpecResult = 32,
  efunc_gen_SpecSentence_A1L1A1 = 33,
  efunc_gen_SpecSentence_A1L1 = 34,
  efunc_gen_SpecSentence_A1 = 35,
  efunc_SpecTerm = 36,
  efunc_gen_MapAccum_Z1 = 37,
  efunc_gen_SpecTerm_S1C1 = 38,
  efunc_IsColdArg = 39,
  efunc_gen_SpecTerm_S1A2 = 40,
  efunc_SpecCall = 41,
  efunc_gen_SpecTerm_S2A1 = 42,
  efunc_gen_SpecTerm_S3A1 = 43,
  efunc_gen_SpecTerm_S4A1 = 44,
  efunc_gen_SpecTerm_S5A1 = 45,
  efunc_gen_SpecCall_B1S1B1S2B1S2B1 = 46,
  efunc_IsSoundBody = 47,
  efunc_gen_SpecCall_B1S1B1S2B1S2A2 = 48,
  efunc_Specm_PrepareSpecializedFuncBody = 49,
  efunc_Specm_RenameGenericMatch = 50,
  efunc_ExtractVariables = 51,
  efunc_gen_SpecCall_B1S1B1S2B1S2A1 = 52,
  efunc_Specm_FindInSignatures = 53,
  efunc_gen_SpecCall_B1S1B1S2B1 = 54,
  efunc_gen_SpecCall_B1S1B1S2A1 = 55,
  efunc_Specm_PrepareCallOrPattern = 56,
  efunc_Specm_IsTrivialSignature = 57,
  efunc_gen_SpecCall_B1S1B1 = 58,
  efunc_gen_SpecCall_B1S1C1 = 59,
  efunc_IsActiveMatches = 60,
  efunc_gen_SpecCall_B1S1A2 = 61,
  efunc_Specm_PrepareSignature = 62,
  efunc_gen_SpecCall_B1 = 63,
  efunc_GenericMatchm_Wrapper = 64,
  efunc_IsActiveExpr = 65,
  efunc_gen_Reduce_Z1 = 66,
  efunc_gen_Reduce_Z2 = 67,
  efunc_gen_IsSoundBody_B1 = 68,
  efunc_FindClosuresInPatternsm_Body = 69,
  efunc_FindClosuresInPatternsm_Pattern = 70,
  efunc_gen_Map_Z1 = 71,
  efunc_gen_Map_Z2 = 72,
  efunc_gen_Map_Z3 = 73,
  efunc_gen_Reduce_Z3 = 74,
  efunc_Specm_RenameSignatureVars = 75,
  efunc_FindReplacem_ExprList = 76,
  efunc_gen_Specm_RenameSignatureVars_A2L1S2A1 = 77,
  efunc_NewVarName = 78,
  efunc_gen_Specm_RenameSignatureVars_A2L1S3A1 = 79,
  efunc_gen_Specm_RenameSignatureVars_A2L1S4A1 = 80,
  efunc_gen_Specm_RenameSignatureVars_A2L1 = 81,
  efunc_gen_Specm_RenameSignatureVars_A2 = 82,
  efunc_ExtractVariablesm_Expr = 83,
  efunc_gen_Specm_RenameSignatureVars_A1L1 = 84,
  efunc_gen_Specm_RenameSignatureVars_A1 = 85,
  efunc_gen_Reduce_Z4 = 86,
  efunc_gen_Specm_PrepareCallOrPattern_A3L1 = 87,
  efunc_gen_Specm_PrepareCallOrPattern_A3 = 88,
  efunc_WrapEVar = 89,
  efunc_gen_Specm_PrepareCallOrPattern_A2 = 90,
  efunc_gen_Specm_PrepareCallOrPattern_A2L1 = 91,
  efunc_RemoveRepeatings = 92,
  efunc_ExtractVariablesm_Exprm_Wrapper = 93,
  efunc_gen_Specm_PrepareCallOrPattern_A1 = 94,
  efunc_gen_Specm_PrepareCallOrPattern_A1L1 = 95,
  efunc_FindReplacem_GenericMatchesm_Val = 96,
  efunc_gen_Specm_RenameGenericMatch_L1A1 = 97,
  efunc_gen_Reduce_Z5 = 98,
  efunc_gen_Specm_RenameGenericMatch_A1L1 = 99,
  efunc_gen_Specm_RenameGenericMatch_A1 = 100,
  efunc_Specm_PrepareResult = 101,
  efunc_Specm_PrepareConditions = 102,
  efunc_gen_Specm_PrepareSpecializedFuncBody_L1A3L1 = 103,
  efunc_gen_Specm_PrepareSpecializedFuncBody_L1A3 = 104,
  efunc_MapGenericMatches = 105,
  efunc_gen_Specm_PrepareSpecializedFuncBody_L1A2 = 106,
  efunc_gen_Specm_PrepareSpecializedFuncBody_L1A1 = 107,
  efunc_gen_Reduce_Z6 = 108,
  efunc_gen_Specm_PrepareConditions_A1 = 109,
  efunc_gen_Specm_PrepareConditions_A1L1 = 110,
  efunc_FindReplacem_Expr = 111,
  efunc_gen_Specm_PrepareResult_A1L1 = 112,
  efunc_gen_Specm_PrepareResult_A1 = 113,
  efunc_SVarm_IsInSet = 114,
  efunc_FindAndFormatVarTerm = 115,
  efunc_IsSpecStaticVar = 116,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1L1B1 = 117,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1L1 = 118,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1 = 119,
  efunc_gen_GenericMatchm_Wrapper_B1 = 120,
  efunc_GenericMatch = 121,
  efunc_gen_Reduce_Z7 = 122,
  efunc_gen_Map_Z4 = 123,
  efunc_gen_MapGenericMatches_A1L1 = 124,
  efunc_gen_MapGenericMatches_A1 = 125,
  efunc_gen_Map_Z5 = 126,
  efunc_gen_Map_Z6 = 127,
  efunc_FindReplacem_Term = 128,
  efunc_gen_FindReplacem_Expr_S5A1L1 = 129,
  efunc_gen_FindReplacem_Expr_S5A1 = 130,
  efunc_gen_DoMapAccum_Z1 = 131,
  efunc_gen_IsActiveMatches_L1D2 = 132,
  efunc_gen_IsActiveExpr_L1D4 = 133,
  efunc_gen_FindClosuresInPatternsm_Body_L1L1D1 = 134,
  efunc_gen_FindClosuresInPatternsm_Body_L1D1 = 135,
  efunc_FindClosuresInPatternsm_Term = 136,
  efunc_gen_Specm_PrepareSignature_L1D1 = 137,
  efunc_gen_Specm_IsTrivialSignature_L1D3 = 138,
  efunc_gen_Specm_RenameGenericMatch_L1D1 = 139,
  efunc_gen_Specm_PrepareSpecializedFuncBody_L1D1 = 140,
  efunc_gen_IsColdArg_L1D6 = 141,
  efunc_FindAndFormatVarTermm_Aux = 142,
  efunc_gen_FindReplacem_GenericMatchesm_Val_L1D1 = 143,
  efunc_gen_FindReplacem_ExprList_L1D1 = 144,
  efunc_gen_DoMapAccumm_Aux_Z1 = 145,
  efunc_gen_SpecResult_S2L1D1 = 146,
  efunc_gen_DoMapAccum_Z2 = 147,
  efunc_gen_DoMapAccumm_Aux_Z2 = 148,
  efunc_gen_OptTreem_Specm_ExtractOptInfo_A1L1D2 = 149,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_NoOpt = 6,
  ident_Spec = 7,
  ident_Function = 8,
  ident_Sentences = 9,
  ident_OptSpec = 10,
  ident_Condition = 11,
  ident_CallBrackets = 12,
  ident_Symbol = 13,
  ident_Name = 14,
  ident_ClosureBrackets = 15,
  ident_Brackets = 16,
  ident_ADTm_Brackets = 17,
  ident_True = 18,
  ident_ClosureBrackects = 19,
  ident_ColdCallBrackets = 20,
  ident_SUF = 21,
  ident_GNm_Local = 22,
  ident_False = 23,
  ident_Found = 24,
  ident_NotFound = 25,
  ident_Clear = 26,
  ident_TkVariable = 27,
  ident_GhostBrackets = 28,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Mu/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mu_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
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
    // </7 & Mu?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & __Mu-Aux$13:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux$13:1/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
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
    // </0 & __Mu-Aux$13:1/4 s.new#4/5 s.new#5/6 s.new#6/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    do {
      // </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 >/1
      if( ! refalrts::char_term( 'F', context[5] ) )
        continue;
      //DEBUG: s.SubType#2: 6
      //DEBUG: s.FnPtr#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.SubType#2: 6
    //DEBUG: s.FnName#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[9], 3676383312UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1372363746UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux$13:1/4 'B'/5 s.0#2/6 (/7 e.FnName#2/9 )/8 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_term( 'B', context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FnName#2 as range 9
  //DEBUG: s.0#2: 6
  //DEBUG: e.FnName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
  refalrts::reinit_number(context[5], 1372363746UL);
  refalrts::reinit_number(context[7], 3676383312UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", COOKIE1_, COOKIE2_, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & __Mu-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux/4 s.new#2/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    do {
      // </0 & __Mu-Aux/4 '+'/5 >/1
      if( ! refalrts::char_term( '+', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '/'/5 >/1
      if( ! refalrts::char_term( '/', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '%'/5 >/1
      if( ! refalrts::char_term( '%', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '*'/5 >/1
      if( ! refalrts::char_term( '*', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '?'/5 >/1
      if( ! refalrts::char_term( '?', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '-'/5 >/1
      if( ! refalrts::char_term( '-', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Sub]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k43_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k47_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k37_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k42_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k63_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_m_], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name(context[1], functions[efunc_Sub]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", COOKIE1_, COOKIE2_, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Residue/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Residue_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
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
    // </7 & Residue?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


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
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map/13 t.Fn#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
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


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
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


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


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
  res = refalrts::splice_evar( res, context[5], context[5] );
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
    res = refalrts::splice_evar( res, context[8], context[8] );
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
  res = refalrts::splice_evar( res, context[5], context[5] );
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
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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


static refalrts::FnResult func_gen_OptTreem_Specm_ExtractOptInfo_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & OptTree-Spec-ExtractOptInfo:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-ExtractOptInfo:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 >/1
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
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Spec-ExtractOptInfo:1/4 (/7 e.AST#2/18 )/8 (/11 e.Names#2/20 )/12 (/15 e.Info#2/22 )/16 # NoOpt/17 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[17] ) )
      continue;
    // closed e.AST#2 as range 18
    // closed e.Names#2 as range 20
    // closed e.Info#2 as range 22
    //DEBUG: e.AST#2: 18
    //DEBUG: e.Names#2: 20
    //DEBUG: e.Info#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Names#2/20 )/12 (/15 e.Info#2/22 {REMOVED TILE} # NoOpt/17 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: )/7 } Tile{ AsIs: )/16 } Tile{ AsIs: e.AST#2/18 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::link_brackets( context[0], context[16] );
    refalrts::link_brackets( context[4], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-ExtractOptInfo:1/4 (/7 e.AST#2/5 )/8 (/11 e.Names#2/9 )/12 (/15 e.Info#2/13 )/16 s.OptSpec#3/17 >/1
  // closed e.AST#2 as range 5
  // closed e.Names#2 as range 9
  // closed e.Info#2 as range 13
  //DEBUG: s.OptSpec#3: 17
  //DEBUG: e.AST#2: 5
  //DEBUG: e.Names#2: 9
  //DEBUG: e.Info#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-ExtractOptInfo:1/4 (/7 {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} s.OptSpec#3/17 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.Names#2/9 AsIs: )/12 } Tile{ AsIs: e.Info#2/13 } Tile{ AsIs: )/16 } Tile{ AsIs: e.AST#2/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::link_brackets( context[8], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_ExtractOptInfo_B1("OptTree-Spec-ExtractOptInfo:1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_ExtractOptInfo_B1);


static refalrts::FnResult func_gen_OptTreem_Specm_ExtractOptInfo_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-Spec-ExtractOptInfo=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-ExtractOptInfo=1/4 s.new#1/5 (/8 (/12 e.new#2/10 )/13 e.new#3/6 )/9 e.new#4/2 >/1
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
  context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#2 as range 10
  // closed e.new#3 as range 6
  // closed e.new#4 as range 2
  do {
    // </0 & OptTree-Spec-ExtractOptInfo=1/4 # NoOpt/5 (/8 (/12 e.Names#2/14 )/13 e.Info#2/16 )/9 e.AST#2/18 >/1
    context[14] = context[10];
    context[15] = context[11];
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;
    // closed e.Names#2 as range 14
    // closed e.Info#2 as range 16
    // closed e.AST#2 as range 18
    //DEBUG: e.Names#2: 14
    //DEBUG: e.Info#2: 16
    //DEBUG: e.AST#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/12 e.Names#2/14 )/13 e.Info#2/16 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: )/5 HalfReuse: )/8 } Tile{ AsIs: e.AST#2/18 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[5]);
    refalrts::reinit_close_bracket(context[8]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[4], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-ExtractOptInfo=1/4 s.OptSpec#1/5 (/8 (/12 e.Names#2/10 )/13 e.Info#2/6 )/9 e.AST#2/2 >/1
  // closed e.Names#2 as range 10
  // closed e.Info#2 as range 6
  // closed e.AST#2 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.Names#2: 10
  //DEBUG: e.Info#2: 6
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-ExtractOptInfo=1/4 s.OptSpec#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: (/12 AsIs: e.Names#2/10 AsIs: )/13 AsIs: e.Info#2/6 AsIs: )/9 } Tile{ AsIs: e.AST#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_ExtractOptInfo_A1("OptTree-Spec-ExtractOptInfo=1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_ExtractOptInfo_A1);


static refalrts::FnResult func_gen_OptTreem_Specm_ExtractOptInfo_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & OptTree-Spec-ExtractOptInfo=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-ExtractOptInfo=1\1/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 t.new#3/13 >/1
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
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Spec-ExtractOptInfo=1\1/4 (/7 (/11 e.Names#2/15 )/12 e.Info#2/17 )/8 (/13 # Spec/21 t.Name#2/22 e.Pattern#2/19 )/14 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left( identifiers[ident_Spec], context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.Names#2 as range 15
    // closed e.Info#2 as range 17
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Pattern#2 as range 19
    //DEBUG: e.Names#2: 15
    //DEBUG: e.Info#2: 17
    //DEBUG: t.Name#2: 22
    //DEBUG: e.Pattern#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Spec-ExtractOptInfo=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Names#2/15 } t.Name#2/22/24 Tile{ AsIs: )/12 AsIs: e.Info#2/17 HalfReuse: (/8 } Tile{ AsIs: t.Name#2/22 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Pattern#2/19 } Tile{ HalfReuse: )/21 } Tile{ AsIs: )/14 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-ExtractOptInfo=1\1/4 (/7 (/11 e.Names#2/9 )/12 e.Info#2/5 )/8 t.Other#2/13 >/1
  // closed e.Names#2 as range 9
  // closed e.Info#2 as range 5
  //DEBUG: t.Other#2: 13
  //DEBUG: e.Names#2: 9
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-ExtractOptInfo=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Names#2/9 AsIs: )/12 AsIs: e.Info#2/5 AsIs: )/8 AsIs: t.Other#2/13 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_ExtractOptInfo_A1L1("OptTree-Spec-ExtractOptInfo=1\\1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_ExtractOptInfo_A1L1);


static refalrts::FnResult func_gen_OptTreem_Specm_ExtractOptInfo_A1L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & OptTree-Spec-ExtractOptInfo=1\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-ExtractOptInfo=1\2/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 t.new#3/13 >/1
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
  // closed e.new#1 as range 9
  // closed e.new#2 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Spec-ExtractOptInfo=1\2/4 (/7 (/11 e.Names#2/15 )/12 e.Info-B#2/26 (/32 t.Name#2/38 (/36 e.Pattern#2/34 )/37 )/33 e.Info-E#2/28 )/8 (/13 # Function/21 s.ScopeClass#2/22 t.Name#2/23 # Sentences/25 e.Body#2/19 )/14 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left( identifiers[ident_Function], context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.Names#2 as range 15
    if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::ident_left( identifiers[ident_Sentences], context[19], context[20] );
    if( ! context[25] )
      continue;
    // closed e.Body#2 as range 19
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[28] = context[17];
      context[29] = context[18];
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[30], context[31] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[39] = refalrts::repeated_stvar_left( vm, context[38], context[23], context[30], context[31] );
      if( ! context[39] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Pattern#2 as range 34
      // closed e.Info-E#2 as range 28
      //DEBUG: e.Names#2: 15
      //DEBUG: s.ScopeClass#2: 22
      //DEBUG: t.Name#2: 23
      //DEBUG: e.Body#2: 19
      //DEBUG: e.Info-B#2: 26
      //DEBUG: e.Pattern#2: 34
      //DEBUG: e.Info-E#2: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Names#2/15 AsIs: )/12 AsIs: e.Info-B#2/26 AsIs: (/32 AsIs: t.Name#2/38 AsIs: (/36 AsIs: e.Pattern#2/34 AsIs: )/37 HalfReuse: (/33 } e.Body#2/19/40 Tile{ HalfReuse: )/0 HalfReuse: 1/4 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Info-E#2/28 } Tile{ AsIs: )/8 AsIs: (/13 AsIs: # Function/21 AsIs: s.ScopeClass#2/22 AsIs: t.Name#2/23 AsIs: # Sentences/25 AsIs: e.Body#2/19 AsIs: )/14 } Tile{ ]] }
      refalrts::copy_evar(vm, context[40], context[41], context[19], context[20]);
      refalrts::reinit_open_bracket(context[33]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[32], context[1] );
      refalrts::link_brackets( context[33], context[0] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[7], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-ExtractOptInfo=1\2/4 (/7 (/11 e.Names#2/9 )/12 e.Info#2/5 )/8 t.Other#2/13 >/1
  // closed e.Names#2 as range 9
  // closed e.Info#2 as range 5
  //DEBUG: t.Other#2: 13
  //DEBUG: e.Names#2: 9
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-ExtractOptInfo=1\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Names#2/9 AsIs: )/12 AsIs: e.Info#2/5 AsIs: )/8 AsIs: t.Other#2/13 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_ExtractOptInfo_A1L2("OptTree-Spec-ExtractOptInfo=1\\2", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_ExtractOptInfo_A1L2);


static refalrts::FnResult func_OptTreem_Specm_ExtractOptInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-Spec-ExtractOptInfo/4 s.OptSpec#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-Spec-ExtractOptInfo=1/4 AsIs: s.OptSpec#1/5 } </6 & Fetch/7 </8 & MapAccum@2/9 (/10 (/11 )/12 )/13 Tile{ AsIs: e.AST#1/2 } >/14 (/15 & MapAccum/16 & OptTree-Spec-ExtractOptInfo=1\2/17 )/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_MapAccum_Z2]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_OptTreem_Specm_ExtractOptInfo_A1L2]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Specm_ExtractOptInfo_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_ExtractOptInfo("OptTree-Spec-ExtractOptInfo", 0U, 0U, func_OptTreem_Specm_ExtractOptInfo);


static refalrts::FnResult func_gen_OptTreem_Spec_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & OptTree-Spec$3=1/4 (/7 e.Names#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.AST#2/2 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Names#1 as range 5
  // closed e.SpecInfo#2 as range 9
  // closed e.NewFunctions#2 as range 13
  // closed e.AST#2 as range 2
  //DEBUG: e.Names#1: 5
  //DEBUG: e.SpecInfo#2: 9
  //DEBUG: e.NewFunctions#2: 13
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Names#1/5 AsIs: )/8 } Tile{ AsIs: e.SpecInfo#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: e.NewFunctions#2/13 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[4], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Spec_S3A1("OptTree-Spec$3=1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Spec_S3A1);


static refalrts::FnResult func_OptTreem_Spec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptTree-Spec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & OptTree-Spec/4 # NoOpt/5 (/8 e.SpecInfo#1/10 )/9 e.AST#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;
    // closed e.SpecInfo#1 as range 10
    // closed e.AST#1 as range 12
    //DEBUG: e.SpecInfo#1: 10
    //DEBUG: e.AST#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Spec/4 # NoOpt/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.SpecInfo#1/10 AsIs: )/9 } Tile{ AsIs: e.AST#1/12 } Tile{ ]] }
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

  // </0 & OptTree-Spec/4 # OptSpec/5 (/8 (/12 e.new#5/10 )/13 e.new#6/6 )/9 e.new#4/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_OptSpec], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#5 as range 10
  // closed e.new#6 as range 6
  // closed e.new#4 as range 2
  do {
    // </0 & OptTree-Spec/4 # OptSpec/5 (/8 (/12 )/13 )/9 e.AST#1/14 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.AST#1 as range 14
    //DEBUG: e.AST#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Spec/4 # OptSpec/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: (/12 AsIs: )/13 AsIs: )/9 } Tile{ AsIs: e.AST#1/14 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec/4 # OptSpec/5 (/8 (/12 e.Names#1/10 )/13 e.SpecInfo#1/6 )/9 e.AST#1/2 >/1
  // closed e.Names#1 as range 10
  // closed e.SpecInfo#1 as range 6
  // closed e.AST#1 as range 2
  //DEBUG: e.Names#1: 10
  //DEBUG: e.SpecInfo#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </5 HalfReuse: & OptTree-Spec$3=1/8 AsIs: (/12 AsIs: e.Names#1/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & MapAccum/4 } & SpecUnit/14 (/15 Tile{ AsIs: e.SpecInfo#1/6 } (/16 )/17 Tile{ AsIs: )/9 AsIs: e.AST#1/2 AsIs: >/1 } >/18 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_SpecUnit]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_open_call(context[5]);
  refalrts::reinit_name(context[8], functions[efunc_gen_OptTreem_Spec_S3A1]);
  refalrts::update_name(context[4], functions[efunc_MapAccum]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[9] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Spec("OptTree-Spec", 0U, 0U, func_OptTreem_Spec);


static refalrts::FnResult func_gen_SpecUnit_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SpecUnit$1=1/4 s.ScopeClass#1/5 t.Name#1/6 (/10 e.SpecInfo#2/8 (/14 e.NewFunctions#2/12 )/15 )/11 e.Sentences#2/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_right( context[12], context[13], context[8], context[9] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.SpecInfo#2 as range 8
  // closed e.NewFunctions#2 as range 12
  // closed e.Sentences#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: t.Name#1: 6
  //DEBUG: e.SpecInfo#2: 8
  //DEBUG: e.NewFunctions#2: 12
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/10 AsIs: e.SpecInfo#2/8 AsIs: (/14 AsIs: e.NewFunctions#2/12 AsIs: )/15 AsIs: )/11 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: t.Name#1/6 } # Sentences/16 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[16], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecUnit_S1A1("SpecUnit$1=1", COOKIE1_, COOKIE2_, func_gen_SpecUnit_S1A1);


static refalrts::FnResult func_SpecUnit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & SpecUnit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecUnit/4 (/7 e.new#1/5 (/11 e.new#2/9 )/12 )/8 t.new#3/13 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SpecUnit/4 (/7 e.SpecInfo#1/15 (/11 e.NewFunctions#1/17 )/12 )/8 (/13 # Function/21 s.ScopeClass#1/22 t.Name#1/23 # Sentences/25 e.Sentences#1/19 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left( identifiers[ident_Function], context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.SpecInfo#1 as range 15
    // closed e.NewFunctions#1 as range 17
    if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::ident_left( identifiers[ident_Sentences], context[19], context[20] );
    if( ! context[25] )
      continue;
    // closed e.Sentences#1 as range 19
    //DEBUG: e.SpecInfo#1: 15
    //DEBUG: e.NewFunctions#1: 17
    //DEBUG: s.ScopeClass#1: 22
    //DEBUG: t.Name#1: 23
    //DEBUG: e.Sentences#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecUnit$1=1/21 AsIs: s.ScopeClass#1/22 AsIs: t.Name#1/23 HalfReuse: </25 } Tile{ HalfReuse: & MapAccum/0 Reuse: & SpecSentence/4 AsIs: (/7 AsIs: e.SpecInfo#1/15 AsIs: (/11 AsIs: e.NewFunctions#1/17 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Sentences#1/19 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[21], functions[efunc_gen_SpecUnit_S1A1]);
    refalrts::reinit_open_call(context[25]);
    refalrts::reinit_name(context[0], functions[efunc_MapAccum]);
    refalrts::update_name(context[4], functions[efunc_SpecSentence]);
    refalrts::reinit_close_call(context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecUnit/4 (/7 e.SpecInfo#1/5 (/11 e.NewFunctions#1/9 )/12 )/8 t.Other#1/13 >/1
  // closed e.SpecInfo#1 as range 5
  // closed e.NewFunctions#1 as range 9
  //DEBUG: t.Other#1: 13
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SpecUnit/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/11 AsIs: e.NewFunctions#1/9 AsIs: )/12 AsIs: )/8 AsIs: t.Other#1/13 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecUnit("SpecUnit", COOKIE1_, COOKIE2_, func_SpecUnit);


static refalrts::FnResult func_gen_SpecSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & SpecSentence=2/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 (/15 e.SpecInfo#3/13 (/19 e.NewFunctions#3/17 )/20 )/16 e.Result#3/2 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.SpecInfo#3 as range 13
  // closed e.NewFunctions#3 as range 17
  // closed e.Result#3 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.SpecInfo#3: 13
  //DEBUG: e.NewFunctions#3: 17
  //DEBUG: e.Result#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: e.SpecInfo#3/13 AsIs: (/19 AsIs: e.NewFunctions#3/17 AsIs: )/20 AsIs: )/16 } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#2/9 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Result#3/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecSentence_A2("SpecSentence=2", COOKIE1_, COOKIE2_, func_gen_SpecSentence_A2);


static refalrts::FnResult func_gen_SpecSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & SpecSentence=1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.SpecInfo#2/13 (/19 e.NewFunctions#2/17 )/20 )/16 e.Conditions#2/2 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.SpecInfo#2 as range 13
  // closed e.NewFunctions#2 as range 17
  // closed e.Conditions#2 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.SpecInfo#2: 13
  //DEBUG: e.NewFunctions#2: 17
  //DEBUG: e.Conditions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecSentence=2/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/2 } )/21 </22 Tile{ HalfReuse: & SpecResult/12 AsIs: (/15 AsIs: e.SpecInfo#2/13 AsIs: (/19 AsIs: e.NewFunctions#2/17 AsIs: )/20 AsIs: )/16 } Tile{ AsIs: e.Result#1/9 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecSentence_A2]);
  refalrts::reinit_name(context[12], functions[efunc_SpecResult]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecSentence_A1("SpecSentence=1", COOKIE1_, COOKIE2_, func_gen_SpecSentence_A1);


static refalrts::FnResult func_gen_SpecSentence_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & SpecSentence=1\1=1/4 (/7 e.Name#2/5 )/8 (/11 e.ConditionPattern#2/9 )/12 (/15 e.SpecInfo#3/13 (/19 e.NewFunctions#3/17 )/20 )/16 e.ConditionResult#3/2 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Name#2 as range 5
  // closed e.ConditionPattern#2 as range 9
  // closed e.SpecInfo#3 as range 13
  // closed e.NewFunctions#3 as range 17
  // closed e.ConditionResult#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: e.ConditionPattern#2: 9
  //DEBUG: e.SpecInfo#3: 13
  //DEBUG: e.NewFunctions#3: 17
  //DEBUG: e.ConditionResult#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: e.SpecInfo#3/13 AsIs: (/19 AsIs: e.NewFunctions#3/17 AsIs: )/20 AsIs: )/16 } Tile{ HalfReuse: (/0 HalfReuse: # Condition/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ConditionResult#3/2 } Tile{ AsIs: )/12 } (/21 Tile{ AsIs: e.ConditionPattern#2/9 } )/22 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Condition]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecSentence_A1L1A1("SpecSentence=1\\1=1", COOKIE1_, COOKIE2_, func_gen_SpecSentence_A1L1A1);


static refalrts::FnResult func_gen_SpecSentence_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & SpecSentence=1\1/4 (/7 e.SpecInfo#1/5 )/8 (/11 e.NewFunctions#1/9 )/12 (/15 e.SpecInfo#1/38 (/36 e.NewFunctions#1/40 )/37 )/16 (/19 # Condition/21 (/24 e.Name#2/22 )/25 (/28 e.ConditionResult#2/26 )/29 (/32 e.ConditionPattern#2/30 )/33 )/20 >/1
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
  context[21] = refalrts::ident_left( identifiers[ident_Condition], context[17], context[18] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[17], context[18] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[17], context[18] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_right( context[34], context[35], context[13], context[14] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecInfo#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[5], context[6], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewFunctions#1 as range 9
  if( ! refalrts::repeated_evar_left( vm, context[40], context[41], context[9], context[10], context[34], context[35] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[34], context[35] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 22
  // closed e.ConditionResult#2 as range 26
  // closed e.ConditionPattern#2 as range 30
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 9
  //DEBUG: e.Name#2: 22
  //DEBUG: e.ConditionResult#2: 26
  //DEBUG: e.ConditionPattern#2: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SpecSentence=1\1/4 (/7 e.SpecInfo#1/5 )/8 (/11 e.NewFunctions#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/33 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 HalfReuse: & SpecSentence=1\1=1/21 AsIs: (/24 AsIs: e.Name#2/22 AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.ConditionPattern#2/30 } Tile{ AsIs: )/29 HalfReuse: </32 } Tile{ HalfReuse: & SpecResult/12 AsIs: (/15 AsIs: e.SpecInfo#1/38 AsIs: (/36 AsIs: e.NewFunctions#1/40 AsIs: )/37 AsIs: )/16 } Tile{ AsIs: e.ConditionResult#2/26 } Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_name(context[21], functions[efunc_gen_SpecSentence_A1L1A1]);
  refalrts::reinit_open_call(context[32]);
  refalrts::reinit_name(context[12], functions[efunc_SpecResult]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[19], context[28] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecSentence_A1L1("SpecSentence=1\\1", COOKIE1_, COOKIE2_, func_gen_SpecSentence_A1L1);


static refalrts::FnResult func_SpecSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & SpecSentence/4 (/7 e.SpecInfo#1/5 (/19 e.NewFunctions#1/17 )/20 )/8 (/11 (/15 e.Pattern#1/13 )/16 e.Conditions#1/9 (/23 e.Result#1/21 )/24 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecInfo#1 as range 5
  // closed e.NewFunctions#1 as range 17
  // closed e.Pattern#1 as range 13
  // closed e.Conditions#1 as range 9
  // closed e.Result#1 as range 21
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 17
  //DEBUG: e.Pattern#1: 13
  //DEBUG: e.Conditions#1: 9
  //DEBUG: e.Result#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: & SpecSentence=1/11 AsIs: (/15 AsIs: e.Pattern#1/13 AsIs: )/16 } Tile{ AsIs: (/23 AsIs: e.Result#1/21 AsIs: )/24 HalfReuse: </12 HalfReuse: & MapAccum/1 } [*]/26 & SpecSentence=1\1/27 (/28 e.SpecInfo#1/5/29 )/31 (/32 e.NewFunctions#1/17/33 Tile{ HalfReuse: )/0 HalfReuse: {*}/4 AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/19 AsIs: e.NewFunctions#1/17 AsIs: )/20 AsIs: )/8 } Tile{ AsIs: e.Conditions#1/9 } >/35 >/36 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_closure_head(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_SpecSentence_A1L1]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_evar(vm, context[33], context[34], context[17], context[18]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::reinit_name(context[11], functions[efunc_gen_SpecSentence_A1]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[1], functions[efunc_MapAccum]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_unwrapped_closure(context[4], context[26]);
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[32], context[0] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[26], context[32] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecSentence("SpecSentence", COOKIE1_, COOKIE2_, func_SpecSentence);


static refalrts::FnResult func_gen_SpecResult_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SpecResult$2\1/4 (/7 e.Info#2/5 (/11 e.NewFuncs#2/9 )/12 )/8 t.Result-T#2/13 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Info#2 as range 5
  // closed e.NewFuncs#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Info#2: 5
  //DEBUG: e.NewFuncs#2: 9
  //DEBUG: t.Result-T#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecTerm/4 AsIs: (/7 AsIs: e.Info#2/5 AsIs: (/11 AsIs: e.NewFuncs#2/9 AsIs: )/12 AsIs: )/8 AsIs: t.Result-T#2/13 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_SpecTerm]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecResult_S2L1("SpecResult$2\\1", COOKIE1_, COOKIE2_, func_gen_SpecResult_S2L1);


static refalrts::FnResult func_SpecResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SpecResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecResult/4 (/7 e.new#1/5 (/11 e.new#2/9 )/12 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & SpecResult/4 (/7 e.SpecInfo#1/13 (/11 e.NewFunctions#1/15 )/12 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.SpecInfo#1 as range 13
    // closed e.NewFunctions#1 as range 15
    //DEBUG: e.SpecInfo#1: 13
    //DEBUG: e.NewFunctions#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SpecResult/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#1/13 AsIs: (/11 AsIs: e.NewFunctions#1/15 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecResult/4 (/7 e.SpecInfo#1/5 (/11 e.NewFunctions#1/9 )/12 )/8 e.Result#1/2 >/1
  // closed e.SpecInfo#1 as range 5
  // closed e.NewFunctions#1 as range 9
  // closed e.Result#1 as range 2
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 9
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@1/4 AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/11 AsIs: e.NewFunctions#1/9 AsIs: )/12 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecResult("SpecResult", COOKIE1_, COOKIE2_, func_SpecResult);


static refalrts::FnResult func_gen_SpecTerm_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & SpecTerm$1=2/4 (/7 e.SpecInfo-B#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.SpecInfo-E#1/13 )/16 (/19 e.NewFunctions#1/17 )/20 (/23 e.Info#3/21 )/24 t.NewCall#3/25 e.NewFunction#3/2 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.SpecInfo-B#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.SpecInfo-E#1 as range 13
  // closed e.NewFunctions#1 as range 17
  // closed e.Info#3 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewFunction#3 as range 2
  //DEBUG: e.SpecInfo-B#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.SpecInfo-E#1: 13
  //DEBUG: e.NewFunctions#1: 17
  //DEBUG: e.Info#3: 21
  //DEBUG: t.NewCall#3: 25
  //DEBUG: e.NewFunction#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SpecTerm$1=2/4 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo-B#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: e.Info#3/21 } Tile{ HalfReuse: )/15 AsIs: e.SpecInfo-E#1/13 HalfReuse: (/16 } Tile{ AsIs: e.NewFunctions#1/17 } Tile{ AsIs: e.NewFunction#3/2 } Tile{ AsIs: )/20 } Tile{ AsIs: )/24 AsIs: t.NewCall#3/25 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::link_brackets( context[7], context[24] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S1A2("SpecTerm$1=2", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S1A2);


static refalrts::FnResult func_gen_SpecTerm_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & SpecTerm$2=1/4 (/7 e.Name#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.Expression#2/2 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Name#1 as range 5
  // closed e.SpecInfo#2 as range 9
  // closed e.NewFunctions#2 as range 13
  // closed e.Expression#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SpecInfo#2: 9
  //DEBUG: e.NewFunctions#2: 13
  //DEBUG: e.Expression#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.SpecInfo#2/9 AsIs: (/15 AsIs: e.NewFunctions#2/13 AsIs: )/16 AsIs: )/12 } (/17 # CallBrackets/18 Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expression#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_CallBrackets]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[7], identifiers[ident_Name]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S2A1("SpecTerm$2=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S2A1);


static refalrts::FnResult func_gen_SpecTerm_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SpecTerm$3=1/4 (/7 e.SpecInfo#2/5 (/11 e.NewFunctions#2/9 )/12 )/8 e.ClosureContent#2/2 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.SpecInfo#2 as range 5
  // closed e.NewFunctions#2 as range 9
  // closed e.ClosureContent#2 as range 2
  //DEBUG: e.SpecInfo#2: 5
  //DEBUG: e.NewFunctions#2: 9
  //DEBUG: e.ClosureContent#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#2/5 AsIs: (/11 AsIs: e.NewFunctions#2/9 AsIs: )/12 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # ClosureBrackets/4 } Tile{ AsIs: e.ClosureContent#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ClosureBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S3A1("SpecTerm$3=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S3A1);


static refalrts::FnResult func_gen_SpecTerm_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SpecTerm$4=1/4 (/7 e.SpecInfo#2/5 (/11 e.NewFunctions#2/9 )/12 )/8 e.Expression#2/2 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.SpecInfo#2 as range 5
  // closed e.NewFunctions#2 as range 9
  // closed e.Expression#2 as range 2
  //DEBUG: e.SpecInfo#2: 5
  //DEBUG: e.NewFunctions#2: 9
  //DEBUG: e.Expression#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#2/5 AsIs: (/11 AsIs: e.NewFunctions#2/9 AsIs: )/12 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.Expression#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S4A1("SpecTerm$4=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S4A1);


static refalrts::FnResult func_gen_SpecTerm_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SpecTerm$5=1/4 (/7 e.Name#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.Expression#2/2 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Name#1 as range 5
  // closed e.SpecInfo#2 as range 9
  // closed e.NewFunctions#2 as range 13
  // closed e.Expression#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SpecInfo#2: 9
  //DEBUG: e.NewFunctions#2: 13
  //DEBUG: e.Expression#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.SpecInfo#2/9 AsIs: (/15 AsIs: e.NewFunctions#2/13 AsIs: )/16 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expression#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S5A1("SpecTerm$5=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S5A1);


static refalrts::FnResult func_SpecTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  // </0 & SpecTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecTerm/4 (/7 e.new#1/5 (/11 e.new#2/9 )/12 )/8 t.new#3/13 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SpecTerm/4 (/7 e.new#6/15 (/11 e.new#7/17 )/12 )/8 (/13 s.new#4/21 e.new#5/19 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    // closed e.new#6 as range 15
    // closed e.new#7 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    // closed e.new#5 as range 19
    do {
      // </0 & SpecTerm/4 (/7 e.new#10/22 (/11 e.new#11/24 )/12 )/8 (/13 # CallBrackets/21 (/30 # Symbol/32 # Name/33 e.new#8/28 )/31 e.new#9/26 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[21] ) )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left( identifiers[ident_Symbol], context[28], context[29] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::ident_left( identifiers[ident_Name], context[28], context[29] );
      if( ! context[33] )
        continue;
      // closed e.new#10 as range 22
      // closed e.new#11 as range 24
      // closed e.new#8 as range 28
      // closed e.new#9 as range 26
      do {
        // </0 & SpecTerm/4 (/7 e.SpecInfo-B#1/42 (/48 (/52 e.Name#1/54 )/53 e.Info#1/46 )/49 e.SpecInfo-E#1/44 (/11 e.NewFunctions#1/36 )/12 )/8 (/13 # CallBrackets/21 (/30 # Symbol/32 # Name/33 e.Name#1/38 )/31 e.Expression#1/40 )/14 >/1
        context[34] = context[22];
        context[35] = context[23];
        context[36] = context[24];
        context[37] = context[25];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[26];
        context[41] = context[27];
        // closed e.NewFunctions#1 as range 36
        // closed e.Name#1 as range 38
        // closed e.Expression#1 as range 40
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[34];
          context[45] = context[35];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[46], context[47] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          if( ! refalrts::repeated_evar_left( vm, context[54], context[55], context[38], context[39], context[50], context[51] ) )
            continue;
          if( ! refalrts::empty_seq( context[50], context[51] ) )
            continue;
          // closed e.Info#1 as range 46
          // closed e.SpecInfo-E#1 as range 44
          //DEBUG: e.NewFunctions#1: 36
          //DEBUG: e.Name#1: 38
          //DEBUG: e.Expression#1: 40
          //DEBUG: e.SpecInfo-B#1: 42
          //DEBUG: e.Info#1: 46
          //DEBUG: e.SpecInfo-E#1: 44
          //36: e.NewFunctions#1
          //38: e.Name#1
          //40: e.Expression#1
          //42: e.SpecInfo-B#1
          //44: e.SpecInfo-E#1
          //46: e.Info#1
          //54: e.Name#1
          //61: e.Expression#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[58], functions[efunc_gen_SpecTerm_S1C1]);
          refalrts::alloc_open_call(vm, context[59]);
          refalrts::alloc_name(vm, context[60], functions[efunc_IsColdArg]);
          refalrts::copy_evar(vm, context[61], context[62], context[40], context[41]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::alloc_close_call(vm, context[57]);
          refalrts::push_stack( vm, context[57] );
          refalrts::push_stack( vm, context[56] );
          res = refalrts::splice_elem( res, context[57] );
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[59] );
          res = refalrts::splice_elem( res, context[63] );
          res = refalrts::splice_evar( res, context[61], context[62] );
          res = refalrts::splice_elem( res, context[60] );
          res = refalrts::splice_elem( res, context[59] );
          res = refalrts::splice_elem( res, context[58] );
          res = refalrts::splice_elem( res, context[56] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </56 & SpecTerm$1?1/60 # True/61 >/57
            context[58] = 0;
            context[59] = 0;
            context[60] = refalrts::call_left( context[58], context[59], context[56], context[57] );
            context[61] = refalrts::ident_left( identifiers[ident_True], context[58], context[59] );
            if( ! context[61] )
              continue;
            if( ! refalrts::empty_seq( context[58], context[59] ) )
              continue;
            //DEBUG: e.NewFunctions#1: 36
            //DEBUG: e.Name#1: 38
            //DEBUG: e.Expression#1: 40
            //DEBUG: e.SpecInfo-B#1: 42
            //DEBUG: e.Info#1: 46
            //DEBUG: e.SpecInfo-E#1: 44

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} )/49 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Symbol/32 # Name/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </56 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecTerm$1=2/4 AsIs: (/7 AsIs: e.SpecInfo-B#1/42 HalfReuse: )/48 AsIs: (/52 AsIs: e.Name#1/54 AsIs: )/53 } Tile{ AsIs: (/30 } Tile{ AsIs: e.SpecInfo-E#1/44 } Tile{ AsIs: )/31 } Tile{ AsIs: (/11 AsIs: e.NewFunctions#1/36 AsIs: )/12 HalfReuse: </8 HalfReuse: & SpecCall/13 HalfReuse: (/21 } Tile{ AsIs: e.Name#1/38 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Info#1/46 } Tile{ HalfReuse: (/60 } Tile{ AsIs: e.Expression#1/40 } Tile{ HalfReuse: )/61 AsIs: >/57 AsIs: >/1 ]] }
            refalrts::update_name(context[4], functions[efunc_gen_SpecTerm_S1A2]);
            refalrts::reinit_close_bracket(context[48]);
            refalrts::reinit_open_call(context[8]);
            refalrts::reinit_name(context[13], functions[efunc_SpecCall]);
            refalrts::reinit_open_bracket(context[21]);
            refalrts::reinit_open_bracket(context[60]);
            refalrts::reinit_close_bracket(context[61]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[8] );
            refalrts::link_brackets( context[60], context[61] );
            refalrts::link_brackets( context[21], context[14] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[30], context[31] );
            refalrts::link_brackets( context[52], context[53] );
            refalrts::link_brackets( context[7], context[48] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[61];
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_evar( res, context[60], context[60] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_evar( res, context[14], context[14] );
            res = refalrts::splice_evar( res, context[38], context[39] );
            res = refalrts::splice_evar( res, context[11], context[21] );
            res = refalrts::splice_evar( res, context[31], context[31] );
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_evar( res, context[30], context[30] );
            refalrts::splice_to_freelist_open( vm, context[53], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[56], context[57]);
          continue;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[34], context[35] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SpecTerm/4 (/7 e.SpecInfo#1/34 (/11 e.NewFunctions#1/36 )/12 )/8 (/13 # CallBrackets/21 (/30 # Symbol/32 # Name/33 e.Name#1/38 )/31 e.Expression#1/40 )/14 >/1
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      context[37] = context[25];
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[26];
      context[41] = context[27];
      // closed e.SpecInfo#1 as range 34
      // closed e.NewFunctions#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Expression#1 as range 40
      //DEBUG: e.SpecInfo#1: 34
      //DEBUG: e.NewFunctions#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Expression#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # CallBrackets/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </30 HalfReuse: & SpecTerm$2=1/32 HalfReuse: (/33 AsIs: e.Name#1/38 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/34 AsIs: (/11 AsIs: e.NewFunctions#1/36 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/40 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[30]);
      refalrts::reinit_name(context[32], functions[efunc_gen_SpecTerm_S2A1]);
      refalrts::reinit_open_bracket(context[33]);
      refalrts::update_name(context[4], functions[efunc_SpecResult]);
      refalrts::reinit_close_call(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[33], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SpecTerm/4 (/7 e.SpecInfo#1/22 (/11 e.NewFunctions#1/24 )/12 )/8 (/13 # ClosureBrackects/21 e.ClosureContent#1/26 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackects], context[21] ) )
        continue;
      // closed e.SpecInfo#1 as range 22
      // closed e.NewFunctions#1 as range 24
      // closed e.ClosureContent#1 as range 26
      //DEBUG: e.SpecInfo#1: 22
      //DEBUG: e.NewFunctions#1: 24
      //DEBUG: e.ClosureContent#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$3=1/21 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.ClosureContent#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_gen_SpecTerm_S3A1]);
      refalrts::update_name(context[4], functions[efunc_SpecResult]);
      refalrts::reinit_close_call(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SpecTerm/4 (/7 e.SpecInfo#1/22 (/11 e.NewFunctions#1/24 )/12 )/8 (/13 # Brackets/21 e.Expression#1/26 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[21] ) )
        continue;
      // closed e.SpecInfo#1 as range 22
      // closed e.NewFunctions#1 as range 24
      // closed e.Expression#1 as range 26
      //DEBUG: e.SpecInfo#1: 22
      //DEBUG: e.NewFunctions#1: 24
      //DEBUG: e.Expression#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$4=1/21 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_gen_SpecTerm_S4A1]);
      refalrts::update_name(context[4], functions[efunc_SpecResult]);
      refalrts::reinit_close_call(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SpecTerm/4 (/7 e.SpecInfo#1/22 (/11 e.NewFunctions#1/24 )/12 )/8 (/13 # ADT-Brackets/21 (/30 e.Name#1/28 )/31 e.Expression#1/26 )/14 >/1
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[21] ) )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.SpecInfo#1 as range 22
    // closed e.NewFunctions#1 as range 24
    // closed e.Name#1 as range 28
    // closed e.Expression#1 as range 26
    //DEBUG: e.SpecInfo#1: 22
    //DEBUG: e.NewFunctions#1: 24
    //DEBUG: e.Name#1: 28
    //DEBUG: e.Expression#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$5=1/21 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[21], functions[efunc_gen_SpecTerm_S5A1]);
    refalrts::update_name(context[4], functions[efunc_SpecResult]);
    refalrts::reinit_close_call(context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecTerm/4 (/7 e.SpecInfo#1/5 (/11 e.NewFunctions#1/9 )/12 )/8 t.Other#1/13 >/1
  // closed e.SpecInfo#1 as range 5
  // closed e.NewFunctions#1 as range 9
  //DEBUG: t.Other#1: 13
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SpecTerm/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/11 AsIs: e.NewFunctions#1/9 AsIs: )/12 AsIs: )/8 AsIs: t.Other#1/13 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecTerm("SpecTerm", COOKIE1_, COOKIE2_, func_SpecTerm);


static refalrts::FnResult func_gen_SpecCall_B1S1B1S2B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 76 elems
  refalrts::Iter context[76];
  refalrts::zeros( context, 76 );
  // </0 & SpecCall:1$1:1$2:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall:1$1:1$2:1$2:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 (/32 e.new#8/30 )/33 (/36 e.new#9/34 )/37 s.new#10/38 >/1
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.new#4 as range 14
  // closed e.new#5 as range 18
  // closed e.new#6 as range 22
  // closed e.new#7 as range 26
  // closed e.new#8 as range 30
  // closed e.new#9 as range 34
  if( ! refalrts::svar_left( context[38], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SpecCall:1$1:1$2:1$2:1/4 (/7 e.SpecPattern#1/39 )/8 (/11 e.Body#1/41 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/43 )/17 (/20 e.Name#1/45 )/21 (/24 e.Signature#4/47 )/25 (/28 e.SpecializedFuncArgument#6/49 )/29 (/32 e.SpecializedFuncBody#9/51 )/33 (/36 e.Argument#1/53 )/37 # True/38 >/1
    context[39] = context[5];
    context[40] = context[6];
    context[41] = context[9];
    context[42] = context[10];
    context[43] = context[14];
    context[44] = context[15];
    context[45] = context[18];
    context[46] = context[19];
    context[47] = context[22];
    context[48] = context[23];
    context[49] = context[26];
    context[50] = context[27];
    context[51] = context[30];
    context[52] = context[31];
    context[53] = context[34];
    context[54] = context[35];
    if( ! refalrts::ident_term( identifiers[ident_True], context[38] ) )
      continue;
    // closed e.SpecPattern#1 as range 39
    // closed e.Body#1 as range 41
    // closed e.Signatures#1 as range 43
    // closed e.Name#1 as range 45
    // closed e.Signature#4 as range 47
    // closed e.SpecializedFuncArgument#6 as range 49
    // closed e.SpecializedFuncBody#9 as range 51
    // closed e.Argument#1 as range 53
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 39
    //DEBUG: e.Body#1: 41
    //DEBUG: e.Signatures#1: 43
    //DEBUG: e.Name#1: 45
    //DEBUG: e.Signature#4: 47
    //DEBUG: e.SpecializedFuncArgument#6: 49
    //DEBUG: e.SpecializedFuncBody#9: 51
    //DEBUG: e.Argument#1: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Argument#1/53 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/39 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/41 AsIs: )/12 } Tile{ AsIs: </0 } & Add/55 1/56 Tile{ AsIs: s.NextNumber#1/13 HalfReuse: >/16 AsIs: e.Signatures#1/43 HalfReuse: (/17 AsIs: (/20 AsIs: e.Name#1/45 HalfReuse: # SUF/21 HalfReuse: '@'/24 } s.NextNumber#1/13/57 )/58 Tile{ AsIs: e.Signature#4/47 } )/59 Tile{ AsIs: )/33 AsIs: (/36 } # ColdCallBrackets/60 (/61 # Symbol/62 # Name/63 e.Name#1/45/64 # SUF/66 '@'/67 Tile{ HalfReuse: s.NextNumber1 #13/25 HalfReuse: )/28 AsIs: e.SpecializedFuncArgument#6/49 AsIs: )/29 AsIs: (/32 } # Function/68 # GN-Local/69 (/70 e.Name#1/45/71 # SUF/73 '@'/74 s.NextNumber#1/13/75 Tile{ AsIs: )/37 Reuse: # Sentences/38 } Tile{ AsIs: e.SpecializedFuncBody#9/51 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_name(vm, context[55], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[56], 1UL);
    refalrts::copy_stvar(vm, context[57], context[13]);
    refalrts::alloc_close_bracket(vm, context[58]);
    refalrts::alloc_close_bracket(vm, context[59]);
    refalrts::alloc_ident(vm, context[60], identifiers[ident_ColdCallBrackets]);
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::alloc_ident(vm, context[62], identifiers[ident_Symbol]);
    refalrts::alloc_ident(vm, context[63], identifiers[ident_Name]);
    refalrts::copy_evar(vm, context[64], context[65], context[45], context[46]);
    refalrts::alloc_ident(vm, context[66], identifiers[ident_SUF]);
    refalrts::alloc_char(vm, context[67], '@');
    refalrts::alloc_ident(vm, context[68], identifiers[ident_Function]);
    refalrts::alloc_ident(vm, context[69], identifiers[ident_GNm_Local]);
    refalrts::alloc_open_bracket(vm, context[70]);
    refalrts::copy_evar(vm, context[71], context[72], context[45], context[46]);
    refalrts::alloc_ident(vm, context[73], identifiers[ident_SUF]);
    refalrts::alloc_char(vm, context[74], '@');
    refalrts::copy_stvar(vm, context[75], context[13]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_ident(context[21], identifiers[ident_SUF]);
    refalrts::reinit_char(context[24], '@');
    refalrts::reinit_svar( context[25], context[13] );
    refalrts::reinit_close_bracket(context[28]);
    refalrts::update_ident(context[38], identifiers[ident_Sentences]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[32], context[1] );
    refalrts::link_brackets( context[70], context[37] );
    refalrts::link_brackets( context[36], context[29] );
    refalrts::link_brackets( context[61], context[28] );
    refalrts::link_brackets( context[4], context[33] );
    refalrts::link_brackets( context[17], context[59] );
    refalrts::link_brackets( context[20], context[58] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[68], context[75] );
    res = refalrts::splice_evar( res, context[25], context[32] );
    res = refalrts::splice_evar( res, context[60], context[67] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[59], context[59] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[57], context[58] );
    res = refalrts::splice_evar( res, context[13], context[24] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall:1$1:1$2:1$2:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#4/22 )/25 (/28 e.SpecializedFuncArgument#6/26 )/29 (/32 e.SpecializedFuncBody#9/30 )/33 (/36 e.Argument#1/34 )/37 # False/38 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[38] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Signature#4 as range 22
  // closed e.SpecializedFuncArgument#6 as range 26
  // closed e.SpecializedFuncBody#9 as range 30
  // closed e.Argument#1 as range 34
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#4: 22
  //DEBUG: e.SpecializedFuncArgument#6: 26
  //DEBUG: e.SpecializedFuncBody#9: 30
  //DEBUG: e.Argument#1: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} (/24 e.Signature#4/22 )/25 (/28 e.SpecializedFuncArgument#6/26 {REMOVED TILE} e.SpecializedFuncBody#9/30 {REMOVED TILE} {REMOVED TILE} )/37 # False/38 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/14 } Tile{ AsIs: )/29 AsIs: (/32 } Tile{ HalfReuse: # ColdCallBrackets/33 AsIs: (/36 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: e.Argument#1/34 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[33], identifiers[ident_ColdCallBrackets]);
  refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[20], identifiers[ident_Name]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[32], context[1] );
  refalrts::link_brackets( context[36], context[21] );
  refalrts::link_brackets( context[4], context[29] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[4], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1S2B1S2B1("SpecCall:1$1:1$2:1$2:1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1S2B1S2B1);


static refalrts::FnResult func_gen_SpecCall_B1S1B1S2B1S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & SpecCall:1$1:1$2:1$2=2/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/37 (/35 e.Signatures#1/33 )/36 (/31 e.Name#1/29 )/32 (/27 e.Signature#4/25 )/28 (/23 e.SpecializedFuncArgument#6/21 )/24 (/19 e.Argument#1/17 )/20 (/15 e.SpecializedFuncBody#9/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_right( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_right( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 33
  // closed e.Name#1 as range 29
  // closed e.Signature#4 as range 25
  // closed e.SpecializedFuncArgument#6 as range 21
  // closed e.Argument#1 as range 17
  // closed e.SpecializedFuncBody#9 as range 13
  if( ! refalrts::svar_left( context[37], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 33
  //DEBUG: e.Name#1: 29
  //DEBUG: e.Signature#4: 25
  //DEBUG: e.SpecializedFuncArgument#6: 21
  //DEBUG: e.Argument#1: 17
  //DEBUG: e.SpecializedFuncBody#9: 13
  //DEBUG: s.NextNumber#1: 37

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1$2:1$2:1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/37 AsIs: (/35 AsIs: e.Signatures#1/33 AsIs: )/36 AsIs: (/31 AsIs: e.Name#1/29 AsIs: )/32 AsIs: (/27 AsIs: e.Signature#4/25 AsIs: )/28 AsIs: (/23 AsIs: e.SpecializedFuncArgument#6/21 AsIs: )/24 AsIs: (/19 } e.SpecializedFuncBody#9/13/38 )/40 (/41 Tile{ AsIs: e.Argument#1/17 } )/42 Tile{ HalfReuse: </20 HalfReuse: & IsSoundBody/15 AsIs: e.SpecializedFuncBody#9/13 HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[38], context[39], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1S2B1S2B1]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[15], functions[efunc_IsSoundBody]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[41], context[42] );
  refalrts::link_brackets( context[19], context[40] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1S2B1S2A2("SpecCall:1$1:1$2:1$2=2", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1S2B1S2A2);


static refalrts::FnResult func_gen_SpecCall_B1S1B1S2B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & SpecCall:1$1:1$2:1$2=1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/45 (/43 e.Signatures#1/41 )/44 (/39 e.Name#1/37 )/40 (/35 e.Signature#4/33 )/36 (/31 e.SpecializedFuncArgument#6/29 )/32 (/27 e.Argument#1/25 )/28 (/15 (/19 e.StaticMatches#8/17 )/20 (/23 e.DynamicMatches#8/21 )/24 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_right( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_right( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_right( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_right( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 41
  // closed e.Name#1 as range 37
  // closed e.Signature#4 as range 33
  // closed e.SpecializedFuncArgument#6 as range 29
  // closed e.Argument#1 as range 25
  // closed e.StaticMatches#8 as range 17
  // closed e.DynamicMatches#8 as range 21
  if( ! refalrts::svar_left( context[45], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 41
  //DEBUG: e.Name#1: 37
  //DEBUG: e.Signature#4: 33
  //DEBUG: e.SpecializedFuncArgument#6: 29
  //DEBUG: e.Argument#1: 25
  //DEBUG: e.StaticMatches#8: 17
  //DEBUG: e.DynamicMatches#8: 21
  //DEBUG: s.NextNumber#1: 45

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1$2:1$2=2/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/45 AsIs: (/43 AsIs: e.Signatures#1/41 AsIs: )/44 AsIs: (/39 AsIs: e.Name#1/37 AsIs: )/40 AsIs: (/35 AsIs: e.Signature#4/33 AsIs: )/36 AsIs: (/31 AsIs: e.SpecializedFuncArgument#6/29 AsIs: )/32 AsIs: (/27 AsIs: e.Argument#1/25 AsIs: )/28 HalfReuse: </15 HalfReuse: & Spec-PrepareSpecializedFuncBody/19 } (/46 e.SpecPattern#1/5/47 )/49 (/50 Tile{ AsIs: e.StaticMatches#8/17 } Tile{ AsIs: )/20 AsIs: (/23 AsIs: e.DynamicMatches#8/21 AsIs: )/24 } e.Body#1/9/51 Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[49]);
  refalrts::alloc_open_bracket(vm, context[50]);
  refalrts::copy_evar(vm, context[51], context[52], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1S2B1S2A2]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[19], functions[efunc_Specm_PrepareSpecializedFuncBody]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[50], context[20] );
  refalrts::link_brackets( context[46], context[49] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[46], context[50] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1S2B1S2A1("SpecCall:1$1:1$2:1$2=1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1S2B1S2A1);


static refalrts::FnResult func_gen_SpecCall_B1S1B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
  // </0 & SpecCall:1$1:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall:1$1:1$2:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 (/32 e.new#8/30 )/33 (/36 e.new#9/34 )/37 (/40 e.new#10/38 )/41 s.new#11/42 e.new#12/2 >/1
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  context[38] = 0;
  context[39] = 0;
  context[40] = refalrts::brackets_left( context[38], context[39], context[2], context[3] );
  if( ! context[40] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[40], context[41]);
  // closed e.new#4 as range 14
  // closed e.new#5 as range 18
  // closed e.new#6 as range 22
  // closed e.new#7 as range 26
  // closed e.new#8 as range 30
  // closed e.new#9 as range 34
  // closed e.new#10 as range 38
  if( ! refalrts::svar_left( context[42], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#12 as range 2
  do {
    // </0 & SpecCall:1$1:1$2:1/4 (/7 e.SpecPattern#1/43 )/8 (/11 e.Body#1/45 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/47 )/17 (/20 e.Name#1/49 )/21 (/24 e.SpecializedFuncArgument#6/51 )/25 (/28 e.Signature#4/53 )/29 (/32 e.Argument#1/55 )/33 (/36 e.StaticMatches#2/57 )/37 (/40 e.DynamicMatches#2/59 )/41 # Found/42 e.SpecSuffix#7/61 >/1
    context[43] = context[5];
    context[44] = context[6];
    context[45] = context[9];
    context[46] = context[10];
    context[47] = context[14];
    context[48] = context[15];
    context[49] = context[18];
    context[50] = context[19];
    context[51] = context[22];
    context[52] = context[23];
    context[53] = context[26];
    context[54] = context[27];
    context[55] = context[30];
    context[56] = context[31];
    context[57] = context[34];
    context[58] = context[35];
    context[59] = context[38];
    context[60] = context[39];
    context[61] = context[2];
    context[62] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Found], context[42] ) )
      continue;
    // closed e.SpecPattern#1 as range 43
    // closed e.Body#1 as range 45
    // closed e.Signatures#1 as range 47
    // closed e.Name#1 as range 49
    // closed e.SpecializedFuncArgument#6 as range 51
    // closed e.Signature#4 as range 53
    // closed e.Argument#1 as range 55
    // closed e.StaticMatches#2 as range 57
    // closed e.DynamicMatches#2 as range 59
    // closed e.SpecSuffix#7 as range 61
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 43
    //DEBUG: e.Body#1: 45
    //DEBUG: e.Signatures#1: 47
    //DEBUG: e.Name#1: 49
    //DEBUG: e.SpecializedFuncArgument#6: 51
    //DEBUG: e.Signature#4: 53
    //DEBUG: e.Argument#1: 55
    //DEBUG: e.StaticMatches#2: 57
    //DEBUG: e.DynamicMatches#2: 59
    //DEBUG: e.SpecSuffix#7: 61

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/28 e.Signature#4/53 {REMOVED TILE} e.Argument#1/55 {REMOVED TILE} e.StaticMatches#2/57 )/37 (/40 e.DynamicMatches#2/59 )/41 # Found/42 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/43 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/45 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/47 } Tile{ AsIs: )/33 AsIs: (/36 } Tile{ HalfReuse: # ColdCallBrackets/29 AsIs: (/32 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/49 HalfReuse: # SUF/21 } Tile{ AsIs: e.SpecSuffix#7/61 } Tile{ HalfReuse: )/24 AsIs: e.SpecializedFuncArgument#6/51 AsIs: )/25 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[29], identifiers[ident_ColdCallBrackets]);
    refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[20], identifiers[ident_Name]);
    refalrts::reinit_ident(context[21], identifiers[ident_SUF]);
    refalrts::reinit_close_bracket(context[24]);
    refalrts::link_brackets( context[36], context[25] );
    refalrts::link_brackets( context[32], context[24] );
    refalrts::link_brackets( context[4], context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[61], context[62] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall:1$1:1$2:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.SpecializedFuncArgument#6/22 )/25 (/28 e.Signature#4/26 )/29 (/32 e.Argument#1/30 )/33 (/36 e.StaticMatches#2/34 )/37 (/40 e.DynamicMatches#2/38 )/41 # NotFound/42 >/1
  if( ! refalrts::ident_term( identifiers[ident_NotFound], context[42] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.SpecializedFuncArgument#6 as range 22
  // closed e.Signature#4 as range 26
  // closed e.Argument#1 as range 30
  // closed e.StaticMatches#2 as range 34
  // closed e.DynamicMatches#2 as range 38
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.SpecializedFuncArgument#6: 22
  //DEBUG: e.Signature#4: 26
  //DEBUG: e.Argument#1: 30
  //DEBUG: e.StaticMatches#2: 34
  //DEBUG: e.DynamicMatches#2: 38

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1$2:1$2=1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Signature#4/26 } Tile{ AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.SpecializedFuncArgument#6/22 } Tile{ AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.Argument#1/30 } )/43 </44 & Spec-RenameGenericMatch/45 (/46 e.SpecPattern#1/5/47 Tile{ AsIs: )/33 AsIs: (/36 AsIs: e.StaticMatches#2/34 AsIs: )/37 AsIs: (/40 AsIs: e.DynamicMatches#2/38 AsIs: )/41 HalfReuse: s.NextNumber1 #13/42 HalfReuse: (/1 } </49 & ExtractVariables/50 e.Body#1/9/51 >/53 )/54 >/55 >/56 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_open_call(vm, context[44]);
  refalrts::alloc_name(vm, context[45], functions[efunc_Specm_RenameGenericMatch]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[49]);
  refalrts::alloc_name(vm, context[50], functions[efunc_ExtractVariables]);
  refalrts::copy_evar(vm, context[51], context[52], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_close_call(vm, context[55]);
  refalrts::alloc_close_call(vm, context[56]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1S2B1S2A1]);
  refalrts::reinit_svar( context[42], context[13] );
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[56] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[55] );
  refalrts::push_stack( vm, context[44] );
  refalrts::link_brackets( context[1], context[54] );
  refalrts::push_stack( vm, context[53] );
  refalrts::push_stack( vm, context[49] );
  refalrts::link_brackets( context[40], context[41] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[46], context[33] );
  refalrts::link_brackets( context[28], context[43] );
  refalrts::link_brackets( context[32], context[25] );
  refalrts::link_brackets( context[24], context[29] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[49], context[56] );
  res = refalrts::splice_evar( res, context[33], context[1] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_evar( res, context[43], context[46] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1S2B1("SpecCall:1$1:1$2:1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1S2B1);


static refalrts::FnResult func_gen_SpecCall_B1S1B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & SpecCall:1$1:1$2=1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#4/22 )/25 (/28 e.Argument#1/26 )/29 (/32 e.StaticMatches#2/30 )/33 (/36 e.DynamicMatches#2/34 )/37 e.SpecializedFuncArgument#6/2 >/1
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
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Signature#4 as range 22
  // closed e.Argument#1 as range 26
  // closed e.StaticMatches#2 as range 30
  // closed e.DynamicMatches#2 as range 34
  // closed e.SpecializedFuncArgument#6 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#4: 22
  //DEBUG: e.Argument#1: 26
  //DEBUG: e.StaticMatches#2: 30
  //DEBUG: e.DynamicMatches#2: 34
  //DEBUG: e.SpecializedFuncArgument#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1$2:1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.SpecializedFuncArgument#6/2 } )/38 (/39 Tile{ AsIs: e.Signature#4/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.Argument#1/26 AsIs: )/29 AsIs: (/32 AsIs: e.StaticMatches#2/30 AsIs: )/33 AsIs: (/36 AsIs: e.DynamicMatches#2/34 AsIs: )/37 } </40 & Spec-FindInSignatures/41 (/42 e.Signature#4/22/43 )/45 e.Signatures#1/14/46 >/48 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_open_call(vm, context[40]);
  refalrts::alloc_name(vm, context[41], functions[efunc_Specm_FindInSignatures]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::copy_evar(vm, context[43], context[44], context[22], context[23]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::copy_evar(vm, context[46], context[47], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[48]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1S2B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[40] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[39], context[25] );
  refalrts::link_brackets( context[24], context[38] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[40], context[48] );
  res = refalrts::splice_evar( res, context[25], context[37] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1S2A1("SpecCall:1$1:1$2=1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1S2A1);


static refalrts::FnResult func_gen_SpecCall_B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & SpecCall:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall:1$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 (/32 e.new#8/30 )/33 (/36 e.new#9/34 )/37 s.new#10/38 >/1
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.new#4 as range 14
  // closed e.new#5 as range 18
  // closed e.new#6 as range 22
  // closed e.new#7 as range 26
  // closed e.new#8 as range 30
  // closed e.new#9 as range 34
  if( ! refalrts::svar_left( context[38], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SpecCall:1$1:1/4 (/7 e.SpecPattern#1/39 )/8 (/11 e.Body#1/41 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/43 )/17 (/20 e.Name#1/45 )/21 (/24 e.Argument#1/47 )/25 (/28 e.Signature#4/49 )/29 (/32 e.StaticMatches#2/51 )/33 (/36 e.DynamicMatches#2/53 )/37 # True/38 >/1
    context[39] = context[5];
    context[40] = context[6];
    context[41] = context[9];
    context[42] = context[10];
    context[43] = context[14];
    context[44] = context[15];
    context[45] = context[18];
    context[46] = context[19];
    context[47] = context[22];
    context[48] = context[23];
    context[49] = context[26];
    context[50] = context[27];
    context[51] = context[30];
    context[52] = context[31];
    context[53] = context[34];
    context[54] = context[35];
    if( ! refalrts::ident_term( identifiers[ident_True], context[38] ) )
      continue;
    // closed e.SpecPattern#1 as range 39
    // closed e.Body#1 as range 41
    // closed e.Signatures#1 as range 43
    // closed e.Name#1 as range 45
    // closed e.Argument#1 as range 47
    // closed e.Signature#4 as range 49
    // closed e.StaticMatches#2 as range 51
    // closed e.DynamicMatches#2 as range 53
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 39
    //DEBUG: e.Body#1: 41
    //DEBUG: e.Signatures#1: 43
    //DEBUG: e.Name#1: 45
    //DEBUG: e.Argument#1: 47
    //DEBUG: e.Signature#4: 49
    //DEBUG: e.StaticMatches#2: 51
    //DEBUG: e.DynamicMatches#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} (/24 {REMOVED TILE} )/25 (/28 e.Signature#4/49 {REMOVED TILE} e.StaticMatches#2/51 {REMOVED TILE} e.DynamicMatches#2/53 )/37 # True/38 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/39 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/41 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/43 } Tile{ AsIs: )/29 AsIs: (/32 } Tile{ HalfReuse: # ColdCallBrackets/33 AsIs: (/36 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/45 AsIs: )/21 } Tile{ AsIs: e.Argument#1/47 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[33], identifiers[ident_ColdCallBrackets]);
    refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[20], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[32], context[1] );
    refalrts::link_brackets( context[36], context[21] );
    refalrts::link_brackets( context[4], context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall:1$1:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Argument#1/22 )/25 (/28 e.Signature#4/26 )/29 (/32 e.StaticMatches#2/30 )/33 (/36 e.DynamicMatches#2/34 )/37 # False/38 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[38] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Argument#1 as range 22
  // closed e.Signature#4 as range 26
  // closed e.StaticMatches#2 as range 30
  // closed e.DynamicMatches#2 as range 34
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Argument#1: 22
  //DEBUG: e.Signature#4: 26
  //DEBUG: e.StaticMatches#2: 30
  //DEBUG: e.DynamicMatches#2: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1$2=1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Signature#4/26 } Tile{ AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.Argument#1/22 } Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.StaticMatches#2/30 AsIs: )/33 AsIs: (/36 AsIs: e.DynamicMatches#2/34 AsIs: )/37 HalfReuse: </38 HalfReuse: & Spec-PrepareCallOrPattern/1 } (/39 e.StaticMatches#2/30/40 )/42 (/43 e.DynamicMatches#2/34/44 )/46 e.SpecPattern#1/5/47 >/49 >/50 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::copy_evar(vm, context[40], context[41], context[30], context[31]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::copy_evar(vm, context[44], context[45], context[34], context[35]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[49]);
  refalrts::alloc_close_call(vm, context[50]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1S2A1]);
  refalrts::reinit_open_call(context[38]);
  refalrts::reinit_name(context[1], functions[efunc_Specm_PrepareCallOrPattern]);
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[49] );
  refalrts::push_stack( vm, context[38] );
  refalrts::link_brackets( context[43], context[46] );
  refalrts::link_brackets( context[39], context[42] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[39], context[50] );
  res = refalrts::splice_evar( res, context[29], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1B1("SpecCall:1$1:1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1B1);


static refalrts::FnResult func_gen_SpecCall_B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & SpecCall:1$1=2/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Argument#1/22 )/25 (/28 e.StaticMatches#2/26 )/29 (/32 e.DynamicMatches#2/30 )/33 e.Signature#4/2 >/1
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
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Argument#1 as range 22
  // closed e.StaticMatches#2 as range 26
  // closed e.DynamicMatches#2 as range 30
  // closed e.Signature#4 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Argument#1: 22
  //DEBUG: e.StaticMatches#2: 26
  //DEBUG: e.DynamicMatches#2: 30
  //DEBUG: e.Signature#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1:1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Argument#1/22 AsIs: )/25 AsIs: (/28 } e.Signature#4/2/34 )/36 (/37 Tile{ AsIs: e.StaticMatches#2/26 } Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.DynamicMatches#2/30 AsIs: )/33 } </38 & Spec-IsTrivialSignature/39 Tile{ AsIs: e.Signature#4/2 } >/40 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_Specm_IsTrivialSignature]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[38] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[37], context[29] );
  refalrts::link_brackets( context[28], context[36] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1S1A2("SpecCall:1$1=2", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1S1A2);


static refalrts::FnResult func_gen_SpecCall_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & SpecCall:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 s.new#7/26 e.new#8/2 >/1
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
  // closed e.new#4 as range 14
  // closed e.new#5 as range 18
  // closed e.new#6 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 2
  do {
    // </0 & SpecCall:1/4 (/7 e.SpecPattern#1/27 )/8 (/11 e.Body#1/29 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/31 )/17 (/20 e.Name#1/33 )/21 (/24 e.Argument#1/35 )/25 # Clear/26 (/41 e.StaticMatches#2/39 )/42 (/45 e.DynamicMatches#2/43 )/46 >/1
    context[27] = context[5];
    context[28] = context[6];
    context[29] = context[9];
    context[30] = context[10];
    context[31] = context[14];
    context[32] = context[15];
    context[33] = context[18];
    context[34] = context[19];
    context[35] = context[22];
    context[36] = context[23];
    context[37] = context[2];
    context[38] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Clear], context[26] ) )
      continue;
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    context[43] = 0;
    context[44] = 0;
    context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
    if( ! context[45] )
      continue;
    refalrts::bracket_pointers(context[45], context[46]);
    if( ! refalrts::empty_seq( context[37], context[38] ) )
      continue;
    // closed e.SpecPattern#1 as range 27
    // closed e.Body#1 as range 29
    // closed e.Signatures#1 as range 31
    // closed e.Name#1 as range 33
    // closed e.Argument#1 as range 35
    // closed e.StaticMatches#2 as range 39
    // closed e.DynamicMatches#2 as range 43
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 27
    //DEBUG: e.Body#1: 29
    //DEBUG: e.Signatures#1: 31
    //DEBUG: e.Name#1: 33
    //DEBUG: e.Argument#1: 35
    //DEBUG: e.StaticMatches#2: 39
    //DEBUG: e.DynamicMatches#2: 43
    //13: s.NextNumber#1
    //27: e.SpecPattern#1
    //29: e.Body#1
    //31: e.Signatures#1
    //33: e.Name#1
    //35: e.Argument#1
    //39: e.StaticMatches#2
    //43: e.DynamicMatches#2
    //52: e.StaticMatches#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[49], functions[efunc_gen_SpecCall_B1S1C1]);
    refalrts::alloc_open_call(vm, context[50]);
    refalrts::alloc_name(vm, context[51], functions[efunc_IsActiveMatches]);
    refalrts::copy_evar(vm, context[52], context[53], context[39], context[40]);
    refalrts::alloc_close_call(vm, context[54]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[47] );
    res = refalrts::splice_elem( res, context[48] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[50] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_elem( res, context[51] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[47] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </47 & SpecCall:1$1?1/51 # False/52 >/48
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::call_left( context[49], context[50], context[47], context[48] );
      context[52] = refalrts::ident_left( identifiers[ident_False], context[49], context[50] );
      if( ! context[52] )
        continue;
      if( ! refalrts::empty_seq( context[49], context[50] ) )
        continue;
      //DEBUG: s.NextNumber#1: 13
      //DEBUG: e.SpecPattern#1: 27
      //DEBUG: e.Body#1: 29
      //DEBUG: e.Signatures#1: 31
      //DEBUG: e.Name#1: 33
      //DEBUG: e.Argument#1: 35
      //DEBUG: e.StaticMatches#2: 39
      //DEBUG: e.DynamicMatches#2: 43

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/41 {REMOVED TILE} {REMOVED TILE} # False/52 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall:1$1=2/4 AsIs: (/7 AsIs: e.SpecPattern#1/27 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/29 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/31 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/33 AsIs: )/21 AsIs: (/24 AsIs: e.Argument#1/35 AsIs: )/25 HalfReuse: (/26 } Tile{ AsIs: e.StaticMatches#2/39 } Tile{ AsIs: )/42 AsIs: (/45 AsIs: e.DynamicMatches#2/43 AsIs: )/46 AsIs: </47 Reuse: & Spec-PrepareSignature/51 } e.StaticMatches#2/39/53 Tile{ AsIs: >/48 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[53], context[54], context[39], context[40]);
      refalrts::update_name(context[4], functions[efunc_gen_SpecCall_B1S1A2]);
      refalrts::reinit_open_bracket(context[26]);
      refalrts::update_name(context[51], functions[efunc_Specm_PrepareSignature]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[47] );
      refalrts::link_brackets( context[45], context[46] );
      refalrts::link_brackets( context[26], context[42] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[48];
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[42], context[51] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::splice_to_freelist_open( vm, context[26], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[47], context[48]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Argument#1/22 )/25 s.OtherResult#2/26 e.ResultInfo#2/2 >/1
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Argument#1 as range 22
  // closed e.ResultInfo#2 as range 2
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: s.OtherResult#2: 26
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Argument#1: 22
  //DEBUG: e.ResultInfo#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OtherResult#2/26 e.ResultInfo#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/14 } Tile{ AsIs: )/25 } Tile{ AsIs: (/16 } Tile{ HalfReuse: # ColdCallBrackets/0 } Tile{ AsIs: (/24 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: e.Argument#1/22 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[0], identifiers[ident_ColdCallBrackets]);
  refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[20], identifiers[ident_Name]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::link_brackets( context[24], context[21] );
  refalrts::link_brackets( context[4], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[4], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCall_B1("SpecCall:1", COOKIE1_, COOKIE2_, func_gen_SpecCall_B1);


static refalrts::FnResult func_SpecCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SpecCall/4 (/7 e.Name#1/5 )/8 (/11 e.SpecPattern#1/9 )/12 (/15 e.Body#1/13 )/16 s.NextNumber#1/21 e.Signatures#1/2 (/19 e.Argument#1/17 )/20 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Name#1 as range 5
  // closed e.SpecPattern#1 as range 9
  // closed e.Body#1 as range 13
  // closed e.Argument#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Signatures#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SpecPattern#1: 9
  //DEBUG: e.Body#1: 13
  //DEBUG: e.Argument#1: 17
  //DEBUG: s.NextNumber#1: 21
  //DEBUG: e.Signatures#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & SpecCall:1/8 AsIs: (/11 AsIs: e.SpecPattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Body#1/13 AsIs: )/16 AsIs: s.NextNumber#1/21 } (/22 Tile{ AsIs: e.Signatures#1/2 } )/23 (/24 Tile{ AsIs: e.Name#1/5 } )/25 Tile{ AsIs: (/19 AsIs: e.Argument#1/17 AsIs: )/20 HalfReuse: </1 } Tile{ Reuse: & GenericMatch-Wrapper/4 AsIs: (/7 } e.Argument#1/17/26 )/28 (/29 e.SpecPattern#1/9/30 )/32 >/33 >/34 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_evar(vm, context[30], context[31], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::reinit_name(context[8], functions[efunc_gen_SpecCall_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::update_name(context[4], functions[efunc_GenericMatchm_Wrapper]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[7], context[28] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[28], context[34] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecCall("SpecCall", COOKIE1_, COOKIE2_, func_SpecCall);


static refalrts::FnResult func_gen_IsActiveMatches_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & IsActiveMatches\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsActiveMatches\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsActiveMatches\1/4 # True/5 t.Match#2/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    //DEBUG: t.Match#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsActiveMatches\1/4 # True/5 t.Match#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsActiveMatches\1/4 # False/5 (/6 e.Val#2/8 ':'/15 (/12 # TkVariable/14 e.Var#2/10 )/13 )/7 >/1
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[8], context[9] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = refalrts::ident_left( identifiers[ident_TkVariable], context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[8], context[9] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 8
  // closed e.Var#2 as range 10
  //DEBUG: e.Val#2: 8
  //DEBUG: e.Var#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # False/5 (/6 {REMOVED TILE} ':'/15 (/12 # TkVariable/14 e.Var#2/10 )/13 )/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsActiveExpr/4 } Tile{ AsIs: e.Val#2/8 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_IsActiveExpr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsActiveMatches_L1("IsActiveMatches\\1", COOKIE1_, COOKIE2_, func_gen_IsActiveMatches_L1);


static refalrts::FnResult func_IsActiveMatches(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & IsActiveMatches/4 e.StaticMatches#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.StaticMatches#1 as range 2
  //DEBUG: e.StaticMatches#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@1/0 HalfReuse: # False/4 AsIs: e.StaticMatches#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z1]);
  refalrts::reinit_ident(context[4], identifiers[ident_False]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsActiveMatches("IsActiveMatches", COOKIE1_, COOKIE2_, func_IsActiveMatches);


static refalrts::FnResult func_gen_IsActiveExpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & IsActiveExpr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsActiveExpr\1/4 (/7 e.new#1/5 )/8 s.new#2/9 t.new#3/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/12 )/8 # True/9 t.Term#2/10 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.Expr#1 as range 12
    //DEBUG: t.Term#2: 10
    //DEBUG: e.Expr#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsActiveExpr\1/4 (/7 e.Expr#1/12 )/8 # True/9 t.Term#2/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsActiveExpr\1/4 (/7 e.new#5/5 )/8 # False/9 t.new#4/10 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & IsActiveExpr\1/4 (/7 e.new#8/12 )/8 # False/9 (/10 s.new#6/16 e.new#7/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    // closed e.new#8 as range 12
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    // closed e.new#7 as range 14
    do {
      // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # CallBrackets/16 e.Expr#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[16] ) )
        continue;
      // closed e.Expr#1 as range 17
      // closed e.Expr#2 as range 19
      //DEBUG: e.Expr#1: 17
      //DEBUG: e.Expr#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # CallBrackets/16 e.Expr#2/19 )/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # ColdCallBrackets/16 e.Expr#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[16] ) )
        continue;
      // closed e.Expr#1 as range 17
      // closed e.Expr#2 as range 19
      //DEBUG: e.Expr#1: 17
      //DEBUG: e.Expr#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # ColdCallBrackets/16 e.Expr#2/19 )/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # Brackets/16 e.Expr#2/19 )/11 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[16] ) )
        continue;
      // closed e.Expr#1 as range 17
      // closed e.Expr#2 as range 19
      //DEBUG: e.Expr#1: 17
      //DEBUG: e.Expr#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Expr#1/17 )/8 # False/9 (/10 # Brackets/16 {REMOVED TILE} )/11 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsActiveExpr/4 } Tile{ AsIs: e.Expr#2/19 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsActiveExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/17 )/8 # False/9 (/10 # ADT-Brackets/16 (/23 e.Name#2/21 )/24 e.Expr#1/25 )/11 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[16] ) )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.Expr#1 as range 17
    if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[17], context[18], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Name#2 as range 21
    //DEBUG: e.Expr#1: 17
    //DEBUG: e.Name#2: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # False/9 (/10 # ADT-Brackets/16 (/23 e.Name#2/21 )/24 e.Expr#1/25 )/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsActiveExpr/4 } Tile{ AsIs: e.Expr#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsActiveExpr]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsActiveExpr\1/4 (/7 e.Expr#1/5 )/8 # False/9 t.OtherTerm#2/10 >/1
  // closed e.Expr#1 as range 5
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsActiveExpr\1/4 (/7 e.Expr#1/5 )/8 # False/9 t.OtherTerm#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsActiveExpr_L1("IsActiveExpr\\1", COOKIE1_, COOKIE2_, func_gen_IsActiveExpr_L1);


static refalrts::FnResult func_IsActiveExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & IsActiveExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@2/4 AsIs: e.Expr#1/2 HalfReuse: (/1 } # False/5 e.Expr#1/2/6 )/8 >/9 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_False]);
  refalrts::copy_evar(vm, context[6], context[7], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsActiveExpr("IsActiveExpr", COOKIE1_, COOKIE2_, func_IsActiveExpr);


static refalrts::FnResult func_gen_IsSoundBody_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & IsSoundBody:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsSoundBody:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSoundBody:1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSoundBody:1/4 e.FoundClosures#2/2 >/1
  // closed e.FoundClosures#2 as range 2
  //DEBUG: e.FoundClosures#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSoundBody:1/4 e.FoundClosures#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsSoundBody_B1("IsSoundBody:1", COOKIE1_, COOKIE2_, func_gen_IsSoundBody_B1);


static refalrts::FnResult func_IsSoundBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IsSoundBody/4 e.Body#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Body#1 as range 2
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & IsSoundBody:1/6 Tile{ AsIs: </0 Reuse: & FindClosuresInPatterns-Body/4 AsIs: e.Body#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_IsSoundBody_B1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Body]);
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

static refalrts::NativeReference nat_ref_IsSoundBody("IsSoundBody", COOKIE1_, COOKIE2_, func_IsSoundBody);


static refalrts::FnResult func_gen_FindClosuresInPatternsm_Body_L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & FindClosuresInPatterns-Body\1\1/4 (/7 # Condition/9 (/12 e.Name#3/10 )/13 (/16 e.CondResult#3/14 )/17 (/20 e.CondPattern#3/18 )/21 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Condition], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#3 as range 10
  // closed e.CondResult#3 as range 14
  // closed e.CondPattern#3 as range 18
  //DEBUG: e.Name#3: 10
  //DEBUG: e.CondResult#3: 14
  //DEBUG: e.CondPattern#3: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindClosuresInPatterns-Body\1\1/4 (/7 # Condition/9 (/12 e.Name#3/10 )/13 (/16 e.CondResult#3/14 )/17 (/20 {REMOVED TILE} )/21 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.CondPattern#3/18 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindClosuresInPatternsm_Body_L1L1("FindClosuresInPatterns-Body\\1\\1", COOKIE1_, COOKIE2_, func_gen_FindClosuresInPatternsm_Body_L1L1);


static refalrts::FnResult func_gen_FindClosuresInPatternsm_Body_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindClosuresInPatterns-Body\1/4 (/7 (/11 e.Pattern#2/9 )/12 e.Conditions#2/5 (/15 e.Result#2/13 )/16 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Conditions#2 as range 5
  // closed e.Result#2 as range 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Conditions#2: 5
  //DEBUG: e.Result#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE} (/15 e.Result#2/13 )/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.Pattern#2/9 } Tile{ HalfReuse: </7 HalfReuse: & Map@1/11 } Tile{ AsIs: e.Conditions#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindClosuresInPatternsm_Body_L1("FindClosuresInPatterns-Body\\1", COOKIE1_, COOKIE2_, func_gen_FindClosuresInPatternsm_Body_L1);


static refalrts::FnResult func_FindClosuresInPatternsm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindClosuresInPatterns-Body/4 e.Body#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Body#1 as range 2
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: e.Body#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindClosuresInPatternsm_Body("FindClosuresInPatterns-Body", COOKIE1_, COOKIE2_, func_FindClosuresInPatternsm_Body);


static refalrts::FnResult func_FindClosuresInPatternsm_Pattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindClosuresInPatterns-Pattern/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindClosuresInPatternsm_Pattern("FindClosuresInPatterns-Pattern", COOKIE1_, COOKIE2_, func_FindClosuresInPatternsm_Pattern);


static refalrts::FnResult func_FindClosuresInPatternsm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindClosuresInPatterns-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindClosuresInPatterns-Term/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & FindClosuresInPatterns-Term/4 (/7 s.new#3/9 s.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & FindClosuresInPatterns-Term/4 (/7 # Symbol/9 s.Type#1/12 e.Info#1/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Info#1 as range 13
      //DEBUG: s.Type#1: 12
      //DEBUG: e.Info#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindClosuresInPatterns-Term/4 (/7 # Symbol/9 s.Type#1/12 e.Info#1/13 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindClosuresInPatterns-Term/4 (/7 # TkVariable/9 s.Type#1/12 e.Index#1/13 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    // closed e.Index#1 as range 13
    //DEBUG: s.Type#1: 12
    //DEBUG: e.Index#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindClosuresInPatterns-Term/4 (/7 # TkVariable/9 s.Type#1/12 e.Index#1/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindClosuresInPatterns-Term/4 (/7 # Brackets/9 e.Pattern#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
      continue;
    // closed e.Pattern#1 as range 10
    //DEBUG: e.Pattern#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Brackets/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.Pattern#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
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
    // </0 & FindClosuresInPatterns-Term/4 (/7 # ADT-Brackets/9 (/14 e.Name#1/12 )/15 e.Pattern#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#1 as range 12
    // closed e.Pattern#1 as range 10
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Pattern#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/9 (/14 e.Name#1/12 )/15 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.Pattern#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
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

  // </0 & FindClosuresInPatterns-Term/4 (/7 # ClosureBrackets/9 e.Context#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#1 as range 5
  //DEBUG: e.Context#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindClosuresInPatterns-Term/4 (/7 # ClosureBrackets/9 e.Context#1/5 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Found/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Found]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindClosuresInPatternsm_Term("FindClosuresInPatterns-Term", COOKIE1_, COOKIE2_, func_FindClosuresInPatternsm_Term);


static refalrts::FnResult func_gen_Specm_PrepareSignature_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Spec-PrepareSignature\1/4 (/7 e.Signature#2/5 )/8 (/11 e.Val#2/9 ':'/15 t.Var#2/13 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Signature#2 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 9
  //DEBUG: e.Signature#2: 5
  //DEBUG: t.Var#2: 13
  //DEBUG: e.Val#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareSignature\1/4 {REMOVED TILE} (/11 {REMOVED TILE} ':'/15 t.Var#2/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Signature#2/5 HalfReuse: (/8 } Tile{ AsIs: e.Val#2/9 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSignature_L1("Spec-PrepareSignature\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSignature_L1);


static refalrts::FnResult func_Specm_PrepareSignature(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Spec-PrepareSignature/4 e.StaticMatches#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.StaticMatches#1 as range 2
  //DEBUG: e.StaticMatches#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-RenameSignatureVars/4 } </5 & Reduce@3/6 (/7 )/8 Tile{ AsIs: e.StaticMatches#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Reduce_Z3]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Specm_RenameSignatureVars]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_PrepareSignature("Spec-PrepareSignature", COOKIE1_, COOKIE2_, func_Specm_PrepareSignature);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Spec-RenameSignatureVars=2/4 (/7 t.Renames#3/9 t.UsedVars#3/11 e.NnSignature#3/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.NnSignature#3 as range 5
  //DEBUG: t.Renames#3: 9
  //DEBUG: t.UsedVars#3: 11
  //DEBUG: e.NnSignature#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-RenameSignatureVars=2/4 (/7 t.Renames#3/9 t.UsedVars#3/11 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NnSignature#3/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A2("Spec-RenameSignatureVars=2", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A2);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A2L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Spec-RenameSignatureVars=2\1$2=1/4 (/7 e.Renames#3/5 )/8 (/11 e.Index#3/9 )/12 s.Depth#3/13 (/16 e.NSignature#3/14 )/17 (/20 e.UsedVars#4/18 )/21 e.NewIndex#4/2 >/1
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
  // closed e.Renames#3 as range 5
  // closed e.Index#3 as range 9
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
  // closed e.NSignature#3 as range 14
  // closed e.UsedVars#4 as range 18
  // closed e.NewIndex#4 as range 2
  //DEBUG: e.Renames#3: 5
  //DEBUG: e.Index#3: 9
  //DEBUG: s.Depth#3: 13
  //DEBUG: e.NSignature#3: 14
  //DEBUG: e.UsedVars#4: 18
  //DEBUG: e.NewIndex#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Renames#3/5 HalfReuse: (/8 HalfReuse: 's'/11 AsIs: e.Index#3/9 HalfReuse: s.Depth3 #13/12 } ':'/22 e.NewIndex#4/2/23 )/25 Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.UsedVars#4/18 AsIs: )/21 } Tile{ AsIs: </0 } & FindReplace-ExprList/26 (/27 Tile{ AsIs: e.NSignature#3/14 } )/28 (/29 (/30 # TkVariable/31 's'/32 e.Index#3/9/33 Tile{ AsIs: s.Depth#3/13 HalfReuse: )/16 } )/35 (/36 # TkVariable/37 Tile{ AsIs: e.NewIndex#4/2 } )/38 >/39 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[22], ':');
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FindReplacem_ExprList]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[32], 's');
  refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_char(context[11], 's');
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[36], context[38] );
  refalrts::link_brackets( context[29], context[35] );
  refalrts::link_brackets( context[30], context[16] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[28], context[32] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A2L1S2A1("Spec-RenameSignatureVars=2\\1$2=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A2L1S2A1);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A2L1S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Spec-RenameSignatureVars=2\1$3=1/4 (/7 e.Renames#3/5 )/8 (/11 e.Index#3/9 )/12 s.Depth#3/13 (/16 e.NSignature#3/14 )/17 (/20 e.UsedVars#4/18 )/21 e.NewIndex#4/2 >/1
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
  // closed e.Renames#3 as range 5
  // closed e.Index#3 as range 9
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
  // closed e.NSignature#3 as range 14
  // closed e.UsedVars#4 as range 18
  // closed e.NewIndex#4 as range 2
  //DEBUG: e.Renames#3: 5
  //DEBUG: e.Index#3: 9
  //DEBUG: s.Depth#3: 13
  //DEBUG: e.NSignature#3: 14
  //DEBUG: e.UsedVars#4: 18
  //DEBUG: e.NewIndex#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Renames#3/5 HalfReuse: (/8 HalfReuse: 't'/11 AsIs: e.Index#3/9 HalfReuse: s.Depth3 #13/12 } ':'/22 e.NewIndex#4/2/23 )/25 Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.UsedVars#4/18 AsIs: )/21 } Tile{ AsIs: </0 } & FindReplace-ExprList/26 (/27 Tile{ AsIs: e.NSignature#3/14 } )/28 (/29 (/30 # TkVariable/31 't'/32 e.Index#3/9/33 Tile{ AsIs: s.Depth#3/13 HalfReuse: )/16 } )/35 (/36 # TkVariable/37 Tile{ AsIs: e.NewIndex#4/2 } )/38 >/39 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[22], ':');
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FindReplacem_ExprList]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[32], 't');
  refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_char(context[11], 't');
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[36], context[38] );
  refalrts::link_brackets( context[29], context[35] );
  refalrts::link_brackets( context[30], context[16] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[28], context[32] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A2L1S3A1("Spec-RenameSignatureVars=2\\1$3=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A2L1S3A1);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A2L1S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Spec-RenameSignatureVars=2\1$4=1/4 (/7 e.Renames#3/5 )/8 (/11 e.Index#3/9 )/12 s.Depth#3/13 (/16 e.NSignature#3/14 )/17 (/20 e.UsedVars#4/18 )/21 e.NewIndex#4/2 >/1
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
  // closed e.Renames#3 as range 5
  // closed e.Index#3 as range 9
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
  // closed e.NSignature#3 as range 14
  // closed e.UsedVars#4 as range 18
  // closed e.NewIndex#4 as range 2
  //DEBUG: e.Renames#3: 5
  //DEBUG: e.Index#3: 9
  //DEBUG: s.Depth#3: 13
  //DEBUG: e.NSignature#3: 14
  //DEBUG: e.UsedVars#4: 18
  //DEBUG: e.NewIndex#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Renames#3/5 HalfReuse: (/8 HalfReuse: 'e'/11 AsIs: e.Index#3/9 HalfReuse: s.Depth3 #13/12 } ':'/22 e.NewIndex#4/2/23 )/25 Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.UsedVars#4/18 AsIs: )/21 } Tile{ AsIs: </0 } & FindReplace-ExprList/26 (/27 Tile{ AsIs: e.NSignature#3/14 } )/28 (/29 (/30 # TkVariable/31 'e'/32 e.Index#3/9/33 Tile{ AsIs: s.Depth#3/13 HalfReuse: )/16 } )/35 (/36 # TkVariable/37 Tile{ AsIs: e.NewIndex#4/2 } )/38 >/39 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[22], ':');
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FindReplacem_ExprList]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[32], 'e');
  refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_char(context[11], 'e');
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[36], context[38] );
  refalrts::link_brackets( context[29], context[35] );
  refalrts::link_brackets( context[30], context[16] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[28], context[32] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A2L1S4A1("Spec-RenameSignatureVars=2\\1$4=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A2L1S4A1);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & Spec-RenameSignatureVars=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.new#1/9 )/12 (/15 e.new#2/13 )/16 e.new#3/5 )/8 (/19 e.new#4/17 )/20 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 9
  // closed e.new#2 as range 13
  // closed e.new#3 as range 5
  // closed e.new#4 as range 17
  do {
    // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.Renames-B#3/29 (/35 e.Index#3/37 ':'/39 e.NewIndex#3/33 )/36 e.Renames-E#3/31 )/12 (/15 e.UsedVars#3/23 )/16 e.NSignature#3/25 )/8 (/19 e.Index#3/27 )/20 >/1
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[13];
    context[24] = context[14];
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[17];
    context[28] = context[18];
    // closed e.UsedVars#3 as range 23
    // closed e.NSignature#3 as range 25
    // closed e.Index#3 as range 27
    context[29] = 0;
    context[30] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[31] = context[21];
      context[32] = context[22];
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      if( ! refalrts::repeated_evar_left( vm, context[37], context[38], context[27], context[28], context[33], context[34] ) )
        continue;
      context[39] = refalrts::char_left( ':', context[33], context[34] );
      if( ! context[39] )
        continue;
      // closed e.NewIndex#3 as range 33
      // closed e.Renames-E#3 as range 31
      //DEBUG: e.UsedVars#3: 23
      //DEBUG: e.NSignature#3: 25
      //DEBUG: e.Index#3: 27
      //DEBUG: e.Renames-B#3: 29
      //DEBUG: e.NewIndex#3: 33
      //DEBUG: e.Renames-E#3: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Renames-B#3/29 AsIs: (/35 AsIs: e.Index#3/37 AsIs: ':'/39 AsIs: e.NewIndex#3/33 AsIs: )/36 AsIs: e.Renames-E#3/31 AsIs: )/12 AsIs: (/15 AsIs: e.UsedVars#3/23 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & FindReplace-ExprList/4 } (/40 Tile{ AsIs: e.NSignature#3/25 } )/41 (/42 Tile{ HalfReuse: (/8 HalfReuse: # TkVariable/19 AsIs: e.Index#3/27 AsIs: )/20 HalfReuse: )/1 } (/43 # TkVariable/44 e.NewIndex#3/33/45 )/47 >/48 )/49 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_TkVariable]);
      refalrts::copy_evar(vm, context[45], context[46], context[33], context[34]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::update_name(context[4], functions[efunc_FindReplacem_ExprList]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[19], identifiers[ident_TkVariable]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[49] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[43], context[47] );
      refalrts::link_brackets( context[42], context[1] );
      refalrts::link_brackets( context[8], context[20] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[49] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[29], context[30], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.new#9/9 )/12 (/15 e.new#10/13 )/16 e.new#5/5 )/8 (/19 s.new#6/21 e.new#7/17 s.new#8/22 )/20 >/1
  // closed e.new#9 as range 9
  // closed e.new#10 as range 13
  // closed e.new#5 as range 5
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[22], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 17
  do {
    // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.Renames#3/23 )/12 (/15 e.UsedVars#3/25 )/16 e.NSignature#3/27 )/8 (/19 's'/21 e.Index#3/29 s.Depth#3/22 )/20 >/1
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[5];
    context[28] = context[6];
    context[29] = context[17];
    context[30] = context[18];
    if( ! refalrts::char_term( 's', context[21] ) )
      continue;
    // closed e.Renames#3 as range 23
    // closed e.UsedVars#3 as range 25
    // closed e.NSignature#3 as range 27
    // closed e.Index#3 as range 29
    //DEBUG: s.Depth#3: 22
    //DEBUG: e.Renames#3: 23
    //DEBUG: e.UsedVars#3: 25
    //DEBUG: e.NSignature#3: 27
    //DEBUG: e.Index#3: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Spec-RenameSignatureVars=2\1$2=1/7 AsIs: (/11 AsIs: e.Renames#3/23 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Index#3/29 } Tile{ HalfReuse: )/0 } Tile{ AsIs: s.Depth#3/22 } Tile{ HalfReuse: (/16 AsIs: e.NSignature#3/27 AsIs: )/8 HalfReuse: </19 HalfReuse: & NewVarName/21 } (/31 Tile{ AsIs: e.UsedVars#3/25 } )/32"sS"/33 s.Depth#3/22/35 (/36 )/37 Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], "sS", 2);
    refalrts::copy_stvar(vm, context[35], context[22]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Specm_RenameSignatureVars_A2L1S2A1]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_bracket(context[16]);
    refalrts::reinit_open_call(context[19]);
    refalrts::reinit_name(context[21], functions[efunc_NewVarName]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[15], context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[32], context[37] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.Renames#3/23 )/12 (/15 e.UsedVars#3/25 )/16 e.NSignature#3/27 )/8 (/19 't'/21 e.Index#3/29 s.Depth#3/22 )/20 >/1
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[5];
    context[28] = context[6];
    context[29] = context[17];
    context[30] = context[18];
    if( ! refalrts::char_term( 't', context[21] ) )
      continue;
    // closed e.Renames#3 as range 23
    // closed e.UsedVars#3 as range 25
    // closed e.NSignature#3 as range 27
    // closed e.Index#3 as range 29
    //DEBUG: s.Depth#3: 22
    //DEBUG: e.Renames#3: 23
    //DEBUG: e.UsedVars#3: 25
    //DEBUG: e.NSignature#3: 27
    //DEBUG: e.Index#3: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Spec-RenameSignatureVars=2\1$3=1/7 AsIs: (/11 AsIs: e.Renames#3/23 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Index#3/29 } Tile{ HalfReuse: )/0 } Tile{ AsIs: s.Depth#3/22 } Tile{ HalfReuse: (/16 AsIs: e.NSignature#3/27 AsIs: )/8 HalfReuse: </19 HalfReuse: & NewVarName/21 } (/31 Tile{ AsIs: e.UsedVars#3/25 } )/32"tT"/33 s.Depth#3/22/35 (/36 )/37 Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], "tT", 2);
    refalrts::copy_stvar(vm, context[35], context[22]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Specm_RenameSignatureVars_A2L1S3A1]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_bracket(context[16]);
    refalrts::reinit_open_call(context[19]);
    refalrts::reinit_name(context[21], functions[efunc_NewVarName]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[15], context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[32], context[37] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-RenameSignatureVars=2\1/4 (/7 (/11 e.Renames#3/9 )/12 (/15 e.UsedVars#3/13 )/16 e.NSignature#3/5 )/8 (/19 'e'/21 e.Index#3/17 s.Depth#3/22 )/20 >/1
  if( ! refalrts::char_term( 'e', context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Renames#3 as range 9
  // closed e.UsedVars#3 as range 13
  // closed e.NSignature#3 as range 5
  // closed e.Index#3 as range 17
  //DEBUG: s.Depth#3: 22
  //DEBUG: e.Renames#3: 9
  //DEBUG: e.UsedVars#3: 13
  //DEBUG: e.NSignature#3: 5
  //DEBUG: e.Index#3: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Spec-RenameSignatureVars=2\1$4=1/7 AsIs: (/11 AsIs: e.Renames#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Index#3/17 } Tile{ HalfReuse: )/0 } Tile{ AsIs: s.Depth#3/22 } Tile{ HalfReuse: (/16 AsIs: e.NSignature#3/5 AsIs: )/8 HalfReuse: </19 HalfReuse: & NewVarName/21 } (/23 Tile{ AsIs: e.UsedVars#3/13 } )/24"eE"/25 s.Depth#3/22/27 (/28 )/29 Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], "eE", 2);
  refalrts::copy_stvar(vm, context[27], context[22]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Specm_RenameSignatureVars_A2L1S4A1]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_name(context[21], functions[efunc_NewVarName]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[16], context[8] );
  refalrts::link_brackets( context[15], context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[24], context[29] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A2L1("Spec-RenameSignatureVars=2\\1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A2L1);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Spec-RenameSignatureVars=1/4 (/7 e.Signature#1/5 )/8 e.VarsFromSignature#2/2 >/1
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
  // closed e.Signature#1 as range 5
  // closed e.VarsFromSignature#2 as range 2
  //DEBUG: e.Signature#1: 5
  //DEBUG: e.VarsFromSignature#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-RenameSignatureVars=2/4 } </9 & Reduce/10 & Spec-RenameSignatureVars=2\1/11 (/12 (/13 )/14 (/15 e.VarsFromSignature#2/2/16 Tile{ HalfReuse: )/7 AsIs: e.Signature#1/5 AsIs: )/8 AsIs: e.VarsFromSignature#2/2 AsIs: >/1 } >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Specm_RenameSignatureVars_A2L1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_RenameSignatureVars_A2]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[15], context[7] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A1("Spec-RenameSignatureVars=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A1);


static refalrts::FnResult func_gen_Specm_RenameSignatureVars_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Spec-RenameSignatureVars=1\1/4 (/7 e.SignaturePart#2/5 )/8 >/1
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
  // closed e.SignaturePart#2 as range 5
  //DEBUG: e.SignaturePart#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.SignaturePart#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameSignatureVars_A1L1("Spec-RenameSignatureVars=1\\1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameSignatureVars_A1L1);


static refalrts::FnResult func_Specm_RenameSignatureVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Spec-RenameSignatureVars/4 (/7 e.Signature#1/5 )/8 >/1
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
  // closed e.Signature#1 as range 5
  //DEBUG: e.Signature#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-RenameSignatureVars=1/4 AsIs: (/7 AsIs: e.Signature#1/5 AsIs: )/8 HalfReuse: </1 } & Map/9 & Spec-RenameSignatureVars=1\1/10 e.Signature#1/5/11 >/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Specm_RenameSignatureVars_A1L1]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_RenameSignatureVars_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_RenameSignatureVars("Spec-RenameSignatureVars", COOKIE1_, COOKIE2_, func_Specm_RenameSignatureVars);


static refalrts::FnResult func_Specm_FindInSignatures(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Spec-FindInSignatures/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Spec-FindInSignatures/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Spec-FindInSignatures/4 (/7 e.Signature#1/9 )/8 e.Signatures-B#1/13 (/19 (/23 e.Name#1/27 # SUF/31 e.SpecSuffix#1/29 )/24 e.Signature#1/25 )/20 e.Signatures-E#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Signature#1 as range 9
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
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Signatures-E#1 as range 15
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[29] = context[21];
        context[30] = context[22];
        context[31] = refalrts::ident_left( identifiers[ident_SUF], context[29], context[30] );
        if( ! context[31] )
          continue;
        // closed e.SpecSuffix#1 as range 29
        //DEBUG: e.Signature#1: 9
        //DEBUG: e.Signatures-B#1: 13
        //DEBUG: e.Signatures-E#1: 15
        //DEBUG: e.Name#1: 27
        //DEBUG: e.SpecSuffix#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Spec-FindInSignatures/4 (/7 e.Signature#1/9 )/8 e.Signatures-B#1/13 (/19 (/23 e.Name#1/27 # SUF/31 {REMOVED TILE} )/24 e.Signature#1/25 )/20 e.Signatures-E#1/15 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # Found/0 } Tile{ AsIs: e.SpecSuffix#1/29 } Tile{ ]] }
        refalrts::reinit_ident(context[0], identifiers[ident_Found]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[29], context[30] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-FindInSignatures/4 (/7 e.Signature#1/5 )/8 e.Signatures#1/2 >/1
  // closed e.Signature#1 as range 5
  // closed e.Signatures#1 as range 2
  //DEBUG: e.Signature#1: 5
  //DEBUG: e.Signatures#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-FindInSignatures/4 (/7 e.Signature#1/5 )/8 e.Signatures#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NotFound/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NotFound]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_FindInSignatures("Spec-FindInSignatures", COOKIE1_, COOKIE2_, func_Specm_FindInSignatures);


static refalrts::FnResult func_gen_Specm_IsTrivialSignature_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Spec-IsTrivialSignature\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Spec-IsTrivialSignature\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Spec-IsTrivialSignature\1/4 # False/5 t.Any#2/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
      continue;
    //DEBUG: t.Any#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Spec-IsTrivialSignature\1/4 # False/5 t.Any#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-IsTrivialSignature\1/4 # True/5 t.new#3/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Spec-IsTrivialSignature\1/4 # True/5 (/6 (/12 # TkVariable/14 e.VarName#2/10 )/13 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left( identifiers[ident_TkVariable], context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    // closed e.VarName#2 as range 10
    //DEBUG: e.VarName#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Spec-IsTrivialSignature\1/4 # True/5 (/6 (/12 # TkVariable/14 e.VarName#2/10 )/13 )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-IsTrivialSignature\1/4 # True/5 t.OtherExpression#2/6 >/1
  //DEBUG: t.OtherExpression#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-IsTrivialSignature\1/4 # True/5 t.OtherExpression#2/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_IsTrivialSignature_L1("Spec-IsTrivialSignature\\1", COOKIE1_, COOKIE2_, func_gen_Specm_IsTrivialSignature_L1);


static refalrts::FnResult func_Specm_IsTrivialSignature(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Spec-IsTrivialSignature/4 e.Signature#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Signature#1 as range 2
  //DEBUG: e.Signature#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@4/0 HalfReuse: # True/4 AsIs: e.Signature#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z4]);
  refalrts::reinit_ident(context[4], identifiers[ident_True]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_IsTrivialSignature("Spec-IsTrivialSignature", COOKIE1_, COOKIE2_, func_Specm_IsTrivialSignature);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Spec-PrepareCallOrPattern=3/4 s.Flag#4/5 e.Expression#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expression#4 as range 2
  //DEBUG: s.Flag#4: 5
  //DEBUG: e.Expression#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareCallOrPattern=3/4 s.Flag#4/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expression#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A3("Spec-PrepareCallOrPattern=3", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A3);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Spec-PrepareCallOrPattern=3\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Spec-PrepareCallOrPattern=3\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Spec-PrepareCallOrPattern=3\1/4 s.new#3/5 (/6 # GhostBrackets/10 e.new#4/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left( identifiers[ident_GhostBrackets], context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.new#4 as range 8
    do {
      // </0 & Spec-PrepareCallOrPattern=3\1/4 # True/5 (/6 # GhostBrackets/10 e.Expr#4/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
        continue;
      // closed e.Expr#4 as range 11
      //DEBUG: e.Expr#4: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Spec-PrepareCallOrPattern=3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # True/5 AsIs: (/6 Reuse: # Brackets/10 AsIs: e.Expr#4/11 AsIs: )/7 } Tile{ ]] }
      refalrts::update_ident(context[10], identifiers[ident_Brackets]);
      refalrts::link_brackets( context[6], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[7] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Spec-PrepareCallOrPattern=3\1/4 # False/5 (/6 # GhostBrackets/10 e.Expr#4/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
      continue;
    // closed e.Expr#4 as range 11
    //DEBUG: e.Expr#4: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Spec-PrepareCallOrPattern=3\1/4 # False/5 (/6 # GhostBrackets/10 {REMOVED TILE} )/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Expr#4/11 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-PrepareCallOrPattern=3\1/4 s.Flag#4/5 t.Other#4/6 >/1
  //DEBUG: t.Other#4: 6
  //DEBUG: s.Flag#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareCallOrPattern=3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Flag#4/5 AsIs: t.Other#4/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A3L1("Spec-PrepareCallOrPattern=3\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A3L1);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Spec-PrepareCallOrPattern=2/4 e.Expression#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expression#3 as range 2
  //DEBUG: e.Expression#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-PrepareCallOrPattern=3/4 } </5 & MapAccum/6 & Spec-PrepareCallOrPattern=3\1/7 # False/8 Tile{ AsIs: e.Expression#3/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Specm_PrepareCallOrPattern_A3L1]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_False]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareCallOrPattern_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A2("Spec-PrepareCallOrPattern=2", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A2);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Spec-PrepareCallOrPattern=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Spec-PrepareCallOrPattern=2\1/4 (/7 e.new#1/5 ':'/11 t.new#2/9 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Spec-PrepareCallOrPattern=2\1/4 (/7 e.Val#3/12 ':'/11 (/9 # TkVariable/16 'e'/17 e.Index#3/14 )/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[9] ) )
      continue;
    context[16] = refalrts::ident_left( identifiers[ident_TkVariable], context[14], context[15] );
    if( ! context[16] )
      continue;
    context[17] = refalrts::char_left( 'e', context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.Val#3 as range 12
    // closed e.Index#3 as range 14
    //DEBUG: e.Val#3: 12
    //DEBUG: e.Index#3: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/9 # TkVariable/16 'e'/17 e.Index#3/14 )/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # GhostBrackets/7 AsIs: e.Val#3/12 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_GhostBrackets]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::link_brackets( context[4], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Spec-PrepareCallOrPattern=2\1/4 (/7 e.Val#3/5 ':'/11 t.Var#3/9 )/8 >/1
  // closed e.Val#3 as range 5
  //DEBUG: t.Var#3: 9
  //DEBUG: e.Val#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareCallOrPattern=2\1/4 (/7 {REMOVED TILE} ':'/11 t.Var#3/9 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Val#3/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A2L1("Spec-PrepareCallOrPattern=2\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A2L1);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Spec-PrepareCallOrPattern=1/4 (/7 e.DynamicMatches#1/5 )/8 (/11 e.VarsFromStaticParams#2/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DynamicMatches#1 as range 5
  // closed e.VarsFromStaticParams#2 as range 9
  //DEBUG: e.DynamicMatches#1: 5
  //DEBUG: e.VarsFromStaticParams#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & Spec-PrepareCallOrPattern=2/12 } </14 & WrapEVar/15 Tile{ AsIs: e.VarsFromStaticParams#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & Spec-PrepareCallOrPattern=2\1/7 AsIs: e.DynamicMatches#1/5 HalfReuse: >/8 HalfReuse: >/11 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_WrapEVar]);
  refalrts::reinit_name(context[12], functions[efunc_gen_Specm_PrepareCallOrPattern_A2]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Specm_PrepareCallOrPattern_A2L1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A1("Spec-PrepareCallOrPattern=1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A1);


static refalrts::FnResult func_gen_Specm_PrepareCallOrPattern_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Spec-PrepareCallOrPattern=1\1/4 (/7 e.ExtractedVars#2/5 )/8 (/11 e.Val#2/9 ':'/15 t.Var#2/13 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ExtractedVars#2 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 9
  //DEBUG: e.ExtractedVars#2: 5
  //DEBUG: t.Var#2: 13
  //DEBUG: e.Val#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Var#2/13 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & RemoveRepeatings/7 AsIs: e.ExtractedVars#2/5 HalfReuse: </8 HalfReuse: & ExtractVariables-Expr-Wrapper/11 AsIs: e.Val#2/9 HalfReuse: >/15 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_RemoveRepeatings]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_ExtractVariablesm_Exprm_Wrapper]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  refalrts::splice_to_freelist_open( vm, context[15], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareCallOrPattern_A1L1("Spec-PrepareCallOrPattern=1\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareCallOrPattern_A1L1);


static refalrts::FnResult func_Specm_PrepareCallOrPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Spec-PrepareCallOrPattern/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 e.Pattern#1/2 >/1
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
  // closed e.StaticMatches#1 as range 5
  // closed e.DynamicMatches#1 as range 9
  // closed e.Pattern#1 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Pattern#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-PrepareCallOrPattern=1/4 AsIs: (/7 } Tile{ AsIs: e.DynamicMatches#1/9 } )/13 </14 & Reduce/15 Tile{ HalfReuse: & Spec-PrepareCallOrPattern=1\1/8 AsIs: (/11 } Tile{ AsIs: )/12 } Tile{ AsIs: e.StaticMatches#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Reduce]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareCallOrPattern_A1]);
  refalrts::reinit_name(context[8], functions[efunc_gen_Specm_PrepareCallOrPattern_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_PrepareCallOrPattern("Spec-PrepareCallOrPattern", COOKIE1_, COOKIE2_, func_Specm_PrepareCallOrPattern);


static refalrts::FnResult func_gen_Specm_RenameGenericMatch_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Spec-RenameGenericMatch\1=1/4 (/7 e.NStaticMatches#3/5 )/8 (/11 e.CurrentVarName#3/9 )/12 (/15 e.NDynamicMatches#3/13 )/16 (/19 e.Vars#4/17 )/20 e.NewVarName#4/2 >/1
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
  // closed e.NStaticMatches#3 as range 5
  // closed e.CurrentVarName#3 as range 9
  // closed e.NDynamicMatches#3 as range 13
  // closed e.Vars#4 as range 17
  // closed e.NewVarName#4 as range 2
  //DEBUG: e.NStaticMatches#3: 5
  //DEBUG: e.CurrentVarName#3: 9
  //DEBUG: e.NDynamicMatches#3: 13
  //DEBUG: e.Vars#4: 17
  //DEBUG: e.NewVarName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars#4/17 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/21 (/22 Tile{ AsIs: </0 Reuse: & FindReplace-GenericMatches-Val/4 AsIs: (/7 AsIs: e.NStaticMatches#3/5 AsIs: )/8 AsIs: (/11 } (/23 # TkVariable/24 Tile{ AsIs: e.CurrentVarName#3/9 } )/25 )/26 (/27 Tile{ HalfReuse: # TkVariable/20 AsIs: e.NewVarName#4/2 HalfReuse: )/1 } >/28 )/29 (/30 </31 Tile{ HalfReuse: & FindReplace-GenericMatches-Val/12 AsIs: (/15 AsIs: e.NDynamicMatches#3/13 AsIs: )/16 AsIs: (/19 } (/32 # TkVariable/33 e.CurrentVarName#3/9/34 )/36 )/37 (/38 # TkVariable/39 e.NewVarName#4/2/40 )/42 >/43 )/44 )/45 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_TkVariable]);
  refalrts::copy_evar(vm, context[34], context[35], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_TkVariable]);
  refalrts::copy_evar(vm, context[40], context[41], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_close_call(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::update_name(context[4], functions[efunc_FindReplacem_GenericMatchesm_Val]);
  refalrts::reinit_ident(context[20], identifiers[ident_TkVariable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_name(context[12], functions[efunc_FindReplacem_GenericMatchesm_Val]);
  refalrts::link_brackets( context[21], context[45] );
  refalrts::link_brackets( context[30], context[44] );
  refalrts::push_stack( vm, context[43] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[38], context[42] );
  refalrts::link_brackets( context[19], context[37] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[22], context[29] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[27], context[1] );
  refalrts::link_brackets( context[11], context[26] );
  refalrts::link_brackets( context[23], context[25] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[45] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[28], context[31] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameGenericMatch_L1A1("Spec-RenameGenericMatch\\1=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameGenericMatch_L1A1);


static refalrts::FnResult func_gen_Specm_RenameGenericMatch_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Spec-RenameGenericMatch\1/4 (/7 e.VarsFromBody#1/5 )/8 (/11 (/15 e.NStaticMatches#3/13 )/16 (/19 e.NDynamicMatches#3/17 )/20 )/12 (/23 e.CurrentVarName#3/21 )/24 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarsFromBody#1 as range 5
  // closed e.NStaticMatches#3 as range 13
  // closed e.NDynamicMatches#3 as range 17
  // closed e.CurrentVarName#3 as range 21
  //DEBUG: e.VarsFromBody#1: 5
  //DEBUG: e.NStaticMatches#3: 13
  //DEBUG: e.NDynamicMatches#3: 17
  //DEBUG: e.CurrentVarName#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Spec-RenameGenericMatch\1=1/11 AsIs: (/15 AsIs: e.NStaticMatches#3/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.CurrentVarName#3/21 } Tile{ AsIs: )/12 AsIs: (/23 } Tile{ AsIs: e.NDynamicMatches#3/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/7 } Tile{ AsIs: e.VarsFromBody#1/5 } )/25 e.CurrentVarName#3/21/26 (/28 )/29 Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[21], context[22]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_gen_Specm_RenameGenericMatch_L1A1]);
  refalrts::update_name(context[4], functions[efunc_NewVarName]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[7], context[25] );
  refalrts::link_brackets( context[23], context[20] );
  refalrts::link_brackets( context[19], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameGenericMatch_L1("Spec-RenameGenericMatch\\1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameGenericMatch_L1);


static refalrts::FnResult func_gen_Specm_RenameGenericMatch_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Spec-RenameGenericMatch=1/4 (/7 e.VarsFromBody#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 (/15 e.DynamicMatches#1/13 )/16 (/19 e.VarsFromMatch#2/17 )/20 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarsFromBody#1 as range 5
  // closed e.StaticMatches#1 as range 9
  // closed e.DynamicMatches#1 as range 13
  // closed e.VarsFromMatch#2 as range 17
  //DEBUG: e.VarsFromBody#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.DynamicMatches#1: 13
  //DEBUG: e.VarsFromMatch#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@5/4 } Tile{ AsIs: e.VarsFromBody#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.StaticMatches#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.DynamicMatches#1/13 AsIs: )/16 HalfReuse: )/19 AsIs: e.VarsFromMatch#2/17 AsIs: )/20 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z5]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[20] );
  refalrts::link_brackets( context[8], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameGenericMatch_A1("Spec-RenameGenericMatch=1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameGenericMatch_A1);


static refalrts::FnResult func_gen_Specm_RenameGenericMatch_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Spec-RenameGenericMatch=1\1/4 (/7 e.VarsFromMatch#2/5 )/8 (/11 e.Val#2/9 ':'/15 t.Var#2/13 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarsFromMatch#2 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 9
  //DEBUG: e.VarsFromMatch#2: 5
  //DEBUG: t.Var#2: 13
  //DEBUG: e.Val#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-RenameGenericMatch=1\1/4 {REMOVED TILE} t.Var#2/13 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.VarsFromMatch#2/5 HalfReuse: </8 HalfReuse: & ExtractVariables-Expr/11 AsIs: e.Val#2/9 HalfReuse: >/15 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_RenameGenericMatch_A1L1("Spec-RenameGenericMatch=1\\1", COOKIE1_, COOKIE2_, func_gen_Specm_RenameGenericMatch_A1L1);


static refalrts::FnResult func_Specm_RenameGenericMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Spec-RenameGenericMatch/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 (/15 e.DynamicMatches#1/13 )/16 s.NextNumber#1/21 (/19 e.VarsFromBody#1/17 )/20 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.SpecPattern#1 as range 5
  // closed e.StaticMatches#1 as range 9
  // closed e.DynamicMatches#1 as range 13
  // closed e.VarsFromBody#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.DynamicMatches#1: 13
  //DEBUG: e.VarsFromBody#1: 17
  //DEBUG: s.NextNumber#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.SpecPattern#1/5 {REMOVED TILE} s.NextNumber#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-RenameGenericMatch=1/4 AsIs: (/7 } Tile{ AsIs: e.VarsFromBody#1/17 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.StaticMatches#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.DynamicMatches#1/13 AsIs: )/16 } </22 & Reduce/23 & Spec-RenameGenericMatch=1\1/24 Tile{ AsIs: (/19 } )/25 e.StaticMatches#1/9/26 Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_Specm_RenameGenericMatch_A1L1]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_RenameGenericMatch_A1]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_RenameGenericMatch("Spec-RenameGenericMatch", COOKIE1_, COOKIE2_, func_Specm_RenameGenericMatch);


static refalrts::FnResult func_gen_Specm_PrepareSpecializedFuncBody_L1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & Spec-PrepareSpecializedFuncBody\1=3/4 (/7 e.PreparedBody#2/5 )/8 (/11 e.StaticSubstitutions#4/9 )/12 (/15 e.SentencePattern#2/13 )/16 (/19 e.DynamicMatches#1/17 )/20 (/23 e.Conditions#2/21 )/24 (/27 e.SentenceResult#2/25 )/28 (/31 e.SentenceDynamicMatches#5/29 )/32 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PreparedBody#2 as range 5
  // closed e.StaticSubstitutions#4 as range 9
  // closed e.SentencePattern#2 as range 13
  // closed e.DynamicMatches#1 as range 17
  // closed e.Conditions#2 as range 21
  // closed e.SentenceResult#2 as range 25
  // closed e.SentenceDynamicMatches#5 as range 29
  //DEBUG: e.PreparedBody#2: 5
  //DEBUG: e.StaticSubstitutions#4: 9
  //DEBUG: e.SentencePattern#2: 13
  //DEBUG: e.DynamicMatches#1: 17
  //DEBUG: e.Conditions#2: 21
  //DEBUG: e.SentenceResult#2: 25
  //DEBUG: e.SentenceDynamicMatches#5: 29

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/23 } Tile{ AsIs: e.PreparedBody#2/5 } (/33 (/34 </35 Tile{ HalfReuse: & Spec-PrepareCallOrPattern/8 AsIs: (/11 AsIs: e.StaticSubstitutions#4/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.SentenceDynamicMatches#5/29 } Tile{ AsIs: )/24 } Tile{ AsIs: e.SentencePattern#2/13 } >/36 )/37 Tile{ AsIs: </0 Reuse: & Spec-PrepareConditions/4 AsIs: (/7 } e.StaticSubstitutions#4/9/38 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.DynamicMatches#1/17 AsIs: )/20 } Tile{ AsIs: e.Conditions#2/21 } >/40 (/41 </42 & Spec-PrepareResult/43 (/44 e.StaticSubstitutions#4/9/45 Tile{ HalfReuse: )/27 AsIs: e.SentenceResult#2/25 HalfReuse: >/28 HalfReuse: )/31 } Tile{ AsIs: )/32 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::copy_evar(vm, context[38], context[39], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_name(vm, context[43], functions[efunc_Specm_PrepareResult]);
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::copy_evar(vm, context[45], context[46], context[9], context[10]);
  refalrts::reinit_name(context[8], functions[efunc_Specm_PrepareCallOrPattern]);
  refalrts::update_name(context[4], functions[efunc_Specm_PrepareConditions]);
  refalrts::reinit_close_bracket(context[27]);
  refalrts::reinit_close_call(context[28]);
  refalrts::reinit_close_bracket(context[31]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[23], context[1] );
  refalrts::link_brackets( context[33], context[32] );
  refalrts::link_brackets( context[41], context[31] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[42] );
  refalrts::link_brackets( context[44], context[27] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[32];
  res = refalrts::splice_evar( res, context[27], context[31] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[40], context[44] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSpecializedFuncBody_L1A3("Spec-PrepareSpecializedFuncBody\\1=3", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSpecializedFuncBody_L1A3);


static refalrts::FnResult func_gen_Specm_PrepareSpecializedFuncBody_L1A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Spec-PrepareSpecializedFuncBody\1=3\1/4 (/7 e.NSentenceDynamicMatches#5/5 )/8 (/11 e.Val#5/9 ':'/15 t.Var#5/13 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NSentenceDynamicMatches#5 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#5 as range 9
  //DEBUG: e.NSentenceDynamicMatches#5: 5
  //DEBUG: t.Var#5: 13
  //DEBUG: e.Val#5: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: </0 Reuse: & FindReplace-GenericMatches-Val/4 AsIs: (/7 AsIs: e.NSentenceDynamicMatches#5/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: t.Var#5/13 AsIs: )/12 } Tile{ AsIs: e.Val#5/9 } >/16 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::update_name(context[4], functions[efunc_FindReplacem_GenericMatchesm_Val]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[12] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSpecializedFuncBody_L1A3L1("Spec-PrepareSpecializedFuncBody\\1=3\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSpecializedFuncBody_L1A3L1);


static refalrts::FnResult func_gen_Specm_PrepareSpecializedFuncBody_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Spec-PrepareSpecializedFuncBody\1=2/4 (/7 e.PreparedBody#2/5 )/8 (/11 e.SentencePattern#2/9 )/12 (/15 e.DynamicMatches#1/13 )/16 (/19 e.Conditions#2/17 )/20 (/23 e.SentenceResult#2/21 )/24 (/27 e.SentenceDynamicMatches#3/25 )/28 e.StaticSubstitutions#4/2 >/1
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
  // closed e.PreparedBody#2 as range 5
  // closed e.SentencePattern#2 as range 9
  // closed e.DynamicMatches#1 as range 13
  // closed e.Conditions#2 as range 17
  // closed e.SentenceResult#2 as range 21
  // closed e.SentenceDynamicMatches#3 as range 25
  // closed e.StaticSubstitutions#4 as range 2
  //DEBUG: e.PreparedBody#2: 5
  //DEBUG: e.SentencePattern#2: 9
  //DEBUG: e.DynamicMatches#1: 13
  //DEBUG: e.Conditions#2: 17
  //DEBUG: e.SentenceResult#2: 21
  //DEBUG: e.SentenceDynamicMatches#3: 25
  //DEBUG: e.StaticSubstitutions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-PrepareSpecializedFuncBody\1=3/4 AsIs: (/7 } Tile{ AsIs: e.PreparedBody#2/5 } )/29 (/30 e.StaticSubstitutions#4/2/31 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.SentencePattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.DynamicMatches#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Conditions#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.SentenceResult#2/21 AsIs: )/24 HalfReuse: </27 } & MapAccum/33 & Spec-PrepareSpecializedFuncBody\1=3\1/34 (/35 Tile{ AsIs: e.SentenceDynamicMatches#3/25 } Tile{ AsIs: )/28 AsIs: e.StaticSubstitutions#4/2 AsIs: >/1 } >/36 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[2], context[3]);
  refalrts::alloc_name(vm, context[33], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[34], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1A3L1]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1A3]);
  refalrts::reinit_open_call(context[27]);
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[35], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[30], context[8] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[28], context[1] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[8], context[27] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSpecializedFuncBody_L1A2("Spec-PrepareSpecializedFuncBody\\1=2", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSpecializedFuncBody_L1A2);


static refalrts::FnResult func_gen_Specm_PrepareSpecializedFuncBody_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Spec-PrepareSpecializedFuncBody\1=1/4 (/7 e.PreparedBody#2/5 )/8 (/11 e.SentencePattern#2/9 )/12 (/15 e.DynamicMatches#1/13 )/16 (/19 e.Conditions#2/17 )/20 (/23 e.SentenceResult#2/21 )/24 (/27 e.StaticMatches#1/25 )/28 # Clear/29 (/32 e.SentenceStaticMatches#3/30 )/33 (/36 e.SentenceDynamicMatches#3/34 )/37 >/1
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
  context[29] = refalrts::ident_left( identifiers[ident_Clear], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PreparedBody#2 as range 5
  // closed e.SentencePattern#2 as range 9
  // closed e.DynamicMatches#1 as range 13
  // closed e.Conditions#2 as range 17
  // closed e.SentenceResult#2 as range 21
  // closed e.StaticMatches#1 as range 25
  // closed e.SentenceStaticMatches#3 as range 30
  // closed e.SentenceDynamicMatches#3 as range 34
  //DEBUG: e.PreparedBody#2: 5
  //DEBUG: e.SentencePattern#2: 9
  //DEBUG: e.DynamicMatches#1: 13
  //DEBUG: e.Conditions#2: 17
  //DEBUG: e.SentenceResult#2: 21
  //DEBUG: e.StaticMatches#1: 25
  //DEBUG: e.SentenceStaticMatches#3: 30
  //DEBUG: e.SentenceDynamicMatches#3: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-PrepareSpecializedFuncBody\1=2/4 AsIs: (/7 AsIs: e.PreparedBody#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.SentencePattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.DynamicMatches#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Conditions#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.SentenceResult#2/21 AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.SentenceDynamicMatches#3/34 } Tile{ AsIs: )/28 } Tile{ HalfReuse: </37 } & MapGenericMatches/38 (/39 Tile{ AsIs: e.StaticMatches#1/25 } Tile{ HalfReuse: )/29 AsIs: (/32 AsIs: e.SentenceStaticMatches#3/30 AsIs: )/33 HalfReuse: >/36 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[38], functions[efunc_MapGenericMatches]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1A2]);
  refalrts::reinit_open_call(context[37]);
  refalrts::reinit_close_bracket(context[29]);
  refalrts::reinit_close_call(context[36]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[39], context[29] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[36] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSpecializedFuncBody_L1A1("Spec-PrepareSpecializedFuncBody\\1=1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSpecializedFuncBody_L1A1);


static refalrts::FnResult func_gen_Specm_PrepareSpecializedFuncBody_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Spec-PrepareSpecializedFuncBody\1/4 (/7 e.DynamicMatches#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 (/15 e.SpecPattern#1/13 )/16 (/19 e.PreparedBody#2/17 )/20 (/23 (/27 e.SentencePattern#2/25 )/28 e.Conditions#2/21 (/31 e.SentenceResult#2/29 )/32 )/24 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_right( context[29], context[30], context[21], context[22] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DynamicMatches#1 as range 5
  // closed e.StaticMatches#1 as range 9
  // closed e.SpecPattern#1 as range 13
  // closed e.PreparedBody#2 as range 17
  // closed e.SentencePattern#2 as range 25
  // closed e.Conditions#2 as range 21
  // closed e.SentenceResult#2 as range 29
  //DEBUG: e.DynamicMatches#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.SpecPattern#1: 13
  //DEBUG: e.PreparedBody#2: 17
  //DEBUG: e.SentencePattern#2: 25
  //DEBUG: e.Conditions#2: 21
  //DEBUG: e.SentenceResult#2: 29

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Spec-PrepareSpecializedFuncBody\1=1/16 AsIs: (/19 AsIs: e.PreparedBody#2/17 AsIs: )/20 AsIs: (/23 } e.SentencePattern#2/25/33 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.DynamicMatches#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/21 } )/35 Tile{ AsIs: (/31 AsIs: e.SentenceResult#2/29 AsIs: )/32 HalfReuse: (/24 } Tile{ AsIs: e.StaticMatches#1/9 } Tile{ AsIs: )/12 HalfReuse: </15 } & GenericMatch-Wrapper/36 Tile{ AsIs: (/27 AsIs: e.SentencePattern#2/25 AsIs: )/28 } (/37 Tile{ AsIs: e.SpecPattern#1/13 } )/38 >/39 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[33], context[34], context[25], context[26]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_GenericMatchm_Wrapper]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_name(context[16], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1A1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_bracket(context[24]);
  refalrts::reinit_open_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[24], context[12] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[11], context[35] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[23], context[4] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[31], context[24] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareSpecializedFuncBody_L1("Spec-PrepareSpecializedFuncBody\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareSpecializedFuncBody_L1);


static refalrts::FnResult func_Specm_PrepareSpecializedFuncBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Spec-PrepareSpecializedFuncBody/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 (/15 e.DynamicMatches#1/13 )/16 e.Body#1/2 >/1
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
  // closed e.SpecPattern#1 as range 5
  // closed e.StaticMatches#1 as range 9
  // closed e.DynamicMatches#1 as range 13
  // closed e.Body#1 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.DynamicMatches#1: 13
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Reduce@6/17 Tile{ AsIs: e.DynamicMatches#1/13 } Tile{ AsIs: (/15 } Tile{ AsIs: e.StaticMatches#1/9 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: (/12 } Tile{ AsIs: )/16 AsIs: e.Body#1/2 HalfReuse: )/1 } >/18 Tile{ ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Reduce_Z6]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_PrepareSpecializedFuncBody("Spec-PrepareSpecializedFuncBody", COOKIE1_, COOKIE2_, func_Specm_PrepareSpecializedFuncBody);


static refalrts::FnResult func_gen_Specm_PrepareConditions_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Spec-PrepareConditions=1/4 (/7 e.StaticSubstitutions#1/5 )/8 (/11 e.StaticSubstitutions#1/13 )/12 e.Conditions#2/2 >/1
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
  // closed e.StaticSubstitutions#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[13], context[14], context[5], context[6], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Conditions#2 as range 2
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.Conditions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareConditions=1/4 (/7 e.StaticSubstitutions#1/5 )/8 (/11 e.StaticSubstitutions#1/13 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Conditions#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareConditions_A1("Spec-PrepareConditions=1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareConditions_A1);


static refalrts::FnResult func_gen_Specm_PrepareConditions_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Spec-PrepareConditions=1\1/4 (/7 e.StaticSubstitutions#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 (/15 e.StaticSubstitutions#1/34 )/16 (/19 # Condition/21 (/24 e.Name#2/22 )/25 (/28 e.ConditionResult#2/26 )/29 (/32 e.ConditionPattern#2/30 )/33 )/20 >/1
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
  context[21] = refalrts::ident_left( identifiers[ident_Condition], context[17], context[18] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[17], context[18] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[17], context[18] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StaticSubstitutions#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[34], context[35], context[5], context[6], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DynamicMatches#1 as range 9
  // closed e.Name#2 as range 22
  // closed e.ConditionResult#2 as range 26
  // closed e.ConditionPattern#2 as range 30
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.Name#2: 22
  //DEBUG: e.ConditionResult#2: 26
  //DEBUG: e.ConditionPattern#2: 30

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # Condition/21 AsIs: (/24 AsIs: e.Name#2/22 AsIs: )/25 AsIs: (/28 } </36 & Spec-PrepareResult/37 Tile{ AsIs: (/15 AsIs: e.StaticSubstitutions#1/34 AsIs: )/16 } Tile{ AsIs: e.ConditionResult#2/26 } >/38 Tile{ AsIs: )/29 AsIs: (/32 } Tile{ AsIs: </0 Reuse: & Spec-PrepareCallOrPattern/4 AsIs: (/7 AsIs: e.StaticSubstitutions#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.DynamicMatches#1/9 AsIs: )/12 } Tile{ AsIs: e.ConditionPattern#2/30 } Tile{ HalfReuse: >/33 AsIs: )/20 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_Specm_PrepareResult]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_Specm_PrepareCallOrPattern]);
  refalrts::reinit_close_call(context[33]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[19], context[1] );
  refalrts::link_brackets( context[32], context[20] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[33];
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[19], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareConditions_A1L1("Spec-PrepareConditions=1\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareConditions_A1L1);


static refalrts::FnResult func_Specm_PrepareConditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Spec-PrepareConditions/4 (/7 e.StaticSubstitutions#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 e.Conditions#1/2 >/1
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
  // closed e.StaticSubstitutions#1 as range 5
  // closed e.DynamicMatches#1 as range 9
  // closed e.Conditions#1 as range 2
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & Spec-PrepareConditions=1/14 (/15 e.StaticSubstitutions#1/5/16 )/18 </19 & Reduce/20 Tile{ HalfReuse: [*]/0 Reuse: & Spec-PrepareConditions=1\1/4 AsIs: (/7 AsIs: e.StaticSubstitutions#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.DynamicMatches#1/9 AsIs: )/12 } {*}/21 (/22 e.StaticSubstitutions#1/5/23 )/25 Tile{ AsIs: e.Conditions#1/2 } >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Specm_PrepareConditions_A1]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Reduce]);
  refalrts::alloc_unwrapped_closure(vm, context[21], context[0]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareConditions_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_PrepareConditions("Spec-PrepareConditions", COOKIE1_, COOKIE2_, func_Specm_PrepareConditions);


static refalrts::FnResult func_gen_Specm_PrepareResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Spec-PrepareResult=1/4 (/7 e.Result#2/5 )/8 >/1
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
  // closed e.Result#2 as range 5
  //DEBUG: e.Result#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Spec-PrepareResult=1/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Result#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareResult_A1("Spec-PrepareResult=1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareResult_A1);


static refalrts::FnResult func_gen_Specm_PrepareResult_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Spec-PrepareResult=1\1/4 (/7 e.NResult#2/5 )/8 (/11 e.ReplaceToVal#2/9 ':'/15 t.ReplaceVar#2/13 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NResult#2 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.ReplaceToVal#2 as range 9
  //DEBUG: e.NResult#2: 5
  //DEBUG: t.ReplaceVar#2: 13
  //DEBUG: e.ReplaceToVal#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: </0 Reuse: & FindReplace-Expr/4 AsIs: (/7 AsIs: e.NResult#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: t.ReplaceVar#2/13 AsIs: )/12 } Tile{ AsIs: e.ReplaceToVal#2/9 } >/16 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::update_name(context[4], functions[efunc_FindReplacem_Expr]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[12] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specm_PrepareResult_A1L1("Spec-PrepareResult=1\\1", COOKIE1_, COOKIE2_, func_gen_Specm_PrepareResult_A1L1);


static refalrts::FnResult func_Specm_PrepareResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Spec-PrepareResult/4 (/7 e.StaticSubstitutions#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.StaticSubstitutions#1 as range 5
  // closed e.Result#1 as range 2
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Spec-PrepareResult=1/4 HalfReuse: </7 } & Reduce/9 & Spec-PrepareResult=1\1/10 (/11 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.StaticSubstitutions#1/5 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Specm_PrepareResult_A1L1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareResult_A1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specm_PrepareResult("Spec-PrepareResult", COOKIE1_, COOKIE2_, func_Specm_PrepareResult);


static refalrts::FnResult func_OptTreem_Specm_Finalize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OptTree-Spec-Finalize/4 s.OptSpec#1/5 (/8 e.SpecInfo#1/6 )/9 e.AST#1/2 >/1
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
  // closed e.SpecInfo#1 as range 6
  // closed e.AST#1 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.SpecInfo#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-Finalize/4 s.OptSpec#1/5 (/8 e.SpecInfo#1/6 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_Finalize("OptTree-Spec-Finalize", 0U, 0U, func_OptTreem_Specm_Finalize);


static refalrts::FnResult func_SVarm_IsInSet(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SVar-IsInSet/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SVar-IsInSet/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & SVar-IsInSet/4 (/7 e.Set-B#1/12 s.Var#1/16 e.Set-E#1/14 )/8 s.Var#1/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      if( ! refalrts::repeated_stvar_left( vm, context[16], context[9], context[14], context[15] ) )
        continue;
      // closed e.Set-E#1 as range 14
      //DEBUG: s.Var#1: 9
      //DEBUG: e.Set-B#1: 12
      //DEBUG: e.Set-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SVar-IsInSet/4 (/7 e.Set-B#1/12 s.Var#1/16 e.Set-E#1/14 )/8 s.Var#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SVar-IsInSet/4 (/7 e.Set#1/5 )/8 s.Var#1/9 >/1
  // closed e.Set#1 as range 5
  //DEBUG: s.Var#1: 9
  //DEBUG: e.Set#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SVar-IsInSet/4 (/7 e.Set#1/5 )/8 s.Var#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SVarm_IsInSet("SVar-IsInSet", COOKIE1_, COOKIE2_, func_SVarm_IsInSet);


static refalrts::FnResult func_IsSpecStaticVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & IsSpecStaticVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsSpecStaticVar/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 s.new#4/11 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & IsSpecStaticVar/4 (/7 # TkVariable/9 s.Mode#1/10 s.FirstSymbol#1/14 e.Index#1/12 s.Depth#1/11 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Index#1 as range 12
    //DEBUG: s.Mode#1: 10
    //DEBUG: s.Depth#1: 11
    //DEBUG: s.FirstSymbol#1: 14
    //DEBUG: e.Index#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/10 s.FirstSymbol#1/14 e.Index#1/12 s.Depth#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SVar-IsInSet/4 AsIs: (/7 HalfReuse: 'A'/9 }"BCDEFGHIJKLMNOPQRSTUVWXYZ"/15 )/17 Tile{ HalfReuse: s.FirstSymbol1 #14/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[15], context[16], "BCDEFGHIJKLMNOPQRSTUVWXYZ", 25);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_SVarm_IsInSet]);
    refalrts::reinit_char(context[9], 'A');
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSpecStaticVar/4 (/7 s.Mode#1/9 s.FirstSymbol#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: s.FirstSymbol#1: 10
  //DEBUG: s.Depth#1: 11
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/9 s.FirstSymbol#1/10 e.Index#1/5 s.Depth#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SVar-IsInSet/4 AsIs: (/7 }"ABCDEFGHIJKLMNOPQRSTUVWXYZ"/12 )/14 Tile{ HalfReuse: s.FirstSymbol1 #10/8 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_SVarm_IsInSet]);
  refalrts::reinit_svar( context[8], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSpecStaticVar("IsSpecStaticVar", COOKIE1_, COOKIE2_, func_IsSpecStaticVar);


static refalrts::FnResult func_WrapEVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & WrapEVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & WrapEVar/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & WrapEVar/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & WrapEVar/4 (/7 # TkVariable/13 'e'/18 e.Index#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
          continue;
        context[18] = refalrts::char_left( 'e', context[14], context[15] );
        if( ! context[18] )
          continue;
        // closed e.Index#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.Index#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # GhostBrackets/4 AsIs: (/7 AsIs: # TkVariable/13 AsIs: 'e'/18 AsIs: e.Index#1/14 AsIs: )/8 } )/19 </20 & WrapEVar/21 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_WrapEVar]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_GhostBrackets]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[20] );
        refalrts::link_brackets( context[0], context[19] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[19], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WrapEVar/4 (/7 'e'/13 e.Index#1/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Index#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Index#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # GhostBrackets/4 AsIs: (/7 AsIs: 'e'/13 AsIs: e.Index#1/14 AsIs: )/8 } )/18 </19 & WrapEVar/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_WrapEVar]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_GhostBrackets]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WrapEVar/4 t.Other#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Other#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/7 } Tile{ AsIs: </0 AsIs: & WrapEVar/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & WrapEVar/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WrapEVar/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WrapEVar("WrapEVar", COOKIE1_, COOKIE2_, func_WrapEVar);


static refalrts::FnResult func_RemoveRepeatings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & RemoveRepeatings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & RemoveRepeatings/4 e.Terms-B#1/7 t.Term#1/11 e.Terms-M#1/13 t.Term#1/17 e.Terms-E#1/15 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[15] = context[9];
        context[16] = context[10];
        context[18] = refalrts::repeated_stvar_left( vm, context[17], context[11], context[15], context[16] );
        if( ! context[18] )
          continue;
        // closed e.Terms-E#1 as range 15
        //DEBUG: e.Terms-B#1: 7
        //DEBUG: t.Term#1: 11
        //DEBUG: e.Terms-M#1: 13
        //DEBUG: e.Terms-E#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} t.Term#1/17 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & RemoveRepeatings/4 AsIs: e.Terms-B#1/7 AsIs: t.Term#1/11 } Tile{ AsIs: e.Terms-M#1/13 } Tile{ AsIs: e.Terms-E#1/15 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveRepeatings/4 e.Terms#1/2 >/1
  // closed e.Terms#1 as range 2
  //DEBUG: e.Terms#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveRepeatings/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Terms#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveRepeatings("RemoveRepeatings", COOKIE1_, COOKIE2_, func_RemoveRepeatings);


static refalrts::FnResult func_ExtractVariablesm_Exprm_Wrapper(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ExtractVariables-Expr-Wrapper/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FindAndFormatVarTerm/6 Tile{ AsIs: </0 Reuse: & ExtractVariables-Expr/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_FindAndFormatVarTerm]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
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

static refalrts::NativeReference nat_ref_ExtractVariablesm_Exprm_Wrapper("ExtractVariables-Expr-Wrapper", COOKIE1_, COOKIE2_, func_ExtractVariablesm_Exprm_Wrapper);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenericMatch-Wrapper:1$1=1/4 (/7 (/11 e.StaticMatches#3/9 )/12 (/15 e.DynamicMatches#3/13 )/16 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StaticMatches#3 as range 9
  // closed e.DynamicMatches#3 as range 13
  //DEBUG: e.StaticMatches#3: 9
  //DEBUG: e.DynamicMatches#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch-Wrapper:1$1=1/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/7 AsIs: (/11 AsIs: e.StaticMatches#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.DynamicMatches#3/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_ident(context[7], identifiers[ident_Clear]);
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1S1A1("GenericMatch-Wrapper:1$1=1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1S1A1);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1S1A1L1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & GenericMatch-Wrapper:1$1=1\1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenericMatch-Wrapper:1$1=1\1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenericMatch-Wrapper:1$1=1\1:1/4 (/7 e.StaticMatches#3/22 )/8 (/11 e.Val#3/24 )/12 (/15 e.Var#3/26 )/16 (/19 e.DynamicMatches#3/28 )/20 # True/21 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_True], context[21] ) )
      continue;
    // closed e.StaticMatches#3 as range 22
    // closed e.Val#3 as range 24
    // closed e.Var#3 as range 26
    // closed e.DynamicMatches#3 as range 28
    //DEBUG: e.StaticMatches#3: 22
    //DEBUG: e.Val#3: 24
    //DEBUG: e.Var#3: 26
    //DEBUG: e.DynamicMatches#3: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.StaticMatches#3/22 } Tile{ AsIs: (/11 AsIs: e.Val#3/24 HalfReuse: ':'/12 AsIs: (/15 } Tile{ HalfReuse: # TkVariable/7 } Tile{ AsIs: e.Var#3/26 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.DynamicMatches#3/28 AsIs: )/20 HalfReuse: )/21 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_char(context[12], ':');
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::link_brackets( context[0], context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[4], context[16] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[21] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Wrapper:1$1=1\1:1/4 (/7 e.StaticMatches#3/5 )/8 (/11 e.Val#3/9 )/12 (/15 e.Var#3/13 )/16 (/19 e.DynamicMatches#3/17 )/20 # False/21 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StaticMatches#3 as range 5
  // closed e.Val#3 as range 9
  // closed e.Var#3 as range 13
  // closed e.DynamicMatches#3 as range 17
  //DEBUG: e.StaticMatches#3: 5
  //DEBUG: e.Val#3: 9
  //DEBUG: e.Var#3: 13
  //DEBUG: e.DynamicMatches#3: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StaticMatches#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.DynamicMatches#3/17 } Tile{ HalfReuse: (/20 } Tile{ AsIs: e.Val#3/9 } Tile{ HalfReuse: ':'/0 } Tile{ HalfReuse: (/12 HalfReuse: # TkVariable/15 AsIs: e.Var#3/13 AsIs: )/16 HalfReuse: )/19 } Tile{ HalfReuse: )/21 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_char(context[0], ':');
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_ident(context[15], identifiers[ident_TkVariable]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_close_bracket(context[21]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[20], context[19] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[21];
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1S1A1L1B1("GenericMatch-Wrapper:1$1=1\\1:1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1S1A1L1B1);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & GenericMatch-Wrapper:1$1=1\1/4 (/7 (/11 e.StaticMatches#3/9 )/12 (/15 e.DynamicMatches#3/13 )/16 )/8 (/19 e.Val#3/17 ':'/25 (/23 e.Var#3/21 )/24 )/20 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
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
  context[23] = refalrts::brackets_right( context[21], context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = refalrts::char_right( ':', context[17], context[18] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StaticMatches#3 as range 9
  // closed e.DynamicMatches#3 as range 13
  // closed e.Val#3 as range 17
  // closed e.Var#3 as range 21
  //DEBUG: e.StaticMatches#3: 9
  //DEBUG: e.DynamicMatches#3: 13
  //DEBUG: e.Val#3: 17
  //DEBUG: e.Var#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Wrapper:1$1=1\1:1/4 AsIs: (/7 } Tile{ AsIs: e.StaticMatches#3/9 } Tile{ AsIs: )/8 AsIs: (/19 AsIs: e.Val#3/17 HalfReuse: )/25 AsIs: (/23 AsIs: e.Var#3/21 AsIs: )/24 HalfReuse: (/20 } Tile{ AsIs: e.DynamicMatches#3/13 } Tile{ AsIs: )/12 HalfReuse: </15 } & IsSpecStaticVar/26 Tile{ AsIs: (/11 } e.Var#3/21/27 Tile{ AsIs: )/16 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[26], functions[efunc_IsSpecStaticVar]);
  refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1B1]);
  refalrts::reinit_close_bracket(context[25]);
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_open_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1S1A1L1("GenericMatch-Wrapper:1$1=1\\1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1S1A1L1);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenericMatch-Wrapper:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenericMatch-Wrapper:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & GenericMatch-Wrapper:1/4 # Clear/5 e.VarsMatches#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Clear], context[5] ) )
      continue;
    // closed e.VarsMatches#2 as range 6
    //DEBUG: e.VarsMatches#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Wrapper:1$1=1/4 HalfReuse: </5 } & MapAccum/8 & GenericMatch-Wrapper:1$1=1\1/9 (/10 (/11 )/12 (/13 )/14 )/15 Tile{ AsIs: e.VarsMatches#2/6 } >/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[8], functions[efunc_MapAccum]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1]);
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1]);
    refalrts::reinit_open_call(context[5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Wrapper:1/4 s.OtherResult#2/5 e.ResultInfo#2/2 >/1
  // closed e.ResultInfo#2 as range 2
  //DEBUG: s.OtherResult#2: 5
  //DEBUG: e.ResultInfo#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GenericMatch-Wrapper:1/4 s.OtherResult#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.OtherResult2 #5/0 } Tile{ AsIs: e.ResultInfo#2/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1("GenericMatch-Wrapper:1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1);


static refalrts::FnResult func_GenericMatchm_Wrapper(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenericMatch-Wrapper/4 (/7 e.Expr#1/5 )/8 (/11 e.HardExpr#1/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  // closed e.HardExpr#1 as range 9
  //DEBUG: e.Expr#1: 5
  //DEBUG: e.HardExpr#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenericMatch-Wrapper:1/14 Tile{ AsIs: </0 Reuse: & GenericMatch/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.HardExpr#1/9 AsIs: )/12 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenericMatchm_Wrapper_B1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_GenericMatch]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenericMatchm_Wrapper("GenericMatch-Wrapper", COOKIE1_, COOKIE2_, func_GenericMatchm_Wrapper);


static refalrts::FnResult func_gen_IsColdArg_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & IsColdArg\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsColdArg\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsColdArg\1/4 # False/5 t.Any#2/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
      continue;
    //DEBUG: t.Any#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsColdArg\1/4 # False/5 t.Any#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsColdArg\1/4 # True/5 t.new#3/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsColdArg\1/4 # True/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & IsColdArg\1/4 # True/5 (/6 # CallBrackets/10 e.Expression#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.Expression#2 as range 11
      //DEBUG: e.Expression#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsColdArg\1/4 # True/5 (/6 # CallBrackets/10 e.Expression#2/11 )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsColdArg\1/4 # True/5 (/6 # ClosureBrackects/10 e.ClosureContent#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackects], context[10] ) )
        continue;
      // closed e.ClosureContent#2 as range 11
      //DEBUG: e.ClosureContent#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # True/5 (/6 # ClosureBrackects/10 {REMOVED TILE} )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsColdArg/4 } Tile{ AsIs: e.ClosureContent#2/11 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsColdArg]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsColdArg\1/4 # True/5 (/6 # Brackets/10 e.Expression#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.Expression#2 as range 11
      //DEBUG: e.Expression#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # True/5 (/6 # Brackets/10 {REMOVED TILE} )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsColdArg/4 } Tile{ AsIs: e.Expression#2/11 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsColdArg]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsColdArg\1/4 # True/5 (/6 # ADT-Brackets/10 (/15 e.Name#2/13 )/16 e.Expression#2/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Name#2 as range 13
    // closed e.Expression#2 as range 11
    //DEBUG: e.Name#2: 13
    //DEBUG: e.Expression#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # True/5 (/6 # ADT-Brackets/10 (/15 e.Name#2/13 )/16 {REMOVED TILE} )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsColdArg/4 } Tile{ AsIs: e.Expression#2/11 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsColdArg]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsColdArg\1/4 # True/5 t.Other#2/6 >/1
  //DEBUG: t.Other#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsColdArg\1/4 # True/5 t.Other#2/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsColdArg_L1("IsColdArg\\1", COOKIE1_, COOKIE2_, func_gen_IsColdArg_L1);


static refalrts::FnResult func_IsColdArg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & IsColdArg/4 e.Argument#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Argument#1 as range 2
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@7/0 HalfReuse: # True/4 AsIs: e.Argument#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z7]);
  refalrts::reinit_ident(context[4], identifiers[ident_True]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsColdArg("IsColdArg", COOKIE1_, COOKIE2_, func_IsColdArg);


static refalrts::FnResult func_FindAndFormatVarTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindAndFormatVarTerm/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindAndFormatVarTerm("FindAndFormatVarTerm", COOKIE1_, COOKIE2_, func_FindAndFormatVarTerm);


static refalrts::FnResult func_FindAndFormatVarTermm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindAndFormatVarTerm-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindAndFormatVarTerm-Aux/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # TkVariable/9 e.Index#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindAndFormatVarTerm-Aux/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: e.Index#1/10 AsIs: )/8 } Tile{ ]] }
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
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 'e'/9 e.Index#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 's'/9 e.Index#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 's', context[9] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 's'/9 AsIs: e.Index#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 't'/9 e.Index#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 't', context[9] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 't'/9 AsIs: e.Index#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # Symbol/9 e.SymInfo#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    // closed e.SymInfo#1 as range 10
    //DEBUG: e.SymInfo#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindAndFormatVarTerm-Aux/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/9 AsIs: e.SymInfo#1/10 AsIs: )/8 } Tile{ ]] }
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
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # Brackets/9 e.Expression#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
      continue;
    // closed e.Expression#1 as range 10
    //DEBUG: e.Expression#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & FindAndFormatVarTerm/9 AsIs: e.Expression#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_FindAndFormatVarTerm]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # ADT-Brackets/9 (/14 e.Name#1/12 )/15 e.Expression#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#1 as range 12
    // closed e.Expression#1 as range 10
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Expression#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & FindAndFormatVarTerm/4 } Tile{ AsIs: e.Expression#1/10 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindAndFormatVarTerm]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # CallBrackets/9 e.Expression#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
      continue;
    // closed e.Expression#1 as range 10
    //DEBUG: e.Expression#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & FindAndFormatVarTerm/9 AsIs: e.Expression#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_FindAndFormatVarTerm]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindAndFormatVarTerm-Aux/4 (/7 # ColdCallBrackets/9 e.Expression#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Expression#1 as range 10
    //DEBUG: e.Expression#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ColdCallBrackets/4 HalfReuse: </7 HalfReuse: & FindAndFormatVarTerm/9 AsIs: e.Expression#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_ColdCallBrackets]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_FindAndFormatVarTerm]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindAndFormatVarTerm-Aux/4 (/7 # ClosureBrackets/9 e.ClosureContent#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureContent#1 as range 5
  //DEBUG: e.ClosureContent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ClosureBrackets/4 HalfReuse: </7 HalfReuse: & FindAndFormatVarTerm/9 AsIs: e.ClosureContent#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ClosureBrackets]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_FindAndFormatVarTerm]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindAndFormatVarTermm_Aux("FindAndFormatVarTerm-Aux", COOKIE1_, COOKIE2_, func_FindAndFormatVarTermm_Aux);


static refalrts::FnResult func_gen_MapGenericMatches_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MapGenericMatches=1/4 (/7 e.ArgStaticMatches#1/5 )/8 (/11 (/15 e.ArgStaticMatches#1/21 )/16 (/19 e.ResultMatches#2/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ArgStaticMatches#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[5], context[6], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultMatches#2 as range 17
  //DEBUG: e.ArgStaticMatches#1: 5
  //DEBUG: e.ResultMatches#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MapGenericMatches=1/4 (/7 e.ArgStaticMatches#1/5 )/8 (/11 (/15 e.ArgStaticMatches#1/21 )/16 (/19 {REMOVED TILE} )/20 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultMatches#2/17 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapGenericMatches_A1("MapGenericMatches=1", COOKIE1_, COOKIE2_, func_gen_MapGenericMatches_A1);


static refalrts::FnResult func_gen_MapGenericMatches_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & MapGenericMatches=1\1/4 (/7 (/11 e.ArgStaticMatches-B#2/24 (/30 e.ArgVal#2/28 ':'/34 t.SpecVar#2/32 )/31 e.ArgStaticMatches-E#2/26 )/12 (/15 e.MappedMatches#2/13 )/16 )/8 (/19 e.SentenceVal#2/17 ':'/23 t.SpecVar#2/21 )/20 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MappedMatches#2 as range 13
  context[22] = refalrts::tvar_right( context[21], context[17], context[18] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::char_right( ':', context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  // closed e.SentenceVal#2 as range 17
  context[24] = 0;
  context[25] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[26] = context[9];
    context[27] = context[10];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[33] = refalrts::repeated_stvar_right( vm, context[32], context[21], context[28], context[29] );
    if( ! context[33] )
      continue;
    context[34] = refalrts::char_right( ':', context[28], context[29] );
    if( ! context[34] )
      continue;
    // closed e.ArgVal#2 as range 28
    // closed e.ArgStaticMatches-E#2 as range 26
    //DEBUG: e.MappedMatches#2: 13
    //DEBUG: t.SpecVar#2: 21
    //DEBUG: e.SentenceVal#2: 17
    //DEBUG: e.ArgStaticMatches-B#2: 24
    //DEBUG: e.ArgVal#2: 28
    //DEBUG: e.ArgStaticMatches-E#2: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MapGenericMatches=1\1/4 {REMOVED TILE} )/8 {REMOVED TILE} t.SpecVar#2/21 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ArgStaticMatches-B#2/24 AsIs: (/30 AsIs: e.ArgVal#2/28 AsIs: ':'/34 AsIs: t.SpecVar#2/32 AsIs: )/31 AsIs: e.ArgStaticMatches-E#2/26 AsIs: )/12 AsIs: (/15 AsIs: e.MappedMatches#2/13 HalfReuse: (/16 } e.ArgVal#2/28/35 Tile{ HalfReuse: ':'/19 AsIs: e.SentenceVal#2/17 HalfReuse: )/23 } Tile{ AsIs: )/20 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[35], context[36], context[28], context[29]);
    refalrts::reinit_open_bracket(context[16]);
    refalrts::reinit_char(context[19], ':');
    refalrts::reinit_close_bracket(context[23]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::link_brackets( context[16], context[23] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[24], context[25], context[9], context[10] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_MapGenericMatches_A1L1("MapGenericMatches=1\\1", COOKIE1_, COOKIE2_, func_gen_MapGenericMatches_A1L1);


static refalrts::FnResult func_MapGenericMatches(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MapGenericMatches/4 (/7 e.ArgStaticMatches#1/5 )/8 (/11 e.SentenceStaticMatches#1/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ArgStaticMatches#1 as range 5
  // closed e.SentenceStaticMatches#1 as range 9
  //DEBUG: e.ArgStaticMatches#1: 5
  //DEBUG: e.SentenceStaticMatches#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapGenericMatches=1/4 AsIs: (/7 AsIs: e.ArgStaticMatches#1/5 AsIs: )/8 HalfReuse: </11 } & Reduce/13 & MapGenericMatches=1\1/14 (/15 (/16 e.ArgStaticMatches#1/5/17 )/19 (/20 )/21 )/22 Tile{ AsIs: e.SentenceStaticMatches#1/9 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_MapGenericMatches_A1L1]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_MapGenericMatches_A1]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapGenericMatches("MapGenericMatches", COOKIE1_, COOKIE2_, func_MapGenericMatches);


static refalrts::FnResult func_gen_FindReplacem_GenericMatchesm_Val_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindReplace-GenericMatches-Val\1/4 (/7 e.LookFor#1/5 )/8 (/11 e.ReplaceVal#1/9 )/12 (/15 e.Val#2/13 ':'/19 t.Var#2/17 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LookFor#1 as range 5
  // closed e.ReplaceVal#1 as range 9
  context[18] = refalrts::tvar_right( context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( ':', context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 13
  //DEBUG: e.LookFor#1: 5
  //DEBUG: e.ReplaceVal#1: 9
  //DEBUG: t.Var#2: 17
  //DEBUG: e.Val#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: </11 } Tile{ HalfReuse: & FindReplace-Expr/12 AsIs: (/15 } Tile{ AsIs: e.Val#2/13 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.LookFor#1/5 AsIs: )/8 } Tile{ AsIs: e.ReplaceVal#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/19 AsIs: t.Var#2/17 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[12], functions[efunc_FindReplacem_Expr]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[0], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindReplacem_GenericMatchesm_Val_L1("FindReplace-GenericMatches-Val\\1", COOKIE1_, COOKIE2_, func_gen_FindReplacem_GenericMatchesm_Val_L1);


static refalrts::FnResult func_FindReplacem_GenericMatchesm_Val(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindReplace-GenericMatches-Val/4 (/7 e.GenericMatches#1/5 )/8 (/11 e.LookFor#1/9 )/12 e.ReplaceVal#1/2 >/1
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
  // closed e.GenericMatches#1 as range 5
  // closed e.LookFor#1 as range 9
  // closed e.ReplaceVal#1 as range 2
  //DEBUG: e.GenericMatches#1: 5
  //DEBUG: e.LookFor#1: 9
  //DEBUG: e.ReplaceVal#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@5/12 } Tile{ AsIs: e.LookFor#1/9 } Tile{ HalfReuse: (/1 } Tile{ AsIs: e.ReplaceVal#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.GenericMatches#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ ]] }
  refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z5]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindReplacem_GenericMatchesm_Val("FindReplace-GenericMatches-Val", COOKIE1_, COOKIE2_, func_FindReplacem_GenericMatchesm_Val);


static refalrts::FnResult func_gen_FindReplacem_ExprList_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindReplace-ExprList\1/4 (/7 e.LookFor#1/5 )/8 (/11 e.ReplaceVal#1/9 )/12 (/15 e.LookAt#2/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LookFor#1 as range 5
  // closed e.ReplaceVal#1 as range 9
  // closed e.LookAt#2 as range 13
  //DEBUG: e.LookFor#1: 5
  //DEBUG: e.ReplaceVal#1: 9
  //DEBUG: e.LookAt#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & FindReplace-Expr/12 AsIs: (/15 AsIs: e.LookAt#2/13 AsIs: )/16 HalfReuse: (/1 } Tile{ AsIs: e.LookFor#1/5 } Tile{ AsIs: )/8 } Tile{ AsIs: e.ReplaceVal#1/9 } Tile{ HalfReuse: >/11 } Tile{ HalfReuse: )/7 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[12], functions[efunc_FindReplacem_Expr]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_call(context[11]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::link_brackets( context[0], context[7] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindReplacem_ExprList_L1("FindReplace-ExprList\\1", COOKIE1_, COOKIE2_, func_gen_FindReplacem_ExprList_L1);


static refalrts::FnResult func_FindReplacem_ExprList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindReplace-ExprList/4 (/7 e.LookAtExprList#1/5 )/8 (/11 e.LookFor#1/9 )/12 e.ReplaceVal#1/2 >/1
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
  // closed e.LookAtExprList#1 as range 5
  // closed e.LookFor#1 as range 9
  // closed e.ReplaceVal#1 as range 2
  //DEBUG: e.LookAtExprList#1: 5
  //DEBUG: e.LookFor#1: 9
  //DEBUG: e.ReplaceVal#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@6/12 } Tile{ AsIs: e.LookFor#1/9 } Tile{ HalfReuse: (/1 } Tile{ AsIs: e.ReplaceVal#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.LookAtExprList#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ ]] }
  refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z6]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindReplacem_ExprList("FindReplace-ExprList", COOKIE1_, COOKIE2_, func_FindReplacem_ExprList);


static refalrts::FnResult func_gen_FindReplacem_Expr_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FindReplace-Expr$5=1/4 (/7 e.LookFor#1/5 )/8 (/11 e.ReplaceVal#1/9 )/12 (/15 (/19 e.LookFor#1/21 )/20 e.ReplaceVal#1/23 )/16 e.ModifyedLookAt#2/2 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.LookFor#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[5], context[6], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ReplaceVal#1 as range 9
  if( ! refalrts::repeated_evar_left( vm, context[23], context[24], context[9], context[10], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ModifyedLookAt#2 as range 2
  //DEBUG: e.LookFor#1: 5
  //DEBUG: e.ReplaceVal#1: 9
  //DEBUG: e.ModifyedLookAt#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindReplace-Expr$5=1/4 (/7 e.LookFor#1/5 )/8 (/11 e.ReplaceVal#1/9 )/12 (/15 (/19 e.LookFor#1/21 )/20 e.ReplaceVal#1/23 )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ModifyedLookAt#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindReplacem_Expr_S5A1("FindReplace-Expr$5=1", COOKIE1_, COOKIE2_, func_gen_FindReplacem_Expr_S5A1);


static refalrts::FnResult func_gen_FindReplacem_Expr_S5A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindReplace-Expr$5=1\1/4 (/7 e.LookFor#1/5 )/8 (/11 e.ReplaceVal#1/9 )/12 (/15 (/19 e.LookFor#1/21 )/20 e.ReplaceVal#1/23 )/16 t.LookAt-Term#2/25 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.LookFor#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[5], context[6], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ReplaceVal#1 as range 9
  if( ! refalrts::repeated_evar_left( vm, context[23], context[24], context[9], context[10], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.LookFor#1: 5
  //DEBUG: e.ReplaceVal#1: 9
  //DEBUG: t.LookAt-Term#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/19 AsIs: e.LookFor#1/21 AsIs: )/20 AsIs: e.ReplaceVal#1/23 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & FindReplace-Term/4 } Tile{ AsIs: t.LookAt-Term#2/25 } Tile{ AsIs: (/7 AsIs: e.LookFor#1/5 AsIs: )/8 } Tile{ AsIs: e.ReplaceVal#1/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FindReplacem_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindReplacem_Expr_S5A1L1("FindReplace-Expr$5=1\\1", COOKIE1_, COOKIE2_, func_gen_FindReplacem_Expr_S5A1L1);


static refalrts::FnResult func_FindReplacem_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & FindReplace-Expr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindReplace-Expr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & FindReplace-Expr/4 (/7 )/8 (/11 e.LookFor#1/13 )/12 e.ReplaceVal#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.LookFor#1 as range 13
    // closed e.ReplaceVal#1 as range 15
    //DEBUG: e.LookFor#1: 13
    //DEBUG: e.ReplaceVal#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindReplace-Expr/4 (/7 )/8 (/11 e.LookFor#1/13 )/12 e.ReplaceVal#1/15 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindReplace-Expr/4 (/7 e.LookAt#1/13 )/8 (/11 )/12 e.ReplaceVal#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.LookAt#1 as range 13
    // closed e.ReplaceVal#1 as range 15
    //DEBUG: e.LookAt#1: 13
    //DEBUG: e.ReplaceVal#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindReplace-Expr/4 (/7 {REMOVED TILE} )/8 (/11 )/12 e.ReplaceVal#1/15 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LookAt#1/13 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindReplace-Expr/4 (/7 e.LookAt#1/13 )/8 (/11 e.LookAt#1/19 )/12 e.ReplaceVal#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.LookAt#1 as range 13
    if( ! refalrts::repeated_evar_left( vm, context[19], context[20], context[13], context[14], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.ReplaceVal#1 as range 17
    //DEBUG: e.LookAt#1: 13
    //DEBUG: e.ReplaceVal#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindReplace-Expr/4 (/7 e.LookAt#1/13 )/8 (/11 e.LookAt#1/19 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.ReplaceVal#1/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindReplace-Expr/4 (/7 e.LookAt-B#1/19 e.LookFor#1/23 e.LookAt-E#1/21 )/8 (/11 e.LookFor#1/15 )/12 e.ReplaceVal#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.LookFor#1 as range 15
    // closed e.ReplaceVal#1 as range 17
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[13];
      context[22] = context[14];
      if( ! refalrts::repeated_evar_left( vm, context[23], context[24], context[15], context[16], context[21], context[22] ) )
        continue;
      // closed e.LookAt-E#1 as range 21
      //DEBUG: e.LookFor#1: 15
      //DEBUG: e.ReplaceVal#1: 17
      //DEBUG: e.LookAt-B#1: 19
      //DEBUG: e.LookAt-E#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindReplace-Expr/4 AsIs: (/7 } Tile{ AsIs: e.LookAt-B#1/19 } )/25 (/26 Tile{ AsIs: e.LookFor#1/23 } )/27 e.ReplaceVal#1/17/28 >/30 e.ReplaceVal#1/17/31 </33 & FindReplace-Expr/34 (/35 Tile{ AsIs: e.LookAt-E#1/21 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.LookFor#1/15 AsIs: )/12 AsIs: e.ReplaceVal#1/17 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[17], context[18]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_FindReplacem_Expr]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[35], context[8] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[7], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[27], context[35] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindReplace-Expr/4 (/7 e.LookAt#1/5 )/8 (/11 e.LookFor#1/9 )/12 e.ReplaceVal#1/2 >/1
  // closed e.LookAt#1 as range 5
  // closed e.LookFor#1 as range 9
  // closed e.ReplaceVal#1 as range 2
  //DEBUG: e.LookAt#1: 5
  //DEBUG: e.LookFor#1: 9
  //DEBUG: e.ReplaceVal#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindReplace-Expr$5=1/4 AsIs: (/7 } e.LookFor#1/9/13 )/15 (/16 e.ReplaceVal#1/2/17 )/19 </20 & MapAccum/21 [*]/22 & FindReplace-Expr$5=1\1/23 (/24 e.LookFor#1/9/25 )/27 (/28 e.ReplaceVal#1/2/29 )/31 {*}/32 Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.LookFor#1/9 AsIs: )/12 AsIs: e.ReplaceVal#1/2 HalfReuse: )/1 } Tile{ AsIs: e.LookAt#1/5 } >/33 >/34 Tile{ ]] }
  refalrts::copy_evar(vm, context[13], context[14], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_MapAccum]);
  refalrts::alloc_closure_head(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_FindReplacem_Expr_S5A1L1]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_unwrapped_closure(vm, context[32], context[22]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_FindReplacem_Expr_S5A1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[15], context[32] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[32] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindReplacem_Expr("FindReplace-Expr", COOKIE1_, COOKIE2_, func_FindReplacem_Expr);


static refalrts::FnResult func_FindReplacem_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & FindReplace-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindReplace-Term/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & FindReplace-Term/4 (/5 s.new#4/17 e.new#5/15 )/6 (/9 e.new#7/11 )/10 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[5] ) )
      continue;
    // closed e.new#7 as range 11
    // closed e.new#6 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.new#5 as range 15
    do {
      // </0 & FindReplace-Term/4 (/5 # Brackets/17 e.Expression#1/18 )/6 (/9 e.LookFor#1/20 )/10 e.ReplaceVal#1/22 >/1
      context[18] = context[15];
      context[19] = context[16];
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[17] ) )
        continue;
      // closed e.Expression#1 as range 18
      // closed e.LookFor#1 as range 20
      // closed e.ReplaceVal#1 as range 22
      //DEBUG: e.Expression#1: 18
      //DEBUG: e.LookFor#1: 20
      //DEBUG: e.ReplaceVal#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/24 Tile{ HalfReuse: # Brackets/0 HalfReuse: </4 HalfReuse: & FindReplace-Expr/5 HalfReuse: (/17 AsIs: e.Expression#1/18 AsIs: )/6 AsIs: (/9 AsIs: e.LookFor#1/20 AsIs: )/10 AsIs: e.ReplaceVal#1/22 AsIs: >/1 } )/25 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::reinit_ident(context[0], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_FindReplacem_Expr]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[17], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FindReplace-Term/4 (/5 # ADT-Brackets/17 (/26 e.Name#1/24 )/27 e.Expression#1/18 )/6 (/9 e.LookFor#1/20 )/10 e.ReplaceVal#1/22 >/1
      context[18] = context[15];
      context[19] = context[16];
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[17] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[18], context[19] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      // closed e.Name#1 as range 24
      // closed e.Expression#1 as range 18
      // closed e.LookFor#1 as range 20
      // closed e.ReplaceVal#1 as range 22
      //DEBUG: e.Name#1: 24
      //DEBUG: e.Expression#1: 18
      //DEBUG: e.LookFor#1: 20
      //DEBUG: e.ReplaceVal#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/17 AsIs: (/26 } Tile{ AsIs: e.Name#1/24 } )/28 Tile{ AsIs: </0 Reuse: & FindReplace-Expr/4 } Tile{ HalfReuse: (/27 AsIs: e.Expression#1/18 AsIs: )/6 AsIs: (/9 AsIs: e.LookFor#1/20 AsIs: )/10 AsIs: e.ReplaceVal#1/22 AsIs: >/1 } )/29 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::update_name(context[4], functions[efunc_FindReplacem_Expr]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::link_brackets( context[5], context[29] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[27], context[6] );
      refalrts::link_brackets( context[26], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[5], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FindReplace-Term/4 (/5 # CallBrackets/17 e.Expression#1/18 )/6 (/9 e.LookFor#1/20 )/10 e.ReplaceVal#1/22 >/1
      context[18] = context[15];
      context[19] = context[16];
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[17] ) )
        continue;
      // closed e.Expression#1 as range 18
      // closed e.LookFor#1 as range 20
      // closed e.ReplaceVal#1 as range 22
      //DEBUG: e.Expression#1: 18
      //DEBUG: e.LookFor#1: 20
      //DEBUG: e.ReplaceVal#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/24 Tile{ HalfReuse: # CallBrackets/0 HalfReuse: </4 HalfReuse: & FindReplace-Expr/5 HalfReuse: (/17 AsIs: e.Expression#1/18 AsIs: )/6 AsIs: (/9 AsIs: e.LookFor#1/20 AsIs: )/10 AsIs: e.ReplaceVal#1/22 AsIs: >/1 } )/25 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::reinit_ident(context[0], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_FindReplacem_Expr]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[17], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindReplace-Term/4 (/5 # ClosureBrackets/17 e.ClosureContent#1/18 )/6 (/9 e.LookFor#1/20 )/10 e.ReplaceVal#1/22 >/1
    context[18] = context[15];
    context[19] = context[16];
    context[20] = context[11];
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[17] ) )
      continue;
    // closed e.ClosureContent#1 as range 18
    // closed e.LookFor#1 as range 20
    // closed e.ReplaceVal#1 as range 22
    //DEBUG: e.ClosureContent#1: 18
    //DEBUG: e.LookFor#1: 20
    //DEBUG: e.ReplaceVal#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/24 Tile{ HalfReuse: # ClosureBrackets/0 HalfReuse: </4 HalfReuse: & FindReplace-Expr/5 HalfReuse: (/17 AsIs: e.ClosureContent#1/18 AsIs: )/6 AsIs: (/9 AsIs: e.LookFor#1/20 AsIs: )/10 AsIs: e.ReplaceVal#1/22 AsIs: >/1 } )/25 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::reinit_ident(context[0], identifiers[ident_ClosureBrackets]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_FindReplacem_Expr]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::link_brackets( context[24], context[25] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[17], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindReplace-Term/4 t.OtherTerm#1/5 (/9 e.LookFor#1/7 )/10 e.ReplaceVal#1/2 >/1
  // closed e.LookFor#1 as range 7
  // closed e.ReplaceVal#1 as range 2
  //DEBUG: t.OtherTerm#1: 5
  //DEBUG: e.LookFor#1: 7
  //DEBUG: e.ReplaceVal#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindReplace-Term/4 {REMOVED TILE} (/9 e.LookFor#1/7 )/10 e.ReplaceVal#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindReplacem_Term("FindReplace-Term", COOKIE1_, COOKIE2_, func_FindReplacem_Term);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapAccum@1/4 t.Acc#1/5 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: t.Acc#1/5 AsIs: e.Tail#1/2 HalfReuse: (/1 } )/7 >/8 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Reduce@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@1/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@1/4 s.new#6/5 t.new#7/9 e.new#8/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new#8 as range 11
      do {
        // </0 & Reduce@1/4 # True/5 t.Next#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: t.Next#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: # True/5 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@1/4 # False/5 (/9 e.2#0/15 ':'/22 (/19 # TkVariable/21 e.3#0/17 )/20 )/10 e.Tail#1/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_right( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_TkVariable], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_right( ':', context[15], context[16] );
      if( ! context[22] )
        continue;
      // closed e.2#0 as range 15
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 13
      //DEBUG: e.2#0: 15
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 # TkVariable/21 e.3#0/17 )/20 )/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 HalfReuse: </5 HalfReuse: & IsActiveExpr/9 AsIs: e.2#0/15 HalfReuse: >/22 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_IsActiveExpr]);
      refalrts::reinit_close_call(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[22], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@1/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce@1/14 Tile{ AsIs: </0 Reuse: & IsActiveMatches\1*2/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z1]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_IsActiveMatches_L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Acc#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@2/4 e.new#1/2 (/7 t.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Reduce@2/4 e.new#4/11 (/7 t.new#5/9 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#4 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & Reduce@2/4 e.new#8/17 (/7 s.new#9/9 t.new#10/15 e.new#11/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[9], context[9] ) )
        continue;
      // closed e.new#8 as range 17
      // closed e.new#11 as range 19
      do {
        // </0 & Reduce@2/4 e.Expr#1/21 (/7 # True/9 t.Next#1/15 e.Tail#1/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
          continue;
        // closed e.Expr#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: t.Next#1: 15
        //DEBUG: e.Expr#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Next#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: e.Expr#1/21 AsIs: (/7 AsIs: # True/9 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@2/4 e.new#12/21 (/7 # False/9 (/15 s.new#13/27 e.new#14/25 )/16 e.new#15/23 )/8 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
        continue;
      // closed e.new#12 as range 21
      // closed e.new#15 as range 23
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      // closed e.new#14 as range 25
      do {
        // </0 & Reduce@2/4 e.Expr#1/28 (/7 # False/9 (/15 # CallBrackets/27 e.0#0/30 )/16 e.Tail#1/32 )/8 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[23];
        context[33] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[27] ) )
          continue;
        // closed e.Expr#1 as range 28
        // closed e.0#0 as range 30
        // closed e.Tail#1 as range 32
        //DEBUG: e.Expr#1: 28
        //DEBUG: e.0#0: 30
        //DEBUG: e.Tail#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/15 # CallBrackets/27 e.0#0/30 )/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: e.Expr#1/28 AsIs: (/7 Reuse: # True/9 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::update_ident(context[9], identifiers[ident_True]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Reduce@2/4 e.Expr#1/28 (/7 # False/9 (/15 # ColdCallBrackets/27 e.0#0/30 )/16 e.Tail#1/32 )/8 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[23];
        context[33] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[27] ) )
          continue;
        // closed e.Expr#1 as range 28
        // closed e.0#0 as range 30
        // closed e.Tail#1 as range 32
        //DEBUG: e.Expr#1: 28
        //DEBUG: e.0#0: 30
        //DEBUG: e.Tail#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/15 # ColdCallBrackets/27 e.0#0/30 )/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: e.Expr#1/28 AsIs: (/7 Reuse: # True/9 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::update_ident(context[9], identifiers[ident_True]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@2/4 e.Expr#1/28 (/7 # False/9 (/15 # Brackets/27 e.0#0/30 )/16 e.Tail#1/32 )/8 >/1
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[25];
      context[31] = context[26];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[27] ) )
        continue;
      // closed e.Expr#1 as range 28
      // closed e.0#0 as range 30
      // closed e.Tail#1 as range 32
      //DEBUG: e.Expr#1: 28
      //DEBUG: e.0#0: 30
      //DEBUG: e.Tail#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 } Tile{ AsIs: e.Expr#1/28 } Tile{ HalfReuse: (/9 HalfReuse: </15 HalfReuse: & IsActiveExpr/27 AsIs: e.0#0/30 HalfReuse: >/16 AsIs: e.Tail#1/32 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[27], functions[efunc_IsActiveExpr]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[8] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 e.Expr#1/17 (/7 t.Acc#1/9 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Expr#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Expr#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: e.Expr#1/17 AsIs: (/7 } </21 & IsActiveExpr\1*4/22 (/23 e.Expr#1/17/24 )/26 Tile{ AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/27 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_IsActiveExpr_L1D4]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[21], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 e.Expr#1/2 (/7 t.Acc#1/9 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@2/4 e.Expr#1/2 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_IsActiveExpr_L1D4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & IsActiveExpr\1*4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsActiveExpr\1*4/4 (/7 e.new#1/5 )/8 # False/9 t.new#2/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left( identifiers[ident_False], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsActiveExpr\1*4/4 (/7 e.Expr#1/12 )/8 # False/9 (/10 # ADT-Brackets/16 (/19 e.Name#2/17 )/20 e.Expr#1/21 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[14], context[15] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Expr#1 as range 12
    if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[12], context[13], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Name#2 as range 17
    //DEBUG: e.Expr#1: 12
    //DEBUG: e.Name#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # False/9 (/10 # ADT-Brackets/16 (/19 e.Name#2/17 )/20 e.Expr#1/21 )/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsActiveExpr/4 } Tile{ AsIs: e.Expr#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsActiveExpr]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsActiveExpr\1*4/4 (/7 e.Expr#1/5 )/8 # False/9 t.OtherTerm#2/10 >/1
  // closed e.Expr#1 as range 5
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsActiveExpr\1*4/4 (/7 e.Expr#1/5 )/8 # False/9 t.OtherTerm#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsActiveExpr_L1D4("IsActiveExpr\\1*4", COOKIE1_, COOKIE2_, func_gen_IsActiveExpr_L1D4);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@1/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 e.6#0/22 )/25 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Condition], context[11], context[12] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[11], context[12] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.2#0 as range 14
      // closed e.4#0 as range 18
      // closed e.6#0 as range 22
      // closed e.Tail#1 as range 9
      //DEBUG: e.2#0: 14
      //DEBUG: e.4#0: 18
      //DEBUG: e.6#0: 22
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Map@1/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.6#0/22 } Tile{ HalfReuse: </25 HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Body\1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_FindClosuresInPatternsm_Body_L1L1D1]);
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

  // </0 & Map@1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
      // </0 & Map@2/4 (/7 (/15 e.1#0/13 )/16 e.2#0/11 (/19 e.3#0/17 )/20 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_right( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.1#0 as range 13
      // closed e.2#0 as range 11
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 9
      //DEBUG: e.1#0: 13
      //DEBUG: e.2#0: 11
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3#0/17 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.1#0/13 } Tile{ HalfReuse: </15 } Tile{ HalfReuse: & Map@1/16 AsIs: e.2#0/11 HalfReuse: >/19 } Tile{ HalfReuse: >/7 } Tile{ HalfReuse: </20 HalfReuse: & Map@2/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[16], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Body\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_FindClosuresInPatternsm_Body_L1D1]);
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

  // </0 & Map@2/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Term/4 AsIs: t.Next#1/7 } >/9 </10 & Map@3/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Term]);
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

  // </0 & Map@3/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Reduce_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Reduce@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@3/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@3/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@3/4 (/5 e.#0/13 )/6 (/9 e.2#0/15 ':'/19 t.#0/17 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
        continue;
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 11
      context[18] = refalrts::tvar_right( context[17], context[15], context[16] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_right( ':', context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.2#0 as range 15
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 17
      //DEBUG: e.2#0: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} t.#0/17 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@3/4 AsIs: (/5 AsIs: e.#0/13 HalfReuse: (/6 } Tile{ AsIs: e.2#0/15 } Tile{ HalfReuse: )/19 } Tile{ AsIs: )/10 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[6]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::link_brackets( context[6], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@3/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce@3/14 Tile{ AsIs: </0 Reuse: & Spec-PrepareSignature\1*1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z3]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Specm_PrepareSignature_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@3/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Acc#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z3("Reduce@3", COOKIE1_, COOKIE2_, func_gen_Reduce_Z3);


static refalrts::FnResult func_gen_Reduce_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Reduce@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@4/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@4/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@4/4 s.new#6/5 t.new#7/9 e.new#8/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new#8 as range 11
      do {
        // </0 & Reduce@4/4 # False/5 t.Next#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: t.Next#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@4/4 AsIs: # False/5 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@4/4 # True/5 t.new#9/9 e.new#10/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
        continue;
      // closed e.new#10 as range 13
      do {
        // </0 & Reduce@4/4 # True/5 (/9 (/21 # TkVariable/23 e.2#0/19 )/22 )/10 e.Tail#1/15 >/1
        context[15] = context[13];
        context[16] = context[14];
        context[17] = 0;
        context[18] = 0;
        if( ! refalrts::brackets_term( context[17], context[18], context[9] ) )
          continue;
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_TkVariable], context[19], context[20] );
        if( ! context[23] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        // closed e.2#0 as range 19
        // closed e.Tail#1 as range 15
        //DEBUG: e.2#0: 19
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 (/21 # TkVariable/23 e.2#0/19 )/22 )/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@4/4 AsIs: # True/5 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@4/4 # True/5 t.Next#1/9 e.Tail#1/15 >/1
      context[15] = context[13];
      context[16] = context[14];
      // closed e.Tail#1 as range 15
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@4/4 Reuse: # False/5 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[5], identifiers[ident_False]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@4/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce@4/14 Tile{ AsIs: </0 Reuse: & Spec-IsTrivialSignature\1*3/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z4]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Specm_IsTrivialSignature_L1D3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@4/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Acc#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@4/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z4("Reduce@4", COOKIE1_, COOKIE2_, func_gen_Reduce_Z4);


static refalrts::FnResult func_gen_Reduce_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & Reduce@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@5/4 e.new#1/2 (/7 t.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Reduce@5/4 e.new#4/11 (/7 t.new#5/9 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#4 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & Reduce@5/4 e.VarsFromBody#1/17 (/7 (/9 (/27 e.2#0/25 )/28 (/31 e.4#0/29 )/32 )/10 (/15 e.0#0/23 )/16 e.Tail#1/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[21], context[22] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.VarsFromBody#1 as range 17
      // closed e.2#0 as range 25
      // closed e.4#0 as range 29
      // closed e.0#0 as range 23
      // closed e.Tail#1 as range 19
      //DEBUG: e.VarsFromBody#1: 17
      //DEBUG: e.2#0: 25
      //DEBUG: e.4#0: 29
      //DEBUG: e.0#0: 23
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@5/4 AsIs: e.VarsFromBody#1/17 AsIs: (/7 HalfReuse: </9 HalfReuse: & Spec-RenameGenericMatch\1=1/27 } (/33 Tile{ AsIs: e.2#0/25 } )/34 (/35 Tile{ AsIs: e.0#0/23 } Tile{ AsIs: )/28 AsIs: (/31 AsIs: e.4#0/29 AsIs: )/32 HalfReuse: </10 HalfReuse: & NewVarName/15 } (/36 e.VarsFromBody#1/17/37 )/39 e.0#0/23/40 (/42 )/43 >/44 Tile{ HalfReuse: >/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::copy_evar(vm, context[37], context[38], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[27], functions[efunc_gen_Specm_RenameGenericMatch_L1A1]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[15], functions[efunc_NewVarName]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[10] );
      refalrts::link_brackets( context[42], context[43] );
      refalrts::link_brackets( context[36], context[39] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[35], context[28] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[36], context[44] );
      res = refalrts::splice_evar( res, context[28], context[15] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@5/4 e.VarsFromBody#1/17 (/7 t.Acc#1/9 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.VarsFromBody#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.VarsFromBody#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@5/4 AsIs: e.VarsFromBody#1/17 AsIs: (/7 } </21 & Spec-RenameGenericMatch\1*1/22 (/23 e.VarsFromBody#1/17/24 )/26 Tile{ AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/27 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Specm_RenameGenericMatch_L1D1]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[21], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@5/4 e.VarsFromBody#1/2 (/7 t.Acc#1/9 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.VarsFromBody#1 as range 2
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.VarsFromBody#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@5/4 e.VarsFromBody#1/2 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z5("Reduce@5", COOKIE1_, COOKIE2_, func_gen_Reduce_Z5);


static refalrts::FnResult func_gen_Reduce_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 71 elems
  refalrts::Iter context[71];
  refalrts::zeros( context, 71 );
  // </0 & Reduce@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@6/4 e.new#1/2 (/15 e.new#2/13 )/16 (/11 e.new#3/9 )/12 (/7 t.new#4/17 e.new#5/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 13
  // closed e.new#3 as range 9
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & Reduce@6/4 e.new#6/19 (/15 e.new#11/21 )/16 (/11 e.new#10/23 )/12 (/7 t.new#7/17 t.new#8/27 e.new#9/25 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[5];
    context[26] = context[6];
    // closed e.new#6 as range 19
    // closed e.new#11 as range 21
    // closed e.new#10 as range 23
    context[28] = refalrts::tvar_left( context[27], context[25], context[26] );
    if( ! context[28] )
      continue;
    // closed e.new#9 as range 25
    do {
      // </0 & Reduce@6/4 e.DynamicMatches#1/29 (/15 e.StaticMatches#1/31 )/16 (/11 e.SpecPattern#1/33 )/12 (/7 (/17 e.#0/37 )/18 (/27 (/43 e.2#0/41 )/44 e.3#0/39 (/47 e.4#0/45 )/48 )/28 e.Tail#1/35 )/8 >/1
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[25];
      context[36] = context[26];
      context[37] = 0;
      context[38] = 0;
      if( ! refalrts::brackets_term( context[37], context[38], context[17] ) )
        continue;
      context[39] = 0;
      context[40] = 0;
      if( ! refalrts::brackets_term( context[39], context[40], context[27] ) )
        continue;
      context[41] = 0;
      context[42] = 0;
      context[43] = refalrts::brackets_left( context[41], context[42], context[39], context[40] );
      if( ! context[43] )
        continue;
      refalrts::bracket_pointers(context[43], context[44]);
      context[45] = 0;
      context[46] = 0;
      context[47] = refalrts::brackets_right( context[45], context[46], context[39], context[40] );
      if( ! context[47] )
        continue;
      refalrts::bracket_pointers(context[47], context[48]);
      // closed e.DynamicMatches#1 as range 29
      // closed e.StaticMatches#1 as range 31
      // closed e.SpecPattern#1 as range 33
      // closed e.#0 as range 37
      // closed e.2#0 as range 41
      // closed e.3#0 as range 39
      // closed e.4#0 as range 45
      // closed e.Tail#1 as range 35
      //DEBUG: e.DynamicMatches#1: 29
      //DEBUG: e.StaticMatches#1: 31
      //DEBUG: e.SpecPattern#1: 33
      //DEBUG: e.#0: 37
      //DEBUG: e.2#0: 41
      //DEBUG: e.3#0: 39
      //DEBUG: e.4#0: 45
      //DEBUG: e.Tail#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@6/4 AsIs: e.DynamicMatches#1/29 AsIs: (/15 AsIs: e.StaticMatches#1/31 AsIs: )/16 AsIs: (/11 AsIs: e.SpecPattern#1/33 AsIs: )/12 AsIs: (/7 HalfReuse: </17 } & Spec-PrepareSpecializedFuncBody\1=1/49 (/50 Tile{ AsIs: e.#0/37 } )/51 Tile{ AsIs: (/47 } e.2#0/41/52 )/54 (/55 e.DynamicMatches#1/29/56 )/58 (/59 Tile{ AsIs: e.3#0/39 } )/60 (/61 Tile{ AsIs: e.4#0/45 } )/62 (/63 e.StaticMatches#1/31/64 )/66 Tile{ HalfReuse: </18 HalfReuse: & GenericMatch-Wrapper/27 AsIs: (/43 AsIs: e.2#0/41 AsIs: )/44 } (/67 e.SpecPattern#1/33/68 )/70 Tile{ HalfReuse: >/48 HalfReuse: >/28 AsIs: e.Tail#1/35 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[49], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1A1]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::copy_evar(vm, context[52], context[53], context[41], context[42]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::copy_evar(vm, context[56], context[57], context[29], context[30]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_open_bracket(vm, context[59]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::copy_evar(vm, context[64], context[65], context[31], context[32]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_open_bracket(vm, context[67]);
      refalrts::copy_evar(vm, context[68], context[69], context[33], context[34]);
      refalrts::alloc_close_bracket(vm, context[70]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_open_call(context[18]);
      refalrts::reinit_name(context[27], functions[efunc_GenericMatchm_Wrapper]);
      refalrts::reinit_close_call(context[48]);
      refalrts::reinit_close_call(context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[67], context[70] );
      refalrts::link_brackets( context[43], context[44] );
      refalrts::link_brackets( context[63], context[66] );
      refalrts::link_brackets( context[61], context[62] );
      refalrts::link_brackets( context[59], context[60] );
      refalrts::link_brackets( context[55], context[58] );
      refalrts::link_brackets( context[47], context[54] );
      refalrts::link_brackets( context[50], context[51] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[48];
      res = refalrts::splice_evar( res, context[67], context[70] );
      res = refalrts::splice_evar( res, context[18], context[44] );
      res = refalrts::splice_evar( res, context[62], context[66] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[54], context[59] );
      res = refalrts::splice_evar( res, context[52], context[53] );
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[51], context[51] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@6/4 e.DynamicMatches#1/29 (/15 e.StaticMatches#1/31 )/16 (/11 e.SpecPattern#1/33 )/12 (/7 t.Acc#1/17 t.Next#1/27 e.Tail#1/35 )/8 >/1
    context[29] = context[19];
    context[30] = context[20];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = context[23];
    context[34] = context[24];
    context[35] = context[25];
    context[36] = context[26];
    // closed e.DynamicMatches#1 as range 29
    // closed e.StaticMatches#1 as range 31
    // closed e.SpecPattern#1 as range 33
    // closed e.Tail#1 as range 35
    //DEBUG: t.Acc#1: 17
    //DEBUG: t.Next#1: 27
    //DEBUG: e.DynamicMatches#1: 29
    //DEBUG: e.StaticMatches#1: 31
    //DEBUG: e.SpecPattern#1: 33
    //DEBUG: e.Tail#1: 35

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@6/4 AsIs: e.DynamicMatches#1/29 AsIs: (/15 AsIs: e.StaticMatches#1/31 AsIs: )/16 AsIs: (/11 AsIs: e.SpecPattern#1/33 AsIs: )/12 AsIs: (/7 } </37 & Spec-PrepareSpecializedFuncBody\1*1/38 (/39 e.DynamicMatches#1/29/40 )/42 (/43 e.StaticMatches#1/31/44 )/46 (/47 e.SpecPattern#1/33/48 )/50 Tile{ AsIs: t.Acc#1/17 AsIs: t.Next#1/27 } >/51 Tile{ AsIs: e.Tail#1/35 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_Specm_PrepareSpecializedFuncBody_L1D1]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_evar(vm, context[40], context[41], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::copy_evar(vm, context[44], context[45], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_open_bracket(vm, context[47]);
    refalrts::copy_evar(vm, context[48], context[49], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[50]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[37] );
    refalrts::link_brackets( context[47], context[50] );
    refalrts::link_brackets( context[43], context[46] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[51], context[51] );
    res = refalrts::splice_evar( res, context[17], context[28] );
    res = refalrts::splice_evar( res, context[37], context[50] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@6/4 e.DynamicMatches#1/2 (/15 e.StaticMatches#1/13 )/16 (/11 e.SpecPattern#1/9 )/12 (/7 t.Acc#1/17 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DynamicMatches#1 as range 2
  // closed e.StaticMatches#1 as range 13
  // closed e.SpecPattern#1 as range 9
  //DEBUG: t.Acc#1: 17
  //DEBUG: e.DynamicMatches#1: 2
  //DEBUG: e.StaticMatches#1: 13
  //DEBUG: e.SpecPattern#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@6/4 e.DynamicMatches#1/2 (/15 e.StaticMatches#1/13 )/16 (/11 e.SpecPattern#1/9 )/12 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/17 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z6("Reduce@6", COOKIE1_, COOKIE2_, func_gen_Reduce_Z6);


static refalrts::FnResult func_gen_Reduce_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Reduce@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@7/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@7/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@7/4 s.new#6/5 t.new#7/9 e.new#8/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new#8 as range 11
      do {
        // </0 & Reduce@7/4 # False/5 t.Next#1/9 e.Tail#1/13 >/1
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
          continue;
        // closed e.Tail#1 as range 13
        //DEBUG: t.Next#1: 9
        //DEBUG: e.Tail#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@7/4 AsIs: # False/5 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@7/4 # True/5 t.new#9/9 e.new#10/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
        continue;
      // closed e.new#10 as range 13
      do {
        // </0 & Reduce@7/4 # True/5 (/9 s.new#11/19 e.new#12/17 )/10 e.new#13/15 >/1
        context[15] = context[13];
        context[16] = context[14];
        context[17] = 0;
        context[18] = 0;
        if( ! refalrts::brackets_term( context[17], context[18], context[9] ) )
          continue;
        // closed e.new#13 as range 15
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        // closed e.new#12 as range 17
        do {
          // </0 & Reduce@7/4 # True/5 (/9 # CallBrackets/19 e.0#0/20 )/10 e.Tail#1/22 >/1
          context[20] = context[17];
          context[21] = context[18];
          context[22] = context[15];
          context[23] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[19] ) )
            continue;
          // closed e.0#0 as range 20
          // closed e.Tail#1 as range 22
          //DEBUG: e.0#0: 20
          //DEBUG: e.Tail#1: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CallBrackets/19 e.0#0/20 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@7/4 Reuse: # False/5 } Tile{ AsIs: e.Tail#1/22 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[5], identifiers[ident_False]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[22], context[23] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Reduce@7/4 # True/5 (/9 # ClosureBrackects/19 e.0#0/20 )/10 e.Tail#1/22 >/1
          context[20] = context[17];
          context[21] = context[18];
          context[22] = context[15];
          context[23] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_ClosureBrackects], context[19] ) )
            continue;
          // closed e.0#0 as range 20
          // closed e.Tail#1 as range 22
          //DEBUG: e.0#0: 20
          //DEBUG: e.Tail#1: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Reduce@7/5 HalfReuse: </9 HalfReuse: & IsColdArg/19 AsIs: e.0#0/20 HalfReuse: >/10 AsIs: e.Tail#1/22 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_gen_Reduce_Z7]);
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[19], functions[efunc_IsColdArg]);
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Reduce@7/4 # True/5 (/9 # Brackets/19 e.0#0/20 )/10 e.Tail#1/22 >/1
          context[20] = context[17];
          context[21] = context[18];
          context[22] = context[15];
          context[23] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_Brackets], context[19] ) )
            continue;
          // closed e.0#0 as range 20
          // closed e.Tail#1 as range 22
          //DEBUG: e.0#0: 20
          //DEBUG: e.Tail#1: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Reduce@7/5 HalfReuse: </9 HalfReuse: & IsColdArg/19 AsIs: e.0#0/20 HalfReuse: >/10 AsIs: e.Tail#1/22 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_gen_Reduce_Z7]);
          refalrts::reinit_open_call(context[9]);
          refalrts::reinit_name(context[19], functions[efunc_IsColdArg]);
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[9] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[4];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Reduce@7/4 # True/5 (/9 # ADT-Brackets/19 (/26 e.2#0/24 )/27 e.1#0/20 )/10 e.Tail#1/22 >/1
        context[20] = context[17];
        context[21] = context[18];
        context[22] = context[15];
        context[23] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[19] ) )
          continue;
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        // closed e.2#0 as range 24
        // closed e.1#0 as range 20
        // closed e.Tail#1 as range 22
        //DEBUG: e.2#0: 24
        //DEBUG: e.1#0: 20
        //DEBUG: e.Tail#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 # ADT-Brackets/19 (/26 e.2#0/24 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@7/4 HalfReuse: </5 } Tile{ HalfReuse: & IsColdArg/27 AsIs: e.1#0/20 HalfReuse: >/10 AsIs: e.Tail#1/22 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[27], functions[efunc_IsColdArg]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[27];
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@7/4 # True/5 t.Next#1/9 e.Tail#1/15 >/1
      context[15] = context[13];
      context[16] = context[14];
      // closed e.Tail#1 as range 15
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@7/4 AsIs: # True/5 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@7/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce@7/14 Tile{ AsIs: </0 Reuse: & IsColdArg\1*6/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z7]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_IsColdArg_L1D6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@7/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Acc#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce@7/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z7("Reduce@7", COOKIE1_, COOKIE2_, func_gen_Reduce_Z7);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindAndFormatVarTerm-Aux/4 AsIs: t.Next#1/7 } >/9 </10 & Map@4/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_FindAndFormatVarTermm_Aux]);
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

  // </0 & Map@4/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@5/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & Map@5/4 e.new#4/13 (/11 e.new#7/15 )/12 (/7 t.new#5/19 e.new#6/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.new#4 as range 13
    // closed e.new#7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#6 as range 17
    do {
      // </0 & Map@5/4 e.LookFor#1/21 (/11 e.ReplaceVal#1/23 )/12 (/7 (/19 e.1#0/27 ':'/31 t.#0/29 )/20 e.Tail#1/25 )/8 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      // closed e.LookFor#1 as range 21
      // closed e.ReplaceVal#1 as range 23
      // closed e.Tail#1 as range 25
      context[30] = refalrts::tvar_right( context[29], context[27], context[28] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_right( ':', context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.1#0 as range 27
      //DEBUG: e.LookFor#1: 21
      //DEBUG: e.ReplaceVal#1: 23
      //DEBUG: e.Tail#1: 25
      //DEBUG: t.#0: 29
      //DEBUG: e.1#0: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } </32 & FindReplace-Expr/33 (/34 Tile{ AsIs: e.1#0/27 } )/35 (/36 e.LookFor#1/21/37 )/39 e.ReplaceVal#1/23/40 >/42 Tile{ AsIs: ':'/31 AsIs: t.#0/29 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: e.LookFor#1/21 AsIs: (/11 AsIs: e.ReplaceVal#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_FindReplacem_Expr]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::copy_evar(vm, context[37], context[38], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[36], context[39] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[31], context[20] );
      res = refalrts::splice_evar( res, context[35], context[42] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 e.LookFor#1/21 (/11 e.ReplaceVal#1/23 )/12 (/7 t.Next#1/19 e.Tail#1/25 )/8 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.LookFor#1 as range 21
    // closed e.ReplaceVal#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.Next#1: 19
    //DEBUG: e.LookFor#1: 21
    //DEBUG: e.ReplaceVal#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & FindReplace-GenericMatches-Val\1*1/28 (/29 e.LookFor#1/21/30 )/32 (/33 e.ReplaceVal#1/23/34 )/36 Tile{ AsIs: t.Next#1/19 } >/37 Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: e.LookFor#1/21 AsIs: (/11 AsIs: e.ReplaceVal#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_FindReplacem_GenericMatchesm_Val_L1D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.LookFor#1/2 (/11 e.ReplaceVal#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LookFor#1 as range 2
  // closed e.ReplaceVal#1 as range 9
  //DEBUG: e.LookFor#1: 2
  //DEBUG: e.ReplaceVal#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@5/4 e.LookFor#1/2 (/11 e.ReplaceVal#1/9 )/12 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@6/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & Map@6/4 e.new#4/13 (/11 e.new#7/15 )/12 (/7 t.new#5/19 e.new#6/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.new#4 as range 13
    // closed e.new#7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#6 as range 17
    do {
      // </0 & Map@6/4 e.LookFor#1/21 (/11 e.ReplaceVal#1/23 )/12 (/7 (/19 e.#0/27 )/20 e.Tail#1/25 )/8 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      // closed e.LookFor#1 as range 21
      // closed e.ReplaceVal#1 as range 23
      // closed e.#0 as range 27
      // closed e.Tail#1 as range 25
      //DEBUG: e.LookFor#1: 21
      //DEBUG: e.ReplaceVal#1: 23
      //DEBUG: e.#0: 27
      //DEBUG: e.Tail#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/29 </30 & FindReplace-Expr/31 Tile{ AsIs: (/19 AsIs: e.#0/27 AsIs: )/20 } (/32 e.LookFor#1/21/33 )/35 e.ReplaceVal#1/23/36 >/38 )/39 Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: e.LookFor#1/21 AsIs: (/11 AsIs: e.ReplaceVal#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_FindReplacem_Expr]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::copy_evar(vm, context[33], context[34], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::copy_evar(vm, context[36], context[37], context[23], context[24]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[29], context[39] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[32], context[35] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[32], context[39] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 e.LookFor#1/21 (/11 e.ReplaceVal#1/23 )/12 (/7 t.Next#1/19 e.Tail#1/25 )/8 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.LookFor#1 as range 21
    // closed e.ReplaceVal#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.Next#1: 19
    //DEBUG: e.LookFor#1: 21
    //DEBUG: e.ReplaceVal#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & FindReplace-ExprList\1*1/28 (/29 e.LookFor#1/21/30 )/32 (/33 e.ReplaceVal#1/23/34 )/36 Tile{ AsIs: t.Next#1/19 } >/37 Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: e.LookFor#1/21 AsIs: (/11 AsIs: e.ReplaceVal#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_FindReplacem_ExprList_L1D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 e.LookFor#1/2 (/11 e.ReplaceVal#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LookFor#1 as range 2
  // closed e.ReplaceVal#1 as range 9
  //DEBUG: e.LookFor#1: 2
  //DEBUG: e.ReplaceVal#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@6/4 e.LookFor#1/2 (/11 e.ReplaceVal#1/9 )/12 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@1/4 t.new#4/9 t.new#5/15 e.new#6/11 (/7 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#7 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & DoMapAccum@1/4 (/9 e.0#0/21 (/25 e.1#0/23 )/26 )/10 t.Next#1/15 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_right( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.0#0 as range 21
      // closed e.1#0 as range 23
      // closed e.Tail#1 as range 17
      // closed e.Scanned#1 as range 19
      //DEBUG: t.Next#1: 15
      //DEBUG: e.0#0: 21
      //DEBUG: e.1#0: 23
      //DEBUG: e.Tail#1: 17
      //DEBUG: e.Scanned#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </27 & DoMapAccum-Aux@1/28 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & SpecTerm/4 AsIs: (/9 AsIs: e.0#0/21 AsIs: (/25 AsIs: e.1#0/23 AsIs: )/26 AsIs: )/10 AsIs: t.Next#1/15 } >/29 )/30 >/31 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::update_name(context[4], functions[efunc_SpecTerm]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[1], context[30] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc#1/9 t.Next#1/15 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Tail#1 as range 17
    // closed e.Scanned#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: e.Scanned#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & SpecResult$2\1*1/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_SpecResult_S2L1D1]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[1], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 t.Acc#1/9 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & DoMapAccum-Aux@1/4 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/13 e.StepScanned#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 2
  // closed e.Scanned#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Tail#1: 2
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


static refalrts::FnResult func_gen_MapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapAccum@2/4 t.Acc#1/5 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Acc#1/5 AsIs: e.Tail#1/2 HalfReuse: (/1 } )/7 >/8 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@2/4 t.new#4/9 t.new#5/15 e.new#6/11 (/7 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#7 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & DoMapAccum@2/4 (/9 (/25 e.new#8/23 )/26 e.new#9/21 )/10 t.new#10/15 e.new#11/17 (/7 e.new#12/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.new#8 as range 23
      // closed e.new#9 as range 21
      // closed e.new#11 as range 17
      // closed e.new#12 as range 19
      do {
        // </0 & DoMapAccum@2/4 (/9 (/25 e.2#0/27 )/26 e.1#0/29 )/10 (/15 # Spec/37 t.1#0/38 e.4#0/35 )/16 e.Tail#1/31 (/7 e.Scanned#1/33 )/8 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[21];
        context[30] = context[22];
        context[31] = context[17];
        context[32] = context[18];
        context[33] = context[19];
        context[34] = context[20];
        context[35] = 0;
        context[36] = 0;
        if( ! refalrts::brackets_term( context[35], context[36], context[15] ) )
          continue;
        context[37] = refalrts::ident_left( identifiers[ident_Spec], context[35], context[36] );
        if( ! context[37] )
          continue;
        // closed e.2#0 as range 27
        // closed e.1#0 as range 29
        // closed e.Tail#1 as range 31
        // closed e.Scanned#1 as range 33
        context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
        if( ! context[39] )
          continue;
        // closed e.4#0 as range 35
        //DEBUG: e.2#0: 27
        //DEBUG: e.1#0: 29
        //DEBUG: e.Tail#1: 31
        //DEBUG: e.Scanned#1: 33
        //DEBUG: t.1#0: 38
        //DEBUG: e.4#0: 35

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/16 AsIs: e.Tail#1/31 AsIs: (/7 AsIs: e.Scanned#1/33 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: (/25 } Tile{ AsIs: e.2#0/27 } t.1#0/38/40 Tile{ AsIs: )/26 AsIs: e.1#0/29 HalfReuse: (/10 } Tile{ AsIs: t.1#0/38 } Tile{ AsIs: (/15 } Tile{ AsIs: e.4#0/35 } Tile{ HalfReuse: )/37 } Tile{ HalfReuse: )/4 } )/42 )/43 >/44 Tile{ ]] }
        refalrts::copy_evar(vm, context[40], context[41], context[38], context[39]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_close_bracket(context[37]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[1], context[43] );
        refalrts::link_brackets( context[9], context[42] );
        refalrts::link_brackets( context[10], context[4] );
        refalrts::link_brackets( context[15], context[37] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[42], context[44] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[26], context[10] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[9], context[25] );
        res = refalrts::splice_evar( res, context[16], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/9 (/25 e.1#0/27 )/26 e.0#0/29 )/10 t.Next#1/15 e.Tail#1/31 (/7 e.Scanned#1/33 )/8 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[21];
      context[30] = context[22];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.1#0 as range 27
      // closed e.0#0 as range 29
      // closed e.Tail#1 as range 31
      // closed e.Scanned#1 as range 33
      //DEBUG: t.Next#1: 15
      //DEBUG: e.1#0: 27
      //DEBUG: e.0#0: 29
      //DEBUG: e.Tail#1: 31
      //DEBUG: e.Scanned#1: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </35 & DoMapAccum-Aux@2/36 Tile{ AsIs: e.Tail#1/31 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/33 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/9 AsIs: (/25 AsIs: e.1#0/27 AsIs: )/26 AsIs: e.0#0/29 AsIs: )/10 AsIs: t.Next#1/15 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[4], context[8] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[7], context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[16] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 t.Acc#1/9 t.Next#1/15 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Tail#1 as range 17
    // closed e.Scanned#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: e.Scanned#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@2/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & OptTree-Spec-ExtractOptInfo=1\1*2/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Specm_ExtractOptInfo_A1L1D2]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[1], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.Acc#1/9 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & DoMapAccum-Aux@2/4 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/13 e.StepScanned#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 2
  // closed e.Scanned#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Tail#1: 2
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z2("DoMapAccum-Aux@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z2);


//End of file
