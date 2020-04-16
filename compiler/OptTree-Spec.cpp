// This file automatically generated from 'OptTree-Spec.ref'
// Don't edit! Edit 'OptTree-Spec.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3982177691_2779085406
#define COOKIE1_ 3982177691U
#define COOKIE2_ 2779085406U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_DoMapAccum = 6,
  efunc_DoMapAccumm_Aux = 7,
  efunc_Add = 8,
  efunc_Sub = 9,
  efunc_Fetch = 10,
  efunc_Pipe = 11,
  efunc_gen_Pipe_S2L1 = 12,
  efunc_gen_Pipe_S3L1 = 13,
  efunc_Preparem_Aux = 14,
  efunc_Logm_PutLine = 15,
  efunc_DisplayName = 16,
  efunc_gen_Map_Z1 = 17,
  efunc_gen_Preparem_Aux_A2 = 18,
  efunc_CreateGuardFunctions = 19,
  efunc_gen_Preparem_Aux_A1L1S1C1 = 20,
  efunc_gen_MapAccum_Z1 = 21,
  efunc_MapAccum = 22,
  efunc_gen_Preparem_Aux_A1L2 = 23,
  efunc_gen_Preparem_Aux_A1 = 24,
  efunc_gen_MapAccum_Z2 = 25,
  efunc_ColdAll = 26,
  efunc_gen_OptTreem_Spec_S2A1 = 27,
  efunc_gen_MapAccum_Z3 = 28,
  efunc_gen_Map_Z2 = 29,
  efunc_gen_SpecUnit_S1A1 = 30,
  efunc_gen_MapAccum_Z4 = 31,
  efunc_gen_SpecSentence_A2 = 32,
  efunc_SpecResult = 33,
  efunc_gen_SpecSentence_A1L1A1 = 34,
  efunc_gen_SpecSentence_A1 = 35,
  efunc_gen_MapAccum_Z5 = 36,
  efunc_SpecTerm = 37,
  efunc_gen_MapAccum_Z6 = 38,
  efunc_TrySpecCall = 39,
  efunc_gen_SpecTerm_S1A1 = 40,
  efunc_gen_SpecTerm_S2A1 = 41,
  efunc_gen_SpecTerm_S3A1 = 42,
  efunc_gen_SpecTerm_S4A1 = 43,
  efunc_gen_TrySpecCall_S1A1 = 44,
  efunc_SpecCall = 45,
  efunc_gen_SpecCall_S1C1 = 46,
  efunc_GenericMatchm_Wrapper = 47,
  efunc_gen_SpecCall_S1C2 = 48,
  efunc_ExtractCalls = 49,
  efunc_gen_SpecCall_S1C3 = 50,
  efunc_PrepareSignature = 51,
  efunc_gen_SpecCall_S1C4 = 52,
  efunc_IsTrivialSubstitutions = 53,
  efunc_SpecCallm_Aux = 54,
  efunc_gen_SpecCallm_Aux_B1S2B1 = 55,
  efunc_IsSoundBody = 56,
  efunc_PrepareSpecializedFuncBody = 57,
  efunc_gen_SpecCallm_Aux_B1S2A1 = 58,
  efunc_Specm_FindInSignatures = 59,
  efunc_gen_SpecCallm_Aux_B1 = 60,
  efunc_ApplySubstm_Expr = 61,
  efunc_gen_SpecCallm_Aux_A2 = 62,
  efunc_gen_SpecCallm_Aux_A1 = 63,
  efunc_PrepareArgOrPattern = 64,
  efunc_gen_ExtractCalls_A2L1A1 = 65,
  efunc_ExtractCallsm_Expr = 66,
  efunc_gen_MapAccum_Z7 = 67,
  efunc_gen_ExtractCalls_A2 = 68,
  efunc_ExtractVariablesm_Expr = 69,
  efunc_gen_ExtractCalls_A1 = 70,
  efunc_gen_Map_Z3 = 71,
  efunc_gen_MapAccum_Z8 = 72,
  efunc_NewVarName = 73,
  efunc_gen_ExtractCallsm_Term_S1A1 = 74,
  efunc_gen_ExtractCallsm_Term_S2A1 = 75,
  efunc_gen_ExtractCallsm_Term_S3A1 = 76,
  efunc_gen_IsSoundBody_B1 = 77,
  efunc_FindClosuresInPatternsm_Body = 78,
  efunc_FindClosuresInPatternsm_Pattern = 79,
  efunc_gen_Map_Z4 = 80,
  efunc_gen_Map_Z5 = 81,
  efunc_gen_Map_Z6 = 82,
  efunc_RenameSignatureVars = 83,
  efunc_gen_PrepareSignature_A2 = 84,
  efunc_PrepareSignaturem_SortVars = 85,
  efunc_gen_PrepareSignature_A1 = 86,
  efunc_gen_PrepareSignaturem_SortVars_A1 = 87,
  efunc_gen_MapAccum_Z9 = 88,
  efunc_gen_RenameSignatureVars_A3L1A1 = 89,
  efunc_RenameSignatureVarsm_Expr = 90,
  efunc_gen_RenameSignatureVars_A3 = 91,
  efunc_gen_MapAccum_Z10 = 92,
  efunc_gen_MapAccum_Z11 = 93,
  efunc_gen_RenameSignatureVarsm_Term_S1C1 = 94,
  efunc_gen_RenameSignatureVarsm_Term_S2A1 = 95,
  efunc_Symb = 96,
  efunc_gen_RenameSignatureVarsm_Term_S3C1 = 97,
  efunc_OneOf = 98,
  efunc_gen_RenameSignatureVarsm_Term_S3A2 = 99,
  efunc_gen_RenameSignatureVarsm_Term_S4A1 = 100,
  efunc_gen_Map_Z7 = 101,
  efunc_gen_ApplySubstm_Expr_L1S1C1 = 102,
  efunc_gen_Map_Z8 = 103,
  efunc_gen_Reduce_Z1 = 104,
  efunc_gen_Map_Z9 = 105,
  efunc_gen_PrepareArgOrPattern_B1 = 106,
  efunc_gen_PrepareArgOrPattern_A2L1S1L1S1C1 = 107,
  efunc_WrapVar = 108,
  efunc_gen_PrepareArgOrPattern_A2L1S1C1 = 109,
  efunc_gen_MapAccum_Z12 = 110,
  efunc_gen_PrepareArgOrPattern_A2L1S2C1 = 111,
  efunc_gen_MapAccum_Z13 = 112,
  efunc_gen_PrepareArgOrPattern_A2 = 113,
  efunc_gen_PrepareArgOrPattern_A1 = 114,
  efunc_ApplySubstm_Subst = 115,
  efunc_gen_RenameGenericMatch_A3L1A1 = 116,
  efunc_gen_MapAccum_Z14 = 117,
  efunc_gen_RenameGenericMatch_A3 = 118,
  efunc_Unique = 119,
  efunc_gen_RenameGenericMatch_A2 = 120,
  efunc_gen_Map_Z10 = 121,
  efunc_gen_RenameGenericMatch_A1 = 122,
  efunc_gen_Map_Z11 = 123,
  efunc_RenameGenericMatch = 124,
  efunc_gen_PrepareSpecializedFuncBody_A2 = 125,
  efunc_gen_PrepareSpecializedFuncBody_A1 = 126,
  efunc_ExtractVariables = 127,
  efunc_gen_PrepareSpecSentence_A6 = 128,
  efunc_gen_PrepareSpecSentence_A5 = 129,
  efunc_PrepareSpecConditions = 130,
  efunc_gen_PrepareSpecSentence_A4 = 131,
  efunc_gen_PrepareSpecSentence_A3 = 132,
  efunc_MapGenericMatches = 133,
  efunc_gen_PrepareSpecSentence_A2 = 134,
  efunc_gen_PrepareSpecSentence_A1 = 135,
  efunc_gen_Map_Z12 = 136,
  efunc_gen_Map_Z13 = 137,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1L1S1C1 = 138,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1L1S1C2 = 139,
  efunc_IsSpecStaticVar = 140,
  efunc_gen_MapAccum_Z15 = 141,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1 = 142,
  efunc_gen_GenericMatchm_Wrapper_B1 = 143,
  efunc_GenericMatch = 144,
  efunc_Type = 145,
  efunc_gen_IsSpecStaticVar_B1 = 146,
  efunc_gen_Reduce_Z2 = 147,
  efunc_gen_MapGenericMatches_A1 = 148,
  efunc_Mu = 149,
  efunc_Up = 150,
  efunc_Evm_met = 151,
  efunc_Residue = 152,
  efunc_u_u_Metau_Residue = 153,
  efunc_UnBracket = 154,
  efunc_DelAccumulator = 155,
  efunc_Inc = 156,
  efunc_Dec = 157,
  efunc_OptTreem_Specm_Prepare = 158,
  efunc_OptTreem_Spec = 159,
  efunc_SpecUnit = 160,
  efunc_SpecSentence = 161,
  efunc_ExtractCallsm_Term = 162,
  efunc_FindClosuresInPatternsm_Term = 163,
  efunc_RenameSignatureVarsm_Term = 164,
  efunc_PrepareSpecSentence = 165,
  efunc_OptTreem_Specm_CleanupColdFunctions = 166,
  efunc_gen_Preparem_Aux_L1D1 = 167,
  efunc_gen_Map_Z0 = 168,
  efunc_gen_Preparem_Aux_L1 = 169,
  efunc_gen_DoMapAccum_Z1 = 170,
  efunc_gen_Preparem_Aux_A1L1 = 171,
  efunc_gen_MapAccum_Z0 = 172,
  efunc_gen_DoMapAccum_Z2 = 173,
  efunc_gen_CreateGuardFunctions_L1 = 174,
  efunc_gen_DoMapAccum_Z3 = 175,
  efunc_gen_ColdAll_L1 = 176,
  efunc_gen_DoMapAccum_Z4 = 177,
  efunc_gen_DoMapAccum_Z5 = 178,
  efunc_gen_SpecSentence_A1L1 = 179,
  efunc_gen_DoMapAccum_Z6 = 180,
  efunc_gen_SpecResult_S2L1 = 181,
  efunc_gen_DoMapAccum_Z7 = 182,
  efunc_gen_ExtractCalls_A2L1 = 183,
  efunc_gen_ExtractCalls_A1L1D1 = 184,
  efunc_gen_ExtractCalls_A1L1 = 185,
  efunc_gen_DoMapAccum_Z8 = 186,
  efunc_gen_FindClosuresInPatternsm_Body_L1L1D1 = 187,
  efunc_gen_FindClosuresInPatternsm_Body_L1L1 = 188,
  efunc_gen_FindClosuresInPatternsm_Body_L1D1 = 189,
  efunc_gen_FindClosuresInPatternsm_Body_L1 = 190,
  efunc_gen_DoMapAccum_Z9 = 191,
  efunc_gen_PrepareSignaturem_SortVars_A1L1 = 192,
  efunc_gen_DoMapAccum_Z10 = 193,
  efunc_gen_RenameSignatureVars_A3L1 = 194,
  efunc_gen_DoMapAccum_Z11 = 195,
  efunc_gen_ApplySubstm_Subst_L1D1 = 196,
  efunc_gen_ApplySubstm_Subst_L1 = 197,
  efunc_gen_ApplySubstm_Expr_L1 = 198,
  efunc_gen_IsTrivialSubstitutions_L1D3 = 199,
  efunc_gen_Reduce_Z0 = 200,
  efunc_gen_IsTrivialSubstitutions_L1 = 201,
  efunc_gen_PrepareArgOrPattern_B1S1L1 = 202,
  efunc_gen_DoMapAccum_Z12 = 203,
  efunc_gen_PrepareArgOrPattern_A2L1S1L1 = 204,
  efunc_gen_DoMapAccum_Z13 = 205,
  efunc_gen_PrepareArgOrPattern_A2L1 = 206,
  efunc_gen_DoMapAccum_Z14 = 207,
  efunc_gen_RenameGenericMatch_A3L1 = 208,
  efunc_gen_RenameGenericMatch_A1L1D1 = 209,
  efunc_gen_RenameGenericMatch_A1L1 = 210,
  efunc_gen_PrepareSpecConditions_L1D1 = 211,
  efunc_gen_PrepareSpecConditions_L1 = 212,
  efunc_gen_OptTreem_Specm_CleanupColdFunctions_L1 = 213,
  efunc_gen_DoMapAccum_Z15 = 214,
  efunc_gen_GenericMatchm_Wrapper_B1S1A1L1 = 215,
  efunc_gen_MapGenericMatches_A1L1 = 216,
  efunc_gen_DoMapAccumm_Aux_Z1 = 217,
  efunc_gen_DoMapAccum_Z0 = 218,
  efunc_gen_DoMapAccumm_Aux_Z2 = 219,
  efunc_gen_CreateGuardFunctions_L1D1 = 220,
  efunc_gen_DoMapAccumm_Aux_Z3 = 221,
  efunc_gen_DoMapAccumm_Aux_Z4 = 222,
  efunc_gen_DoMapAccumm_Aux_Z5 = 223,
  efunc_gen_DoMapAccumm_Aux_Z6 = 224,
  efunc_gen_SpecResult_S2L1D1 = 225,
  efunc_gen_DoMapAccumm_Aux_Z7 = 226,
  efunc_gen_ExtractCalls_A2L1D1 = 227,
  efunc_gen_DoMapAccumm_Aux_Z8 = 228,
  efunc_gen_DoMapAccumm_Aux_Z9 = 229,
  efunc_gen_DoMapAccumm_Aux_Z10 = 230,
  efunc_gen_RenameSignatureVars_A3L1D1 = 231,
  efunc_gen_DoMapAccumm_Aux_Z11 = 232,
  efunc_gen_DoMapAccumm_Aux_Z12 = 233,
  efunc_gen_DoMapAccumm_Aux_Z13 = 234,
  efunc_gen_DoMapAccumm_Aux_Z14 = 235,
  efunc_gen_RenameGenericMatch_A3L1D1 = 236,
  efunc_gen_DoMapAccumm_Aux_Z15 = 237,
  efunc_gen_DoMapAccumm_Aux_Z0 = 238,
};


enum ident {
  ident_NoOpt = 0,
  ident_OptSpec = 1,
  ident_SpecInfo = 2,
  ident_Spec = 3,
  ident_Function = 4,
  ident_Sentences = 5,
  ident_GNm_Local = 6,
  ident_CallBrackets = 7,
  ident_Symbol = 8,
  ident_Name = 9,
  ident_SUF = 10,
  ident_ColdFunction = 11,
  ident_Condition = 12,
  ident_ClosureBrackets = 13,
  ident_Brackets = 14,
  ident_ADTm_Brackets = 15,
  ident_ClosureBrackects = 16,
  ident_Clear = 17,
  ident_False = 18,
  ident_True = 19,
  ident_Found = 20,
  ident_NotFound = 21,
  ident_TkVariable = 22,
  ident_GhostBrackets = 23,
  ident_Mu = 24,
  ident_Up = 25,
  ident_Evm_met = 26,
  ident_Residue = 27,
  ident_u_u_Metau_Residue = 28,
  ident_Apply = 29,
  ident_Map = 30,
  ident_Reduce = 31,
  ident_Fetch = 32,
  ident_MapAccum = 33,
  ident_DoMapAccum = 34,
  ident_DoMapAccumm_Aux = 35,
  ident_UnBracket = 36,
  ident_DelAccumulator = 37,
  ident_Inc = 38,
  ident_Dec = 39,
  ident_Pipe = 40,
  ident_OptTreem_Specm_Prepare = 41,
  ident_Preparem_Aux = 42,
  ident_CreateGuardFunctions = 43,
  ident_OptTreem_Spec = 44,
  ident_ColdAll = 45,
  ident_SpecUnit = 46,
  ident_SpecSentence = 47,
  ident_SpecResult = 48,
  ident_SpecTerm = 49,
  ident_TrySpecCall = 50,
  ident_SpecCall = 51,
  ident_SpecCallm_Aux = 52,
  ident_ExtractCalls = 53,
  ident_ExtractCallsm_Expr = 54,
  ident_ExtractCallsm_Term = 55,
  ident_IsSoundBody = 56,
  ident_FindClosuresInPatternsm_Body = 57,
  ident_FindClosuresInPatternsm_Pattern = 58,
  ident_FindClosuresInPatternsm_Term = 59,
  ident_PrepareSignature = 60,
  ident_PrepareSignaturem_SortVars = 61,
  ident_RenameSignatureVars = 62,
  ident_RenameSignatureVarsm_Expr = 63,
  ident_RenameSignatureVarsm_Term = 64,
  ident_ApplySubstm_Subst = 65,
  ident_ApplySubstm_Expr = 66,
  ident_Specm_FindInSignatures = 67,
  ident_IsTrivialSubstitutions = 68,
  ident_PrepareArgOrPattern = 69,
  ident_WrapVar = 70,
  ident_RenameGenericMatch = 71,
  ident_PrepareSpecializedFuncBody = 72,
  ident_PrepareSpecSentence = 73,
  ident_PrepareSpecConditions = 74,
  ident_OptTreem_Specm_CleanupColdFunctions = 75,
  ident_GenericMatchm_Wrapper = 76,
  ident_IsSpecStaticVar = 77,
  ident_MapGenericMatches = 78,
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


static refalrts::FnResult func_gen_OptTreem_Specm_Prepare_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OptTree-Spec-Prepare$3=1/4 (/7 e.AST#1/5 )/8 e.EmptyInfo#2/2 >/1
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
  // closed e.AST#1 as range 5
  // closed e.EmptyInfo#2 as range 2
  //DEBUG: e.AST#1: 5
  //DEBUG: e.EmptyInfo#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prepare-Aux/4 AsIs: (/7 } Tile{ AsIs: e.EmptyInfo#2/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Preparem_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_Prepare_S3A1("OptTree-Spec-Prepare$3=1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_Prepare_S3A1);


static refalrts::FnResult func_OptTreem_Specm_Prepare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & OptTree-Spec-Prepare/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-Prepare/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & OptTree-Spec-Prepare/4 # NoOpt/5 e.AST#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;
    // closed e.AST#1 as range 6
    //DEBUG: e.AST#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Spec-Prepare/4 # NoOpt/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-Prepare/4 # OptSpec/5 e.new#3/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_OptSpec], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & OptTree-Spec-Prepare/4 # OptSpec/5 e.AST-B#1/8 (/14 # SpecInfo/16 e.SpecInfo#1/12 )/15 e.AST-E#1/10 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      context[16] = refalrts::ident_left( identifiers[ident_SpecInfo], context[12], context[13] );
      if( ! context[16] )
        continue;
      // closed e.SpecInfo#1 as range 12
      // closed e.AST-E#1 as range 10
      //DEBUG: e.AST-B#1: 8
      //DEBUG: e.SpecInfo#1: 12
      //DEBUG: e.AST-E#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/14 # SpecInfo/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prepare-Aux/4 HalfReuse: (/5 } Tile{ AsIs: e.SpecInfo#1/12 } Tile{ AsIs: )/15 } Tile{ AsIs: e.AST-B#1/8 } Tile{ AsIs: e.AST-E#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Preparem_Aux]);
      refalrts::reinit_open_bracket(context[5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-Prepare/4 # OptSpec/5 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Prepare-Aux/7 (/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 HalfReuse: )/5 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Preparem_Aux]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_bracket(context[5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[8], context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_Prepare("OptTree-Spec-Prepare", 0U, 0U, func_OptTreem_Specm_Prepare);


static refalrts::FnResult func_gen_Preparem_Aux_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Prepare-Aux\1/4 (/7 e.Name#4/5 )/8 >/1
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
  // closed e.Name#4 as range 5
  //DEBUG: e.Name#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Log-PutLine/10"New $SPEC function:"/11 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/7 AsIs: e.Name#4/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Logm_PutLine]);
  refalrts::alloc_chars(vm, context[11], context[12], "New $SPEC function:", 19);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Preparem_Aux_L1("Prepare-Aux\\1", COOKIE1_, COOKIE2_, func_gen_Preparem_Aux_L1);


static refalrts::FnResult func_gen_Preparem_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Prepare-Aux=2/4 (/7 e.KnownNames#1/5 )/8 (/11 e.NewNames#2/9 )/12 (/15 e.KnownInfo#1/13 )/16 (/19 e.AST#2/17 )/20 (/23 e.GuardEnums#3/21 )/24 e.NewInfo#3/2 >/1
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
  // closed e.KnownNames#1 as range 5
  // closed e.NewNames#2 as range 9
  // closed e.KnownInfo#1 as range 13
  // closed e.AST#2 as range 17
  // closed e.GuardEnums#3 as range 21
  // closed e.NewInfo#3 as range 2
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.NewNames#2: 9
  //DEBUG: e.KnownInfo#1: 13
  //DEBUG: e.AST#2: 17
  //DEBUG: e.GuardEnums#3: 21
  //DEBUG: e.NewInfo#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # SpecInfo/4 AsIs: (/7 } Tile{ AsIs: e.KnownNames#1/5 } Tile{ AsIs: e.NewNames#2/9 } Tile{ AsIs: )/20 } Tile{ AsIs: e.KnownInfo#1/13 } Tile{ AsIs: e.NewInfo#3/2 } Tile{ AsIs: )/24 } Tile{ AsIs: e.AST#2/17 } Tile{ AsIs: e.GuardEnums#3/21 } Tile{ HalfReuse: </16 HalfReuse: & Map@1/19 } e.NewNames#2/9/25 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_SpecInfo]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[19], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::link_brackets( context[7], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Preparem_Aux_A2("Prepare-Aux=2", COOKIE1_, COOKIE2_, func_gen_Preparem_Aux_A2);


static refalrts::FnResult func_gen_Preparem_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Prepare-Aux=1/4 (/7 e.KnownNames#1/5 )/8 (/11 e.KnownInfo#1/9 )/12 (/15 (/19 e.NewNames#2/17 )/20 e.NewInfo#2/13 )/16 e.AST#2/2 >/1
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
  // closed e.KnownNames#1 as range 5
  // closed e.KnownInfo#1 as range 9
  // closed e.NewNames#2 as range 17
  // closed e.NewInfo#2 as range 13
  // closed e.AST#2 as range 2
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.KnownInfo#1: 9
  //DEBUG: e.NewNames#2: 17
  //DEBUG: e.NewInfo#2: 13
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prepare-Aux=2/4 AsIs: (/7 AsIs: e.KnownNames#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NewNames#2/17 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.KnownInfo#1/9 } )/21 Tile{ AsIs: (/19 } Tile{ AsIs: e.AST#2/2 } )/22 </23 Tile{ HalfReuse: & CreateGuardFunctions/20 AsIs: e.NewInfo#2/13 HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_Preparem_Aux_A2]);
  refalrts::reinit_name(context[20], functions[efunc_CreateGuardFunctions]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Preparem_Aux_A1("Prepare-Aux=1", COOKIE1_, COOKIE2_, func_gen_Preparem_Aux_A1);


static refalrts::FnResult func_gen_Preparem_Aux_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & Prepare-Aux=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Prepare-Aux=1\1/4 (/7 e.new#1/5 )/8 (/11 (/15 e.new#2/13 )/16 e.new#3/9 )/12 t.new#4/17 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 13
  // closed e.new#3 as range 9
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Prepare-Aux=1\1/4 (/7 e.new#7/19 )/8 (/11 (/15 e.new#9/21 )/16 e.new#8/23 )/12 (/17 # Spec/27 t.new#5/28 e.new#6/25 )/18 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[17] ) )
      continue;
    context[27] = refalrts::ident_left( identifiers[ident_Spec], context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.new#7 as range 19
    // closed e.new#9 as range 21
    // closed e.new#8 as range 23
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.new#6 as range 25
    do {
      // </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/30 )/8 (/11 (/15 e.Names#2/32 )/16 e.Info#2/34 )/12 (/17 # Spec/27 t.Name#2/28 e.Pattern#2/36 )/18 >/1
      context[30] = context[19];
      context[31] = context[20];
      context[32] = context[21];
      context[33] = context[22];
      context[34] = context[23];
      context[35] = context[24];
      context[36] = context[25];
      context[37] = context[26];
      // closed e.KnownNames#1 as range 30
      // closed e.Names#2 as range 32
      // closed e.Info#2 as range 34
      // closed e.Pattern#2 as range 36
      //DEBUG: t.Name#2: 28
      //DEBUG: e.KnownNames#1: 30
      //DEBUG: e.Names#2: 32
      //DEBUG: e.Info#2: 34
      //DEBUG: e.Pattern#2: 36
      //28: t.Name#2
      //30: e.KnownNames#1
      //32: e.Names#2
      //34: e.Info#2
      //36: e.Pattern#2
      //41: e.KnownNames#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[40], functions[efunc_gen_Preparem_Aux_A1L1S1C1]);
      refalrts::copy_evar(vm, context[41], context[42], context[30], context[31]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[38] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </38 & Prepare-Aux=1\1$1?1/42 e._B#3/43 t.Name#2/47 e._E#3/45 >/39
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::call_left( context[40], context[41], context[38], context[39] );
        context[43] = 0;
        context[44] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[45] = context[40];
          context[46] = context[41];
          context[48] = refalrts::repeated_stvar_left( vm, context[47], context[28], context[45], context[46] );
          if( ! context[48] )
            continue;
          // closed e._E#3 as range 45
          //DEBUG: t.Name#2: 28
          //DEBUG: e.KnownNames#1: 30
          //DEBUG: e.Names#2: 32
          //DEBUG: e.Info#2: 34
          //DEBUG: e.Pattern#2: 36
          //DEBUG: e._B#3: 43
          //DEBUG: e._E#3: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/30 )/8 {REMOVED TILE} (/17 # Spec/27 t.Name#2/28 e.Pattern#2/36 )/18 </38 & Prepare-Aux=1\1$1?1/42 e._B#3/43 t.Name#2/47 e._E#3/45 >/39 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 AsIs: e.Names#2/32 AsIs: )/16 AsIs: e.Info#2/34 AsIs: )/12 } Tile{ ]] }
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[11], context[12] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[43], context[44], context[40], context[41] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[38], context[39]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/30 )/8 (/11 (/15 e.Names#2/32 )/16 e.Info#2/34 )/12 (/17 # Spec/27 t.Name#2/28 e.Pattern#2/36 )/18 >/1
    context[30] = context[19];
    context[31] = context[20];
    context[32] = context[21];
    context[33] = context[22];
    context[34] = context[23];
    context[35] = context[24];
    context[36] = context[25];
    context[37] = context[26];
    // closed e.KnownNames#1 as range 30
    // closed e.Names#2 as range 32
    // closed e.Info#2 as range 34
    // closed e.Pattern#2 as range 36
    //DEBUG: t.Name#2: 28
    //DEBUG: e.KnownNames#1: 30
    //DEBUG: e.Names#2: 32
    //DEBUG: e.Info#2: 34
    //DEBUG: e.Pattern#2: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Spec/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 } Tile{ AsIs: e.Names#2/32 } t.Name#2/28/38 Tile{ AsIs: )/16 AsIs: e.Info#2/34 HalfReuse: (/12 } Tile{ AsIs: t.Name#2/28 } Tile{ AsIs: (/17 } Tile{ AsIs: e.Pattern#2/36 } Tile{ AsIs: )/8 } Tile{ AsIs: )/18 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[38], context[39], context[28], context[29]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/5 )/8 (/11 (/15 e.Names#2/13 )/16 e.Info#2/9 )/12 t.Other#2/17 >/1
  // closed e.KnownNames#1 as range 5
  // closed e.Names#2 as range 13
  // closed e.Info#2 as range 9
  //DEBUG: t.Other#2: 17
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.Names#2: 13
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Prepare-Aux=1\1/4 (/7 e.KnownNames#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 AsIs: e.Names#2/13 AsIs: )/16 AsIs: e.Info#2/9 AsIs: )/12 AsIs: t.Other#2/17 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Preparem_Aux_A1L1("Prepare-Aux=1\\1", COOKIE1_, COOKIE2_, func_gen_Preparem_Aux_A1L1);


static refalrts::FnResult func_gen_Preparem_Aux_A1L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Prepare-Aux=1\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Prepare-Aux=1\2/4 (/7 (/11 e.new#1/9 )/12 e.new#2/5 )/8 t.new#3/13 >/1
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
    // </0 & Prepare-Aux=1\2/4 (/7 (/11 e.Names#2/15 )/12 e.Info-B#2/26 (/32 t.Name#2/38 (/36 e.Pattern#2/34 )/37 )/33 e.Info-E#2/28 )/8 (/13 # Function/21 s.ScopeClass#2/22 t.Name#2/23 # Sentences/25 e.Body#2/19 )/14 >/1
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

  // </0 & Prepare-Aux=1\2/4 (/7 (/11 e.Names#2/9 )/12 e.Info#2/5 )/8 t.Other#2/13 >/1
  // closed e.Names#2 as range 9
  // closed e.Info#2 as range 5
  //DEBUG: t.Other#2: 13
  //DEBUG: e.Names#2: 9
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Prepare-Aux=1\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_Preparem_Aux_A1L2("Prepare-Aux=1\\2", COOKIE1_, COOKIE2_, func_gen_Preparem_Aux_A1L2);


static refalrts::FnResult func_Preparem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Prepare-Aux/4 (/7 (/11 e.KnownNames#1/9 )/12 e.KnownInfo#1/5 )/8 e.AST#1/2 >/1
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
  // closed e.KnownNames#1 as range 9
  // closed e.KnownInfo#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.KnownNames#1: 9
  //DEBUG: e.KnownInfo#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Prepare-Aux=1/7 AsIs: (/11 AsIs: e.KnownNames#1/9 AsIs: )/12 } (/13 Tile{ AsIs: e.KnownInfo#1/5 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 } & Fetch/14 </15 & MapAccum@1/16 e.KnownNames#1/9/17 (/19 (/20 )/21 )/22 (/23 Tile{ AsIs: e.AST#1/2 } )/24 >/25 (/26 & MapAccum/27 & Prepare-Aux=1\2/28 )/29 >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_MapAccum_Z1]);
  refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[28], functions[efunc_gen_Preparem_Aux_A1L2]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Preparem_Aux_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[23] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Preparem_Aux("Prepare-Aux", COOKIE1_, COOKIE2_, func_Preparem_Aux);


static refalrts::FnResult func_gen_CreateGuardFunctions_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & CreateGuardFunctions\1=2/4 (/7 e.GuardEnums#2/5 )/8 (/11 e.GuardName#3/9 )/12 (/15 e.Name#2/13 )/16 (/19 e.SpecPattern#2/17 )/20 (/23 e.Sentences#2/21 )/24 (/27 e.Signatures#2/25 )/28 e.GuardSentence#4/2 >/1
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
  // closed e.GuardEnums#2 as range 5
  // closed e.GuardName#3 as range 9
  // closed e.Name#2 as range 13
  // closed e.SpecPattern#2 as range 17
  // closed e.Sentences#2 as range 21
  // closed e.Signatures#2 as range 25
  // closed e.GuardSentence#4 as range 2
  //DEBUG: e.GuardEnums#2: 5
  //DEBUG: e.GuardName#3: 9
  //DEBUG: e.Name#2: 13
  //DEBUG: e.SpecPattern#2: 17
  //DEBUG: e.Sentences#2: 21
  //DEBUG: e.Signatures#2: 25
  //DEBUG: e.GuardSentence#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.GuardEnums#2/5 HalfReuse: (/8 HalfReuse: # Function/11 } Tile{ HalfReuse: # GN-Local/0 HalfReuse: (/4 } Tile{ AsIs: e.GuardName#3/9 } )/29 # Sentences/30 )/31 Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.SpecPattern#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences#2/21 HalfReuse: (/24 } Tile{ AsIs: e.GuardSentence#4/2 } )/32 Tile{ HalfReuse: )/27 AsIs: e.Signatures#2/25 AsIs: )/28 } Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Sentences]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[11], identifiers[ident_Function]);
  refalrts::reinit_ident(context[0], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_open_bracket(context[24]);
  refalrts::reinit_close_bracket(context[27]);
  refalrts::link_brackets( context[12], context[28] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::link_brackets( context[24], context[32] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[8], context[31] );
  refalrts::link_brackets( context[4], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[24] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateGuardFunctions_L1A2("CreateGuardFunctions\\1=2", COOKIE1_, COOKIE2_, func_gen_CreateGuardFunctions_L1A2);


static refalrts::FnResult func_gen_CreateGuardFunctions_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & CreateGuardFunctions\1=1/4 (/7 e.GuardEnums#2/5 )/8 (/11 e.Name#2/9 )/12 (/15 e.SpecPattern#2/13 )/16 (/19 e.Sentences#2/17 )/20 (/23 e.Signatures#2/21 )/24 e.GuardName#3/2 >/1
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
  // closed e.GuardEnums#2 as range 5
  // closed e.Name#2 as range 9
  // closed e.SpecPattern#2 as range 13
  // closed e.Sentences#2 as range 17
  // closed e.Signatures#2 as range 21
  // closed e.GuardName#3 as range 2
  //DEBUG: e.GuardEnums#2: 5
  //DEBUG: e.Name#2: 9
  //DEBUG: e.SpecPattern#2: 13
  //DEBUG: e.Sentences#2: 17
  //DEBUG: e.Signatures#2: 21
  //DEBUG: e.GuardName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/25 Tile{ AsIs: e.GuardEnums#2/5 } (/26 # Function/27 # GN-Local/28 Tile{ HalfReuse: (/24 AsIs: e.GuardName#3/2 HalfReuse: )/1 } # Sentences/29 )/30 )/31 Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.Name#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.SpecPattern#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Sentences#2/17 HalfReuse: (/20 AsIs: (/23 } e.SpecPattern#2/13/32 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 } # CallBrackets/34 (/35 # Symbol/36 # Name/37 e.GuardName#3/2/38 )/40 e.SpecPattern#2/13/41 )/43 )/44 )/45 )/46 Tile{ AsIs: e.Signatures#2/21 } )/47 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_Function]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_GNm_Local]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_Sentences]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_CallBrackets]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_Name]);
  refalrts::copy_evar(vm, context[38], context[39], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::copy_evar(vm, context[41], context[42], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::reinit_open_bracket(context[24]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[8], context[47] );
  refalrts::link_brackets( context[19], context[46] );
  refalrts::link_brackets( context[20], context[45] );
  refalrts::link_brackets( context[4], context[44] );
  refalrts::link_brackets( context[7], context[43] );
  refalrts::link_brackets( context[35], context[40] );
  refalrts::link_brackets( context[23], context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[25], context[31] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::link_brackets( context[24], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[34], context[46] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateGuardFunctions_L1A1("CreateGuardFunctions\\1=1", COOKIE1_, COOKIE2_, func_gen_CreateGuardFunctions_L1A1);


static refalrts::FnResult func_gen_CreateGuardFunctions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & CreateGuardFunctions\1/4 (/7 e.GuardEnums#2/5 )/8 (/11 (/15 e.Name#2/13 )/16 (/19 e.SpecPattern#2/17 )/20 (/23 e.Sentences#2/21 )/24 e.Signatures#2/9 )/12 >/1
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
  context[23] = refalrts::brackets_left( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.GuardEnums#2 as range 5
  // closed e.Name#2 as range 13
  // closed e.SpecPattern#2 as range 17
  // closed e.Sentences#2 as range 21
  // closed e.Signatures#2 as range 9
  //DEBUG: e.GuardEnums#2: 5
  //DEBUG: e.Name#2: 13
  //DEBUG: e.SpecPattern#2: 17
  //DEBUG: e.Sentences#2: 21
  //DEBUG: e.Signatures#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/25 Tile{ AsIs: e.GuardEnums#2/5 } (/26 Tile{ HalfReuse: # Function/0 HalfReuse: # GN-Local/4 AsIs: (/7 } e.Name#2/13/27 # SUF/29 '@'/30 0/31 Tile{ AsIs: )/12 HalfReuse: # Sentences/1 } )/32 Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.SpecPattern#2/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences#2/21 HalfReuse: (/24 } (/33 e.SpecPattern#2/17/34 )/36 (/37 (/38 # CallBrackets/39 (/40 # Symbol/41 # Name/42 e.Name#2/13/43 # SUF/45 '@'/46 0/47 )/48 e.SpecPattern#2/17/49 )/51 )/52 )/53 )/54 Tile{ AsIs: e.Signatures#2/9 } )/55 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::copy_evar(vm, context[27], context[28], context[13], context[14]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_SUF]);
  refalrts::alloc_char(vm, context[30], '@');
  refalrts::alloc_number(vm, context[31], 0UL);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_CallBrackets]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_ident(vm, context[41], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[42], identifiers[ident_Name]);
  refalrts::copy_evar(vm, context[43], context[44], context[13], context[14]);
  refalrts::alloc_ident(vm, context[45], identifiers[ident_SUF]);
  refalrts::alloc_char(vm, context[46], '@');
  refalrts::alloc_number(vm, context[47], 0UL);
  refalrts::alloc_close_bracket(vm, context[48]);
  refalrts::copy_evar(vm, context[49], context[50], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_close_bracket(vm, context[52]);
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::reinit_ident(context[0], identifiers[ident_Function]);
  refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
  refalrts::reinit_ident(context[1], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[24]);
  refalrts::link_brackets( context[11], context[55] );
  refalrts::link_brackets( context[23], context[54] );
  refalrts::link_brackets( context[24], context[53] );
  refalrts::link_brackets( context[37], context[52] );
  refalrts::link_brackets( context[38], context[51] );
  refalrts::link_brackets( context[40], context[48] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[25], context[8] );
  refalrts::link_brackets( context[26], context[32] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[55], context[55] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[33], context[54] );
  res = refalrts::splice_evar( res, context[8], context[24] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateGuardFunctions_L1("CreateGuardFunctions\\1", COOKIE1_, COOKIE2_, func_gen_CreateGuardFunctions_L1);


static refalrts::FnResult func_CreateGuardFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & CreateGuardFunctions/4 e.Info#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Info#1 as range 2
  //DEBUG: e.Info#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapAccum@2/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Info#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_MapAccum_Z2]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateGuardFunctions("CreateGuardFunctions", COOKIE1_, COOKIE2_, func_CreateGuardFunctions);


static refalrts::FnResult func_gen_OptTreem_Spec_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & OptTree-Spec$2=1/4 (/7 e.Names#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.AST#2/2 >/1
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
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # SpecInfo/4 AsIs: (/7 AsIs: e.Names#1/5 AsIs: )/8 } Tile{ AsIs: e.SpecInfo#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: e.NewFunctions#2/13 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_SpecInfo]);
  refalrts::link_brackets( context[0], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Spec_S2A1("OptTree-Spec$2=1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Spec_S2A1);


static refalrts::FnResult func_OptTreem_Spec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & OptTree-Spec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & OptTree-Spec/4 # NoOpt/5 e.AST#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;
    // closed e.AST#1 as range 6
    //DEBUG: e.AST#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ColdAll/5 AsIs: e.AST#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_ColdAll]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec/4 # OptSpec/5 e.AST-B#1/6 (/12 # SpecInfo/14 (/17 e.Names#1/15 )/18 e.SpecInfo#1/10 )/13 e.AST-E#1/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_OptSpec], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left( identifiers[ident_SpecInfo], context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Names#1 as range 15
    // closed e.SpecInfo#1 as range 10
    // closed e.AST-E#1 as range 8
    //DEBUG: e.AST-B#1: 6
    //DEBUG: e.Names#1: 15
    //DEBUG: e.SpecInfo#1: 10
    //DEBUG: e.AST-E#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & OptTree-Spec$2=1/14 AsIs: (/17 AsIs: e.Names#1/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & MapAccum@3/4 HalfReuse: (/5 } Tile{ AsIs: e.SpecInfo#1/10 } (/19 Tile{ AsIs: )/13 } )/20 Tile{ AsIs: e.AST-B#1/6 } Tile{ AsIs: e.AST-E#1/8 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_open_call(context[12]);
    refalrts::reinit_name(context[14], functions[efunc_gen_OptTreem_Spec_S2A1]);
    refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z3]);
    refalrts::reinit_open_bracket(context[5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[5], context[20] );
    refalrts::link_brackets( context[19], context[13] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_OptTreem_Spec("OptTree-Spec", 0U, 0U, func_OptTreem_Spec);


static refalrts::FnResult func_gen_ColdAll_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ColdAll\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ColdAll\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ColdAll\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ColdAll\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # ColdFunction/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: e.Body#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_ColdFunction]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ColdAll\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ColdAll\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ColdAll_L1("ColdAll\\1", COOKIE1_, COOKIE2_, func_gen_ColdAll_L1);


static refalrts::FnResult func_ColdAll(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & ColdAll/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ColdAll("ColdAll", COOKIE1_, COOKIE2_, func_ColdAll);


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
  //RESULT: Tile{ [[ } Tile{ AsIs: (/10 AsIs: e.SpecInfo#2/8 AsIs: (/14 AsIs: e.NewFunctions#2/12 AsIs: )/15 AsIs: )/11 } Tile{ HalfReuse: (/0 HalfReuse: # ColdFunction/4 AsIs: s.ScopeClass#1/5 AsIs: t.Name#1/6 } # Sentences/16 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[16], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ColdFunction]);
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Sentences/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecUnit$1=1/21 AsIs: s.ScopeClass#1/22 AsIs: t.Name#1/23 } Tile{ AsIs: </0 Reuse: & MapAccum@4/4 AsIs: (/7 AsIs: e.SpecInfo#1/15 AsIs: (/11 AsIs: e.NewFunctions#1/17 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Sentences#1/19 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[21], functions[efunc_gen_SpecUnit_S1A1]);
    refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z4]);
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
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[24] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
  //RESULT: Tile{ [[ AsIs: </0 } & SpecSentence=1/25 Tile{ AsIs: (/15 AsIs: e.Pattern#1/13 AsIs: )/16 } Tile{ AsIs: (/23 AsIs: e.Result#1/21 AsIs: )/24 HalfReuse: </12 HalfReuse: & MapAccum@5/1 } e.SpecInfo#1/5/26 (/28 e.NewFunctions#1/17/29 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/19 AsIs: e.NewFunctions#1/17 AsIs: )/20 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#1/9 } )/31 >/32 >/33 Tile{ ]] }
  refalrts::alloc_name(vm, context[25], functions[efunc_gen_SpecSentence_A1]);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[1], functions[efunc_gen_MapAccum_Z5]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[11], context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[28], context[4] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@6/4 AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/11 AsIs: e.NewFunctions#1/9 AsIs: )/12 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecResult("SpecResult", COOKIE1_, COOKIE2_, func_SpecResult);


static refalrts::FnResult func_gen_SpecTerm_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & SpecTerm$1=1/4 (/7 e.Name#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.Expression#2/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & TrySpecCall/8 AsIs: (/11 AsIs: e.SpecInfo#2/9 AsIs: (/15 AsIs: e.NewFunctions#2/13 AsIs: )/16 AsIs: )/12 } (/17 Tile{ HalfReuse: # CallBrackets/4 AsIs: (/7 } # Symbol/18 # Name/19 Tile{ AsIs: e.Name#1/5 } )/20 Tile{ AsIs: e.Expression#2/2 } )/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Name]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::reinit_name(context[8], functions[efunc_TrySpecCall]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::link_brackets( context[7], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecTerm_S1A1("SpecTerm$1=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S1A1);


static refalrts::FnResult func_gen_SpecTerm_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SpecTerm$2=1/4 (/7 e.SpecInfo#2/5 (/11 e.NewFunctions#2/9 )/12 )/8 e.ClosureContent#2/2 >/1
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
  // </0 & SpecTerm$3=1/4 (/7 e.SpecInfo#2/5 (/11 e.NewFunctions#2/9 )/12 )/8 e.Expression#2/2 >/1
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

static refalrts::NativeReference nat_ref_gen_SpecTerm_S3A1("SpecTerm$3=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S3A1);


static refalrts::FnResult func_gen_SpecTerm_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SpecTerm$4=1/4 (/7 e.Name#1/5 )/8 (/11 e.SpecInfo#2/9 (/15 e.NewFunctions#2/13 )/16 )/12 e.Expression#2/2 >/1
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

static refalrts::NativeReference nat_ref_gen_SpecTerm_S4A1("SpecTerm$4=1", COOKIE1_, COOKIE2_, func_gen_SpecTerm_S4A1);


static refalrts::FnResult func_SpecTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
      // </0 & SpecTerm/4 (/7 e.SpecInfo#1/22 (/11 e.NewFunctions#1/24 )/12 )/8 (/13 # CallBrackets/21 (/30 # Symbol/32 # Name/33 e.Name#1/28 )/31 e.Expression#1/26 )/14 >/1
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
      // closed e.SpecInfo#1 as range 22
      // closed e.NewFunctions#1 as range 24
      // closed e.Name#1 as range 28
      // closed e.Expression#1 as range 26
      //DEBUG: e.SpecInfo#1: 22
      //DEBUG: e.NewFunctions#1: 24
      //DEBUG: e.Name#1: 28
      //DEBUG: e.Expression#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # CallBrackets/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </30 HalfReuse: & SpecTerm$1=1/32 HalfReuse: (/33 AsIs: e.Name#1/28 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[30]);
      refalrts::reinit_name(context[32], functions[efunc_gen_SpecTerm_S1A1]);
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
      res = refalrts::splice_evar( res, context[26], context[27] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$2=1/21 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.ClosureContent#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_gen_SpecTerm_S2A1]);
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$3=1/21 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & SpecTerm$4=1/21 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & SpecResult/4 AsIs: (/7 AsIs: e.SpecInfo#1/22 AsIs: (/11 AsIs: e.NewFunctions#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expression#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_TrySpecCall_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & TrySpecCall$1=1/4 (/7 e.SpecInfo-B#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.SpecInfo-E#1/13 )/16 (/19 e.NewFunctions#1/17 )/20 (/23 e.Info#2/21 )/24 t.NewCall#2/25 e.NewFunction#2/2 >/1
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
  // closed e.Info#2 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewFunction#2 as range 2
  //DEBUG: e.SpecInfo-B#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.SpecInfo-E#1: 13
  //DEBUG: e.NewFunctions#1: 17
  //DEBUG: e.Info#2: 21
  //DEBUG: t.NewCall#2: 25
  //DEBUG: e.NewFunction#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TrySpecCall$1=1/4 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo-B#1/5 HalfReuse: (/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: e.Info#2/21 } Tile{ HalfReuse: )/15 AsIs: e.SpecInfo-E#1/13 HalfReuse: (/16 } Tile{ AsIs: e.NewFunctions#1/17 } Tile{ AsIs: e.NewFunction#2/2 } Tile{ AsIs: )/20 } Tile{ AsIs: )/24 AsIs: t.NewCall#2/25 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_gen_TrySpecCall_S1A1("TrySpecCall$1=1", COOKIE1_, COOKIE2_, func_gen_TrySpecCall_S1A1);


static refalrts::FnResult func_TrySpecCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & TrySpecCall/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TrySpecCall/4 (/7 e.new#1/5 (/22 e.new#2/20 )/23 )/8 (/11 # CallBrackets/13 (/16 # Symbol/18 # Name/19 e.new#3/14 )/17 e.new#4/9 )/12 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_CallBrackets], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left( identifiers[ident_Symbol], context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::ident_left( identifiers[ident_Name], context[14], context[15] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 20
  // closed e.new#3 as range 14
  // closed e.new#4 as range 9
  do {
    // </0 & TrySpecCall/4 (/7 e.SpecInfo-B#1/32 (/38 (/42 e.Name#1/44 )/43 e.Info#1/36 )/39 e.SpecInfo-E#1/34 (/22 e.NewFunctions#1/26 )/23 )/8 (/11 # CallBrackets/13 (/16 # Symbol/18 # Name/19 e.Name#1/28 )/17 e.Expression#1/30 )/12 >/1
    context[24] = context[5];
    context[25] = context[6];
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[14];
    context[29] = context[15];
    context[30] = context[9];
    context[31] = context[10];
    // closed e.NewFunctions#1 as range 26
    // closed e.Name#1 as range 28
    // closed e.Expression#1 as range 30
    context[32] = 0;
    context[33] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[34] = context[24];
      context[35] = context[25];
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = 0;
      context[41] = 0;
      context[42] = refalrts::brackets_left( context[40], context[41], context[36], context[37] );
      if( ! context[42] )
        continue;
      refalrts::bracket_pointers(context[42], context[43]);
      if( ! refalrts::repeated_evar_left( vm, context[44], context[45], context[28], context[29], context[40], context[41] ) )
        continue;
      if( ! refalrts::empty_seq( context[40], context[41] ) )
        continue;
      // closed e.Info#1 as range 36
      // closed e.SpecInfo-E#1 as range 34
      //DEBUG: e.NewFunctions#1: 26
      //DEBUG: e.Name#1: 28
      //DEBUG: e.Expression#1: 30
      //DEBUG: e.SpecInfo-B#1: 32
      //DEBUG: e.Info#1: 36
      //DEBUG: e.SpecInfo-E#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & TrySpecCall$1=1/4 AsIs: (/7 AsIs: e.SpecInfo-B#1/32 HalfReuse: )/38 AsIs: (/42 AsIs: e.Name#1/44 AsIs: )/43 } Tile{ AsIs: (/16 } Tile{ AsIs: e.SpecInfo-E#1/34 } Tile{ AsIs: )/39 } Tile{ AsIs: (/22 AsIs: e.NewFunctions#1/26 AsIs: )/23 HalfReuse: </8 HalfReuse: & SpecCall/11 HalfReuse: (/13 } Tile{ AsIs: e.Name#1/28 } Tile{ HalfReuse: )/19 } Tile{ AsIs: e.Info#1/36 } Tile{ HalfReuse: (/17 AsIs: e.Expression#1/30 AsIs: )/12 AsIs: >/1 } Tile{ HalfReuse: >/18 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_gen_TrySpecCall_S1A1]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[11], functions[efunc_SpecCall]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[17], context[12] );
      refalrts::link_brackets( context[13], context[19] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[16], context[39] );
      refalrts::link_brackets( context[42], context[43] );
      refalrts::link_brackets( context[7], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[22], context[13] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[32], context[33], context[24], context[25] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TrySpecCall/4 (/7 e.SpecInfo#1/5 (/22 e.NewFunctions#1/20 )/23 )/8 (/11 # CallBrackets/13 (/16 # Symbol/18 # Name/19 e.Name#1/14 )/17 e.Expression#1/9 )/12 >/1
  // closed e.SpecInfo#1 as range 5
  // closed e.NewFunctions#1 as range 20
  // closed e.Name#1 as range 14
  // closed e.Expression#1 as range 9
  //DEBUG: e.SpecInfo#1: 5
  //DEBUG: e.NewFunctions#1: 20
  //DEBUG: e.Name#1: 14
  //DEBUG: e.Expression#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TrySpecCall/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.SpecInfo#1/5 AsIs: (/22 AsIs: e.NewFunctions#1/20 AsIs: )/23 AsIs: )/8 AsIs: (/11 AsIs: # CallBrackets/13 AsIs: (/16 AsIs: # Symbol/18 AsIs: # Name/19 AsIs: e.Name#1/14 AsIs: )/17 AsIs: e.Expression#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TrySpecCall("TrySpecCall", COOKIE1_, COOKIE2_, func_TrySpecCall);


static refalrts::FnResult func_SpecCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 68 elems
  refalrts::Iter context[68];
  refalrts::zeros( context, 68 );
  // </0 & SpecCall/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/21 e.new#5/2 (/19 e.new#6/17 )/20 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#6 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & SpecCall/4 (/7 e.Name#1/22 )/8 (/11 e.SpecPattern#1/24 )/12 (/15 e.Body#1/26 )/16 s.NextNumber#1/21 e.Signatures#1/28 (/19 e.Argument#1/30 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[2];
    context[29] = context[3];
    context[30] = context[17];
    context[31] = context[18];
    // closed e.Name#1 as range 22
    // closed e.SpecPattern#1 as range 24
    // closed e.Body#1 as range 26
    // closed e.Signatures#1 as range 28
    // closed e.Argument#1 as range 30
    //DEBUG: s.NextNumber#1: 21
    //DEBUG: e.Name#1: 22
    //DEBUG: e.SpecPattern#1: 24
    //DEBUG: e.Body#1: 26
    //DEBUG: e.Signatures#1: 28
    //DEBUG: e.Argument#1: 30
    //21: s.NextNumber#1
    //22: e.Name#1
    //24: e.SpecPattern#1
    //26: e.Body#1
    //28: e.Signatures#1
    //30: e.Argument#1
    //38: e.Argument#1
    //42: e.SpecPattern#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_SpecCall_S1C1]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_GenericMatchm_Wrapper]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[30], context[31]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::copy_evar(vm, context[42], context[43], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[32] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[35] );
    res = refalrts::splice_elem( res, context[45] );
    refalrts::link_brackets( context[41], context[44] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_elem( res, context[41] );
    refalrts::link_brackets( context[37], context[40] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </32 & SpecCall$1?1/36 # Clear/37 (/40 e.StaticMatches#2/38 )/41 (/44 e.DynamicMatches#2/42 )/45 >/33
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
      context[37] = refalrts::ident_left( identifiers[ident_Clear], context[34], context[35] );
      if( ! context[37] )
        continue;
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[34], context[35] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[34], context[35] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.StaticMatches#2 as range 38
      // closed e.DynamicMatches#2 as range 42
      //DEBUG: s.NextNumber#1: 21
      //DEBUG: e.Name#1: 22
      //DEBUG: e.SpecPattern#1: 24
      //DEBUG: e.Body#1: 26
      //DEBUG: e.Signatures#1: 28
      //DEBUG: e.Argument#1: 30
      //DEBUG: e.StaticMatches#2: 38
      //DEBUG: e.DynamicMatches#2: 42
      //21: s.NextNumber#1
      //22: e.Name#1
      //24: e.SpecPattern#1
      //26: e.Body#1
      //28: e.Signatures#1
      //30: e.Argument#1
      //38: e.StaticMatches#2
      //42: e.DynamicMatches#2
      //51: e.StaticMatches#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[48], functions[efunc_gen_SpecCall_S1C2]);
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_ExtractCalls]);
      refalrts::copy_evar(vm, context[51], context[52], context[38], context[39]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[46] );
      res = refalrts::splice_elem( res, context[47] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[49] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[46] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </46 & SpecCall$1?2/50 (/53 e.Calls#3/51 )/54 e.StaticMatches#3/48 >/47
        context[48] = 0;
        context[49] = 0;
        context[50] = refalrts::call_left( context[48], context[49], context[46], context[47] );
        context[51] = 0;
        context[52] = 0;
        context[53] = refalrts::brackets_left( context[51], context[52], context[48], context[49] );
        if( ! context[53] )
          continue;
        refalrts::bracket_pointers(context[53], context[54]);
        // closed e.Calls#3 as range 51
        // closed e.StaticMatches#3 as range 48
        //DEBUG: s.NextNumber#1: 21
        //DEBUG: e.Name#1: 22
        //DEBUG: e.SpecPattern#1: 24
        //DEBUG: e.Body#1: 26
        //DEBUG: e.Signatures#1: 28
        //DEBUG: e.Argument#1: 30
        //DEBUG: e.StaticMatches#2: 38
        //DEBUG: e.DynamicMatches#2: 42
        //DEBUG: e.Calls#3: 51
        //DEBUG: e.StaticMatches#3: 48
        //21: s.NextNumber#1
        //22: e.Name#1
        //24: e.SpecPattern#1
        //26: e.Body#1
        //28: e.Signatures#1
        //30: e.Argument#1
        //38: e.StaticMatches#2
        //42: e.DynamicMatches#2
        //48: e.StaticMatches#3
        //51: e.Calls#3
        //60: e.StaticMatches#3
        //63: e.SpecPattern#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[55]);
        refalrts::alloc_name(vm, context[57], functions[efunc_gen_SpecCall_S1C3]);
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_PrepareSignature]);
        refalrts::copy_evar(vm, context[60], context[61], context[48], context[49]);
        refalrts::alloc_open_bracket(vm, context[62]);
        refalrts::copy_evar(vm, context[63], context[64], context[24], context[25]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::alloc_close_call(vm, context[56]);
        refalrts::push_stack( vm, context[56] );
        refalrts::push_stack( vm, context[55] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::push_stack( vm, context[66] );
        refalrts::push_stack( vm, context[58] );
        res = refalrts::splice_elem( res, context[66] );
        refalrts::link_brackets( context[62], context[65] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_evar( res, context[63], context[64] );
        res = refalrts::splice_elem( res, context[62] );
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_elem( res, context[55] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </55 & SpecCall$1?3/59 e.Signature#4/57 >/56
          context[57] = 0;
          context[58] = 0;
          context[59] = refalrts::call_left( context[57], context[58], context[55], context[56] );
          // closed e.Signature#4 as range 57
          //DEBUG: s.NextNumber#1: 21
          //DEBUG: e.Name#1: 22
          //DEBUG: e.SpecPattern#1: 24
          //DEBUG: e.Body#1: 26
          //DEBUG: e.Signatures#1: 28
          //DEBUG: e.Argument#1: 30
          //DEBUG: e.StaticMatches#2: 38
          //DEBUG: e.DynamicMatches#2: 42
          //DEBUG: e.Calls#3: 51
          //DEBUG: e.StaticMatches#3: 48
          //DEBUG: e.Signature#4: 57
          //21: s.NextNumber#1
          //22: e.Name#1
          //24: e.SpecPattern#1
          //26: e.Body#1
          //28: e.Signatures#1
          //30: e.Argument#1
          //38: e.StaticMatches#2
          //42: e.DynamicMatches#2
          //48: e.StaticMatches#3
          //51: e.Calls#3
          //57: e.Signature#4
          //65: e.StaticMatches#3

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[62], functions[efunc_gen_SpecCall_S1C4]);
          refalrts::alloc_open_call(vm, context[63]);
          refalrts::alloc_name(vm, context[64], functions[efunc_IsTrivialSubstitutions]);
          refalrts::copy_evar(vm, context[65], context[66], context[48], context[49]);
          refalrts::alloc_close_call(vm, context[67]);
          refalrts::alloc_close_call(vm, context[61]);
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[60] );
          res = refalrts::splice_elem( res, context[61] );
          refalrts::push_stack( vm, context[67] );
          refalrts::push_stack( vm, context[63] );
          res = refalrts::splice_elem( res, context[67] );
          res = refalrts::splice_evar( res, context[65], context[66] );
          res = refalrts::splice_elem( res, context[64] );
          res = refalrts::splice_elem( res, context[63] );
          res = refalrts::splice_elem( res, context[62] );
          res = refalrts::splice_elem( res, context[60] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </60 & SpecCall$1?4/64 # False/65 >/61
            context[62] = 0;
            context[63] = 0;
            context[64] = refalrts::call_left( context[62], context[63], context[60], context[61] );
            context[65] = refalrts::ident_left( identifiers[ident_False], context[62], context[63] );
            if( ! context[65] )
              continue;
            if( ! refalrts::empty_seq( context[62], context[63] ) )
              continue;
            //DEBUG: s.NextNumber#1: 21
            //DEBUG: e.Name#1: 22
            //DEBUG: e.SpecPattern#1: 24
            //DEBUG: e.Body#1: 26
            //DEBUG: e.Signatures#1: 28
            //DEBUG: e.Argument#1: 30
            //DEBUG: e.StaticMatches#2: 38
            //DEBUG: e.DynamicMatches#2: 42
            //DEBUG: e.Calls#3: 51
            //DEBUG: e.StaticMatches#3: 48
            //DEBUG: e.Signature#4: 57

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} & SpecCall$1?1/36 # Clear/37 (/40 e.StaticMatches#2/38 {REMOVED TILE} </46 {REMOVED TILE} {REMOVED TILE} )/54 {REMOVED TILE} >/47 </55 & SpecCall$1?3/59 {REMOVED TILE} >/56 </60 & SpecCall$1?4/64 # False/65 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall-Aux/4 AsIs: (/7 AsIs: e.Name#1/22 AsIs: )/8 AsIs: (/11 AsIs: e.SpecPattern#1/24 AsIs: )/12 AsIs: (/15 AsIs: e.Body#1/26 AsIs: )/16 AsIs: s.NextNumber#1/21 AsIs: e.Signatures#1/28 AsIs: (/19 AsIs: e.Argument#1/30 AsIs: )/20 HalfReuse: (/32 } Tile{ AsIs: e.Signature#4/57 } Tile{ HalfReuse: )/50 AsIs: (/53 } Tile{ AsIs: e.StaticMatches#3/48 } Tile{ AsIs: )/41 AsIs: (/44 AsIs: e.DynamicMatches#2/42 AsIs: )/45 HalfReuse: (/33 } Tile{ AsIs: e.Calls#3/51 } Tile{ HalfReuse: )/61 AsIs: >/1 ]] }
            refalrts::update_name(context[4], functions[efunc_SpecCallm_Aux]);
            refalrts::reinit_open_bracket(context[32]);
            refalrts::reinit_close_bracket(context[50]);
            refalrts::reinit_open_bracket(context[33]);
            refalrts::reinit_close_bracket(context[61]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[33], context[61] );
            refalrts::link_brackets( context[44], context[45] );
            refalrts::link_brackets( context[53], context[41] );
            refalrts::link_brackets( context[32], context[50] );
            refalrts::link_brackets( context[19], context[20] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[61];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[41], context[33] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[50], context[53] );
            res = refalrts::splice_evar( res, context[57], context[58] );
            refalrts::splice_to_freelist_open( vm, context[32], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[60], context[61]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[55], context[56]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[46], context[47]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[32], context[33]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall/4 (/7 e.Name#1/5 )/8 (/11 e.SpecPattern#1/9 )/12 (/15 e.Body#1/13 )/16 s.NextNumber#1/21 e.Signatures#1/2 (/19 e.Argument#1/17 )/20 >/1
  // closed e.Name#1 as range 5
  // closed e.SpecPattern#1 as range 9
  // closed e.Body#1 as range 13
  // closed e.Signatures#1 as range 2
  // closed e.Argument#1 as range 17
  //DEBUG: s.NextNumber#1: 21
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SpecPattern#1: 9
  //DEBUG: e.Body#1: 13
  //DEBUG: e.Signatures#1: 2
  //DEBUG: e.Argument#1: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.SpecPattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Body#1/13 AsIs: )/16 AsIs: s.NextNumber#1/21 AsIs: e.Signatures#1/2 HalfReuse: )/19 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: (/7 } # Symbol/22 # Name/23 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Argument#1/17 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[22], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_Name]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[20] );
  refalrts::link_brackets( context[8], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecCall("SpecCall", COOKIE1_, COOKIE2_, func_SpecCall);


static refalrts::FnResult func_gen_SpecCallm_Aux_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 76 elems
  refalrts::Iter context[76];
  refalrts::zeros( context, 76 );
  // </0 & SpecCall-Aux:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall-Aux:1$2:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 (/32 e.new#8/30 )/33 (/36 e.new#9/34 )/37 s.new#10/38 >/1
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
    // </0 & SpecCall-Aux:1$2:1/4 (/7 e.SpecPattern#1/39 )/8 (/11 e.Body#1/41 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/43 )/17 (/20 e.Name#1/45 )/21 (/24 e.Signature#1/47 )/25 (/28 e.SpecializedFuncArgument#3/49 )/29 (/32 e.SpecializedFuncBody#5/51 )/33 (/36 e.Argument#1/53 )/37 # True/38 >/1
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
    // closed e.Signature#1 as range 47
    // closed e.SpecializedFuncArgument#3 as range 49
    // closed e.SpecializedFuncBody#5 as range 51
    // closed e.Argument#1 as range 53
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 39
    //DEBUG: e.Body#1: 41
    //DEBUG: e.Signatures#1: 43
    //DEBUG: e.Name#1: 45
    //DEBUG: e.Signature#1: 47
    //DEBUG: e.SpecializedFuncArgument#3: 49
    //DEBUG: e.SpecializedFuncBody#5: 51
    //DEBUG: e.Argument#1: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Argument#1/53 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/39 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/41 AsIs: )/12 } Tile{ AsIs: </0 } & Add/55 1/56 Tile{ AsIs: s.NextNumber#1/13 HalfReuse: >/16 AsIs: e.Signatures#1/43 HalfReuse: (/17 AsIs: (/20 AsIs: e.Name#1/45 HalfReuse: # SUF/21 HalfReuse: '@'/24 } s.NextNumber#1/13/57 )/58 Tile{ AsIs: e.Signature#1/47 } )/59 Tile{ AsIs: )/33 AsIs: (/36 } # CallBrackets/60 (/61 # Symbol/62 # Name/63 e.Name#1/45/64 # SUF/66 '@'/67 Tile{ HalfReuse: s.NextNumber1 #13/25 HalfReuse: )/28 AsIs: e.SpecializedFuncArgument#3/49 AsIs: )/29 AsIs: (/32 } # Function/68 # GN-Local/69 (/70 e.Name#1/45/71 # SUF/73 '@'/74 s.NextNumber#1/13/75 Tile{ AsIs: )/37 Reuse: # Sentences/38 } Tile{ AsIs: e.SpecializedFuncBody#5/51 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_name(vm, context[55], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[56], 1UL);
    refalrts::copy_stvar(vm, context[57], context[13]);
    refalrts::alloc_close_bracket(vm, context[58]);
    refalrts::alloc_close_bracket(vm, context[59]);
    refalrts::alloc_ident(vm, context[60], identifiers[ident_CallBrackets]);
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

  // </0 & SpecCall-Aux:1$2:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#1/22 )/25 (/28 e.SpecializedFuncArgument#3/26 )/29 (/32 e.SpecializedFuncBody#5/30 )/33 (/36 e.Argument#1/34 )/37 # False/38 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[38] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.Signature#1 as range 22
  // closed e.SpecializedFuncArgument#3 as range 26
  // closed e.SpecializedFuncBody#5 as range 30
  // closed e.Argument#1 as range 34
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#1: 22
  //DEBUG: e.SpecializedFuncArgument#3: 26
  //DEBUG: e.SpecializedFuncBody#5: 30
  //DEBUG: e.Argument#1: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} (/24 e.Signature#1/22 )/25 (/28 e.SpecializedFuncArgument#3/26 {REMOVED TILE} e.SpecializedFuncBody#5/30 {REMOVED TILE} {REMOVED TILE} )/37 # False/38 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/14 } Tile{ AsIs: )/29 AsIs: (/32 } Tile{ HalfReuse: # CallBrackets/33 AsIs: (/36 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: e.Argument#1/34 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[33], identifiers[ident_CallBrackets]);
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

static refalrts::NativeReference nat_ref_gen_SpecCallm_Aux_B1S2B1("SpecCall-Aux:1$2:1", COOKIE1_, COOKIE2_, func_gen_SpecCallm_Aux_B1S2B1);


static refalrts::FnResult func_gen_SpecCallm_Aux_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & SpecCall-Aux:1$2=1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#1/22 )/25 (/28 e.SpecializedFuncArgument#3/26 )/29 (/32 e.Argument#1/30 )/33 e.SpecializedFuncBody#5/2 >/1
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
  // closed e.Signature#1 as range 22
  // closed e.SpecializedFuncArgument#3 as range 26
  // closed e.Argument#1 as range 30
  // closed e.SpecializedFuncBody#5 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#1: 22
  //DEBUG: e.SpecializedFuncArgument#3: 26
  //DEBUG: e.Argument#1: 30
  //DEBUG: e.SpecializedFuncBody#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall-Aux:1$2:1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Signature#1/22 AsIs: )/25 AsIs: (/28 AsIs: e.SpecializedFuncArgument#3/26 AsIs: )/29 AsIs: (/32 } e.SpecializedFuncBody#5/2/34 )/36 (/37 Tile{ AsIs: e.Argument#1/30 } )/38 </39 Tile{ HalfReuse: & IsSoundBody/33 AsIs: e.SpecializedFuncBody#5/2 AsIs: >/1 } >/40 Tile{ ]] }
  refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCallm_Aux_B1S2B1]);
  refalrts::reinit_name(context[33], functions[efunc_IsSoundBody]);
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[33], context[1] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCallm_Aux_B1S2A1("SpecCall-Aux:1$2=1", COOKIE1_, COOKIE2_, func_gen_SpecCallm_Aux_B1S2A1);


static refalrts::FnResult func_gen_SpecCallm_Aux_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & SpecCall-Aux:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SpecCall-Aux:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 (/32 e.new#8/30 )/33 (/36 e.new#9/34 )/37 s.new#10/38 e.new#11/2 >/1
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
  // closed e.new#11 as range 2
  do {
    // </0 & SpecCall-Aux:1/4 (/7 e.SpecPattern#1/39 )/8 (/11 e.Body#1/41 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/43 )/17 (/20 e.Name#1/45 )/21 (/24 e.SpecializedFuncArgument#3/47 )/25 (/28 e.Signature#1/49 )/29 (/32 e.Argument#1/51 )/33 (/36 e.StaticMatches#1/53 )/37 # Found/38 e.SpecSuffix#4/55 >/1
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
    context[55] = context[2];
    context[56] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Found], context[38] ) )
      continue;
    // closed e.SpecPattern#1 as range 39
    // closed e.Body#1 as range 41
    // closed e.Signatures#1 as range 43
    // closed e.Name#1 as range 45
    // closed e.SpecializedFuncArgument#3 as range 47
    // closed e.Signature#1 as range 49
    // closed e.Argument#1 as range 51
    // closed e.StaticMatches#1 as range 53
    // closed e.SpecSuffix#4 as range 55
    //DEBUG: s.NextNumber#1: 13
    //DEBUG: e.SpecPattern#1: 39
    //DEBUG: e.Body#1: 41
    //DEBUG: e.Signatures#1: 43
    //DEBUG: e.Name#1: 45
    //DEBUG: e.SpecializedFuncArgument#3: 47
    //DEBUG: e.Signature#1: 49
    //DEBUG: e.Argument#1: 51
    //DEBUG: e.StaticMatches#1: 53
    //DEBUG: e.SpecSuffix#4: 55

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/28 e.Signature#1/49 {REMOVED TILE} e.Argument#1/51 {REMOVED TILE} e.StaticMatches#1/53 )/37 # Found/38 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.SpecPattern#1/39 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/41 AsIs: )/12 AsIs: s.NextNumber#1/13 } Tile{ AsIs: e.Signatures#1/43 } Tile{ AsIs: )/29 AsIs: (/32 } Tile{ HalfReuse: # CallBrackets/33 AsIs: (/36 } Tile{ HalfReuse: # Symbol/17 HalfReuse: # Name/20 AsIs: e.Name#1/45 HalfReuse: # SUF/21 } Tile{ AsIs: e.SpecSuffix#4/55 } Tile{ HalfReuse: )/24 AsIs: e.SpecializedFuncArgument#3/47 AsIs: )/25 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[33], identifiers[ident_CallBrackets]);
    refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[20], identifiers[ident_Name]);
    refalrts::reinit_ident(context[21], identifiers[ident_SUF]);
    refalrts::reinit_close_bracket(context[24]);
    refalrts::link_brackets( context[32], context[25] );
    refalrts::link_brackets( context[36], context[24] );
    refalrts::link_brackets( context[4], context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SpecCall-Aux:1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.SpecializedFuncArgument#3/22 )/25 (/28 e.Signature#1/26 )/29 (/32 e.Argument#1/30 )/33 (/36 e.StaticMatches#1/34 )/37 # NotFound/38 >/1
  if( ! refalrts::ident_term( identifiers[ident_NotFound], context[38] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.Body#1 as range 9
  // closed e.Signatures#1 as range 14
  // closed e.Name#1 as range 18
  // closed e.SpecializedFuncArgument#3 as range 22
  // closed e.Signature#1 as range 26
  // closed e.Argument#1 as range 30
  // closed e.StaticMatches#1 as range 34
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.SpecializedFuncArgument#3: 22
  //DEBUG: e.Signature#1: 26
  //DEBUG: e.Argument#1: 30
  //DEBUG: e.StaticMatches#1: 34

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall-Aux:1$2=1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Signature#1/26 } Tile{ AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.SpecializedFuncArgument#3/22 } Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.Argument#1/30 AsIs: )/33 HalfReuse: </36 } & PrepareSpecializedFuncBody/39 (/40 e.SpecPattern#1/5/41 Tile{ AsIs: )/37 } (/43 Tile{ AsIs: e.StaticMatches#1/34 } )/44 e.Body#1/9/45 Tile{ HalfReuse: >/38 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[39], functions[efunc_PrepareSpecializedFuncBody]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::copy_evar(vm, context[41], context[42], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::copy_evar(vm, context[45], context[46], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCallm_Aux_B1S2A1]);
  refalrts::reinit_open_call(context[36]);
  refalrts::reinit_close_call(context[38]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[40], context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[38];
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[29], context[36] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCallm_Aux_B1("SpecCall-Aux:1", COOKIE1_, COOKIE2_, func_gen_SpecCallm_Aux_B1);


static refalrts::FnResult func_gen_SpecCallm_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & SpecCall-Aux=2/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#1/22 )/25 (/28 e.Argument#1/26 )/29 (/32 e.StaticMatches#1/30 )/33 e.SpecializedFuncArgument#3/2 >/1
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
  // closed e.Signature#1 as range 22
  // closed e.Argument#1 as range 26
  // closed e.StaticMatches#1 as range 30
  // closed e.SpecializedFuncArgument#3 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#1: 22
  //DEBUG: e.Argument#1: 26
  //DEBUG: e.StaticMatches#1: 30
  //DEBUG: e.SpecializedFuncArgument#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall-Aux:1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.SpecializedFuncArgument#3/2 } )/34 (/35 Tile{ AsIs: e.Signature#1/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.Argument#1/26 AsIs: )/29 AsIs: (/32 AsIs: e.StaticMatches#1/30 AsIs: )/33 } </36 & Spec-FindInSignatures/37 (/38 e.Signature#1/22/39 )/41 e.Signatures#1/14/42 >/44 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_open_call(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_Specm_FindInSignatures]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::copy_evar(vm, context[39], context[40], context[22], context[23]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[44]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCallm_Aux_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[38], context[41] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[35], context[25] );
  refalrts::link_brackets( context[24], context[34] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[44] );
  res = refalrts::splice_evar( res, context[25], context[33] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCallm_Aux_A2("SpecCall-Aux=2", COOKIE1_, COOKIE2_, func_gen_SpecCallm_Aux_A2);


static refalrts::FnResult func_gen_SpecCallm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & SpecCall-Aux=1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 s.NextNumber#1/13 (/16 e.Signatures#1/14 )/17 (/20 e.Name#1/18 )/21 (/24 e.Signature#1/22 )/25 (/28 e.Argument#1/26 )/29 (/32 e.StaticMatches#1/30 )/33 (/36 e.Calls#1/34 )/37 e.SpecializedFuncArgument#2/2 >/1
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
  // closed e.Signature#1 as range 22
  // closed e.Argument#1 as range 26
  // closed e.StaticMatches#1 as range 30
  // closed e.Calls#1 as range 34
  // closed e.SpecializedFuncArgument#2 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: s.NextNumber#1: 13
  //DEBUG: e.Signatures#1: 14
  //DEBUG: e.Name#1: 18
  //DEBUG: e.Signature#1: 22
  //DEBUG: e.Argument#1: 26
  //DEBUG: e.StaticMatches#1: 30
  //DEBUG: e.Calls#1: 34
  //DEBUG: e.SpecializedFuncArgument#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SpecCall-Aux=2/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 AsIs: s.NextNumber#1/13 AsIs: (/16 AsIs: e.Signatures#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Signature#1/22 AsIs: )/25 AsIs: (/28 AsIs: e.Argument#1/26 AsIs: )/29 AsIs: (/32 AsIs: e.StaticMatches#1/30 AsIs: )/33 HalfReuse: </36 } & ApplySubst-Expr/38 (/39 Tile{ AsIs: e.Calls#1/34 } Tile{ AsIs: )/37 AsIs: e.SpecializedFuncArgument#2/2 AsIs: >/1 } >/40 Tile{ ]] }
  refalrts::alloc_name(vm, context[38], functions[efunc_ApplySubstm_Expr]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecCallm_Aux_A2]);
  refalrts::reinit_open_call(context[36]);
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[39], context[37] );
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
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[37], context[1] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SpecCallm_Aux_A1("SpecCall-Aux=1", COOKIE1_, COOKIE2_, func_gen_SpecCallm_Aux_A1);


static refalrts::FnResult func_SpecCallm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & SpecCall-Aux/4 (/7 e.Name#1/5 )/8 (/11 e.SpecPattern#1/9 )/12 (/15 e.Body#1/13 )/16 s.NextNumber#1/37 e.Signatures#1/2 (/35 e.Argument#1/33 )/36 (/31 e.Signature#1/29 )/32 (/27 e.StaticMatches#1/25 )/28 (/23 e.DynamicMatches#1/21 )/24 (/19 e.Calls#1/17 )/20 >/1
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
  // closed e.Name#1 as range 5
  // closed e.SpecPattern#1 as range 9
  // closed e.Body#1 as range 13
  // closed e.Argument#1 as range 33
  // closed e.Signature#1 as range 29
  // closed e.StaticMatches#1 as range 25
  // closed e.DynamicMatches#1 as range 21
  // closed e.Calls#1 as range 17
  if( ! refalrts::svar_left( context[37], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Signatures#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SpecPattern#1: 9
  //DEBUG: e.Body#1: 13
  //DEBUG: e.Argument#1: 33
  //DEBUG: e.Signature#1: 29
  //DEBUG: e.StaticMatches#1: 25
  //DEBUG: e.DynamicMatches#1: 21
  //DEBUG: e.Calls#1: 17
  //DEBUG: s.NextNumber#1: 37
  //DEBUG: e.Signatures#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & SpecCall-Aux=1/8 AsIs: (/11 AsIs: e.SpecPattern#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Body#1/13 AsIs: )/16 AsIs: s.NextNumber#1/37 } (/38 Tile{ AsIs: e.Signatures#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } )/39 (/40 Tile{ AsIs: e.Signature#1/29 } )/41 Tile{ AsIs: (/35 AsIs: e.Argument#1/33 AsIs: )/36 AsIs: (/31 } e.StaticMatches#1/25/42 )/44 Tile{ AsIs: (/19 AsIs: e.Calls#1/17 AsIs: )/20 HalfReuse: </1 } Tile{ HalfReuse: & PrepareArgOrPattern/32 AsIs: (/27 AsIs: e.StaticMatches#1/25 AsIs: )/28 AsIs: (/23 AsIs: e.DynamicMatches#1/21 AsIs: )/24 } e.SpecPattern#1/9/45 >/47 >/48 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[25], context[26]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::copy_evar(vm, context[45], context[46], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[47]);
  refalrts::alloc_close_call(vm, context[48]);
  refalrts::reinit_name(context[8], functions[efunc_gen_SpecCallm_Aux_A1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_name(context[32], functions[efunc_PrepareArgOrPattern]);
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[31], context[44] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[40], context[41] );
  refalrts::link_brackets( context[7], context[39] );
  refalrts::link_brackets( context[38], context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[32], context[24] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[35], context[31] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[8], context[37] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SpecCallm_Aux("SpecCall-Aux", COOKIE1_, COOKIE2_, func_SpecCallm_Aux);


static refalrts::FnResult func_gen_ExtractCalls_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractCalls=2/4 (/7 e.Calls#3/5 (/11 e.UsedVars#3/9 )/12 )/8 e.StaticMatches#3/2 >/1
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
  // closed e.Calls#3 as range 5
  // closed e.UsedVars#3 as range 9
  // closed e.StaticMatches#3 as range 2
  //DEBUG: e.Calls#3: 5
  //DEBUG: e.UsedVars#3: 9
  //DEBUG: e.StaticMatches#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractCalls=2/4 {REMOVED TILE} e.UsedVars#3/9 )/12 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Calls#3/5 HalfReuse: )/11 } Tile{ AsIs: e.StaticMatches#3/2 } Tile{ ]] }
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractCalls_A2("ExtractCalls=2", COOKIE1_, COOKIE2_, func_gen_ExtractCalls_A2);


static refalrts::FnResult func_gen_ExtractCalls_A2L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ExtractCalls=2\1=1/4 t.Var#3/5 (/9 e.Calls#4/7 (/13 e.UsedVars#4/11 )/14 )/10 e.Expr#4/2 >/1
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
  context[13] = refalrts::brackets_right( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Calls#4 as range 7
  // closed e.UsedVars#4 as range 11
  // closed e.Expr#4 as range 2
  //DEBUG: t.Var#3: 5
  //DEBUG: e.Calls#4: 7
  //DEBUG: e.UsedVars#4: 11
  //DEBUG: e.Expr#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.Calls#4/7 AsIs: (/13 AsIs: e.UsedVars#4/11 AsIs: )/14 AsIs: )/10 } Tile{ HalfReuse: (/0 } Tile{ AsIs: e.Expr#4/2 } Tile{ HalfReuse: ':'/4 AsIs: t.Var#3/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], ':');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[4], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractCalls_A2L1A1("ExtractCalls=2\\1=1", COOKIE1_, COOKIE2_, func_gen_ExtractCalls_A2L1A1);


static refalrts::FnResult func_gen_ExtractCalls_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractCalls=2\1/4 (/7 e.Calls#3/5 (/15 e.UsedVars#3/13 )/16 )/8 (/11 e.Expr#3/9 ':'/19 t.Var#3/17 )/12 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Calls#3 as range 5
  // closed e.UsedVars#3 as range 13
  context[18] = refalrts::tvar_right( context[17], context[9], context[10] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#3 as range 9
  //DEBUG: e.Calls#3: 5
  //DEBUG: e.UsedVars#3: 13
  //DEBUG: t.Var#3: 17
  //DEBUG: e.Expr#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 } Tile{ HalfReuse: & ExtractCalls=2\1=1/19 AsIs: t.Var#3/17 } Tile{ AsIs: </0 Reuse: & ExtractCalls-Expr/4 AsIs: (/7 AsIs: e.Calls#3/5 AsIs: (/15 AsIs: e.UsedVars#3/13 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: e.Expr#3/9 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[19], functions[efunc_gen_ExtractCalls_A2L1A1]);
  refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Expr]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[18] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractCalls_A2L1("ExtractCalls=2\\1", COOKIE1_, COOKIE2_, func_gen_ExtractCalls_A2L1);


static refalrts::FnResult func_gen_ExtractCalls_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractCalls=1/4 (/7 e.StaticMatches#1/5 )/8 e.UsedVars#2/2 >/1
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
  // closed e.StaticMatches#1 as range 5
  // closed e.UsedVars#2 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.UsedVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractCalls=2/4 HalfReuse: </7 } & MapAccum@7/9 (/10 (/11 Tile{ AsIs: e.UsedVars#2/2 } Tile{ AsIs: )/8 } )/12 Tile{ AsIs: e.StaticMatches#1/5 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_MapAccum_Z7]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractCalls_A2]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractCalls_A1("ExtractCalls=1", COOKIE1_, COOKIE2_, func_gen_ExtractCalls_A1);


static refalrts::FnResult func_gen_ExtractCalls_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ExtractCalls=1\1/4 (/7 e.Expr#2/5 ':'/11 t.Var#2/9 )/8 >/1
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
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 5
  //DEBUG: t.Var#2: 9
  //DEBUG: e.Expr#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} ':'/11 t.Var#2/9 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Expr#2/5 } Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_ExtractCalls_A1L1("ExtractCalls=1\\1", COOKIE1_, COOKIE2_, func_gen_ExtractCalls_A1L1);


static refalrts::FnResult func_ExtractCalls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ExtractCalls/4 e.StaticMatches#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.StaticMatches#1 as range 2
  //DEBUG: e.StaticMatches#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ExtractCalls=1/6 (/7 e.StaticMatches#1/2/8 )/10 Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: e.StaticMatches#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ExtractCalls_A1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
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

static refalrts::NativeReference nat_ref_ExtractCalls("ExtractCalls", COOKIE1_, COOKIE2_, func_ExtractCalls);


static refalrts::FnResult func_ExtractCallsm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractCalls-Expr/4 (/7 e.Calls#1/5 (/11 e.UsedVars#1/9 )/12 )/8 e.Expr#1/2 >/1
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
  // closed e.Calls#1 as range 5
  // closed e.UsedVars#1 as range 9
  // closed e.Expr#1 as range 2
  //DEBUG: e.Calls#1: 5
  //DEBUG: e.UsedVars#1: 9
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@8/4 AsIs: (/7 AsIs: e.Calls#1/5 AsIs: (/11 AsIs: e.UsedVars#1/9 AsIs: )/12 AsIs: )/8 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractCallsm_Expr("ExtractCalls-Expr", COOKIE1_, COOKIE2_, func_ExtractCallsm_Expr);


static refalrts::FnResult func_gen_ExtractCallsm_Term_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ExtractCalls-Term$1=1/4 (/7 e.Calls#1/5 )/8 (/11 e.Expr#1/9 )/12 (/15 e.UsedVars#2/13 )/16 e.NewVar#2/2 >/1
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
  // closed e.Calls#1 as range 5
  // closed e.Expr#1 as range 9
  // closed e.UsedVars#2 as range 13
  // closed e.NewVar#2 as range 2
  //DEBUG: e.Calls#1: 5
  //DEBUG: e.Expr#1: 9
  //DEBUG: e.UsedVars#2: 13
  //DEBUG: e.NewVar#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Calls#1/5 HalfReuse: (/8 AsIs: (/11 } # CallBrackets/17 Tile{ AsIs: e.Expr#1/9 } )/18 Tile{ HalfReuse: ':'/0 HalfReuse: (/4 } e.NewVar#2/2/19 )/21 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.UsedVars#2/13 AsIs: )/16 } )/22 (/23 # TkVariable/24 Tile{ AsIs: e.NewVar#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CallBrackets]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_TkVariable]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_char(context[0], ':');
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[23], context[1] );
  refalrts::link_brackets( context[7], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[4], context[21] );
  refalrts::link_brackets( context[11], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractCallsm_Term_S1A1("ExtractCalls-Term$1=1", COOKIE1_, COOKIE2_, func_gen_ExtractCallsm_Term_S1A1);


static refalrts::FnResult func_gen_ExtractCallsm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractCalls-Term$2=1/4 (/7 e.Calls#2/5 (/11 e.UsedVars#2/9 )/12 )/8 e.Expr#2/2 >/1
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
  // closed e.Calls#2 as range 5
  // closed e.UsedVars#2 as range 9
  // closed e.Expr#2 as range 2
  //DEBUG: e.Calls#2: 5
  //DEBUG: e.UsedVars#2: 9
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Calls#2/5 AsIs: (/11 AsIs: e.UsedVars#2/9 AsIs: )/12 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_ExtractCallsm_Term_S2A1("ExtractCalls-Term$2=1", COOKIE1_, COOKIE2_, func_gen_ExtractCallsm_Term_S2A1);


static refalrts::FnResult func_gen_ExtractCallsm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractCalls-Term$3=1/4 (/7 e.Name#1/5 )/8 (/11 e.Calls#2/9 (/15 e.UsedVars#2/13 )/16 )/12 e.Expr#2/2 >/1
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
  // closed e.Calls#2 as range 9
  // closed e.UsedVars#2 as range 13
  // closed e.Expr#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Calls#2: 9
  //DEBUG: e.UsedVars#2: 13
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Calls#2/9 AsIs: (/15 AsIs: e.UsedVars#2/13 AsIs: )/16 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_ExtractCallsm_Term_S3A1("ExtractCalls-Term$3=1", COOKIE1_, COOKIE2_, func_gen_ExtractCallsm_Term_S3A1);


static refalrts::FnResult func_ExtractCallsm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & ExtractCalls-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractCalls-Term/4 (/7 e.new#1/5 (/11 e.new#2/9 )/12 )/8 t.new#3/13 >/1
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
    // </0 & ExtractCalls-Term/4 (/7 e.new#6/15 (/11 e.new#7/17 )/12 )/8 (/13 s.new#4/21 e.new#5/19 )/14 >/1
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
      // </0 & ExtractCalls-Term/4 (/7 e.Calls#1/22 (/11 e.UsedVars#1/24 )/12 )/8 (/13 # CallBrackets/21 e.Expr#1/26 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[21] ) )
        continue;
      // closed e.Calls#1 as range 22
      // closed e.UsedVars#1 as range 24
      // closed e.Expr#1 as range 26
      //DEBUG: e.Calls#1: 22
      //DEBUG: e.UsedVars#1: 24
      //DEBUG: e.Expr#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractCalls-Term$1=1/4 AsIs: (/7 AsIs: e.Calls#1/22 HalfReuse: )/11 } Tile{ HalfReuse: (/21 AsIs: e.Expr#1/26 AsIs: )/14 HalfReuse: </1 } & NewVarName/28 (/29 Tile{ AsIs: e.UsedVars#1/24 } Tile{ AsIs: )/12 HalfReuse: 'e'/8 HalfReuse: 'C'/13 }"all"/30 0/32 >/33 >/34 Tile{ ]] }
      refalrts::alloc_name(vm, context[28], functions[efunc_NewVarName]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_chars(vm, context[30], context[31], "all", 3);
      refalrts::alloc_number(vm, context[32], 0UL);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::update_name(context[4], functions[efunc_gen_ExtractCallsm_Term_S1A1]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_open_bracket(context[21]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_char(context[13], 'C');
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[29], context[12] );
      refalrts::link_brackets( context[21], context[14] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[34] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractCalls-Term/4 (/7 e.Calls#1/22 (/11 e.UsedVars#1/24 )/12 )/8 (/13 # Brackets/21 e.Expr#1/26 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[21] ) )
        continue;
      // closed e.Calls#1 as range 22
      // closed e.UsedVars#1 as range 24
      // closed e.Expr#1 as range 26
      //DEBUG: e.Calls#1: 22
      //DEBUG: e.UsedVars#1: 24
      //DEBUG: e.Expr#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & ExtractCalls-Term$2=1/21 } Tile{ AsIs: </0 Reuse: & ExtractCalls-Expr/4 AsIs: (/7 AsIs: e.Calls#1/22 AsIs: (/11 AsIs: e.UsedVars#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expr#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_gen_ExtractCallsm_Term_S2A1]);
      refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Expr]);
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

    // </0 & ExtractCalls-Term/4 (/7 e.Calls#1/22 (/11 e.UsedVars#1/24 )/12 )/8 (/13 # ADT-Brackets/21 (/30 e.Name#1/28 )/31 e.Expr#1/26 )/14 >/1
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
    // closed e.Calls#1 as range 22
    // closed e.UsedVars#1 as range 24
    // closed e.Name#1 as range 28
    // closed e.Expr#1 as range 26
    //DEBUG: e.Calls#1: 22
    //DEBUG: e.UsedVars#1: 24
    //DEBUG: e.Name#1: 28
    //DEBUG: e.Expr#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & ExtractCalls-Term$3=1/21 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 } Tile{ AsIs: </0 Reuse: & ExtractCalls-Expr/4 AsIs: (/7 AsIs: e.Calls#1/22 AsIs: (/11 AsIs: e.UsedVars#1/24 AsIs: )/12 AsIs: )/8 } Tile{ AsIs: e.Expr#1/26 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[21], functions[efunc_gen_ExtractCallsm_Term_S3A1]);
    refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Expr]);
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

  // </0 & ExtractCalls-Term/4 (/7 e.Calls#1/5 (/11 e.UsedVars#1/9 )/12 )/8 t.OtherTerm#1/13 >/1
  // closed e.Calls#1 as range 5
  // closed e.UsedVars#1 as range 9
  //DEBUG: t.OtherTerm#1: 13
  //DEBUG: e.Calls#1: 5
  //DEBUG: e.UsedVars#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractCalls-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Calls#1/5 AsIs: (/11 AsIs: e.UsedVars#1/9 AsIs: )/12 AsIs: )/8 AsIs: t.OtherTerm#1/13 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractCallsm_Term("ExtractCalls-Term", COOKIE1_, COOKIE2_, func_ExtractCallsm_Term);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.Pattern#2/9 } Tile{ HalfReuse: </7 HalfReuse: & Map@4/11 } Tile{ AsIs: e.Conditions#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z4]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Body#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
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


static refalrts::FnResult func_gen_PrepareSignature_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & PrepareSignature=2/4 e.ExprList#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.ExprList#3 as range 2
  //DEBUG: e.ExprList#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameSignatureVars/4 AsIs: e.ExprList#3/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_RenameSignatureVars]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSignature_A2("PrepareSignature=2", COOKIE1_, COOKIE2_, func_gen_PrepareSignature_A2);


static refalrts::FnResult func_gen_PrepareSignature_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & PrepareSignature=1/4 (/7 e.StaticMatches#1/5 )/8 e.SpecVars#2/2 >/1
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
  // closed e.StaticMatches#1 as range 5
  // closed e.SpecVars#2 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.SpecVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & PrepareSignature=2/0 HalfReuse: </4 HalfReuse: & PrepareSignature-SortVars/7 AsIs: e.StaticMatches#1/5 HalfReuse: (/8 AsIs: e.SpecVars#2/2 HalfReuse: )/1 } >/10 >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_PrepareSignature_A2]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_PrepareSignaturem_SortVars]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSignature_A1("PrepareSignature=1", COOKIE1_, COOKIE2_, func_gen_PrepareSignature_A1);


static refalrts::FnResult func_PrepareSignature(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & PrepareSignature/4 e.StaticMatches#1/2 (/7 e.SpecPattern#1/5 )/8 >/1
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
  // closed e.StaticMatches#1 as range 2
  // closed e.SpecPattern#1 as range 5
  //DEBUG: e.StaticMatches#1: 2
  //DEBUG: e.SpecPattern#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSignature=1/4 } (/9 Tile{ AsIs: e.StaticMatches#1/2 } )/10 </11 Tile{ HalfReuse: & ExtractVariables-Expr/7 AsIs: e.SpecPattern#1/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSignature_A1]);
  refalrts::reinit_name(context[7], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareSignature("PrepareSignature", COOKIE1_, COOKIE2_, func_PrepareSignature);


static refalrts::FnResult func_gen_PrepareSignaturem_SortVars_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PrepareSignature-SortVars=1/4 (/7 )/8 e.SigValues#2/2 >/1
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
  // closed e.SigValues#2 as range 2
  //DEBUG: e.SigValues#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareSignature-SortVars=1/4 (/7 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SigValues#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSignaturem_SortVars_A1("PrepareSignature-SortVars=1", COOKIE1_, COOKIE2_, func_gen_PrepareSignaturem_SortVars_A1);


static refalrts::FnResult func_gen_PrepareSignaturem_SortVars_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & PrepareSignature-SortVars=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareSignature-SortVars=1\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & PrepareSignature-SortVars=1\1/4 (/7 e.Vars-B#2/17 (/23 e.Val#2/21 ':'/30 (/27 # TkVariable/29 e.Index#2/31 )/28 )/24 e.Vars-E#2/19 )/8 (/11 e.Index#2/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Index#2 as range 15
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_right( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_TkVariable], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_right( ':', context[21], context[22] );
      if( ! context[30] )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[15], context[16], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Val#2 as range 21
      // closed e.Vars-E#2 as range 19
      //DEBUG: e.Index#2: 15
      //DEBUG: e.Vars-B#2: 17
      //DEBUG: e.Val#2: 21
      //DEBUG: e.Vars-E#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & PrepareSignature-SortVars=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} (/27 # TkVariable/29 e.Index#2/31 )/28 )/24 {REMOVED TILE} )/8 (/11 e.Index#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Vars-B#2/17 } Tile{ AsIs: e.Vars-E#2/19 } Tile{ AsIs: )/12 } Tile{ AsIs: (/23 AsIs: e.Val#2/21 HalfReuse: )/30 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[30]);
      refalrts::link_brackets( context[23], context[30] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[30] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareSignature-SortVars=1\1/4 (/7 e.Variables#2/5 )/8 (/11 e.Index#2/9 )/12 >/1
  // closed e.Variables#2 as range 5
  // closed e.Index#2 as range 9
  //DEBUG: e.Variables#2: 5
  //DEBUG: e.Index#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareSignature-SortVars=1\1/4 {REMOVED TILE} (/11 e.Index#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Variables#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSignaturem_SortVars_A1L1("PrepareSignature-SortVars=1\\1", COOKIE1_, COOKIE2_, func_gen_PrepareSignaturem_SortVars_A1L1);


static refalrts::FnResult func_PrepareSignaturem_SortVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & PrepareSignature-SortVars/4 e.StaticMatches#1/2 (/7 e.SpecPatternVars#1/5 )/8 >/1
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
  // closed e.StaticMatches#1 as range 2
  // closed e.SpecPatternVars#1 as range 5
  //DEBUG: e.StaticMatches#1: 2
  //DEBUG: e.SpecPatternVars#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & PrepareSignature-SortVars=1/10 </11 Tile{ HalfReuse: & MapAccum@9/0 HalfReuse: (/4 AsIs: e.StaticMatches#1/2 HalfReuse: )/7 AsIs: e.SpecPatternVars#1/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_PrepareSignaturem_SortVars_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z9]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareSignaturem_SortVars("PrepareSignature-SortVars", COOKIE1_, COOKIE2_, func_PrepareSignaturem_SortVars);


static refalrts::FnResult func_gen_RenameSignatureVars_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RenameSignatureVars=3/4 (/7 e.KnownVars#4/5 s.NextId#4/9 )/8 e.Signature#4/2 >/1
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
  // closed e.Signature#4 as range 2
  if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#4 as range 5
  //DEBUG: e.Signature#4: 2
  //DEBUG: s.NextId#4: 9
  //DEBUG: e.KnownVars#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameSignatureVars=3/4 (/7 e.KnownVars#4/5 s.NextId#4/9 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Signature#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVars_A3("RenameSignatureVars=3", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVars_A3);


static refalrts::FnResult func_gen_RenameSignatureVars_A3L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RenameSignatureVars=3\1=1/4 (/7 e.KnownVars#5/5 s.NextId#5/9 )/8 e.SignaturePart#5/2 >/1
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
  // closed e.SignaturePart#5 as range 2
  if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#5 as range 5
  //DEBUG: e.SignaturePart#5: 2
  //DEBUG: s.NextId#5: 9
  //DEBUG: e.KnownVars#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#5/5 AsIs: s.NextId#5/9 AsIs: )/8 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.SignaturePart#5/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVars_A3L1A1("RenameSignatureVars=3\\1=1", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVars_A3L1A1);


static refalrts::FnResult func_gen_RenameSignatureVars_A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & RenameSignatureVars=3\1/4 (/7 e.KnownVars#4/5 s.NextId#4/13 )/8 (/11 e.SignaturePart#4/9 )/12 >/1
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
  // closed e.SignaturePart#4 as range 9
  if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#4 as range 5
  //DEBUG: e.SignaturePart#4: 9
  //DEBUG: s.NextId#4: 13
  //DEBUG: e.KnownVars#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 } & RenameSignatureVars=3\1=1/14 Tile{ AsIs: </0 Reuse: & RenameSignatureVars-Expr/4 AsIs: (/7 AsIs: e.KnownVars#4/5 AsIs: s.NextId#4/13 AsIs: )/8 } Tile{ AsIs: e.SignaturePart#4/9 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_RenameSignatureVars_A3L1A1]);
  refalrts::reinit_open_call(context[11]);
  refalrts::update_name(context[4], functions[efunc_RenameSignatureVarsm_Expr]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVars_A3L1("RenameSignatureVars=3\\1", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVars_A3L1);


static refalrts::FnResult func_gen_RenameSignatureVars_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RenameSignatureVars=2/4 (/7 e.KnownVars#2/5 )/8 (/11 e.Signature#1/9 )/12 s.NextId#3/13 >/1
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
  // closed e.KnownVars#2 as range 5
  // closed e.Signature#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.KnownVars#2: 5
  //DEBUG: e.Signature#1: 9
  //DEBUG: s.NextId#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextId#3/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & RenameSignatureVars=3/15 Tile{ AsIs: </0 Reuse: & MapAccum@10/4 AsIs: (/7 AsIs: e.KnownVars#2/5 HalfReuse: s.NextId3 #13/8 HalfReuse: )/11 AsIs: e.Signature#1/9 HalfReuse: >/12 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_RenameSignatureVars_A3]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z10]);
  refalrts::reinit_svar( context[8], context[13] );
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVars_A2("RenameSignatureVars=2", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVars_A2);


static refalrts::FnResult func_gen_RenameSignatureVars_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RenameSignatureVars=1/4 (/7 e.Signature#1/5 )/8 e.KnownVars#2/2 >/1
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
  // closed e.KnownVars#2 as range 2
  //DEBUG: e.Signature#1: 5
  //DEBUG: e.KnownVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameSignatureVars=3/4 HalfReuse: </7 } & MapAccum@10/9 (/10 Tile{ AsIs: e.KnownVars#2/2 } 0/11 Tile{ AsIs: )/8 } Tile{ AsIs: e.Signature#1/5 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_MapAccum_Z10]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_number(vm, context[11], 0UL);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVars_A3]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVars_A1("RenameSignatureVars=1", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVars_A1);


static refalrts::FnResult func_RenameSignatureVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & RenameSignatureVars/4 e.Signature#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Signature#1 as range 2
  //DEBUG: e.Signature#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameSignatureVars=3/4 } </5 & MapAccum@10/6 (/7 0/8 )/9 Tile{ AsIs: e.Signature#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_MapAccum_Z10]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_number(vm, context[8], 0UL);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVars_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameSignatureVars("RenameSignatureVars", COOKIE1_, COOKIE2_, func_RenameSignatureVars);


static refalrts::FnResult func_RenameSignatureVarsm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & RenameSignatureVars-Expr/4 t.State#1/5 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: t.State#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@11/4 AsIs: t.State#1/5 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameSignatureVarsm_Expr("RenameSignatureVars-Expr", COOKIE1_, COOKIE2_, func_RenameSignatureVarsm_Expr);


static refalrts::FnResult func_gen_RenameSignatureVarsm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & RenameSignatureVars-Term$2=1/4 (/7 e.KnownVariables#1/5 )/8 s.Mode#1/9 (/12 e.OldIndex#1/10 )/13 s.NextId#1/14 e.NewIndex#2/2 >/1
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
  // closed e.KnownVariables#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.OldIndex#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewIndex#2 as range 2
  //DEBUG: e.KnownVariables#1: 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.OldIndex#1: 10
  //DEBUG: s.NextId#1: 14
  //DEBUG: e.NewIndex#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVariables#1/5 HalfReuse: (/8 AsIs: s.Mode#1/9 } Tile{ AsIs: e.OldIndex#1/10 } Tile{ AsIs: (/12 } Tile{ AsIs: e.NewIndex#2/2 } )/15 )/16 Tile{ AsIs: </0 Reuse: & Add/4 } Tile{ HalfReuse: 1/13 AsIs: s.NextId#1/14 } >/17 )/18 (/19 # TkVariable/20 s.Mode#1/9/21 e.NewIndex#2/2/22 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TkVariable]);
  refalrts::copy_stvar(vm, context[21], context[9]);
  refalrts::copy_evar(vm, context[22], context[23], context[2], context[3]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[13], 1UL);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[19], context[1] );
  refalrts::link_brackets( context[7], context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVarsm_Term_S2A1("RenameSignatureVars-Term$2=1", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVarsm_Term_S2A1);


static refalrts::FnResult func_gen_RenameSignatureVarsm_Term_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & RenameSignatureVars-Term$3=2/4 s.BracketsTag#1/5 t.State#3/6 e.Expr#3/2 >/1
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
  // closed e.Expr#3 as range 2
  //DEBUG: s.BracketsTag#1: 5
  //DEBUG: t.State#3: 6
  //DEBUG: e.Expr#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.State#3/6 } Tile{ HalfReuse: (/4 AsIs: s.BracketsTag#1/5 } Tile{ AsIs: e.Expr#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVarsm_Term_S3A2("RenameSignatureVars-Term$3=2", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVarsm_Term_S3A2);


static refalrts::FnResult func_gen_RenameSignatureVarsm_Term_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & RenameSignatureVars-Term$4=1/4 (/7 e.Name#1/5 )/8 t.State#2/9 e.Expr#2/2 >/1
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
  // closed e.Name#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: t.State#2: 9
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.State#2/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameSignatureVarsm_Term_S4A1("RenameSignatureVars-Term$4=1", COOKIE1_, COOKIE2_, func_gen_RenameSignatureVarsm_Term_S4A1);


static refalrts::FnResult func_RenameSignatureVarsm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & RenameSignatureVars-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameSignatureVars-Term/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & RenameSignatureVars-Term/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & RenameSignatureVars-Term/4 (/5 e.new#6/14 s.new#7/17 )/6 (/7 # TkVariable/11 s.new#8/16 e.new#9/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[5] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#9 as range 12
      if( ! refalrts::svar_right( context[17], context[14], context[15] ) )
        continue;
      // closed e.new#6 as range 14
      do {
        // </0 & RenameSignatureVars-Term/4 (/5 e.KnownVariables#1/18 s.NextId#1/17 )/6 (/7 # TkVariable/11 s.Mode#1/16 e.OldIndex#1/20 )/8 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[12];
        context[21] = context[13];
        // closed e.KnownVariables#1 as range 18
        // closed e.OldIndex#1 as range 20
        //DEBUG: s.NextId#1: 17
        //DEBUG: s.Mode#1: 16
        //DEBUG: e.KnownVariables#1: 18
        //DEBUG: e.OldIndex#1: 20
        //16: s.Mode#1
        //17: s.NextId#1
        //18: e.KnownVariables#1
        //20: e.OldIndex#1
        //25: e.KnownVariables#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[24], functions[efunc_gen_RenameSignatureVarsm_Term_S1C1]);
        refalrts::copy_evar(vm, context[25], context[26], context[18], context[19]);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </22 & RenameSignatureVars-Term$1?1/26 e._B#2/27 (/33 s.Mode#1/39 e.OldIndex#1/40 (/37 e.NewIndex#2/35 )/38 )/34 e._E#2/29 >/23
          context[24] = 0;
          context[25] = 0;
          context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
          context[27] = 0;
          context[28] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[29] = context[24];
            context[30] = context[25];
            context[31] = 0;
            context[32] = 0;
            context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
            if( ! context[33] )
              continue;
            refalrts::bracket_pointers(context[33], context[34]);
            context[35] = 0;
            context[36] = 0;
            context[37] = refalrts::brackets_right( context[35], context[36], context[31], context[32] );
            if( ! context[37] )
              continue;
            refalrts::bracket_pointers(context[37], context[38]);
            if( ! refalrts::repeated_stvar_left( vm, context[39], context[16], context[31], context[32] ) )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[40], context[41], context[20], context[21], context[31], context[32] ) )
              continue;
            if( ! refalrts::empty_seq( context[31], context[32] ) )
              continue;
            // closed e.NewIndex#2 as range 35
            // closed e._E#2 as range 29
            //DEBUG: s.NextId#1: 17
            //DEBUG: s.Mode#1: 16
            //DEBUG: e.KnownVariables#1: 18
            //DEBUG: e.OldIndex#1: 20
            //DEBUG: e._B#2: 27
            //DEBUG: e.NewIndex#2: 35
            //DEBUG: e._E#2: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & RenameSignatureVars-Term/4 {REMOVED TILE} e.OldIndex#1/20 )/8 </22 & RenameSignatureVars-Term$1?1/26 e._B#2/27 (/33 s.Mode#1/39 e.OldIndex#1/40 (/37 {REMOVED TILE} )/38 )/34 e._E#2/29 >/23 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: e.KnownVariables#1/18 AsIs: s.NextId#1/17 AsIs: )/6 AsIs: (/7 AsIs: # TkVariable/11 AsIs: s.Mode#1/16 } Tile{ AsIs: e.NewIndex#2/35 } Tile{ HalfReuse: )/1 ]] }
            refalrts::reinit_close_bracket(context[1]);
            refalrts::link_brackets( context[7], context[1] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[35], context[36] );
            res = refalrts::splice_evar( res, context[5], context[16] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[27], context[28], context[24], context[25] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[22], context[23]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RenameSignatureVars-Term/4 (/5 e.KnownVariables#1/18 s.NextId#1/17 )/6 (/7 # TkVariable/11 s.Mode#1/16 e.OldIndex#1/20 )/8 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[12];
      context[21] = context[13];
      // closed e.KnownVariables#1 as range 18
      // closed e.OldIndex#1 as range 20
      //DEBUG: s.NextId#1: 17
      //DEBUG: s.Mode#1: 16
      //DEBUG: e.KnownVariables#1: 18
      //DEBUG: e.OldIndex#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameSignatureVars-Term$2=1/4 AsIs: (/5 } Tile{ AsIs: e.KnownVariables#1/18 } )/22 Tile{ AsIs: s.Mode#1/16 } (/23 Tile{ AsIs: e.OldIndex#1/20 } )/24 Tile{ AsIs: s.NextId#1/17 HalfReuse: </6 HalfReuse: & Symb/7 HalfReuse: s.NextId1 #17/11 } >/25 Tile{ HalfReuse: 0/8 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVarsm_Term_S2A1]);
      refalrts::reinit_open_call(context[6]);
      refalrts::reinit_name(context[7], functions[efunc_Symb]);
      refalrts::reinit_svar( context[11], context[17] );
      refalrts::reinit_number(context[8], 0UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[6] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[5], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[17], context[11] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & RenameSignatureVars-Term/4 t.State#1/5 (/7 s.BracketsTag#1/11 e.Expr#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      // closed e.Expr#1 as range 12
      //DEBUG: t.State#1: 5
      //DEBUG: s.BracketsTag#1: 11
      //DEBUG: e.Expr#1: 12
      //5: t.State#1
      //11: s.BracketsTag#1
      //12: e.Expr#1
      //19: s.BracketsTag#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_RenameSignatureVarsm_Term_S3C1]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[19], context[11]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_CallBrackets]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_ClosureBrackets]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_Brackets]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[17] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_stvar( res, context[19] );
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
        // </14 & RenameSignatureVars-Term$3?1/18 # True/19 >/15
        context[16] = 0;
        context[17] = 0;
        context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
        context[19] = refalrts::ident_left( identifiers[ident_True], context[16], context[17] );
        if( ! context[19] )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;
        //DEBUG: t.State#1: 5
        //DEBUG: s.BracketsTag#1: 11
        //DEBUG: e.Expr#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 s.BracketsTag#1/11 {REMOVED TILE} {REMOVED TILE} # True/19 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameSignatureVars-Term$3=2/4 } Tile{ HalfReuse: s.BracketsTag1 #11/8 AsIs: </14 Reuse: & RenameSignatureVars-Expr/18 } Tile{ AsIs: t.State#1/5 } Tile{ AsIs: e.Expr#1/12 } Tile{ AsIs: >/15 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVarsm_Term_S3A2]);
        refalrts::reinit_svar( context[8], context[11] );
        refalrts::update_name(context[18], functions[efunc_RenameSignatureVarsm_Expr]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[8], context[18] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[14], context[15]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RenameSignatureVars-Term/4 t.State#1/5 (/7 # ADT-Brackets/11 (/16 e.Name#1/14 )/17 e.Expr#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[11] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 14
    // closed e.Expr#1 as range 12
    //DEBUG: t.State#1: 5
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Expr#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & RenameSignatureVars-Term$4=1/11 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 } Tile{ AsIs: </0 Reuse: & RenameSignatureVars-Expr/4 AsIs: t.State#1/5 } Tile{ AsIs: e.Expr#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[11], functions[efunc_gen_RenameSignatureVarsm_Term_S4A1]);
    refalrts::update_name(context[4], functions[efunc_RenameSignatureVarsm_Expr]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameSignatureVars-Term/4 t.State#1/5 t.OtherTerm#1/7 >/1
  //DEBUG: t.State#1: 5
  //DEBUG: t.OtherTerm#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameSignatureVars-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.State#1/5 AsIs: t.OtherTerm#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameSignatureVarsm_Term("RenameSignatureVars-Term", COOKIE1_, COOKIE2_, func_RenameSignatureVarsm_Term);


static refalrts::FnResult func_gen_ApplySubstm_Subst_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ApplySubst-Subst\1/4 (/7 e.FromSubstitution#1/5 )/8 (/11 e.Expr#2/9 ':'/15 t.Var#2/13 )/12 >/1
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
  // closed e.FromSubstitution#1 as range 5
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 9
  //DEBUG: e.FromSubstitution#1: 5
  //DEBUG: t.Var#2: 13
  //DEBUG: e.Expr#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.FromSubstitution#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/15 AsIs: t.Var#2/13 AsIs: )/12 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplySubstm_Subst_L1("ApplySubst-Subst\\1", COOKIE1_, COOKIE2_, func_gen_ApplySubstm_Subst_L1);


static refalrts::FnResult func_ApplySubstm_Subst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ApplySubst-Subst/4 (/7 e.FromSubstitution#1/5 )/8 e.ToSubstitution#1/2 >/1
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
  // closed e.FromSubstitution#1 as range 5
  // closed e.ToSubstitution#1 as range 2
  //DEBUG: e.FromSubstitution#1: 5
  //DEBUG: e.ToSubstitution#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@7/7 AsIs: e.FromSubstitution#1/5 HalfReuse: (/8 AsIs: e.ToSubstitution#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z7]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplySubstm_Subst("ApplySubst-Subst", COOKIE1_, COOKIE2_, func_ApplySubstm_Subst);


static refalrts::FnResult func_gen_ApplySubstm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ApplySubst-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ApplySubst-Expr\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ApplySubst-Expr\1/4 (/7 e.new#5/11 )/8 (/9 s.new#3/15 e.new#4/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#5 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#4 as range 13
    do {
      // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # TkVariable/15 e.ModeIndex#2/18 )/10 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[15] ) )
        continue;
      // closed e.Substitution#1 as range 16
      // closed e.ModeIndex#2 as range 18
      //DEBUG: e.Substitution#1: 16
      //DEBUG: e.ModeIndex#2: 18
      //16: e.Substitution#1
      //18: e.ModeIndex#2
      //23: e.Substitution#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_ApplySubstm_Expr_L1S1C1]);
      refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </20 & ApplySubst-Expr\1$1?1/24 e.Subst-B#3/25 (/31 e.Value#3/29 ':'/37 (/35 e.ModeIndex#2/38 )/36 )/32 e.Subst-E#3/27 >/21
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::call_left( context[22], context[23], context[20], context[21] );
        context[25] = 0;
        context[26] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[27] = context[22];
          context[28] = context[23];
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
          if( ! context[31] )
            continue;
          refalrts::bracket_pointers(context[31], context[32]);
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::brackets_right( context[33], context[34], context[29], context[30] );
          if( ! context[35] )
            continue;
          refalrts::bracket_pointers(context[35], context[36]);
          context[37] = refalrts::char_right( ':', context[29], context[30] );
          if( ! context[37] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[18], context[19], context[33], context[34] ) )
            continue;
          if( ! refalrts::empty_seq( context[33], context[34] ) )
            continue;
          // closed e.Value#3 as range 29
          // closed e.Subst-E#3 as range 27
          //DEBUG: e.Substitution#1: 16
          //DEBUG: e.ModeIndex#2: 18
          //DEBUG: e.Subst-B#3: 25
          //DEBUG: e.Value#3: 29
          //DEBUG: e.Subst-E#3: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # TkVariable/15 e.ModeIndex#2/18 )/10 </20 & ApplySubst-Expr\1$1?1/24 e.Subst-B#3/25 (/31 {REMOVED TILE} ':'/37 (/35 e.ModeIndex#2/38 )/36 )/32 e.Subst-E#3/27 >/21 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: e.Value#3/29 } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[30] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[25], context[26], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[20], context[21]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # Brackets/15 e.Nested#2/18 )/10 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[15] ) )
        continue;
      // closed e.Substitution#1 as range 16
      // closed e.Nested#2 as range 18
      //DEBUG: e.Substitution#1: 16
      //DEBUG: e.Nested#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Brackets/15 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.Substitution#1/16 AsIs: )/8 } Tile{ AsIs: e.Nested#2/18 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # ADT-Brackets/15 (/22 e.Name#2/20 )/23 e.Nested#2/18 )/10 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[15] ) )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      // closed e.Substitution#1 as range 16
      // closed e.Name#2 as range 20
      // closed e.Nested#2 as range 18
      //DEBUG: e.Substitution#1: 16
      //DEBUG: e.Name#2: 20
      //DEBUG: e.Nested#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT-Brackets/15 AsIs: (/22 AsIs: e.Name#2/20 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.Substitution#1/16 AsIs: )/8 } Tile{ AsIs: e.Nested#2/18 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[9], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # CallBrackets/15 e.Nested#2/18 )/10 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[15] ) )
        continue;
      // closed e.Substitution#1 as range 16
      // closed e.Nested#2 as range 18
      //DEBUG: e.Substitution#1: 16
      //DEBUG: e.Nested#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CallBrackets/15 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.Substitution#1/16 AsIs: )/8 } Tile{ AsIs: e.Nested#2/18 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/16 )/8 (/9 # ClosureBrackets/15 e.ClosureContent#2/18 )/10 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[15] ) )
      continue;
    // closed e.Substitution#1 as range 16
    // closed e.ClosureContent#2 as range 18
    //DEBUG: e.Substitution#1: 16
    //DEBUG: e.ClosureContent#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ClosureBrackets/15 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.Substitution#1/16 AsIs: )/8 } Tile{ AsIs: e.ClosureContent#2/18 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/5 )/8 t.OtherTerm#2/9 >/1
  // closed e.Substitution#1 as range 5
  //DEBUG: t.OtherTerm#2: 9
  //DEBUG: e.Substitution#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ApplySubst-Expr\1/4 (/7 e.Substitution#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplySubstm_Expr_L1("ApplySubst-Expr\\1", COOKIE1_, COOKIE2_, func_gen_ApplySubstm_Expr_L1);


static refalrts::FnResult func_ApplySubstm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ApplySubst-Expr/4 (/7 e.Substitution#1/5 )/8 e.Expression#1/2 >/1
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
  // closed e.Substitution#1 as range 5
  // closed e.Expression#1 as range 2
  //DEBUG: e.Substitution#1: 5
  //DEBUG: e.Expression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@8/7 AsIs: e.Substitution#1/5 HalfReuse: (/8 AsIs: e.Expression#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z8]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplySubstm_Expr("ApplySubst-Expr", COOKIE1_, COOKIE2_, func_ApplySubstm_Expr);


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


static refalrts::FnResult func_gen_IsTrivialSubstitutions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & IsTrivialSubstitutions\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsTrivialSubstitutions\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsTrivialSubstitutions\1/4 # False/5 t.Any#2/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
      continue;
    //DEBUG: t.Any#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsTrivialSubstitutions\1/4 # False/5 t.Any#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsTrivialSubstitutions\1/4 # True/5 t.new#3/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsTrivialSubstitutions\1/4 # True/5 (/6 (/12 # TkVariable/15 s.Mode#2/21 e.Index1#2/10 )/13 ':'/14 (/18 # TkVariable/20 s.Mode#2/22 e.Index2#2/16 )/19 )/7 >/1
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
    context[14] = refalrts::char_left( ':', context[8], context[9] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_TkVariable], context[10], context[11] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[8], context[9] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[10], context[11] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[22], context[21], context[16], context[17] ) )
      continue;
    // closed e.Index1#2 as range 10
    // closed e.Index2#2 as range 16
    //DEBUG: s.Mode#2: 21
    //DEBUG: e.Index1#2: 10
    //DEBUG: e.Index2#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsTrivialSubstitutions\1/4 # True/5 (/6 (/12 # TkVariable/15 s.Mode#2/21 e.Index1#2/10 )/13 ':'/14 (/18 # TkVariable/20 s.Mode#2/22 e.Index2#2/16 )/19 )/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsTrivialSubstitutions\1/4 # True/5 t.OtherSubstitution#2/6 >/1
  //DEBUG: t.OtherSubstitution#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsTrivialSubstitutions\1/4 # True/5 t.OtherSubstitution#2/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsTrivialSubstitutions_L1("IsTrivialSubstitutions\\1", COOKIE1_, COOKIE2_, func_gen_IsTrivialSubstitutions_L1);


static refalrts::FnResult func_IsTrivialSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & IsTrivialSubstitutions/4 e.StaticMatches#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.StaticMatches#1 as range 2
  //DEBUG: e.StaticMatches#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@1/0 HalfReuse: # True/4 AsIs: e.StaticMatches#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z1]);
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

static refalrts::NativeReference nat_ref_IsTrivialSubstitutions("IsTrivialSubstitutions", COOKIE1_, COOKIE2_, func_IsTrivialSubstitutions);


static refalrts::FnResult func_gen_PrepareArgOrPattern_B1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PrepareArgOrPattern:1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareArgOrPattern:1$1\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrepareArgOrPattern:1$1\1/4 (/5 # GhostBrackets/9 e.Expr#5/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_GhostBrackets], context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Expr#5 as range 7
    //DEBUG: e.Expr#5: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PrepareArgOrPattern:1$1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Brackets/9 AsIs: e.Expr#5/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_Brackets]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareArgOrPattern:1$1\1/4 t.STValue#5/5 >/1
  //DEBUG: t.STValue#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareArgOrPattern:1$1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.STValue#5/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_B1S1L1("PrepareArgOrPattern:1$1\\1", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_B1S1L1);


static refalrts::FnResult func_gen_PrepareArgOrPattern_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & PrepareArgOrPattern:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & PrepareArgOrPattern:1/4 e.STValues#4/7 (/13 # GhostBrackets/15 e.FirstEValue#4/11 )/14 e.Values#4/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_GhostBrackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.FirstEValue#4 as range 11
      // closed e.Values#4 as range 9
      //DEBUG: e.STValues#4: 7
      //DEBUG: e.FirstEValue#4: 11
      //DEBUG: e.Values#4: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & PrepareArgOrPattern:1/4 {REMOVED TILE} (/13 # GhostBrackets/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.STValues#4/7 } Tile{ AsIs: e.FirstEValue#4/11 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@9/14 AsIs: e.Values#4/9 AsIs: >/1 ]] }
      refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareArgOrPattern:1/4 e.STValues#4/2 >/1
  // closed e.STValues#4 as range 2
  //DEBUG: e.STValues#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareArgOrPattern:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.STValues#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_B1("PrepareArgOrPattern:1", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_B1);


static refalrts::FnResult func_gen_PrepareArgOrPattern_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PrepareArgOrPattern=2/4 (/7 e.KnownVarsFromStatic#3/5 )/8 e.NewArgOrPattern#3/2 >/1
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
  // closed e.KnownVarsFromStatic#3 as range 5
  // closed e.NewArgOrPattern#3 as range 2
  //DEBUG: e.KnownVarsFromStatic#3: 5
  //DEBUG: e.NewArgOrPattern#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & PrepareArgOrPattern=2/4 (/7 e.KnownVarsFromStatic#3/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & PrepareArgOrPattern:1/8 AsIs: e.NewArgOrPattern#3/2 AsIs: >/1 ]] }
  refalrts::reinit_name(context[8], functions[efunc_gen_PrepareArgOrPattern_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_A2("PrepareArgOrPattern=2", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_A2);


static refalrts::FnResult func_gen_PrepareArgOrPattern_A2L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & PrepareArgOrPattern=2\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareArgOrPattern=2\1$1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & PrepareArgOrPattern=2\1$1\1/4 (/7 e.KnownVarsFromStatic#5/14 )/8 (/11 s.Mode#5/13 e.Index#5/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.KnownVarsFromStatic#5 as range 14
    // closed e.Index#5 as range 16
    //DEBUG: s.Mode#5: 13
    //DEBUG: e.KnownVarsFromStatic#5: 14
    //DEBUG: e.Index#5: 16
    //13: s.Mode#5
    //14: e.KnownVarsFromStatic#5
    //16: e.Index#5
    //21: e.KnownVarsFromStatic#5

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_PrepareArgOrPattern_A2L1S1L1S1C1]);
    refalrts::copy_evar(vm, context[21], context[22], context[14], context[15]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & PrepareArgOrPattern=2\1$1\1$1?1/22 e._B1#6/23 (/29 s.Mode#5/31 e.Index#5/32 )/30 e._E1#6/25 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[20];
        context[26] = context[21];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        if( ! refalrts::repeated_stvar_left( vm, context[31], context[13], context[27], context[28] ) )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[32], context[33], context[16], context[17], context[27], context[28] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        // closed e._E1#6 as range 25
        //DEBUG: s.Mode#5: 13
        //DEBUG: e.KnownVarsFromStatic#5: 14
        //DEBUG: e.Index#5: 16
        //DEBUG: e._B1#6: 23
        //DEBUG: e._E1#6: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & PrepareArgOrPattern=2\1$1\1/4 {REMOVED TILE} (/11 s.Mode#5/13 e.Index#5/16 )/12 </18 & PrepareArgOrPattern=2\1$1\1$1?1/22 e._B1#6/23 (/29 s.Mode#5/31 e.Index#5/32 )/30 e._E1#6/25 >/19 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVarsFromStatic#5/14 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[20], context[21] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareArgOrPattern=2\1$1\1/4 (/7 e.KnownVarsFromStatic#5/5 )/8 (/11 s.Mode#5/13 e.Index#5/9 )/12 >/1
  // closed e.KnownVarsFromStatic#5 as range 5
  // closed e.Index#5 as range 9
  //DEBUG: s.Mode#5: 13
  //DEBUG: e.KnownVarsFromStatic#5: 5
  //DEBUG: e.Index#5: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/14 Tile{ AsIs: e.KnownVarsFromStatic#5/5 } (/15 s.Mode#5/13/16 e.Index#5/9/17 )/19 )/20 Tile{ AsIs: </0 Reuse: & WrapVar/4 HalfReuse: s.Mode5 #13/7 } Tile{ HalfReuse: (/8 HalfReuse: # TkVariable/11 AsIs: s.Mode#5/13 AsIs: e.Index#5/9 AsIs: )/12 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_stvar(vm, context[16], context[13]);
  refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_WrapVar]);
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[11], identifiers[ident_TkVariable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[14], context[20] );
  refalrts::link_brackets( context[15], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_A2L1S1L1("PrepareArgOrPattern=2\\1$1\\1", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_A2L1S1L1);


static refalrts::FnResult func_gen_PrepareArgOrPattern_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & PrepareArgOrPattern=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareArgOrPattern=2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 s.new#4/21 e.new#5/17 )/20 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 17
  do {
    // </0 & PrepareArgOrPattern=2\1/4 (/7 e.StaticMatches#1/22 )/8 (/11 e.DynamicMatches#1/24 )/12 (/15 e.KnownVarsFromStatic#3/26 )/16 (/19 s.Mode#3/21 e.Index#3/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    // closed e.StaticMatches#1 as range 22
    // closed e.DynamicMatches#1 as range 24
    // closed e.KnownVarsFromStatic#3 as range 26
    // closed e.Index#3 as range 28
    //DEBUG: s.Mode#3: 21
    //DEBUG: e.StaticMatches#1: 22
    //DEBUG: e.DynamicMatches#1: 24
    //DEBUG: e.KnownVarsFromStatic#3: 26
    //DEBUG: e.Index#3: 28
    //21: s.Mode#3
    //22: e.StaticMatches#1
    //24: e.DynamicMatches#1
    //26: e.KnownVarsFromStatic#3
    //28: e.Index#3
    //33: e.StaticMatches#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_PrepareArgOrPattern_A2L1S1C1]);
    refalrts::copy_evar(vm, context[33], context[34], context[22], context[23]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </30 & PrepareArgOrPattern=2\1$1?1/34 e._B#4/35 (/41 e.Expr#4/39 ':'/48 (/45 # TkVariable/47 s.Mode#3/49 e.Index#3/50 )/46 )/42 e._E#4/37 >/31
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
      context[35] = 0;
      context[36] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[37] = context[32];
        context[38] = context[33];
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_right( context[43], context[44], context[39], context[40] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        context[47] = refalrts::ident_left( identifiers[ident_TkVariable], context[43], context[44] );
        if( ! context[47] )
          continue;
        context[48] = refalrts::char_right( ':', context[39], context[40] );
        if( ! context[48] )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[49], context[21], context[43], context[44] ) )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[28], context[29], context[43], context[44] ) )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        // closed e.Expr#4 as range 39
        // closed e._E#4 as range 37
        //DEBUG: s.Mode#3: 21
        //DEBUG: e.StaticMatches#1: 22
        //DEBUG: e.DynamicMatches#1: 24
        //DEBUG: e.KnownVarsFromStatic#3: 26
        //DEBUG: e.Index#3: 28
        //DEBUG: e._B#4: 35
        //DEBUG: e.Expr#4: 39
        //DEBUG: e._E#4: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & PrepareArgOrPattern=2\1/4 (/7 e.StaticMatches#1/22 )/8 (/11 e.DynamicMatches#1/24 {REMOVED TILE} s.Mode#3/21 e.Index#3/28 )/20 </30 {REMOVED TILE} e._B#4/35 (/41 {REMOVED TILE} ':'/48 (/45 # TkVariable/47 s.Mode#3/49 e.Index#3/50 )/46 )/42 e._E#4/37 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MapAccum@12/12 AsIs: (/15 AsIs: e.KnownVarsFromStatic#3/26 AsIs: )/16 HalfReuse: </19 } Tile{ Reuse: & ExtractVariables-Expr/34 } Tile{ AsIs: e.Expr#4/39 } Tile{ AsIs: >/31 AsIs: >/1 ]] }
        refalrts::reinit_name(context[12], functions[efunc_gen_MapAccum_Z12]);
        refalrts::reinit_open_call(context[19]);
        refalrts::update_name(context[34], functions[efunc_ExtractVariablesm_Expr]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[31];
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[12], context[19] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[35], context[36], context[32], context[33] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[30], context[31]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareArgOrPattern=2\1/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 (/15 e.KnownVarsFromStatic#3/13 )/16 (/19 s.Mode#3/21 e.Index#3/17 )/20 >/1
  // closed e.StaticMatches#1 as range 5
  // closed e.DynamicMatches#1 as range 9
  // closed e.KnownVarsFromStatic#3 as range 13
  // closed e.Index#3 as range 17
  //DEBUG: s.Mode#3: 21
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.KnownVarsFromStatic#3: 13
  //DEBUG: e.Index#3: 17
  //5: e.StaticMatches#1
  //9: e.DynamicMatches#1
  //13: e.KnownVarsFromStatic#3
  //17: e.Index#3
  //21: s.Mode#3
  //25: e.DynamicMatches#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_PrepareArgOrPattern_A2L1S2C1]);
  refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[22] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </22 & PrepareArgOrPattern=2\1$2?1/26 e._B#4/27 (/33 e.Expr#4/31 ':'/40 (/37 # TkVariable/39 s.Mode#3/41 e.Index#3/42 )/38 )/34 e._E#4/29 >/23
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[29] = context[24];
      context[30] = context[25];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_right( context[35], context[36], context[31], context[32] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_TkVariable], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_right( ':', context[31], context[32] );
      if( ! context[40] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[41], context[21], context[35], context[36] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[42], context[43], context[17], context[18], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      // closed e.Expr#4 as range 31
      // closed e._E#4 as range 29
      //DEBUG: s.Mode#3: 21
      //DEBUG: e.StaticMatches#1: 5
      //DEBUG: e.DynamicMatches#1: 9
      //DEBUG: e.KnownVarsFromStatic#3: 13
      //DEBUG: e.Index#3: 17
      //DEBUG: e._B#4: 27
      //DEBUG: e.Expr#4: 31
      //DEBUG: e._E#4: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareArgOrPattern=2\1/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 {REMOVED TILE} s.Mode#3/21 e.Index#3/17 )/20 </22 & PrepareArgOrPattern=2\1$2?1/26 e._B#4/27 (/33 {REMOVED TILE} ':'/40 (/37 {REMOVED TILE} e.Index#3/42 )/38 )/34 e._E#4/29 >/23 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: e.KnownVarsFromStatic#3/13 AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & WrapVar/39 AsIs: s.Mode#3/41 } Tile{ AsIs: e.Expr#4/31 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[39], functions[efunc_WrapVar]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[15], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[24], context[25] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[22], context[23]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_A2L1("PrepareArgOrPattern=2\\1", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_A2L1);


static refalrts::FnResult func_gen_PrepareArgOrPattern_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrepareArgOrPattern=1/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 e.SpecVars#2/2 >/1
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
  // closed e.SpecVars#2 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.SpecVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareArgOrPattern=2/4 HalfReuse: </7 } & MapAccum@13/13 Tile{ AsIs: e.StaticMatches#1/5 } Tile{ AsIs: (/11 AsIs: e.DynamicMatches#1/9 AsIs: )/12 } (/14 Tile{ AsIs: )/8 } (/15 Tile{ AsIs: e.SpecVars#2/2 } )/16 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MapAccum_Z13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareArgOrPattern_A2]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[14], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareArgOrPattern_A1("PrepareArgOrPattern=1", COOKIE1_, COOKIE2_, func_gen_PrepareArgOrPattern_A1);


static refalrts::FnResult func_PrepareArgOrPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & PrepareArgOrPattern/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.DynamicMatches#1/9 )/12 e.SpecPattern#1/2 >/1
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
  // closed e.SpecPattern#1 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.DynamicMatches#1: 9
  //DEBUG: e.SpecPattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareArgOrPattern=1/4 AsIs: (/7 AsIs: e.StaticMatches#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.DynamicMatches#1/9 AsIs: )/12 } </13 & ExtractVariables-Expr/14 Tile{ AsIs: e.SpecPattern#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareArgOrPattern_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareArgOrPattern("PrepareArgOrPattern", COOKIE1_, COOKIE2_, func_PrepareArgOrPattern);


static refalrts::FnResult func_WrapVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & WrapVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WrapVar/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & WrapVar/4 'e'/5 e.Expr#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;
    // closed e.Expr#1 as range 6
    //DEBUG: e.Expr#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # GhostBrackets/5 AsIs: e.Expr#1/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[5], identifiers[ident_GhostBrackets]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WrapVar/4 s.Mode#1/5 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WrapVar/4 s.Mode#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WrapVar("WrapVar", COOKIE1_, COOKIE2_, func_WrapVar);


static refalrts::FnResult func_gen_RenameGenericMatch_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RenameGenericMatch=3/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.VarsFromBody#4/9 )/12 e.Renames#4/2 >/1
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
  // closed e.VarsFromBody#4 as range 9
  // closed e.Renames#4 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.VarsFromBody#4: 9
  //DEBUG: e.Renames#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.VarsFromBody#4/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplySubst-Subst/4 AsIs: (/7 } Tile{ AsIs: e.Renames#4/2 } Tile{ AsIs: )/12 } Tile{ AsIs: e.StaticMatches#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ApplySubstm_Subst]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A3("RenameGenericMatch=3", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A3);


static refalrts::FnResult func_gen_RenameGenericMatch_A3L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RenameGenericMatch=3\1=1/4 (/7 e.CurrentVarName#4/5 )/8 (/11 e.VarsFromBody#5/9 )/12 e.NewVarName#5/2 >/1
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
  // closed e.CurrentVarName#4 as range 5
  // closed e.VarsFromBody#5 as range 9
  // closed e.NewVarName#5 as range 2
  //DEBUG: e.CurrentVarName#4: 5
  //DEBUG: e.VarsFromBody#5: 9
  //DEBUG: e.NewVarName#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ AsIs: e.VarsFromBody#5/9 } Tile{ AsIs: )/12 } (/14 (/15 Tile{ HalfReuse: # TkVariable/1 } Tile{ AsIs: e.NewVarName#5/2 } Tile{ HalfReuse: )/0 HalfReuse: ':'/4 AsIs: (/7 AsIs: e.CurrentVarName#4/5 AsIs: )/8 HalfReuse: )/11 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::reinit_ident(context[1], identifiers[ident_TkVariable]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_char(context[4], ':');
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[14], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[0] );
  refalrts::link_brackets( context[13], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A3L1A1("RenameGenericMatch=3\\1=1", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A3L1A1);


static refalrts::FnResult func_gen_RenameGenericMatch_A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RenameGenericMatch=3\1/4 (/7 e.VarsFromBody#4/5 )/8 (/11 e.CurrentVarName#4/9 )/12 >/1
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
  // closed e.VarsFromBody#4 as range 5
  // closed e.CurrentVarName#4 as range 9
  //DEBUG: e.VarsFromBody#4: 5
  //DEBUG: e.CurrentVarName#4: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & RenameGenericMatch=3\1=1/14 Tile{ AsIs: (/11 AsIs: e.CurrentVarName#4/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/7 AsIs: e.VarsFromBody#4/5 AsIs: )/8 } e.CurrentVarName#4/9/15 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_RenameGenericMatch_A3L1A1]);
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_NewVarName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A3L1("RenameGenericMatch=3\\1", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A3L1);


static refalrts::FnResult func_gen_RenameGenericMatch_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RenameGenericMatch=2/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.VarsFromBody#1/9 )/12 e.VarsFromMatch#3/2 >/1
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
  // closed e.VarsFromBody#1 as range 9
  // closed e.VarsFromMatch#3 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.VarsFromBody#1: 9
  //DEBUG: e.VarsFromMatch#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameGenericMatch=3/4 AsIs: (/7 AsIs: e.StaticMatches#1/5 AsIs: )/8 HalfReuse: </11 } & MapAccum@14/13 (/14 Tile{ AsIs: e.VarsFromBody#1/9 } Tile{ AsIs: )/12 AsIs: e.VarsFromMatch#3/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MapAccum_Z14]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A3]);
  refalrts::reinit_open_call(context[11]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[14], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A2("RenameGenericMatch=2", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A2);


static refalrts::FnResult func_gen_RenameGenericMatch_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RenameGenericMatch=1/4 (/7 e.StaticMatches#1/5 )/8 (/11 e.VarsFromBody#1/9 )/12 e.VarsFromMatch#2/2 >/1
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
  // closed e.VarsFromBody#1 as range 9
  // closed e.VarsFromMatch#2 as range 2
  //DEBUG: e.StaticMatches#1: 5
  //DEBUG: e.VarsFromBody#1: 9
  //DEBUG: e.VarsFromMatch#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameGenericMatch=2/4 AsIs: (/7 AsIs: e.StaticMatches#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.VarsFromBody#1/9 AsIs: )/12 } </13 & Unique/14 Tile{ AsIs: e.VarsFromMatch#2/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Unique]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A1("RenameGenericMatch=1", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A1);


static refalrts::FnResult func_gen_RenameGenericMatch_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & RenameGenericMatch=1\1/4 (/7 e.Val#2/5 ':'/11 t.Var#2/9 )/8 >/1
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
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Val#2 as range 5
  //DEBUG: t.Var#2: 9
  //DEBUG: e.Val#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} ':'/11 t.Var#2/9 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Val#2/5 } Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_RenameGenericMatch_A1L1("RenameGenericMatch=1\\1", COOKIE1_, COOKIE2_, func_gen_RenameGenericMatch_A1L1);


static refalrts::FnResult func_RenameGenericMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RenameGenericMatch/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 e.VarsFromBody#1/2 >/1
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
  // closed e.StaticMatches#1 as range 9
  // closed e.VarsFromBody#1 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.VarsFromBody#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.SpecPattern#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameGenericMatch=1/4 AsIs: (/7 } Tile{ AsIs: e.StaticMatches#1/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.VarsFromBody#1/2 } Tile{ AsIs: )/12 } </13 & Map@10/14 e.StaticMatches#1/9/15 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z10]);
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameGenericMatch("RenameGenericMatch", COOKIE1_, COOKIE2_, func_RenameGenericMatch);


static refalrts::FnResult func_gen_PrepareSpecializedFuncBody_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & PrepareSpecializedFuncBody=2/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 e.StaticMatches#3/2 >/1
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
  // closed e.StaticMatches#3 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.StaticMatches#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@11/4 } Tile{ AsIs: e.SpecPattern#1/5 } Tile{ AsIs: (/7 } Tile{ AsIs: e.StaticMatches#3/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecializedFuncBody_A2("PrepareSpecializedFuncBody=2", COOKIE1_, COOKIE2_, func_gen_PrepareSpecializedFuncBody_A2);


static refalrts::FnResult func_gen_PrepareSpecializedFuncBody_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & PrepareSpecializedFuncBody=1/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.Body#1/9 )/12 (/15 e.StaticMatches#1/13 )/16 e.BodyVariables#2/2 >/1
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
  // closed e.Body#1 as range 9
  // closed e.StaticMatches#1 as range 13
  // closed e.BodyVariables#2 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.Body#1: 9
  //DEBUG: e.StaticMatches#1: 13
  //DEBUG: e.BodyVariables#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecializedFuncBody=2/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Body#1/9 AsIs: )/12 HalfReuse: </15 } & RenameGenericMatch/17 (/18 e.SpecPattern#1/5/19 )/21 (/22 Tile{ AsIs: e.StaticMatches#1/13 } Tile{ AsIs: )/16 AsIs: e.BodyVariables#2/2 AsIs: >/1 } >/23 Tile{ ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_RenameGenericMatch]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecializedFuncBody_A2]);
  refalrts::reinit_open_call(context[15]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[22], context[16] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecializedFuncBody_A1("PrepareSpecializedFuncBody=1", COOKIE1_, COOKIE2_, func_gen_PrepareSpecializedFuncBody_A1);


static refalrts::FnResult func_PrepareSpecializedFuncBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & PrepareSpecializedFuncBody/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.StaticMatches#1/9 )/12 e.Body#1/2 >/1
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
  // closed e.StaticMatches#1 as range 9
  // closed e.Body#1 as range 2
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.StaticMatches#1: 9
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecializedFuncBody=1/4 AsIs: (/7 AsIs: e.SpecPattern#1/5 AsIs: )/8 AsIs: (/11 } e.Body#1/2/13 )/15 (/16 Tile{ AsIs: e.StaticMatches#1/9 } )/17 </18 Tile{ HalfReuse: & ExtractVariables/12 AsIs: e.Body#1/2 AsIs: >/1 } >/19 Tile{ ]] }
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecializedFuncBody_A1]);
  refalrts::reinit_name(context[12], functions[efunc_ExtractVariables]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareSpecializedFuncBody("PrepareSpecializedFuncBody", COOKIE1_, COOKIE2_, func_PrepareSpecializedFuncBody);


static refalrts::FnResult func_gen_PrepareSpecSentence_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & PrepareSpecSentence=6/4 (/7 e.Pattern#5/5 )/8 (/11 e.Conditions#6/9 )/12 e.Result#7/2 >/1
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
  // closed e.Pattern#5 as range 5
  // closed e.Conditions#6 as range 9
  // closed e.Result#7 as range 2
  //DEBUG: e.Pattern#5: 5
  //DEBUG: e.Conditions#6: 9
  //DEBUG: e.Result#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#5/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#6/9 } Tile{ HalfReuse: (/12 AsIs: e.Result#7/2 HalfReuse: )/1 } Tile{ HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[4], context[11] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A6("PrepareSpecSentence=6", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A6);


static refalrts::FnResult func_gen_PrepareSpecSentence_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & PrepareSpecSentence=5/4 (/7 e.Pattern#5/5 )/8 (/11 e.StaticSubstitutions#3/9 )/12 (/15 e.Result#1/13 )/16 e.Conditions#6/2 >/1
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
  // closed e.Pattern#5 as range 5
  // closed e.StaticSubstitutions#3 as range 9
  // closed e.Result#1 as range 13
  // closed e.Conditions#6 as range 2
  //DEBUG: e.Pattern#5: 5
  //DEBUG: e.StaticSubstitutions#3: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.Conditions#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecSentence=6/4 AsIs: (/7 AsIs: e.Pattern#5/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#6/2 } Tile{ AsIs: )/12 } </17 & ApplySubst-Expr/18 (/19 Tile{ AsIs: e.StaticSubstitutions#3/9 } Tile{ HalfReuse: )/15 AsIs: e.Result#1/13 HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_ApplySubstm_Expr]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecSentence_A6]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A5("PrepareSpecSentence=5", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A5);


static refalrts::FnResult func_gen_PrepareSpecSentence_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & PrepareSpecSentence=4/4 (/7 e.StaticSubstitutions#3/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Conditions#1/13 )/16 e.Pattern#5/2 >/1
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
  // closed e.StaticSubstitutions#3 as range 5
  // closed e.Result#1 as range 9
  // closed e.Conditions#1 as range 13
  // closed e.Pattern#5 as range 2
  //DEBUG: e.StaticSubstitutions#3: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Conditions#1: 13
  //DEBUG: e.Pattern#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & PrepareSpecSentence=5/17 (/18 Tile{ AsIs: e.Pattern#5/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.StaticSubstitutions#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </15 } & PrepareSpecConditions/19 (/20 e.StaticSubstitutions#3/5/21 Tile{ AsIs: )/16 } Tile{ AsIs: e.Conditions#1/13 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_PrepareSpecSentence_A5]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_PrepareSpecConditions]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[18], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A4("PrepareSpecSentence=4", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A4);


static refalrts::FnResult func_gen_PrepareSpecSentence_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PrepareSpecSentence=3/4 (/7 e.StaticSubstitutions#3/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Conditions#1/13 )/16 (/19 e.CallStaticMatches#1/17 )/20 (/23 e.SpecPattern#1/21 )/24 e.PatternDynamicMatches#4/2 >/1
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
  // closed e.StaticSubstitutions#3 as range 5
  // closed e.Result#1 as range 9
  // closed e.Conditions#1 as range 13
  // closed e.CallStaticMatches#1 as range 17
  // closed e.SpecPattern#1 as range 21
  // closed e.PatternDynamicMatches#4 as range 2
  //DEBUG: e.StaticSubstitutions#3: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Conditions#1: 13
  //DEBUG: e.CallStaticMatches#1: 17
  //DEBUG: e.SpecPattern#1: 21
  //DEBUG: e.PatternDynamicMatches#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecSentence=4/4 AsIs: (/7 AsIs: e.StaticSubstitutions#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Conditions#1/13 AsIs: )/16 HalfReuse: </19 } & PrepareArgOrPattern/25 (/26 Tile{ AsIs: e.CallStaticMatches#1/17 } Tile{ AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.PatternDynamicMatches#4/2 } Tile{ AsIs: )/24 } Tile{ AsIs: e.SpecPattern#1/21 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[25], functions[efunc_PrepareArgOrPattern]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecSentence_A4]);
  refalrts::reinit_open_call(context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[26], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A3("PrepareSpecSentence=3", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A3);


static refalrts::FnResult func_gen_PrepareSpecSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrepareSpecSentence=2/4 (/7 e.Result#1/5 )/8 (/11 e.Conditions#1/9 )/12 (/15 e.CallStaticMatches#1/13 )/16 (/19 e.SpecPattern#1/17 )/20 (/23 e.PatternDynamicMatches#2/21 )/24 e.StaticSubstitutions#3/2 >/1
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
  // closed e.Result#1 as range 5
  // closed e.Conditions#1 as range 9
  // closed e.CallStaticMatches#1 as range 13
  // closed e.SpecPattern#1 as range 17
  // closed e.PatternDynamicMatches#2 as range 21
  // closed e.StaticSubstitutions#3 as range 2
  //DEBUG: e.Result#1: 5
  //DEBUG: e.Conditions#1: 9
  //DEBUG: e.CallStaticMatches#1: 13
  //DEBUG: e.SpecPattern#1: 17
  //DEBUG: e.PatternDynamicMatches#2: 21
  //DEBUG: e.StaticSubstitutions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & PrepareSpecSentence=3/25 (/26 Tile{ AsIs: e.StaticSubstitutions#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Conditions#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.CallStaticMatches#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.SpecPattern#1/17 AsIs: )/20 HalfReuse: </23 } & ApplySubst-Subst/27 (/28 e.StaticSubstitutions#3/2/29 Tile{ AsIs: )/24 } Tile{ AsIs: e.PatternDynamicMatches#2/21 } >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[25], functions[efunc_gen_PrepareSpecSentence_A3]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_ApplySubstm_Subst]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_call(context[23]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[28], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[26], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[4], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A2("PrepareSpecSentence=2", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A2);


static refalrts::FnResult func_gen_PrepareSpecSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & PrepareSpecSentence=1/4 (/7 e.Result#1/5 )/8 (/11 e.Conditions#1/9 )/12 (/15 e.CallStaticMatches#1/13 )/16 (/19 e.SpecPattern#1/17 )/20 # Clear/21 (/24 e.PatternStaticMatches#2/22 )/25 (/28 e.PatternDynamicMatches#2/26 )/29 >/1
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
  context[21] = refalrts::ident_left( identifiers[ident_Clear], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 5
  // closed e.Conditions#1 as range 9
  // closed e.CallStaticMatches#1 as range 13
  // closed e.SpecPattern#1 as range 17
  // closed e.PatternStaticMatches#2 as range 22
  // closed e.PatternDynamicMatches#2 as range 26
  //DEBUG: e.Result#1: 5
  //DEBUG: e.Conditions#1: 9
  //DEBUG: e.CallStaticMatches#1: 13
  //DEBUG: e.SpecPattern#1: 17
  //DEBUG: e.PatternStaticMatches#2: 22
  //DEBUG: e.PatternDynamicMatches#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecSentence=2/4 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Conditions#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.CallStaticMatches#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.SpecPattern#1/17 AsIs: )/20 HalfReuse: (/21 } Tile{ AsIs: e.PatternDynamicMatches#2/26 } )/30 </31 & MapGenericMatches/32 (/33 e.CallStaticMatches#1/13/34 Tile{ AsIs: )/29 } Tile{ AsIs: (/24 AsIs: e.PatternStaticMatches#2/22 AsIs: )/25 HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_MapGenericMatches]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecSentence_A2]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_close_call(context[28]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[33], context[29] );
  refalrts::link_brackets( context[21], context[30] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecSentence_A1("PrepareSpecSentence=1", COOKIE1_, COOKIE2_, func_gen_PrepareSpecSentence_A1);


static refalrts::FnResult func_PrepareSpecSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrepareSpecSentence/4 (/7 e.SpecPattern#1/5 )/8 (/11 e.CallStaticMatches#1/9 )/12 (/15 (/19 e.Pattern#1/17 )/20 e.Conditions#1/13 (/23 e.Result#1/21 )/24 )/16 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecPattern#1 as range 5
  // closed e.CallStaticMatches#1 as range 9
  // closed e.Pattern#1 as range 17
  // closed e.Conditions#1 as range 13
  // closed e.Result#1 as range 21
  //DEBUG: e.SpecPattern#1: 5
  //DEBUG: e.CallStaticMatches#1: 9
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Conditions#1: 13
  //DEBUG: e.Result#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareSpecSentence=1/4 AsIs: (/7 } Tile{ AsIs: e.Result#1/21 } )/25 Tile{ AsIs: (/23 } Tile{ AsIs: e.Conditions#1/13 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.CallStaticMatches#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.SpecPattern#1/5 } )/26 </27 & GenericMatch-Wrapper/28 Tile{ AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 } (/29 e.SpecPattern#1/5/30 Tile{ AsIs: )/24 HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_GenericMatchm_Wrapper]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSpecSentence_A1]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[29], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[7], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareSpecSentence("PrepareSpecSentence", COOKIE1_, COOKIE2_, func_PrepareSpecSentence);


static refalrts::FnResult func_gen_PrepareSpecConditions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & PrepareSpecConditions\1/4 (/7 e.StaticSubstitutions#1/5 )/8 (/11 # Condition/13 (/16 e.Name#2/14 )/17 (/20 e.ConditionResult#2/18 )/21 (/24 e.ConditionPattern#2/22 )/25 )/12 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_Condition], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[9], context[10] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StaticSubstitutions#1 as range 5
  // closed e.Name#2 as range 14
  // closed e.ConditionResult#2 as range 18
  // closed e.ConditionPattern#2 as range 22
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.Name#2: 14
  //DEBUG: e.ConditionResult#2: 18
  //DEBUG: e.ConditionPattern#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Condition/13 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: </0 Reuse: & ApplySubst-Expr/4 AsIs: (/7 AsIs: e.StaticSubstitutions#1/5 AsIs: )/8 } Tile{ AsIs: e.ConditionResult#2/18 } >/26 Tile{ AsIs: )/21 } (/27 </28 & ApplySubst-Expr/29 (/30 e.StaticSubstitutions#1/5/31 Tile{ HalfReuse: )/24 AsIs: e.ConditionPattern#2/22 HalfReuse: >/25 AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_ApplySubstm_Expr]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_ApplySubstm_Expr]);
  refalrts::reinit_close_bracket(context[24]);
  refalrts::reinit_close_call(context[25]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[27], context[12] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[30], context[24] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareSpecConditions_L1("PrepareSpecConditions\\1", COOKIE1_, COOKIE2_, func_gen_PrepareSpecConditions_L1);


static refalrts::FnResult func_PrepareSpecConditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PrepareSpecConditions/4 (/7 e.StaticSubstitutions#1/5 )/8 e.Conditions#1/2 >/1
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
  // closed e.Conditions#1 as range 2
  //DEBUG: e.StaticSubstitutions#1: 5
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@12/7 AsIs: e.StaticSubstitutions#1/5 HalfReuse: (/8 AsIs: e.Conditions#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z12]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareSpecConditions("PrepareSpecConditions", COOKIE1_, COOKIE2_, func_PrepareSpecConditions);


static refalrts::FnResult func_gen_OptTreem_Specm_CleanupColdFunctions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OptTree-Spec-CleanupColdFunctions\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Spec-CleanupColdFunctions\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Spec-CleanupColdFunctions\1/4 (/5 # ColdFunction/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_ColdFunction], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Spec-CleanupColdFunctions\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: e.Body#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_Function]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Spec-CleanupColdFunctions\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-CleanupColdFunctions\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Specm_CleanupColdFunctions_L1("OptTree-Spec-CleanupColdFunctions\\1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Specm_CleanupColdFunctions_L1);


static refalrts::FnResult func_OptTreem_Specm_CleanupColdFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-Spec-CleanupColdFunctions/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@13/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_CleanupColdFunctions("OptTree-Spec-CleanupColdFunctions", 0U, 0U, func_OptTreem_Specm_CleanupColdFunctions);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenericMatch-Wrapper:1$1=1/4 (/7 e.StaticMatches#3/5 )/8 e.DynamicMatches#3/2 >/1
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
  // closed e.StaticMatches#3 as range 5
  // closed e.DynamicMatches#3 as range 2
  //DEBUG: e.StaticMatches#3: 5
  //DEBUG: e.DynamicMatches#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/4 AsIs: (/7 AsIs: e.StaticMatches#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 } Tile{ AsIs: e.DynamicMatches#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_ident(context[4], identifiers[ident_Clear]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1S1A1("GenericMatch-Wrapper:1$1=1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1S1A1);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & GenericMatch-Wrapper:1$1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenericMatch-Wrapper:1$1=1\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 ':'/17 (/15 e.new#3/13 )/16 )/12 >/1
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
  context[17] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  do {
    // </0 & GenericMatch-Wrapper:1$1=1\1/4 (/7 e.StaticMatches#3/18 )/8 (/11 e.Val#3/20 ':'/17 (/15 e.Var#3/22 )/16 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.StaticMatches#3 as range 18
    // closed e.Val#3 as range 20
    // closed e.Var#3 as range 22
    //DEBUG: e.StaticMatches#3: 18
    //DEBUG: e.Val#3: 20
    //DEBUG: e.Var#3: 22
    //18: e.StaticMatches#3
    //20: e.Val#3
    //22: e.Var#3
    //27: e.Var#3

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1S1C1]);
    refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </24 & GenericMatch-Wrapper:1$1=1\1$1?1/28 s.Mode#4/29 e.Index#4/26 >/25
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
      if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
        continue;
      // closed e.Index#4 as range 26
      //DEBUG: e.StaticMatches#3: 18
      //DEBUG: e.Val#3: 20
      //DEBUG: e.Var#3: 22
      //DEBUG: s.Mode#4: 29
      //DEBUG: e.Index#4: 26
      //18: e.StaticMatches#3
      //20: e.Val#3
      //22: e.Var#3
      //26: e.Index#4
      //29: s.Mode#4
      //36: e.Var#3

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1S1C2]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_IsSpecStaticVar]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::copy_evar(vm, context[36], context[37], context[22], context[23]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[35], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </30 & GenericMatch-Wrapper:1$1=1\1$1?2/34 # True/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left( identifiers[ident_True], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: e.StaticMatches#3: 18
        //DEBUG: e.Val#3: 20
        //DEBUG: e.Var#3: 22
        //DEBUG: s.Mode#4: 29
        //DEBUG: e.Index#4: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & GenericMatch-Wrapper:1$1=1\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & GenericMatch-Wrapper:1$1=1\1$1?1/28 s.Mode#4/29 e.Index#4/26 >/25 </30 & GenericMatch-Wrapper:1$1=1\1$1?2/34 {REMOVED TILE} >/31 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.StaticMatches#3/18 } Tile{ AsIs: (/11 AsIs: e.Val#3/20 AsIs: ':'/17 AsIs: (/15 } Tile{ Reuse: # TkVariable/35 } Tile{ AsIs: e.Var#3/22 } Tile{ AsIs: )/16 AsIs: )/12 HalfReuse: )/24 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[35], identifiers[ident_TkVariable]);
        refalrts::reinit_close_bracket(context[24]);
        refalrts::link_brackets( context[0], context[24] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[24] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[24], context[25]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Wrapper:1$1=1\1/4 (/7 e.StaticMatches#3/5 )/8 (/11 e.Val#3/9 ':'/17 (/15 e.Var#3/13 )/16 )/12 >/1
  // closed e.StaticMatches#3 as range 5
  // closed e.Val#3 as range 9
  // closed e.Var#3 as range 13
  //DEBUG: e.StaticMatches#3: 5
  //DEBUG: e.Val#3: 9
  //DEBUG: e.Var#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch-Wrapper:1$1=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.StaticMatches#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Val#3/9 AsIs: ':'/17 AsIs: (/15 } Tile{ HalfReuse: # TkVariable/16 } Tile{ AsIs: e.Var#3/13 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::reinit_ident(context[16], identifiers[ident_TkVariable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Wrapper_B1S1A1L1("GenericMatch-Wrapper:1$1=1\\1", COOKIE1_, COOKIE2_, func_gen_GenericMatchm_Wrapper_B1S1A1L1);


static refalrts::FnResult func_gen_GenericMatchm_Wrapper_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Wrapper:1$1=1/4 HalfReuse: </5 } & MapAccum@15/8 (/9 )/10 Tile{ AsIs: e.VarsMatches#2/6 } >/11 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_MapAccum_Z15]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1]);
    refalrts::reinit_open_call(context[5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[10] );
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


static refalrts::FnResult func_gen_IsSpecStaticVar_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & IsSpecStaticVar:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsSpecStaticVar:1/4 'L'/7 'u'/8 s._#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( 'L', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'u', context[5], context[6] );
    if( ! context[8] )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s._#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSpecStaticVar:1/4 'L'/7 'u'/8 s._#2/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSpecStaticVar:1/4 e._#2/2 >/1
  // closed e._#2 as range 2
  //DEBUG: e._#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSpecStaticVar:1/4 e._#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsSpecStaticVar_B1("IsSpecStaticVar:1", COOKIE1_, COOKIE2_, func_gen_IsSpecStaticVar_B1);


static refalrts::FnResult func_IsSpecStaticVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsSpecStaticVar/4 (/7 s.Mode#1/9 s.FirstSymbol#1/10 e.Index#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: s.FirstSymbol#1: 10
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/9 {REMOVED TILE} e.Index#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsSpecStaticVar:1/4 HalfReuse: </7 } & Type/11 Tile{ AsIs: s.FirstSymbol#1/10 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_Type]);
  refalrts::update_name(context[4], functions[efunc_gen_IsSpecStaticVar_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSpecStaticVar("IsSpecStaticVar", COOKIE1_, COOKIE2_, func_IsSpecStaticVar);


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
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & MapGenericMatches=1\1/4 (/7 (/11 e.ArgStaticMatches-B#2/30 (/36 e.ArgVal#2/34 ':'/40 t.SpecVar#2/38 )/37 e.ArgStaticMatches-E#2/32 )/12 (/15 e.MappedMatches#2/13 )/16 )/8 (/19 (/23 # TkVariable/26 s.Mode#2/27 e.Index#2/21 )/24 ':'/25 t.SpecVar#2/28 )/20 >/1
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
  context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = refalrts::char_left( ':', context[17], context[18] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::ident_left( identifiers[ident_TkVariable], context[21], context[22] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MappedMatches#2 as range 13
  if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#2 as range 21
  context[29] = refalrts::tvar_left( context[28], context[17], context[18] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = 0;
  context[31] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[32] = context[9];
    context[33] = context[10];
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
    if( ! context[36] )
      continue;
    refalrts::bracket_pointers(context[36], context[37]);
    context[39] = refalrts::repeated_stvar_right( vm, context[38], context[28], context[34], context[35] );
    if( ! context[39] )
      continue;
    context[40] = refalrts::char_right( ':', context[34], context[35] );
    if( ! context[40] )
      continue;
    // closed e.ArgVal#2 as range 34
    // closed e.ArgStaticMatches-E#2 as range 32
    //DEBUG: e.MappedMatches#2: 13
    //DEBUG: s.Mode#2: 27
    //DEBUG: e.Index#2: 21
    //DEBUG: t.SpecVar#2: 28
    //DEBUG: e.ArgStaticMatches-B#2: 30
    //DEBUG: e.ArgVal#2: 34
    //DEBUG: e.ArgStaticMatches-E#2: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MapGenericMatches=1\1/4 {REMOVED TILE} )/8 (/19 {REMOVED TILE} t.SpecVar#2/28 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.ArgStaticMatches-B#2/30 AsIs: (/36 AsIs: e.ArgVal#2/34 AsIs: ':'/40 AsIs: t.SpecVar#2/38 AsIs: )/37 AsIs: e.ArgStaticMatches-E#2/32 AsIs: )/12 AsIs: (/15 AsIs: e.MappedMatches#2/13 HalfReuse: (/16 } e.ArgVal#2/34/41 Tile{ HalfReuse: ':'/23 HalfReuse: (/26 AsIs: s.Mode#2/27 AsIs: e.Index#2/21 AsIs: )/24 HalfReuse: )/25 } Tile{ AsIs: )/20 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[41], context[42], context[34], context[35]);
    refalrts::reinit_open_bracket(context[16]);
    refalrts::reinit_char(context[23], ':');
    refalrts::reinit_open_bracket(context[26]);
    refalrts::reinit_close_bracket(context[25]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::link_brackets( context[16], context[25] );
    refalrts::link_brackets( context[26], context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[30], context[31], context[9], context[10] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_MapGenericMatches_A1L1("MapGenericMatches=1\\1", COOKIE1_, COOKIE2_, func_gen_MapGenericMatches_A1L1);


static refalrts::FnResult func_MapGenericMatches(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & MapGenericMatches/4 (/7 e.ArgStaticMatches#1/5 )/8 (/11 e.PatternStaticMatches#1/9 )/12 >/1
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
  // closed e.PatternStaticMatches#1 as range 9
  //DEBUG: e.ArgStaticMatches#1: 5
  //DEBUG: e.PatternStaticMatches#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapGenericMatches=1/4 AsIs: (/7 AsIs: e.ArgStaticMatches#1/5 AsIs: )/8 HalfReuse: </11 } & Reduce@2/13 (/14 (/15 e.ArgStaticMatches#1/5/16 )/18 (/19 )/20 )/21 Tile{ AsIs: e.PatternStaticMatches#1/9 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Reduce_Z2]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_MapGenericMatches_A1]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[14], context[21] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapGenericMatches("MapGenericMatches", COOKIE1_, COOKIE2_, func_MapGenericMatches);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
      // </0 & Map@1/4 (/7 e.#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine/4 HalfReuse: 'N'/7 }"ew $SPEC function: "/13 </15 & DisplayName/16 Tile{ AsIs: e.#0/11 } >/17 >/18 </19 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[13], context[14], "ew $SPEC function: ", 19);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::update_name(context[4], functions[efunc_Logm_PutLine]);
      refalrts::reinit_char(context[7], 'N');
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[16] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prepare-Aux\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_Preparem_Aux_L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Prepare-Aux\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Preparem_Aux_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 e.new#1/2 t.new#2/9 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & MapAccum@1/4 e.KnownNames#1/11 t.Acc#1/9 (/7 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.KnownNames#1 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.KnownNames#1: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: e.KnownNames#1/11 AsIs: t.Acc#1/9 AsIs: (/7 } )/15 (/16 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 e.KnownNames#1/2 t.accum#0/9 (/7 e.items#0/5 )/8 >/1
  // closed e.KnownNames#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.accum#0: 9
  //DEBUG: e.KnownNames#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 } [*]/11 & Prepare-Aux=1\1/12 Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownNames#1/2 } Tile{ AsIs: )/8 } {*}/13 Tile{ AsIs: t.accum#0/9 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Preparem_Aux_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_MapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@2/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@2/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@2/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CreateGuardFunctions\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CreateGuardFunctions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_MapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@3/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@3/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@3/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & SpecUnit/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_SpecUnit]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z3("MapAccum@3", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z3);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
      // </0 & Map@2/4 (/7 # Function/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.3#0 as range 15
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # ColdFunction/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 AsIs: e.2#0/11 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[13], identifiers[ident_ColdFunction]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
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

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ColdAll\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ColdAll_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_MapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@4/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@4/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@4/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & SpecSentence/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_SpecSentence]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z4("MapAccum@4", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z4);


static refalrts::FnResult func_gen_MapAccum_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MapAccum@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@5/4 e.new#1/2 (/13 e.new#2/11 )/14 t.new#3/9 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_right( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 11
  do {
    // </0 & MapAccum@5/4 e.SpecInfo#1/15 (/13 e.NewFunctions#1/17 )/14 t.Acc#1/9 (/7 e.Tail#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.SpecInfo#1 as range 15
    // closed e.NewFunctions#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.SpecInfo#1: 15
    //DEBUG: e.NewFunctions#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 AsIs: e.SpecInfo#1/15 AsIs: (/13 AsIs: e.NewFunctions#1/17 AsIs: )/14 AsIs: t.Acc#1/9 AsIs: (/7 } )/21 (/22 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@5/4 e.SpecInfo#1/2 (/13 e.NewFunctions#1/11 )/14 t.accum#0/9 (/7 e.items#0/5 )/8 >/1
  // closed e.SpecInfo#1 as range 2
  // closed e.NewFunctions#1 as range 11
  // closed e.items#0 as range 5
  //DEBUG: t.accum#0: 9
  //DEBUG: e.SpecInfo#1: 2
  //DEBUG: e.NewFunctions#1: 11
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 } [*]/15 & SpecSentence=1\1/16 Tile{ AsIs: (/7 } Tile{ AsIs: e.SpecInfo#1/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.NewFunctions#1/11 AsIs: )/14 } {*}/17 Tile{ AsIs: t.accum#0/9 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_SpecSentence_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z5("MapAccum@5", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z5);


static refalrts::FnResult func_gen_MapAccum_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@6/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@6/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@6/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@6/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & SpecResult$2\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SpecResult_S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z6("MapAccum@6", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z6);


static refalrts::FnResult func_gen_MapAccum_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@7/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@7/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@7/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@7/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & ExtractCalls=2\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractCalls_A2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z7("MapAccum@7", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z7);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 e.1#0/11 ':'/15 t.#0/13 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      context[14] = refalrts::tvar_right( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      context[15] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.1#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.#0: 13
      //DEBUG: e.1#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.#0/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.1#0/11 } Tile{ HalfReuse: >/15 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractCalls=1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_ExtractCalls_A1L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ExtractCalls=1\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractCalls_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_MapAccum_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@8/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@8/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@8/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@8/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & ExtractCalls-Term/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z8("MapAccum@8", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z8);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
      // </0 & Map@4/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 e.6#0/22 )/25 )/8 e.Tail#1/9 >/1
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
      //TRASH: {REMOVED TILE} </0 & Map@4/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.6#0/22 } Tile{ HalfReuse: </25 HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
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

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Body\1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindClosuresInPatterns-Body\1\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindClosuresInPatternsm_Body_L1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
      // </0 & Map@5/4 (/7 (/15 e.1#0/13 )/16 e.2#0/11 (/19 e.3#0/17 )/20 )/8 e.Tail#1/9 >/1
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Pattern/4 } Tile{ AsIs: e.1#0/13 } Tile{ HalfReuse: </15 } Tile{ HalfReuse: & Map@4/16 AsIs: e.2#0/11 HalfReuse: >/19 } Tile{ HalfReuse: >/7 } Tile{ HalfReuse: </20 HalfReuse: & Map@5/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Pattern]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[16], functions[efunc_gen_Map_Z4]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
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

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Body\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@5/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z5]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindClosuresInPatterns-Body\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindClosuresInPatternsm_Body_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindClosuresInPatterns-Term/4 AsIs: t.Next#1/7 } >/9 </10 & Map@6/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z6]);
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

  // </0 & Map@6/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindClosuresInPatterns-Term/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_FindClosuresInPatternsm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_MapAccum_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@9/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@9/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@9/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@9/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & PrepareSignature-SortVars=1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareSignaturem_SortVars_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z9("MapAccum@9", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z9);


static refalrts::FnResult func_gen_MapAccum_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@10/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@10/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@10/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@10/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & RenameSignatureVars=3\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVars_A3L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z10("MapAccum@10", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z10);


static refalrts::FnResult func_gen_MapAccum_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@11/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@11/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@11/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@11/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & RenameSignatureVars-Term/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_RenameSignatureVarsm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z11("MapAccum@11", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z11);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@7/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@7/4 e.FromSubstitution#1/15 (/7 (/13 e.1#0/19 ':'/23 t.#0/21 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.FromSubstitution#1 as range 15
      // closed e.Tail#1 as range 17
      context[22] = refalrts::tvar_right( context[21], context[19], context[20] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_right( ':', context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.1#0 as range 19
      //DEBUG: e.FromSubstitution#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: t.#0: 21
      //DEBUG: e.1#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } </24 Tile{ HalfReuse: & ApplySubst-Expr/0 HalfReuse: (/4 AsIs: e.FromSubstitution#1/15 HalfReuse: )/7 } Tile{ AsIs: e.1#0/19 } >/25 Tile{ AsIs: ':'/23 AsIs: t.#0/21 } )/26 </27 & Map@7/28 e.FromSubstitution#1/15/29 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_Map_Z7]);
      refalrts::copy_evar(vm, context[29], context[30], context[15], context[16]);
      refalrts::reinit_name(context[0], functions[efunc_ApplySubstm_Expr]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[13], context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[4], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[23], context[22] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 e.FromSubstitution#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.FromSubstitution#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.FromSubstitution#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & ApplySubst-Subst\1*1/20 (/21 e.FromSubstitution#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: e.FromSubstitution#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ApplySubstm_Subst_L1D1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@7/4 e.FromSubstitution#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FromSubstitution#1 as range 9
    //DEBUG: e.FromSubstitution#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 e.FromSubstitution#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 e.FromSubstitution#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.FromSubstitution#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.FromSubstitution#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & ApplySubst-Subst\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.FromSubstitution#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ApplySubstm_Subst_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@8/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@8/4 e.Substitution#1/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.Substitution#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.Substitution#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & ApplySubst-Expr\1/16 (/17 e.Substitution#1/9/18 )/20 Tile{ AsIs: t.Next#1/13 } >/21 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: e.Substitution#1/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplySubstm_Expr_L1]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@8/4 e.Substitution#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Substitution#1 as range 9
    //DEBUG: e.Substitution#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@8/4 e.Substitution#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 e.Substitution#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Substitution#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.Substitution#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & ApplySubst-Expr\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.Substitution#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ApplySubstm_Expr_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Reduce@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Reduce@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Reduce@1/4 t.new#3/7 t.new#4/11 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      // closed e.new#5 as range 9
      do {
        // </0 & Reduce@1/4 s.new#6/7 t.new#7/11 e.new#8/13 >/1
        context[13] = context[9];
        context[14] = context[10];
        if( ! refalrts::svar_term( context[7], context[7] ) )
          continue;
        // closed e.new#8 as range 13
        do {
          // </0 & Reduce@1/4 # False/7 t.Next#1/11 e.Tail#1/15 >/1
          context[15] = context[13];
          context[16] = context[14];
          if( ! refalrts::ident_term( identifiers[ident_False], context[7] ) )
            continue;
          // closed e.Tail#1 as range 15
          //DEBUG: t.Next#1: 11
          //DEBUG: e.Tail#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} t.Next#1/11 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: # False/7 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Reduce@1/4 # True/7 t.new#9/11 e.new#10/15 >/1
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_True], context[7] ) )
          continue;
        // closed e.new#10 as range 15
        do {
          // </0 & Reduce@1/4 # True/7 (/11 (/23 # TkVariable/26 s.Mode#2/32 e.6#0/21 )/24 ':'/25 (/29 # TkVariable/31 s.Mode#2/33 e.8#0/27 )/30 )/12 e.Tail#1/17 >/1
          context[17] = context[15];
          context[18] = context[16];
          context[19] = 0;
          context[20] = 0;
          if( ! refalrts::brackets_term( context[19], context[20], context[11] ) )
            continue;
          context[21] = 0;
          context[22] = 0;
          context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
          if( ! context[23] )
            continue;
          refalrts::bracket_pointers(context[23], context[24]);
          context[25] = refalrts::char_left( ':', context[19], context[20] );
          if( ! context[25] )
            continue;
          context[26] = refalrts::ident_left( identifiers[ident_TkVariable], context[21], context[22] );
          if( ! context[26] )
            continue;
          context[27] = 0;
          context[28] = 0;
          context[29] = refalrts::brackets_left( context[27], context[28], context[19], context[20] );
          if( ! context[29] )
            continue;
          refalrts::bracket_pointers(context[29], context[30]);
          context[31] = refalrts::ident_left( identifiers[ident_TkVariable], context[27], context[28] );
          if( ! context[31] )
            continue;
          if( ! refalrts::empty_seq( context[19], context[20] ) )
            continue;
          // closed e.Tail#1 as range 17
          if( ! refalrts::svar_left( context[32], context[21], context[22] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( vm, context[33], context[32], context[27], context[28] ) )
            continue;
          // closed e.6#0 as range 21
          // closed e.8#0 as range 27
          //DEBUG: e.Tail#1: 17
          //DEBUG: s.Mode#2: 32
          //DEBUG: e.6#0: 21
          //DEBUG: e.8#0: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/11 (/23 # TkVariable/26 s.Mode#2/32 e.6#0/21 )/24 ':'/25 (/29 # TkVariable/31 s.Mode#2/33 e.8#0/27 )/30 )/12 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: # True/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[17], context[18] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Reduce@1/4 # True/7 t.Next#1/11 e.Tail#1/17 >/1
        context[17] = context[15];
        context[18] = context[16];
        // closed e.Tail#1 as range 17
        //DEBUG: t.Next#1: 11
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Next#1/11 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 Reuse: # False/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[7], identifiers[ident_False]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@1/4 t.Acc#1/7 t.Next#1/11 e.Tail#1/13 >/1
      context[13] = context[9];
      context[14] = context[10];
      // closed e.Tail#1 as range 13
      //DEBUG: t.Acc#1: 7
      //DEBUG: t.Next#1: 11
      //DEBUG: e.Tail#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Reduce@1/16 Tile{ AsIs: </0 Reuse: & IsTrivialSubstitutions\1*3/4 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_Reduce_Z1]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::update_name(context[4], functions[efunc_gen_IsTrivialSubstitutions_L1D3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@1/4 t.Acc#1/7 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.Acc#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 e.accum-and-items#0/2 >/1
  // closed e.accum-and-items#0 as range 2
  //DEBUG: e.accum-and-items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@0/0 Reuse: & IsTrivialSubstitutions\1/4 AsIs: e.accum-and-items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_IsTrivialSubstitutions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@9/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@9/4 (/7 # GhostBrackets/13 e.0#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_GhostBrackets], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.0#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.0#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Brackets/13 AsIs: e.0#0/11 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[13], identifiers[ident_Brackets]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
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

    // </0 & Map@9/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  do {
    // </0 & Map@9/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@9/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrepareArgOrPattern:1$1\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareArgOrPattern_B1S1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", COOKIE1_, COOKIE2_, func_gen_Map_Z9);


static refalrts::FnResult func_gen_MapAccum_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@12/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@12/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@12/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@12/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & PrepareArgOrPattern=2\1$1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareArgOrPattern_A2L1S1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z12("MapAccum@12", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z12);


static refalrts::FnResult func_gen_MapAccum_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MapAccum@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@13/4 e.new#1/2 (/13 e.new#2/11 )/14 t.new#3/9 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_right( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 11
  do {
    // </0 & MapAccum@13/4 e.StaticMatches#1/15 (/13 e.DynamicMatches#1/17 )/14 t.Acc#1/9 (/7 e.Tail#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.StaticMatches#1 as range 15
    // closed e.DynamicMatches#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.StaticMatches#1: 15
    //DEBUG: e.DynamicMatches#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@13/4 AsIs: e.StaticMatches#1/15 AsIs: (/13 AsIs: e.DynamicMatches#1/17 AsIs: )/14 AsIs: t.Acc#1/9 AsIs: (/7 } )/21 (/22 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@13/4 e.StaticMatches#1/2 (/13 e.DynamicMatches#1/11 )/14 t.accum#0/9 (/7 e.items#0/5 )/8 >/1
  // closed e.StaticMatches#1 as range 2
  // closed e.DynamicMatches#1 as range 11
  // closed e.items#0 as range 5
  //DEBUG: t.accum#0: 9
  //DEBUG: e.StaticMatches#1: 2
  //DEBUG: e.DynamicMatches#1: 11
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 } [*]/15 & PrepareArgOrPattern=2\1/16 Tile{ AsIs: (/7 } Tile{ AsIs: e.StaticMatches#1/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.DynamicMatches#1/11 AsIs: )/14 } {*}/17 Tile{ AsIs: t.accum#0/9 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_PrepareArgOrPattern_A2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z13("MapAccum@13", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z13);


static refalrts::FnResult func_gen_MapAccum_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@14/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@14/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@14/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@14/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & RenameGenericMatch=3\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A3L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z14("MapAccum@14", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z14);


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@10/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@10/4 (/7 e.1#0/11 ':'/15 t.#0/13 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      context[14] = refalrts::tvar_right( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      context[15] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.1#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.#0: 13
      //DEBUG: e.1#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.#0/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.1#0/11 } Tile{ HalfReuse: >/15 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Map@10/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@10/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameGenericMatch=1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@10/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z10]);
    refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A1L1D1]);
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
    // </0 & Map@10/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@10/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@10/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & RenameGenericMatch=1\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z10("Map@10", COOKIE1_, COOKIE2_, func_gen_Map_Z10);


static refalrts::FnResult func_gen_Map_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@11/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & Map@11/4 e.SpecPattern#1/13 (/11 e.StaticMatches#3/15 )/12 (/7 t.Next#1/19 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.SpecPattern#1 as range 13
    // closed e.StaticMatches#3 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.Tail#1 as range 17
    //DEBUG: e.SpecPattern#1: 13
    //DEBUG: e.StaticMatches#3: 15
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & PrepareSpecSentence/22 (/23 e.SpecPattern#1/13/24 )/26 (/27 e.StaticMatches#3/15/28 )/30 Tile{ AsIs: t.Next#1/19 } >/31 Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: e.SpecPattern#1/13 AsIs: (/11 AsIs: e.StaticMatches#3/15 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_PrepareSpecSentence]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[27], context[30] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@11/4 e.SpecPattern#1/13 (/11 e.StaticMatches#3/15 )/12 (/7 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.SpecPattern#1 as range 13
    // closed e.StaticMatches#3 as range 15
    //DEBUG: e.SpecPattern#1: 13
    //DEBUG: e.StaticMatches#3: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@11/4 e.SpecPattern#1/13 (/11 e.StaticMatches#3/15 )/12 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 e.SpecPattern#1/2 (/11 e.StaticMatches#3/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.SpecPattern#1 as range 2
  // closed e.StaticMatches#3 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.SpecPattern#1: 2
  //DEBUG: e.StaticMatches#3: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/13 & PrepareSpecSentence/14 Tile{ HalfReuse: (/1 } Tile{ AsIs: e.SpecPattern#1/2 } )/15 Tile{ AsIs: (/11 AsIs: e.StaticMatches#3/9 AsIs: )/12 HalfReuse: )/7 AsIs: e.items#0/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_PrepareSpecSentence]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[1], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z11("Map@11", COOKIE1_, COOKIE2_, func_gen_Map_Z11);


static refalrts::FnResult func_gen_Map_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & Map@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@12/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@12/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@12/4 e.StaticSubstitutions#1/15 (/7 (/13 # Condition/21 (/24 e.2#0/22 )/25 (/28 e.4#0/26 )/29 (/32 e.6#0/30 )/33 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_Condition], context[19], context[20] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[19], context[20] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[19], context[20] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.StaticSubstitutions#1 as range 15
      // closed e.2#0 as range 22
      // closed e.4#0 as range 26
      // closed e.6#0 as range 30
      // closed e.Tail#1 as range 17
      //DEBUG: e.StaticSubstitutions#1: 15
      //DEBUG: e.2#0: 22
      //DEBUG: e.4#0: 26
      //DEBUG: e.6#0: 30
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # Condition/21 AsIs: (/24 AsIs: e.2#0/22 AsIs: )/25 AsIs: (/28 } </34 Tile{ HalfReuse: & ApplySubst-Expr/0 HalfReuse: (/4 AsIs: e.StaticSubstitutions#1/15 HalfReuse: )/7 } Tile{ AsIs: e.4#0/26 } >/35 Tile{ AsIs: )/29 AsIs: (/32 } </36 & ApplySubst-Expr/37 (/38 e.StaticSubstitutions#1/15/39 Tile{ AsIs: )/33 } Tile{ AsIs: e.6#0/30 } >/41 )/42 )/43 </44 & Map@12/45 e.StaticSubstitutions#1/15/46 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_ApplySubstm_Expr]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::copy_evar(vm, context[39], context[40], context[15], context[16]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_gen_Map_Z12]);
      refalrts::copy_evar(vm, context[46], context[47], context[15], context[16]);
      refalrts::reinit_name(context[0], functions[efunc_ApplySubstm_Expr]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[44] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[13], context[43] );
      refalrts::link_brackets( context[32], context[42] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[38], context[33] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::link_brackets( context[4], context[7] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[13], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@12/4 e.StaticSubstitutions#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.StaticSubstitutions#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.StaticSubstitutions#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & PrepareSpecConditions\1*1/20 (/21 e.StaticSubstitutions#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@12/4 AsIs: e.StaticSubstitutions#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_PrepareSpecConditions_L1D1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@12/4 e.StaticSubstitutions#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.StaticSubstitutions#1 as range 9
    //DEBUG: e.StaticSubstitutions#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@12/4 e.StaticSubstitutions#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@12/4 e.StaticSubstitutions#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.StaticSubstitutions#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.StaticSubstitutions#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & PrepareSpecConditions\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.StaticSubstitutions#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_PrepareSpecConditions_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z12("Map@12", COOKIE1_, COOKIE2_, func_gen_Map_Z12);


static refalrts::FnResult func_gen_Map_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Map@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@13/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@13/4 (/7 # ColdFunction/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_ColdFunction], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.3#0 as range 15
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 AsIs: e.2#0/11 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@13/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[13], identifiers[ident_Function]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
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

    // </0 & Map@13/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@13/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  do {
    // </0 & Map@13/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@13/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@13/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & OptTree-Spec-CleanupColdFunctions\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Specm_CleanupColdFunctions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z13("Map@13", COOKIE1_, COOKIE2_, func_gen_Map_Z13);


static refalrts::FnResult func_gen_MapAccum_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@15/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@15/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@15/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@15/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & GenericMatch-Wrapper:1$1=1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z15("MapAccum@15", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z15);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Reduce@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Reduce@2/4 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: t.Acc#1: 7
      //DEBUG: t.Next#1: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </13 & Reduce@2/14 Tile{ AsIs: </0 Reuse: & MapGenericMatches=1\1/4 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/15 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z2]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::update_name(context[4], functions[efunc_gen_MapGenericMatches_A1L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 t.Acc#1/7 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.Acc#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 e.accum-and-items#0/2 >/1
  // closed e.accum-and-items#0 as range 2
  //DEBUG: e.accum-and-items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@0/0 Reuse: & MapGenericMatches=1\1/4 AsIs: e.accum-and-items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MapGenericMatches_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


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
  // </0 & DoMapAccum@1/4 e.new#1/2 t.new#2/13 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
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
  // closed e.new#3 as range 9
  // closed e.new#4 as range 5
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & DoMapAccum@1/4 e.KnownNames#1/15 t.Acc#1/13 (/11 e.Scanned#1/17 )/12 (/7 t.Next#1/21 e.Tail#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.KnownNames#1 as range 15
    // closed e.Scanned#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.KnownNames#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 } Tile{ AsIs: e.KnownNames#1/15 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/17 AsIs: )/12 AsIs: (/7 } </23 & Prepare-Aux=1\1/24 (/25 e.KnownNames#1/15/26 )/28 Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/21 } >/29 )/30 (/31 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Preparem_Aux_A1L1]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::copy_evar(vm, context[26], context[27], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[31], context[8] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[11], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 e.KnownNames#1/15 t.Acc#1/13 (/11 e.Scanned#1/17 )/12 (/7 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.KnownNames#1 as range 15
    // closed e.Scanned#1 as range 17
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.KnownNames#1: 15
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 e.KnownNames#1/15 {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 e.KnownNames#1/2 t.acc#0/13 (/11 e.scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.KnownNames#1 as range 2
  // closed e.scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 13
  //DEBUG: e.KnownNames#1: 2
  //DEBUG: e.scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } [*]/15 & Prepare-Aux=1\1/16 Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownNames#1/2 } Tile{ AsIs: )/8 } {*}/17 Tile{ AsIs: t.acc#0/13 AsIs: (/11 AsIs: e.scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Preparem_Aux_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[12] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
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
    // </0 & DoMapAccum@2/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@2/4 (/9 e.#0/21 )/10 e.Scanned#1/17 (/7 (/15 (/27 e.2#0/25 )/28 (/31 e.4#0/29 )/32 (/35 e.6#0/33 )/36 e.5#0/23 )/16 e.Tail#1/19 )/8 >/1
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
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[23], context[24] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[23], context[24] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.#0 as range 21
      // closed e.Scanned#1 as range 17
      // closed e.2#0 as range 25
      // closed e.4#0 as range 29
      // closed e.6#0 as range 33
      // closed e.5#0 as range 23
      // closed e.Tail#1 as range 19
      //DEBUG: e.#0: 21
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.2#0: 25
      //DEBUG: e.4#0: 29
      //DEBUG: e.6#0: 33
      //DEBUG: e.5#0: 23
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & DoMapAccum-Aux@2/37 Tile{ AsIs: e.Scanned#1/17 } Tile{ HalfReuse: (/4 AsIs: (/9 AsIs: e.#0/21 HalfReuse: (/10 } # Function/38 # GN-Local/39 (/40 e.2#0/25/41 # SUF/43 '@'/44 0/45 )/46 # Sentences/47 )/48 Tile{ HalfReuse: )/7 AsIs: (/15 AsIs: (/27 AsIs: e.2#0/25 AsIs: )/28 AsIs: (/31 AsIs: e.4#0/29 AsIs: )/32 AsIs: (/35 AsIs: e.6#0/33 HalfReuse: (/36 } (/49 e.4#0/29/50 )/52 (/53 (/54 # CallBrackets/55 (/56 # Symbol/57 # Name/58 e.2#0/25/59 # SUF/61 '@'/62 0/63 )/64 e.4#0/29/65 )/67 )/68 )/69 )/70 Tile{ AsIs: e.5#0/23 } )/71 )/72 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_Function]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_GNm_Local]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::copy_evar(vm, context[41], context[42], context[25], context[26]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_SUF]);
      refalrts::alloc_char(vm, context[44], '@');
      refalrts::alloc_number(vm, context[45], 0UL);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Sentences]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::copy_evar(vm, context[50], context[51], context[29], context[30]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[59], context[60], context[25], context[26]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_SUF]);
      refalrts::alloc_char(vm, context[62], '@');
      refalrts::alloc_number(vm, context[63], 0UL);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::copy_evar(vm, context[65], context[66], context[29], context[30]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_close_bracket(vm, context[70]);
      refalrts::alloc_close_bracket(vm, context[71]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[36]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[4], context[72] );
      refalrts::link_brackets( context[15], context[71] );
      refalrts::link_brackets( context[35], context[70] );
      refalrts::link_brackets( context[36], context[69] );
      refalrts::link_brackets( context[53], context[68] );
      refalrts::link_brackets( context[54], context[67] );
      refalrts::link_brackets( context[56], context[64] );
      refalrts::link_brackets( context[49], context[52] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[9], context[7] );
      refalrts::link_brackets( context[10], context[48] );
      refalrts::link_brackets( context[40], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[71], context[72] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[49], context[70] );
      res = refalrts::splice_evar( res, context[7], context[36] );
      res = refalrts::splice_evar( res, context[38], context[48] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@2/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & CreateGuardFunctions\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_CreateGuardFunctions_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & CreateGuardFunctions\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CreateGuardFunctions_L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@3/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@3/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@3/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & SpecUnit/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z3]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_SpecUnit]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@3/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@3/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@3/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & SpecUnit/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_SpecUnit]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@4/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@4/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@4/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & SpecSentence/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z4]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_SpecSentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@4/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@4/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@4/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & SpecSentence/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_SpecSentence]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & DoMapAccum@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@5/4 e.new#1/2 (/17 e.new#2/15 )/18 t.new#3/13 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
  // closed e.new#4 as range 9
  // closed e.new#5 as range 5
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 15
  do {
    // </0 & DoMapAccum@5/4 e.SpecInfo#1/19 (/17 e.NewFunctions#1/21 )/18 t.Acc#1/13 (/11 e.Scanned#1/23 )/12 (/7 t.Next#1/27 e.Tail#1/25 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[5];
    context[26] = context[6];
    // closed e.SpecInfo#1 as range 19
    // closed e.NewFunctions#1 as range 21
    // closed e.Scanned#1 as range 23
    context[28] = refalrts::tvar_left( context[27], context[25], context[26] );
    if( ! context[28] )
      continue;
    // closed e.Tail#1 as range 25
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.SpecInfo#1: 19
    //DEBUG: e.NewFunctions#1: 21
    //DEBUG: e.Scanned#1: 23
    //DEBUG: t.Next#1: 27
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@5/4 AsIs: e.SpecInfo#1/19 AsIs: (/17 AsIs: e.NewFunctions#1/21 AsIs: )/18 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/23 AsIs: )/12 AsIs: (/7 } </29 & SpecSentence=1\1/30 (/31 e.SpecInfo#1/19/32 )/34 (/35 e.NewFunctions#1/21/36 )/38 Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/27 } >/39 )/40 (/41 Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_SpecSentence_A1L1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[19], context[20]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::copy_evar(vm, context[36], context[37], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[41], context[8] );
    refalrts::link_brackets( context[7], context[40] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[35], context[38] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[39], context[41] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[29], context[38] );
    res = refalrts::splice_evar( res, context[11], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@5/4 e.SpecInfo#1/19 (/17 e.NewFunctions#1/21 )/18 t.Acc#1/13 (/11 e.Scanned#1/23 )/12 (/7 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[9];
    context[24] = context[10];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.SpecInfo#1 as range 19
    // closed e.NewFunctions#1 as range 21
    // closed e.Scanned#1 as range 23
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.SpecInfo#1: 19
    //DEBUG: e.NewFunctions#1: 21
    //DEBUG: e.Scanned#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@5/4 e.SpecInfo#1/19 (/17 e.NewFunctions#1/21 )/18 {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/23 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@5/4 e.SpecInfo#1/2 (/17 e.NewFunctions#1/15 )/18 t.acc#0/13 (/11 e.scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.SpecInfo#1 as range 2
  // closed e.NewFunctions#1 as range 15
  // closed e.scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 13
  //DEBUG: e.SpecInfo#1: 2
  //DEBUG: e.NewFunctions#1: 15
  //DEBUG: e.scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } [*]/19 & SpecSentence=1\1/20 Tile{ AsIs: (/17 } Tile{ AsIs: e.SpecInfo#1/2 } )/21 Tile{ AsIs: (/7 } Tile{ AsIs: e.NewFunctions#1/15 } Tile{ AsIs: )/8 } Tile{ HalfReuse: {*}/18 AsIs: t.acc#0/13 AsIs: (/11 AsIs: e.scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_SpecSentence_A1L1]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::reinit_unwrapped_closure(context[18], context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z5("DoMapAccum@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z5);


static refalrts::FnResult func_gen_DoMapAccum_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoMapAccum@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@6/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@6/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@6/4 (/9 e.0#0/21 (/25 e.1#0/23 )/26 )/10 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
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
      // closed e.Scanned#1 as range 17
      // closed e.Tail#1 as range 19
      //DEBUG: t.Next#1: 15
      //DEBUG: e.0#0: 21
      //DEBUG: e.1#0: 23
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </27 & DoMapAccum-Aux@6/28 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & SpecTerm/4 AsIs: (/9 AsIs: e.0#0/21 AsIs: (/25 AsIs: e.1#0/23 AsIs: )/26 AsIs: )/10 } Tile{ AsIs: t.Next#1/15 } >/29 )/30 (/31 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_DoMapAccumm_Aux_Z6]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_SpecTerm]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[31], context[8] );
      refalrts::link_brackets( context[7], context[30] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@6/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@6/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & SpecResult$2\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z6]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_SpecResult_S2L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@6/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@6/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@6/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & SpecResult$2\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_SpecResult_S2L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z6("DoMapAccum@6", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z6);


static refalrts::FnResult func_gen_DoMapAccum_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoMapAccum@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@7/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@7/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@7/4 (/9 e.1#0/21 (/27 e.2#0/25 )/28 )/10 e.Scanned#1/17 (/7 (/15 e.4#0/23 ':'/31 t.0#0/29 )/16 e.Tail#1/19 )/8 >/1
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
      context[27] = refalrts::brackets_right( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.1#0 as range 21
      // closed e.2#0 as range 25
      // closed e.Scanned#1 as range 17
      // closed e.Tail#1 as range 19
      context[30] = refalrts::tvar_right( context[29], context[23], context[24] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_right( ':', context[23], context[24] );
      if( ! context[31] )
        continue;
      // closed e.4#0 as range 23
      //DEBUG: e.1#0: 21
      //DEBUG: e.2#0: 25
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: t.0#0: 29
      //DEBUG: e.4#0: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </32 & DoMapAccum-Aux@7/33 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 HalfReuse: </15 } Tile{ HalfReuse: & ExtractCalls=2\1=1/31 AsIs: t.0#0/29 } Tile{ AsIs: </0 Reuse: & ExtractCalls-Expr/4 AsIs: (/9 AsIs: e.1#0/21 AsIs: (/27 AsIs: e.2#0/25 AsIs: )/28 AsIs: )/10 } Tile{ AsIs: e.4#0/23 } >/34 >/35 )/36 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_gen_DoMapAccumm_Aux_Z7]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[31], functions[efunc_gen_ExtractCalls_A2L1A1]);
      refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Expr]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[7], context[36] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[31], context[30] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@7/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@7/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & ExtractCalls=2\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z7]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_ExtractCalls_A2L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@7/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@7/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@7/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & ExtractCalls=2\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_ExtractCalls_A2L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@8/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@8/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@8/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & ExtractCalls-Term/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z8]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_ExtractCallsm_Term]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@8/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@8/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@8/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & ExtractCalls-Term/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_ExtractCallsm_Term]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z8("DoMapAccum@8", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z8);


static refalrts::FnResult func_gen_DoMapAccum_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@9/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@9/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@9/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & PrepareSignature-SortVars=1\1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z9]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_PrepareSignaturem_SortVars_A1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@9/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@9/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@9/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & PrepareSignature-SortVars=1\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_PrepareSignaturem_SortVars_A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z9("DoMapAccum@9", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z9);


static refalrts::FnResult func_gen_DoMapAccum_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoMapAccum@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@10/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@10/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@10/4 (/9 e.1#0/21 s.NextId#4/25 )/10 e.Scanned#1/17 (/7 (/15 e.0#0/23 )/16 e.Tail#1/19 )/8 >/1
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
      // closed e.Scanned#1 as range 17
      // closed e.0#0 as range 23
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_right( context[25], context[21], context[22] ) )
        continue;
      // closed e.1#0 as range 21
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.0#0: 23
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.NextId#4: 25
      //DEBUG: e.1#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </26 & DoMapAccum-Aux@10/27 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 HalfReuse: </15 } & RenameSignatureVars=3\1=1/28 Tile{ AsIs: </0 Reuse: & RenameSignatureVars-Expr/4 AsIs: (/9 AsIs: e.1#0/21 AsIs: s.NextId#4/25 AsIs: )/10 } Tile{ AsIs: e.0#0/23 } >/29 >/30 )/31 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_DoMapAccumm_Aux_Z10]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_RenameSignatureVars_A3L1A1]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::reinit_open_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_RenameSignatureVarsm_Expr]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[7], context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@10/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@10/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & RenameSignatureVars=3\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z10]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_RenameSignatureVars_A3L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@10/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@10/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@10/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & RenameSignatureVars=3\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_RenameSignatureVars_A3L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z10("DoMapAccum@10", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z10);


static refalrts::FnResult func_gen_DoMapAccum_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@11/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@11/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@11/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & RenameSignatureVars-Term/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z11]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_RenameSignatureVarsm_Term]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@11/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@11/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@11/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & RenameSignatureVars-Term/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_RenameSignatureVarsm_Term]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z11("DoMapAccum@11", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z11);


static refalrts::FnResult func_gen_DoMapAccum_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@12/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@12/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@12/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & PrepareArgOrPattern=2\1$1\1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z12]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_PrepareArgOrPattern_A2L1S1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@12/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@12/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@12/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & PrepareArgOrPattern=2\1$1\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_PrepareArgOrPattern_A2L1S1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z12("DoMapAccum@12", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z12);


static refalrts::FnResult func_gen_DoMapAccum_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & DoMapAccum@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@13/4 e.new#1/2 (/17 e.new#2/15 )/18 t.new#3/13 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
  // closed e.new#4 as range 9
  // closed e.new#5 as range 5
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_right( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 15
  do {
    // </0 & DoMapAccum@13/4 e.StaticMatches#1/19 (/17 e.DynamicMatches#1/21 )/18 t.Acc#1/13 (/11 e.Scanned#1/23 )/12 (/7 t.Next#1/27 e.Tail#1/25 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[5];
    context[26] = context[6];
    // closed e.StaticMatches#1 as range 19
    // closed e.DynamicMatches#1 as range 21
    // closed e.Scanned#1 as range 23
    context[28] = refalrts::tvar_left( context[27], context[25], context[26] );
    if( ! context[28] )
      continue;
    // closed e.Tail#1 as range 25
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.StaticMatches#1: 19
    //DEBUG: e.DynamicMatches#1: 21
    //DEBUG: e.Scanned#1: 23
    //DEBUG: t.Next#1: 27
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@13/4 AsIs: e.StaticMatches#1/19 AsIs: (/17 AsIs: e.DynamicMatches#1/21 AsIs: )/18 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/23 AsIs: )/12 AsIs: (/7 } </29 & PrepareArgOrPattern=2\1/30 (/31 e.StaticMatches#1/19/32 )/34 (/35 e.DynamicMatches#1/21/36 )/38 Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/27 } >/39 )/40 (/41 Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_PrepareArgOrPattern_A2L1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[19], context[20]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::copy_evar(vm, context[36], context[37], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[41], context[8] );
    refalrts::link_brackets( context[7], context[40] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[35], context[38] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[39], context[41] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[29], context[38] );
    res = refalrts::splice_evar( res, context[11], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@13/4 e.StaticMatches#1/19 (/17 e.DynamicMatches#1/21 )/18 t.Acc#1/13 (/11 e.Scanned#1/23 )/12 (/7 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[9];
    context[24] = context[10];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.StaticMatches#1 as range 19
    // closed e.DynamicMatches#1 as range 21
    // closed e.Scanned#1 as range 23
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.StaticMatches#1: 19
    //DEBUG: e.DynamicMatches#1: 21
    //DEBUG: e.Scanned#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@13/4 e.StaticMatches#1/19 (/17 e.DynamicMatches#1/21 )/18 {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/23 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@13/4 e.StaticMatches#1/2 (/17 e.DynamicMatches#1/15 )/18 t.acc#0/13 (/11 e.scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.StaticMatches#1 as range 2
  // closed e.DynamicMatches#1 as range 15
  // closed e.scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 13
  //DEBUG: e.StaticMatches#1: 2
  //DEBUG: e.DynamicMatches#1: 15
  //DEBUG: e.scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } [*]/19 & PrepareArgOrPattern=2\1/20 Tile{ AsIs: (/17 } Tile{ AsIs: e.StaticMatches#1/2 } )/21 Tile{ AsIs: (/7 } Tile{ AsIs: e.DynamicMatches#1/15 } Tile{ AsIs: )/8 } Tile{ HalfReuse: {*}/18 AsIs: t.acc#0/13 AsIs: (/11 AsIs: e.scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_PrepareArgOrPattern_A2L1]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::reinit_unwrapped_closure(context[18], context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z13("DoMapAccum@13", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z13);


static refalrts::FnResult func_gen_DoMapAccum_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & DoMapAccum@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@14/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@14/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@14/4 (/9 e.#0/21 )/10 e.Scanned#1/17 (/7 (/15 e.0#0/23 )/16 e.Tail#1/19 )/8 >/1
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
      // closed e.#0 as range 21
      // closed e.Scanned#1 as range 17
      // closed e.0#0 as range 23
      // closed e.Tail#1 as range 19
      //DEBUG: e.#0: 21
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.0#0: 23
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 & DoMapAccum-Aux@14/26 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 HalfReuse: </15 } & RenameGenericMatch=3\1=1/27 (/28 e.0#0/23/29 )/31 Tile{ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/9 AsIs: e.#0/21 AsIs: )/10 } Tile{ AsIs: e.0#0/23 } >/32 >/33 )/34 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_DoMapAccumm_Aux_Z14]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_RenameGenericMatch_A3L1A1]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::copy_evar(vm, context[29], context[30], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::reinit_open_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_NewVarName]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[7], context[34] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[28], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[27], context[31] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@14/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@14/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & RenameGenericMatch=3\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z14]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_RenameGenericMatch_A3L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@14/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@14/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@14/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & RenameGenericMatch=3\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_RenameGenericMatch_A3L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z14("DoMapAccum@14", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z14);


static refalrts::FnResult func_gen_DoMapAccum_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@15/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum@15/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@15/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & GenericMatch-Wrapper:1$1=1\1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z15]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@15/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@15/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@15/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & GenericMatch-Wrapper:1$1=1\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z15("DoMapAccum@15", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z15);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum-Aux@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@1/4 e.new#1/2 (/15 e.new#2/13 )/16 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
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
  // closed e.new#4 as range 5
  do {
    // </0 & DoMapAccum-Aux@1/4 e.KnownNames#1/17 (/15 e.Scanned#1/19 )/16 (/11 t.Acc#1/25 e.StepScanned#1/21 )/12 (/7 e.Tail#1/23 )/8 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[5];
    context[24] = context[6];
    // closed e.KnownNames#1 as range 17
    // closed e.Scanned#1 as range 19
    // closed e.Tail#1 as range 23
    context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned#1 as range 21
    //DEBUG: e.KnownNames#1: 17
    //DEBUG: e.Scanned#1: 19
    //DEBUG: e.Tail#1: 23
    //DEBUG: t.Acc#1: 25
    //DEBUG: e.StepScanned#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: e.KnownNames#1/17 } Tile{ AsIs: t.Acc#1/25 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/19 } Tile{ AsIs: e.StepScanned#1/21 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Tail#1/23 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@1/4 e.KnownNames#1/2 (/15 e.scanned#0/13 )/16 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.KnownNames#1 as range 2
  // closed e.scanned#0 as range 13
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.KnownNames#1: 2
  //DEBUG: e.scanned#0: 13
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } [*]/17 & Prepare-Aux=1\1/18 Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownNames#1/2 } Tile{ AsIs: )/8 } {*}/19 Tile{ AsIs: (/15 AsIs: e.scanned#0/13 AsIs: )/16 AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Preparem_Aux_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[12] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@2/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@2/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@2/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & CreateGuardFunctions\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CreateGuardFunctions_L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z2("DoMapAccum-Aux@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@3/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@3/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@3/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & SpecUnit/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_SpecUnit]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z3("DoMapAccum-Aux@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z3);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@4/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@4/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@4/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & SpecSentence/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_SpecSentence]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z4("DoMapAccum-Aux@4", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z4);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoMapAccum-Aux@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@5/4 e.new#1/2 (/19 e.new#2/17 )/20 (/15 e.new#3/13 )/16 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 17
  // closed e.new#3 as range 13
  // closed e.new#4 as range 9
  // closed e.new#5 as range 5
  do {
    // </0 & DoMapAccum-Aux@5/4 e.SpecInfo#1/21 (/19 e.NewFunctions#1/23 )/20 (/15 e.Scanned#1/25 )/16 (/11 t.Acc#1/31 e.StepScanned#1/27 )/12 (/7 e.Tail#1/29 )/8 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[5];
    context[30] = context[6];
    // closed e.SpecInfo#1 as range 21
    // closed e.NewFunctions#1 as range 23
    // closed e.Scanned#1 as range 25
    // closed e.Tail#1 as range 29
    context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
    if( ! context[32] )
      continue;
    // closed e.StepScanned#1 as range 27
    //DEBUG: e.SpecInfo#1: 21
    //DEBUG: e.NewFunctions#1: 23
    //DEBUG: e.Scanned#1: 25
    //DEBUG: e.Tail#1: 29
    //DEBUG: t.Acc#1: 31
    //DEBUG: e.StepScanned#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 AsIs: e.SpecInfo#1/21 AsIs: (/19 AsIs: e.NewFunctions#1/23 AsIs: )/20 } Tile{ AsIs: t.Acc#1/31 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: e.StepScanned#1/27 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Tail#1/29 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, context[20], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@5/4 e.SpecInfo#1/2 (/19 e.NewFunctions#1/17 )/20 (/15 e.scanned#0/13 )/16 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.SpecInfo#1 as range 2
  // closed e.NewFunctions#1 as range 17
  // closed e.scanned#0 as range 13
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.SpecInfo#1: 2
  //DEBUG: e.NewFunctions#1: 17
  //DEBUG: e.scanned#0: 13
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } [*]/21 & SpecSentence=1\1/22 Tile{ AsIs: (/19 } Tile{ AsIs: e.SpecInfo#1/2 } )/23 Tile{ AsIs: (/7 } Tile{ AsIs: e.NewFunctions#1/17 } Tile{ AsIs: )/8 } Tile{ HalfReuse: {*}/20 AsIs: (/15 AsIs: e.scanned#0/13 AsIs: )/16 AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_SpecSentence_A1L1]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::reinit_unwrapped_closure(context[20], context[21]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z5("DoMapAccum-Aux@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z5);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@6/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@6/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@6/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@6/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & SpecResult$2\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_SpecResult_S2L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z6("DoMapAccum-Aux@6", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z6);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@7/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@7/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@7/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@7/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & ExtractCalls=2\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ExtractCalls_A2L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z7("DoMapAccum-Aux@7", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z7);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@8/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@8/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@8/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@8/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & ExtractCalls-Term/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_ExtractCallsm_Term]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z8("DoMapAccum-Aux@8", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z8);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@9/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@9/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@9/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@9/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & PrepareSignature-SortVars=1\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_PrepareSignaturem_SortVars_A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z9("DoMapAccum-Aux@9", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z9);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@10/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@10/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@10/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@10/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & RenameSignatureVars=3\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_RenameSignatureVars_A3L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z10("DoMapAccum-Aux@10", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z10);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@11/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@11/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@11/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@11/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & RenameSignatureVars-Term/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_RenameSignatureVarsm_Term]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z11("DoMapAccum-Aux@11", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z11);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@12/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@12/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@12/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@12/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & PrepareArgOrPattern=2\1$1\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_PrepareArgOrPattern_A2L1S1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z12("DoMapAccum-Aux@12", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z12);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoMapAccum-Aux@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@13/4 e.new#1/2 (/19 e.new#2/17 )/20 (/15 e.new#3/13 )/16 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 17
  // closed e.new#3 as range 13
  // closed e.new#4 as range 9
  // closed e.new#5 as range 5
  do {
    // </0 & DoMapAccum-Aux@13/4 e.StaticMatches#1/21 (/19 e.DynamicMatches#1/23 )/20 (/15 e.Scanned#1/25 )/16 (/11 t.Acc#1/31 e.StepScanned#1/27 )/12 (/7 e.Tail#1/29 )/8 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[5];
    context[30] = context[6];
    // closed e.StaticMatches#1 as range 21
    // closed e.DynamicMatches#1 as range 23
    // closed e.Scanned#1 as range 25
    // closed e.Tail#1 as range 29
    context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
    if( ! context[32] )
      continue;
    // closed e.StepScanned#1 as range 27
    //DEBUG: e.StaticMatches#1: 21
    //DEBUG: e.DynamicMatches#1: 23
    //DEBUG: e.Scanned#1: 25
    //DEBUG: e.Tail#1: 29
    //DEBUG: t.Acc#1: 31
    //DEBUG: e.StepScanned#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@13/4 AsIs: e.StaticMatches#1/21 AsIs: (/19 AsIs: e.DynamicMatches#1/23 AsIs: )/20 } Tile{ AsIs: t.Acc#1/31 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: e.StepScanned#1/27 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Tail#1/29 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, context[20], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@13/4 e.StaticMatches#1/2 (/19 e.DynamicMatches#1/17 )/20 (/15 e.scanned#0/13 )/16 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.StaticMatches#1 as range 2
  // closed e.DynamicMatches#1 as range 17
  // closed e.scanned#0 as range 13
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.StaticMatches#1: 2
  //DEBUG: e.DynamicMatches#1: 17
  //DEBUG: e.scanned#0: 13
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } [*]/21 & PrepareArgOrPattern=2\1/22 Tile{ AsIs: (/19 } Tile{ AsIs: e.StaticMatches#1/2 } )/23 Tile{ AsIs: (/7 } Tile{ AsIs: e.DynamicMatches#1/17 } Tile{ AsIs: )/8 } Tile{ HalfReuse: {*}/20 AsIs: (/15 AsIs: e.scanned#0/13 AsIs: )/16 AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_PrepareArgOrPattern_A2L1]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::reinit_unwrapped_closure(context[20], context[21]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z13("DoMapAccum-Aux@13", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z13);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@14/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@14/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@14/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@14/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & RenameGenericMatch=3\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_RenameGenericMatch_A3L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z14("DoMapAccum-Aux@14", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z14);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@15/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@15/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@15/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@15/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & GenericMatch-Wrapper:1$1=1\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_GenericMatchm_Wrapper_B1S1A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z15("DoMapAccum-Aux@15", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z15);


//End of file
