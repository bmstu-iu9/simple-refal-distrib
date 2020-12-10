// This file automatically generated from 'Checker.ref'
// Don't edit! Edit 'Checker.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2240721905_3027986609
#define COOKIE1_ 2240721905U
#define COOKIE2_ 3027986609U

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
  efunc_gen_Reduce_Z1 = 18,
  efunc_gen_CheckPseudofunctions_A1 = 19,
  efunc_gen_Map_Z2 = 20,
  efunc_gen_FindErrors_A1 = 21,
  efunc_Upper = 22,
  efunc_Explode = 23,
  efunc_gen_Fetch_Z1 = 24,
  efunc_CleanupValidEntry = 25,
  efunc_CheckValidUsings = 26,
  efunc_gen_Map_Z1 = 27,
  efunc_CheckScreening = 28,
  efunc_gen_DoMapAccum_Z1 = 29,
  efunc_gen_FindErrors_A3 = 30,
  efunc_gen_CheckSpecs_A1 = 31,
  efunc_gen_FindErrors_A2 = 32,
  efunc_CheckSpecsm_Redefine = 33,
  efunc_gen_DoMapAccum_Z2 = 34,
  efunc_gen_CheckPseudofunctions_A1L1S1C1 = 35,
  efunc_gen_CheckPseudofunctions_A1L1S1C2 = 36,
  efunc_Pseudofunctions = 37,
  efunc_gen_CheckPseudofunctions_A1L1S2C1 = 38,
  efunc_gen_CheckPseudofunctions_A1L1S3C1 = 39,
  efunc_gen_CheckPseudofunctions_A1L1S4C1 = 40,
  efunc_CheckPseudofunctionsm_Entry = 41,
  efunc_CheckPseudofunctionsm_Body = 42,
  efunc_gen_CheckPseudofunctionsm_Body_S1C1 = 43,
  efunc_WholeEVar = 44,
  efunc_gen_CheckPseudofunctionsm_Body_S1C2 = 45,
  efunc_gen_CheckPseudofunctionsm_Body_S1C3 = 46,
  efunc_gen_CheckSpecs_A3 = 47,
  efunc_CheckSpecsm_Functions = 48,
  efunc_gen_CheckSpecs_A2 = 49,
  efunc_gen_Map_Z3 = 50,
  efunc_gen_Map_Z4 = 51,
  efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1 = 52,
  efunc_ErrorsForRepeatedVariables = 53,
  efunc_IsHardPattern = 54,
  efunc_gen_IsHardPattern_S4B1 = 55,
  efunc_gen_IsHardPattern_S5B1 = 56,
  efunc_gen_IsHardPattern_S6B1 = 57,
  efunc_gen_IsHardPattern_S7B1 = 58,
  efunc_gen_IsHardPattern_S8C1 = 59,
  efunc_IsHardTerm = 60,
  efunc_gen_IsHardPattern_S9C1 = 61,
  efunc_gen_Map_Z5 = 62,
  efunc_gen_Map_Z6 = 63,
  efunc_gen_CheckSpecsm_Functions_S1A1B1 = 64,
  efunc_ValidBodyForSpec = 65,
  efunc_gen_CheckSpecsm_Functions_S1A1 = 66,
  efunc_gen_CheckSpecsm_Functions_S2A1B1 = 67,
  efunc_gen_CheckSpecsm_Functions_S2A1 = 68,
  efunc_gen_ValidBodyForSpec_S1A1 = 69,
  efunc_gen_Reduce_Z2 = 70,
  efunc_CheckSpecm_RepeatingVarInStaticParams = 71,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1 = 72,
  efunc_ExtractVariablesm_Expr = 73,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1C1 = 74,
  efunc_IsSpecStaticVar = 75,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1 = 76,
  efunc_CheckSpecm_VarTypeMatching = 77,
  efunc_gen_Reduce_Z3 = 78,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1 = 79,
  efunc_RemovePosm_Expr = 80,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1 = 81,
  efunc_GenericMatch = 82,
  efunc_Type = 83,
  efunc_gen_IsSpecStaticVar_B1 = 84,
  efunc_gen_Map_Z7 = 85,
  efunc_gen_FindInvalidDriveInline_A3L1S1C1 = 86,
  efunc_gen_FindInvalidDriveInline_A3L1S1A2 = 87,
  efunc_gen_Map_Z8 = 88,
  efunc_gen_FindInvalidDriveInline_A3 = 89,
  efunc_gen_DoMapAccum_Z3 = 90,
  efunc_gen_FindInvalidDriveInline_A2 = 91,
  efunc_gen_Map_Z9 = 92,
  efunc_gen_DoMapAccum_Z4 = 93,
  efunc_gen_FindInvalidDriveInline_A1 = 94,
  efunc_gen_Map_Z10 = 95,
  efunc_gen_FindFinalInitEntry_L1S1C1 = 96,
  efunc_OneOf = 97,
  efunc_gen_Map_Z11 = 98,
  efunc_gen_Map_Z12 = 99,
  efunc_gen_CheckFunctionBodyRec_D2 = 100,
  efunc_gen_Map_Z13 = 101,
  efunc_gen_Map_Z14 = 102,
  efunc_gen_CheckSentence_A4 = 103,
  efunc_gen_Map_Z15 = 104,
  efunc_gen_CheckSentence_A3 = 105,
  efunc_CheckResult = 106,
  efunc_gen_FlatExpr_L1 = 107,
  efunc_gen_CheckSentence_A2 = 108,
  efunc_gen_DoCheckAssignments_S2A1Z1 = 109,
  efunc_gen_DoCheckAssignments_Z0 = 110,
  efunc_gen_CheckSentence_A1 = 111,
  efunc_CheckPattern = 112,
  efunc_gen_DoCheckAssignments_S2A1Z2 = 113,
  efunc_gen_DoCheckAssignments_S2A3 = 114,
  efunc_gen_DoCheckAssignments_S2A2 = 115,
  efunc_gen_DoCheckAssignments_S2A1 = 116,
  efunc_FixupKnownVars = 117,
  efunc_gen_DoMapAccum_Z5 = 118,
  efunc_gen_Map_Z16 = 119,
  efunc_gen_Map_Z17 = 120,
  efunc_Mu = 121,
  efunc_Up = 122,
  efunc_Evm_met = 123,
  efunc_Residue = 124,
  efunc_u_u_Metau_Residue = 125,
  efunc_MapAccum = 126,
  efunc_UnBracket = 127,
  efunc_DelAccumulator = 128,
  efunc_Inc = 129,
  efunc_Dec = 130,
  efunc_CheckProgram = 131,
  efunc_PrepareMessage = 132,
  efunc_FindErrors = 133,
  efunc_CheckPseudofunctions = 134,
  efunc_SeparateErrors = 135,
  efunc_CheckSpecs = 136,
  efunc_CheckSpecsm_Formats = 137,
  efunc_CheckRepeatedVariables = 138,
  efunc_FindVariables = 139,
  efunc_ValidBodyForSpecm_CheckSentensePattern = 140,
  efunc_SeparateDefines = 141,
  efunc_CheckDeclarations = 142,
  efunc_FindInvalidDriveInline = 143,
  efunc_FindInvalidEntry = 144,
  efunc_CleanupValidForwards = 145,
  efunc_FindInvalidForwards = 146,
  efunc_FindFinalInitEntry = 147,
  efunc_CheckRedefinitions = 148,
  efunc_CheckFunctionBody = 149,
  efunc_CheckFunctionBodyRec = 150,
  efunc_CheckSentence = 151,
  efunc_CheckBlocks = 152,
  efunc_DoCheckAssignments = 153,
  efunc_FlatExpr = 154,
  efunc_gen_Apply_Z4 = 155,
  efunc_ELm_AddErrorAt = 156,
  efunc_gen_Reduce_S1A1Z1 = 157,
  efunc_ELm_AddWarningAt = 158,
  efunc_gen_CheckProgram_L1D2 = 159,
  efunc_gen_Reduce_Z0 = 160,
  efunc_gen_CheckProgram_L1Z0 = 161,
  efunc_gen_CheckFunctionBody_D1 = 162,
  efunc_gen_Map_Z0 = 163,
  efunc_gen_CheckFunctionBody_Z0 = 164,
  efunc_gen_SeparateDefines_L1D12 = 165,
  efunc_gen_DoMapAccum_S1A1Z1 = 166,
  efunc_gen_DoMapAccum_Z0 = 167,
  efunc_gen_SeparateDefines_L1Z0 = 168,
  efunc_gen_CheckPseudofunctions_A1L1 = 169,
  efunc_gen_CheckPseudofunctions_A1L1Z0 = 170,
  efunc_gen_SeparateErrors_L1D3 = 171,
  efunc_gen_DoMapAccum_S1A1Z2 = 172,
  efunc_gen_SeparateErrors_L1Z0 = 173,
  efunc_gen_CheckSpecsm_Formats_L1S1B1 = 174,
  efunc_gen_CheckSpecsm_Formats_L1Z0 = 175,
  efunc_gen_FindVariables_L1Z0 = 176,
  efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1D1 = 177,
  efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1Z0 = 178,
  efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1D1 = 179,
  efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1Z0 = 180,
  efunc_gen_Reduce_S1A1Z2 = 181,
  efunc_gen_Reduce_S1A1Z3 = 182,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_D2 = 183,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_Z0 = 184,
  efunc_gen_Reduce_S1A1Z4 = 185,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1 = 186,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1Z0 = 187,
  efunc_gen_FindInvalidDriveInline_L1D2 = 188,
  efunc_gen_FindInvalidDriveInline_L1Z0 = 189,
  efunc_gen_FindInvalidDriveInline_A3L1S1A2L1 = 190,
  efunc_gen_FindInvalidDriveInline_A3L1S1A2L1Z0 = 191,
  efunc_gen_FindInvalidDriveInline_A3L1 = 192,
  efunc_gen_DoMapAccum_S1A1Z3 = 193,
  efunc_gen_FindInvalidDriveInline_A3L1Z0 = 194,
  efunc_gen_FindInvalidDriveInline_A2L1S1B1 = 195,
  efunc_gen_FindInvalidDriveInline_A2L1Z0 = 196,
  efunc_gen_FindInvalidDriveInline_A1L1D3 = 197,
  efunc_gen_DoMapAccum_S1A1Z4 = 198,
  efunc_gen_FindInvalidDriveInline_A1L1Z0 = 199,
  efunc_gen_FindInvalidEntry_L1Z0 = 200,
  efunc_gen_FindFinalInitEntry_L1 = 201,
  efunc_gen_FindFinalInitEntry_L1Z0 = 202,
  efunc_gen_CheckPattern_Z1 = 203,
  efunc_gen_CheckSentence_D1 = 204,
  efunc_gen_CheckSentence_Z0 = 205,
  efunc_gen_CheckBlocks_L1D1 = 206,
  efunc_gen_CheckBlocks_L1Z0 = 207,
  efunc_gen_FlatExpr_L1Z0 = 208,
  efunc_gen_CheckPattern_S3L1 = 209,
  efunc_gen_DoMapAccum_S1A1Z5 = 210,
  efunc_gen_CheckPattern_S3L1Z0 = 211,
  efunc_gen_CheckResult_L1D1 = 212,
  efunc_gen_CheckResult_L1Z0 = 213,
  efunc_gen_CheckValidUsings_S5L1Z0 = 214,
  efunc_gen_Reduce_S1A1Z0 = 215,
  efunc_gen_DoMapAccum_S1A1Z0 = 216,
  efunc_gen_Reduce_Z4 = 217,
  efunc_gen_Fetch_Z2 = 218,
  efunc_gen_Pipe_S2L1Z0 = 219,
  efunc_gen_FindInvalidEntry_Z0 = 220,
  efunc_gen_CleanupValidForwards_Z0 = 221,
  efunc_gen_FindInvalidForwards_Z0 = 222,
  efunc_gen_FindInvalidDriveInline_Z0 = 223,
  efunc_gen_CheckRedefinitions_Z0 = 224,
  efunc_gen_FindFinalInitEntry_Z0 = 225,
  efunc_gen_Fetch_Z0 = 226,
  efunc_gen_CheckPattern_Z0 = 227,
  efunc_gen_DoCheckAssignments_S2A2Z1 = 228,
  efunc_gen_DoCheckAssignments_S2A1Z0 = 229,
  efunc_gen_DoCheckAssignments_S2A2Z2 = 230,
  efunc_gen_DoCheckAssignments_S2A3Z1 = 231,
  efunc_gen_DoCheckAssignments_S2A2Z0 = 232,
  efunc_gen_Fetch_Z3 = 233,
  efunc_gen_DoCheckAssignments_D2 = 234,
  efunc_gen_DoCheckAssignments_S2A3Z0 = 235,
  efunc_gen_Fetch_Z4 = 236,
  efunc_gen_Fetch_Z5 = 237,
  efunc_gen_Fetch_Z6 = 238,
};


enum ident {
  ident_AlreadyDefined = 0,
  ident_ForwardForEntry = 1,
  ident_InitFinalEntry = 2,
  ident_ForwardNotDefined = 3,
  ident_NotDefined = 4,
  ident_AlreadyBounded = 5,
  ident_UnnamedNewVariable = 6,
  ident_UnnamedVariableInResult = 7,
  ident_InvalidMode = 8,
  ident_VariableNotFound = 9,
  ident_DanglingEntry = 10,
  ident_DanglingInline = 11,
  ident_DanglingDrive = 12,
  ident_NativeOptimizable = 13,
  ident_RedefineSpec = 14,
  ident_MustBeHardPattern = 15,
  ident_BadSpecForFunction = 16,
  ident_OrphanSpec = 17,
  ident_RepVarInSpecPattern = 18,
  ident_UnnamedVariableInSpecPattern = 19,
  ident_SpecStaticParamTypeMismatching = 20,
  ident_SpecStaticParamRepeatingVars = 21,
  ident_Screening = 22,
  ident_TaggedPseudofunction = 23,
  ident_EntryPseudofunction = 24,
  ident_BadPseudofunctionBody = 25,
  ident_Drive = 26,
  ident_Inline = 27,
  ident_Intrinsic = 28,
  ident_Error = 29,
  ident_Spec = 30,
  ident_Entry = 31,
  ident_GNm_Entry = 32,
  ident_Warning = 33,
  ident_pseudofunctions = 34,
  ident_Function = 35,
  ident_GNm_Local = 36,
  ident_Sentences = 37,
  ident_True = 38,
  ident_TkVariable = 39,
  ident_False = 40,
  ident_Brackets = 41,
  ident_ADTm_Brackets = 42,
  ident_Symbol = 43,
  ident_NativeBody = 44,
  ident_Clear = 45,
  ident_Contracted = 46,
  ident_Failure = 47,
  ident_Undefined = 48,
  ident_Define = 49,
  ident_Declare = 50,
  ident_TkNewVariable = 51,
  ident_Name = 52,
  ident_UnnamedADT = 53,
  ident_CallBrackets = 54,
  ident_Closure = 55,
  ident_Mu = 56,
  ident_Up = 57,
  ident_Evm_met = 58,
  ident_Residue = 59,
  ident_u_u_Metau_Residue = 60,
  ident_Apply = 61,
  ident_Map = 62,
  ident_Reduce = 63,
  ident_Fetch = 64,
  ident_MapAccum = 65,
  ident_DoMapAccum = 66,
  ident_UnBracket = 67,
  ident_DelAccumulator = 68,
  ident_Inc = 69,
  ident_Dec = 70,
  ident_Pipe = 71,
  ident_CheckProgram = 72,
  ident_PrepareMessage = 73,
  ident_FindErrors = 74,
  ident_CheckPseudofunctions = 75,
  ident_SeparateErrors = 76,
  ident_Pseudofunctions = 77,
  ident_CheckPseudofunctionsm_Entry = 78,
  ident_CheckPseudofunctionsm_Body = 79,
  ident_WholeEVar = 80,
  ident_CheckSpecs = 81,
  ident_CheckSpecsm_Redefine = 82,
  ident_CheckSpecsm_Formats = 83,
  ident_IsHardPattern = 84,
  ident_IsHardTerm = 85,
  ident_CheckRepeatedVariables = 86,
  ident_ErrorsForRepeatedVariables = 87,
  ident_FindVariables = 88,
  ident_CheckSpecsm_Functions = 89,
  ident_ValidBodyForSpec = 90,
  ident_ValidBodyForSpecm_CheckSentensePattern = 91,
  ident_CheckSpecm_VarTypeMatching = 92,
  ident_CheckSpecm_RepeatingVarInStaticParams = 93,
  ident_IsSpecStaticVar = 94,
  ident_SeparateDefines = 95,
  ident_CheckDeclarations = 96,
  ident_FindInvalidDriveInline = 97,
  ident_CleanupValidEntry = 98,
  ident_FindInvalidEntry = 99,
  ident_CleanupValidForwards = 100,
  ident_FindInvalidForwards = 101,
  ident_FindFinalInitEntry = 102,
  ident_CheckRedefinitions = 103,
  ident_CheckFunctionBody = 104,
  ident_CheckFunctionBodyRec = 105,
  ident_CheckSentence = 106,
  ident_CheckBlocks = 107,
  ident_DoCheckAssignments = 108,
  ident_FlatExpr = 109,
  ident_CheckPattern = 110,
  ident_FixupKnownVars = 111,
  ident_CheckResult = 112,
  ident_CheckValidUsings = 113,
  ident_Swap = 114,
  ident_Enum = 115,
  ident_Meta = 116,
  ident_Declaration = 117,
  ident_Ident = 118,
  ident_NativeBlock = 119,
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


static refalrts::FnResult func_CheckProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CheckProgram/4 (/7 e.WarningIds#1/5 )/8 t.ErrorList#1/9 e.AST#1/2 >/1
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
  // closed e.WarningIds#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: e.WarningIds#1: 5
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Reduce@1/12 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: </0 Reuse: & FindErrors=1/4 AsIs: (/7 AsIs: e.WarningIds#1/5 AsIs: )/8 } </13 & CheckPseudofunctions=1/14 </15 & Map@2/16 Tile{ AsIs: e.AST#1/2 } >/17 >/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Reduce_Z1]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_CheckPseudofunctions_A1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckProgram("CheckProgram", 0U, 0U, func_CheckProgram);


static refalrts::FnResult func_PrepareMessage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrepareMessage/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareMessage/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & PrepareMessage/4 # AlreadyDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_AlreadyDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is already defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Functi", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "is already defined", 18);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # ForwardForEntry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ForwardForEntry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$FORWA"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'D'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"for $ENTRY "/10 e.Name#1/6/12 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$FORWA", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "for $ENTRY ", 11);
    refalrts::copy_evar(vm, context[12], context[13], context[6], context[7]);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # InitFinalEntry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_InitFinalEntry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"should not be declared $ENTRY"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Functi", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "should not be declared $ENTRY", 29);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # ForwardNotDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ForwardNotDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Function for $FORWA"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'D'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is not defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Function for $FORWA", 19);
    refalrts::alloc_chars(vm, context[10], context[11], "is not defined", 14);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # NotDefined/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NotDefined], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"is not defined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Functi", 6);
    refalrts::alloc_chars(vm, context[10], context[11], "is not defined", 14);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 s.new#3/5 s.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & PrepareMessage/4 # AlreadyBounded/5 s.Mode#1/8 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_AlreadyBounded], context[5] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.Mode#1: 8
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iab"/11 Tile{ HalfReuse: 'l'/1 }"e hide operator^ must be applied to first occurence of variable "/13 Tile{ AsIs: s.Mode#1/8 } '.'/15 Tile{ AsIs: e.Index#1/9 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[11], context[12], "iab", 3);
      refalrts::alloc_chars(vm, context[13], context[14], "e hide operator^ must be applied to first occurence of variable ", 64);
      refalrts::alloc_char(vm, context[15], '.');
      refalrts::reinit_char(context[0], 'V');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[5], 'r');
      refalrts::reinit_char(context[1], 'l');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareMessage/4 # UnnamedNewVariable/5 s.Mode#1/8 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_UnnamedNewVariable], context[5] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.Mode#1: 8
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'U'/0 HalfReuse: 'n'/4 HalfReuse: 'n'/5 }"amed new variable is forbidden: "/11 Tile{ AsIs: s.Mode#1/8 } '.'/13 Tile{ AsIs: e.Index#1/9 } Tile{ HalfReuse: '^'/1 ]] }
      refalrts::alloc_chars(vm, context[11], context[12], "amed new variable is forbidden: ", 32);
      refalrts::alloc_char(vm, context[13], '.');
      refalrts::reinit_char(context[0], 'U');
      refalrts::reinit_char(context[4], 'n');
      refalrts::reinit_char(context[5], 'n');
      refalrts::reinit_char(context[1], '^');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareMessage/4 # UnnamedVariableInResult/5 s.Mode#1/8 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_UnnamedVariableInResult], context[5] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.Mode#1: 8
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'U'/0 HalfReuse: 'n'/4 HalfReuse: 'n'/5 }"amed variable "/11 Tile{ AsIs: s.Mode#1/8 } '.'/13 Tile{ AsIs: e.Index#1/9 }" can\'t appear in result expressio"/14 Tile{ HalfReuse: 'n'/1 ]] }
      refalrts::alloc_chars(vm, context[11], context[12], "amed variable ", 14);
      refalrts::alloc_char(vm, context[13], '.');
      refalrts::alloc_chars(vm, context[14], context[15], " can\'t appear in result expressio", 33);
      refalrts::reinit_char(context[0], 'U');
      refalrts::reinit_char(context[4], 'n');
      refalrts::reinit_char(context[5], 'n');
      refalrts::reinit_char(context[1], 'n');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareMessage/4 # InvalidMode/5 s.OldMode#1/8 s.NewMode#1/11 e.Index#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_InvalidMode], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.Index#1 as range 9
      //DEBUG: s.OldMode#1: 8
      //DEBUG: s.NewMode#1: 11
      //DEBUG: e.Index#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iables "/12 Tile{ AsIs: s.OldMode#1/8 } '.'/14 Tile{ AsIs: e.Index#1/9 }" and "/15 Tile{ AsIs: s.NewMode#1/11 } '.'/17 e.Index#1/9/18" have different mode"/20 Tile{ HalfReuse: 's'/1 ]] }
      refalrts::alloc_chars(vm, context[12], context[13], "iables ", 7);
      refalrts::alloc_char(vm, context[14], '.');
      refalrts::alloc_chars(vm, context[15], context[16], " and ", 5);
      refalrts::alloc_char(vm, context[17], '.');
      refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
      refalrts::alloc_chars(vm, context[20], context[21], " have different mode", 20);
      refalrts::reinit_char(context[0], 'V');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[5], 'r');
      refalrts::reinit_char(context[1], 's');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 # VariableNotFound/5 s.Mode#1/8 e.Index#1/9 >/1
    context[9] = context[6];
    context[10] = context[7];
    if( ! refalrts::ident_term( identifiers[ident_VariableNotFound], context[5] ) )
      continue;
    // closed e.Index#1 as range 9
    //DEBUG: s.Mode#1: 8
    //DEBUG: e.Index#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'V'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 }"iable "/11 Tile{ AsIs: s.Mode#1/8 } '.'/13 Tile{ AsIs: e.Index#1/9 }" not foun"/14 Tile{ HalfReuse: 'd'/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "iable ", 6);
    refalrts::alloc_char(vm, context[13], '.');
    refalrts::alloc_chars(vm, context[14], context[15], " not foun", 9);
    refalrts::reinit_char(context[0], 'V');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'r');
    refalrts::reinit_char(context[1], 'd');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingEntry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingEntry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$ENT"/8 Tile{ HalfReuse: 'R'/0 HalfReuse: 'Y'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" declaration for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$ENT", 4);
    refalrts::alloc_chars(vm, context[10], context[11], " declaration for missed function", 32);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'Y');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingInline/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingInline], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$INLI"/8 Tile{ HalfReuse: 'N'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" inline label for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$INLI", 5);
    refalrts::alloc_chars(vm, context[10], context[11], " inline label for missed function", 33);
    refalrts::reinit_char(context[0], 'N');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # DanglingDrive/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_DanglingDrive], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"$DRI"/8 Tile{ HalfReuse: 'V'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ';'/1 }" drive label for missed function"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "$DRI", 4);
    refalrts::alloc_chars(vm, context[10], context[11], " drive label for missed function", 32);
    refalrts::reinit_char(context[0], 'V');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ';');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # NativeOptimizable/5 s.Label#1/8 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NativeOptimizable], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: s.Label#1: 8
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'F'/0 HalfReuse: 'u'/4 HalfReuse: 'n'/5 }"ction "/9 Tile{ AsIs: e.Name#1/6 }" can\'t be $"/11 </13 & Upper/14 </15 & Explode/16 Tile{ AsIs: s.Label#1/8 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[9], context[10], "ction ", 6);
    refalrts::alloc_chars(vm, context[11], context[12], " can\'t be $", 11);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Upper]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Explode]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::reinit_char(context[0], 'F');
    refalrts::reinit_char(context[4], 'u');
    refalrts::reinit_char(context[5], 'n');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # RedefineSpec/5 e.FnName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_RedefineSpec], context[5] ) )
      continue;
    // closed e.FnName#1 as range 6
    //DEBUG: e.FnName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Specialization of functi"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.FnName#1/6 HalfReuse: 'i'/1 }"s redefined"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Specialization of functi", 24);
    refalrts::alloc_chars(vm, context[10], context[11], "s redefined", 11);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # MustBeHardPattern/5 e.FnName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_MustBeHardPattern], context[5] ) )
      continue;
    // closed e.FnName#1 as range 6
    //DEBUG: e.FnName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Pattern of function specialization f"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'r'/4 HalfReuse: ' '/5 AsIs: e.FnName#1/6 HalfReuse: ' '/1 }"must be hard"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Pattern of function specialization f", 36);
    refalrts::alloc_chars(vm, context[10], context[11], "must be hard", 12);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'r');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # BadSpecForFunction/5 e.FnName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_BadSpecForFunction], context[5] ) )
      continue;
    // closed e.FnName#1 as range 6
    //DEBUG: e.FnName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 }" f"/8 Tile{ HalfReuse: 'u'/1 }"nction specialization for "/10 Tile{ AsIs: e.FnName#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], " f", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "nction specialization for ", 26);
    refalrts::reinit_char(context[0], 'B');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'd');
    refalrts::reinit_char(context[1], 'u');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # OrphanSpec/5 e.FnName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_OrphanSpec], context[5] ) )
      continue;
    // closed e.FnName#1 as range 6
    //DEBUG: e.FnName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'O'/0 HalfReuse: 'r'/4 HalfReuse: 'p'/5 }"ha"/8 Tile{ HalfReuse: 'n'/1 }" function specialization for "/10 Tile{ AsIs: e.FnName#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ha", 2);
    refalrts::alloc_chars(vm, context[10], context[11], " function specialization for ", 29);
    refalrts::reinit_char(context[0], 'O');
    refalrts::reinit_char(context[4], 'r');
    refalrts::reinit_char(context[5], 'p');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & PrepareMessage/4 s.new#6/5 s.new#7/8 e.new#8/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      if( ! refalrts::svar_term( context[8], context[8] ) )
        continue;
      // closed e.new#8 as range 10
      do {
        // </0 & PrepareMessage/4 # RepVarInSpecPattern/5 s.Mode#1/8 e.Index#1/12 >/1
        context[12] = context[10];
        context[13] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_RepVarInSpecPattern], context[5] ) )
          continue;
        // closed e.Index#1 as range 12
        //DEBUG: s.Mode#1: 8
        //DEBUG: e.Index#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: 'R'/0 HalfReuse: 'e'/4 HalfReuse: 'p'/5 }"eated variable "/14 Tile{ AsIs: s.Mode#1/8 } '.'/16 Tile{ AsIs: e.Index#1/12 }" in specialization patter"/17 Tile{ HalfReuse: 'n'/1 ]] }
        refalrts::alloc_chars(vm, context[14], context[15], "eated variable ", 15);
        refalrts::alloc_char(vm, context[16], '.');
        refalrts::alloc_chars(vm, context[17], context[18], " in specialization patter", 25);
        refalrts::reinit_char(context[0], 'R');
        refalrts::reinit_char(context[4], 'e');
        refalrts::reinit_char(context[5], 'p');
        refalrts::reinit_char(context[1], 'n');
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PrepareMessage/4 # UnnamedVariableInSpecPattern/5 s.Mode#1/8 e.Index#1/12 >/1
      context[12] = context[10];
      context[13] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_UnnamedVariableInSpecPattern], context[5] ) )
        continue;
      // closed e.Index#1 as range 12
      //DEBUG: s.Mode#1: 8
      //DEBUG: e.Index#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'U'/0 HalfReuse: 'n'/4 HalfReuse: 'n'/5 }"amed variable "/14 Tile{ AsIs: s.Mode#1/8 } '.'/16 Tile{ AsIs: e.Index#1/12 }" can\'t appear in $SPEC patter"/17 Tile{ HalfReuse: 'n'/1 ]] }
      refalrts::alloc_chars(vm, context[14], context[15], "amed variable ", 14);
      refalrts::alloc_char(vm, context[16], '.');
      refalrts::alloc_chars(vm, context[17], context[18], " can\'t appear in $SPEC patter", 29);
      refalrts::reinit_char(context[0], 'U');
      refalrts::reinit_char(context[4], 'n');
      refalrts::reinit_char(context[5], 'n');
      refalrts::reinit_char(context[1], 'n');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareMessage/4 s.new#6/5 (/8 e.new#7/12 )/9 e.new#8/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#7 as range 12
      // closed e.new#8 as range 10
      do {
        // </0 & PrepareMessage/4 s.new#9/5 (/8 s.new#10/18 e.new#11/14 )/9 e.new#12/16 >/1
        context[14] = context[12];
        context[15] = context[13];
        context[16] = context[10];
        context[17] = context[11];
        // closed e.new#12 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#11 as range 14
        do {
          // </0 & PrepareMessage/4 # SpecStaticParamTypeMismatching/5 (/8 s.Mode#1/18 e.Index#1/19 )/9 e.FnName#1/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_SpecStaticParamTypeMismatching], context[5] ) )
            continue;
          // closed e.Index#1 as range 19
          // closed e.FnName#1 as range 21
          //DEBUG: s.Mode#1: 18
          //DEBUG: e.Index#1: 19
          //DEBUG: e.FnName#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: 'T'/0 HalfReuse: 'y'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/8 } ' '/23 Tile{ HalfReuse: 'm'/9 } 'i'/24 Tile{ HalfReuse: 's'/1 }"matching of static parameter "/25 Tile{ AsIs: s.Mode#1/18 } '.'/27 Tile{ AsIs: e.Index#1/19 }" in specialization of function "/28 Tile{ AsIs: e.FnName#1/21 } Tile{ ]] }
          refalrts::alloc_char(vm, context[23], ' ');
          refalrts::alloc_char(vm, context[24], 'i');
          refalrts::alloc_chars(vm, context[25], context[26], "matching of static parameter ", 29);
          refalrts::alloc_char(vm, context[27], '.');
          refalrts::alloc_chars(vm, context[28], context[29], " in specialization of function ", 31);
          refalrts::reinit_char(context[0], 'T');
          refalrts::reinit_char(context[4], 'y');
          refalrts::reinit_char(context[5], 'p');
          refalrts::reinit_char(context[8], 'e');
          refalrts::reinit_char(context[9], 'm');
          refalrts::reinit_char(context[1], 's');
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_elem( res, context[27] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_elem( res, context[24] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & PrepareMessage/4 # SpecStaticParamRepeatingVars/5 (/8 s.Mode#1/18 e.Index#1/19 )/9 e.FnName#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_SpecStaticParamRepeatingVars], context[5] ) )
          continue;
        // closed e.Index#1 as range 19
        // closed e.FnName#1 as range 21
        //DEBUG: s.Mode#1: 18
        //DEBUG: e.Index#1: 19
        //DEBUG: e.FnName#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: 'R'/0 HalfReuse: 'e'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/8 } 'a'/23 Tile{ HalfReuse: 't'/9 } 'i'/24 Tile{ HalfReuse: 'n'/1 }"g variables match static parameter "/25 Tile{ AsIs: s.Mode#1/18 } '.'/27 Tile{ AsIs: e.Index#1/19 }" in specialization of function "/28 Tile{ AsIs: e.FnName#1/21 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'a');
        refalrts::alloc_char(vm, context[24], 'i');
        refalrts::alloc_chars(vm, context[25], context[26], "g variables match static parameter ", 35);
        refalrts::alloc_char(vm, context[27], '.');
        refalrts::alloc_chars(vm, context[28], context[29], " in specialization of function ", 31);
        refalrts::reinit_char(context[0], 'R');
        refalrts::reinit_char(context[4], 'e');
        refalrts::reinit_char(context[5], 'p');
        refalrts::reinit_char(context[8], 'e');
        refalrts::reinit_char(context[9], 't');
        refalrts::reinit_char(context[1], 'n');
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PrepareMessage/4 # Screening/5 (/8 e.FunName#1/14 )/9 (/20 e.Screening#1/18 )/21 (/24 e.Screened#1/22 )/25 >/1
      context[14] = context[12];
      context[15] = context[13];
      context[16] = context[10];
      context[17] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Screening], context[5] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.FunName#1 as range 14
      // closed e.Screening#1 as range 18
      // closed e.Screened#1 as range 22
      //DEBUG: e.FunName#1: 14
      //DEBUG: e.Screening#1: 18
      //DEBUG: e.Screened#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } 'F'/26 Tile{ HalfReuse: 'u'/21 HalfReuse: 'n'/24 } 'c'/27 Tile{ HalfReuse: 't'/25 HalfReuse: 'i'/1 } Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 HalfReuse: '`'/8 AsIs: e.FunName#1/14 HalfReuse: '\''/9 HalfReuse: ':'/20 }" sentence "/28 Tile{ AsIs: e.Screening#1/18 }" screens sentence "/30 Tile{ AsIs: e.Screened#1/22 } Tile{ ]] }
      refalrts::alloc_char(vm, context[26], 'F');
      refalrts::alloc_char(vm, context[27], 'c');
      refalrts::alloc_chars(vm, context[28], context[29], " sentence ", 10);
      refalrts::alloc_chars(vm, context[30], context[31], " screens sentence ", 18);
      refalrts::reinit_char(context[21], 'u');
      refalrts::reinit_char(context[24], 'n');
      refalrts::reinit_char(context[25], 't');
      refalrts::reinit_char(context[1], 'i');
      refalrts::reinit_char(context[0], 'o');
      refalrts::reinit_char(context[4], 'n');
      refalrts::reinit_char(context[5], ' ');
      refalrts::reinit_char(context[8], '`');
      refalrts::reinit_char(context[9], '\'');
      refalrts::reinit_char(context[20], ':');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[0], context[20] );
      res = refalrts::splice_evar( res, context[25], context[1] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 # TaggedPseudofunction/5 s.Tag#1/8 e.Name#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::svar_term( context[8], context[8] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TaggedPseudofunction], context[5] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: s.Tag#1: 8
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'P'/0 HalfReuse: 's'/4 HalfReuse: 'e'/5 }"udofunction "/12 Tile{ AsIs: e.Name#1/10 }" should not have optimization tag $"/14 </16 & Upper/17 </18 & Explode/19 Tile{ AsIs: s.Tag#1/8 } >/20 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "udofunction ", 12);
    refalrts::alloc_chars(vm, context[14], context[15], " should not have optimization tag $", 35);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Upper]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_Explode]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::reinit_char(context[0], 'P');
    refalrts::reinit_char(context[4], 's');
    refalrts::reinit_char(context[5], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[14], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # EntryPseudofunction/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EntryPseudofunction], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Pseudofuncti"/8 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/6 HalfReuse: ' '/1 }"should be local, in other case function can\'t be encountered as pseudofunction"/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Pseudofuncti", 12);
    refalrts::alloc_chars(vm, context[10], context[11], "should be local, in other case function can\'t be encountered as pseudofunction", 78);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareMessage/4 # BadPseudofunctionBody/5 e.Name#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_BadPseudofunctionBody], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"Pseudofuncti"/6 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 HalfReuse: ' '/5 AsIs: e.Name#1/2 HalfReuse: ' '/1 }"should have a body { e.X = e.X }, in other case function can\'t be encountered as pseudofunction"/8 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Pseudofuncti", 12);
  refalrts::alloc_chars(vm, context[8], context[9], "should have a body { e.X = e.X }, in other case function can\'t be encountered as pseudofunction", 95);
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 'n');
  refalrts::reinit_char(context[5], ' ');
  refalrts::reinit_char(context[1], ' ');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareMessage("PrepareMessage", COOKIE1_, COOKIE2_, func_PrepareMessage);


static refalrts::FnResult func_gen_FindErrors_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & FindErrors=3/4 (/7 e.PFErrors#2/5 )/8 (/11 e.SpecErrors#3/9 )/12 (/15 e.WarningIds#1/13 )/16 (/19 e.AST#3/17 )/20 (/23 e.Declarations#4/21 )/24 e.FunctionBodies#4/2 >/1
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
  // closed e.PFErrors#2 as range 5
  // closed e.SpecErrors#3 as range 9
  // closed e.WarningIds#1 as range 13
  // closed e.AST#3 as range 17
  // closed e.Declarations#4 as range 21
  // closed e.FunctionBodies#4 as range 2
  //DEBUG: e.PFErrors#2: 5
  //DEBUG: e.SpecErrors#3: 9
  //DEBUG: e.WarningIds#1: 13
  //DEBUG: e.AST#3: 17
  //DEBUG: e.Declarations#4: 21
  //DEBUG: e.FunctionBodies#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.PFErrors#2/5 } Tile{ AsIs: e.SpecErrors#3/9 } Tile{ AsIs: </0 Reuse: & CheckValidUsings/4 AsIs: (/7 } </25 & Fetch@1/26 </27 & CleanupValidEntry/28 Tile{ AsIs: e.Declarations#4/21 } >/29 >/30 Tile{ AsIs: )/8 HalfReuse: </11 } Tile{ HalfReuse: & Map@1/24 AsIs: e.FunctionBodies#4/2 AsIs: >/1 } >/31 </32 Tile{ HalfReuse: & CheckScreening/12 AsIs: (/15 AsIs: e.WarningIds#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.AST#3/17 AsIs: )/20 HalfReuse: >/23 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_Fetch_Z1]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_CleanupValidEntry]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::update_name(context[4], functions[efunc_CheckValidUsings]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[24], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_name(context[12], functions[efunc_CheckScreening]);
  refalrts::reinit_close_call(context[23]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindErrors_A3("FindErrors=3", COOKIE1_, COOKIE2_, func_gen_FindErrors_A3);


static refalrts::FnResult func_gen_FindErrors_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & FindErrors=2/4 (/7 e.PFErrors#2/5 )/8 (/11 e.WarningIds#1/9 )/12 (/15 e.SpecErrors#3/13 )/16 e.AST#3/2 >/1
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
  // closed e.PFErrors#2 as range 5
  // closed e.WarningIds#1 as range 9
  // closed e.SpecErrors#3 as range 13
  // closed e.AST#3 as range 2
  //DEBUG: e.PFErrors#2: 5
  //DEBUG: e.WarningIds#1: 9
  //DEBUG: e.SpecErrors#3: 13
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindErrors=3/4 AsIs: (/7 AsIs: e.PFErrors#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.SpecErrors#3/13 } )/17 (/18 Tile{ AsIs: e.WarningIds#1/9 } Tile{ AsIs: )/12 AsIs: (/15 } e.AST#3/2/19 )/21 </22 & DoMapAccum@1/23 (/24 )/25 (/26 Tile{ AsIs: )/16 AsIs: e.AST#3/2 AsIs: >/1 } >/27 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A3]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[26], context[16] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[18], context[12] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindErrors_A2("FindErrors=2", COOKIE1_, COOKIE2_, func_gen_FindErrors_A2);


static refalrts::FnResult func_gen_FindErrors_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FindErrors=1/4 (/7 e.WarningIds#1/5 )/8 (/11 e.PFErrors#2/9 )/12 e.AST#2/2 >/1
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
  // closed e.WarningIds#1 as range 5
  // closed e.PFErrors#2 as range 9
  // closed e.AST#2 as range 2
  //DEBUG: e.WarningIds#1: 5
  //DEBUG: e.PFErrors#2: 9
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindErrors=2/4 AsIs: (/7 } Tile{ AsIs: e.PFErrors#2/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.WarningIds#1/5 } )/13 </14 & CheckSpecs=1/15 </16 Tile{ HalfReuse: & CheckSpecs-Redefine/12 AsIs: e.AST#2/2 AsIs: >/1 } >/17 >/18 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_CheckSpecs_A1]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A2]);
  refalrts::reinit_name(context[12], functions[efunc_CheckSpecsm_Redefine]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindErrors_A1("FindErrors=1", COOKIE1_, COOKIE2_, func_gen_FindErrors_A1);


static refalrts::FnResult func_FindErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FindErrors/4 (/7 e.WarningIds#1/5 )/8 e.AST#1/2 >/1
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
  // closed e.WarningIds#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.WarningIds#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindErrors=1/4 AsIs: (/7 AsIs: e.WarningIds#1/5 AsIs: )/8 } </9 & CheckPseudofunctions=1/10 </11 & Map@2/12 Tile{ AsIs: e.AST#1/2 } >/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_CheckPseudofunctions_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindErrors("FindErrors", COOKIE1_, COOKIE2_, func_FindErrors);


static refalrts::FnResult func_gen_CheckPseudofunctions_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckPseudofunctions=1/4 e.AST-and-messages#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-messages#2 as range 2
  //DEBUG: e.AST-and-messages#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoMapAccum@2/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST-and-messages#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z2]);
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

static refalrts::NativeReference nat_ref_gen_CheckPseudofunctions_A1("CheckPseudofunctions=1", COOKIE1_, COOKIE2_, func_gen_CheckPseudofunctions_A1);


static refalrts::FnResult func_gen_CheckPseudofunctions_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & CheckPseudofunctions=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPseudofunctions=1\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckPseudofunctions=1\1/4 (/5 s.new#2/9 t.new#3/10 t.new#4/12 e.new#5/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & CheckPseudofunctions=1\1/4 (/5 s.Tag#2/9 t.SrcPos#2/10 s.ScopeClass#2/12 e.Name#2/14 )/6 >/1
      context[14] = context[7];
      context[15] = context[8];
      if( ! refalrts::svar_term( context[12], context[12] ) )
        continue;
      // closed e.Name#2 as range 14
      //DEBUG: t.SrcPos#2: 10
      //DEBUG: s.ScopeClass#2: 12
      //DEBUG: s.Tag#2: 9
      //DEBUG: e.Name#2: 14
      //9: s.Tag#2
      //10: t.SrcPos#2
      //12: s.ScopeClass#2
      //14: e.Name#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_CheckPseudofunctions_A1L1S1C1]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_Drive]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_Inline]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Intrinsic]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[21] );
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
        // </16 & CheckPseudofunctions=1\1$1?1/20 e._#3/21 s.Tag#2/25 e._0#3/23 >/17
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
        context[21] = 0;
        context[22] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::repeated_stvar_left( vm, context[25], context[9], context[23], context[24] ) )
            continue;
          // closed e._0#3 as range 23
          //DEBUG: t.SrcPos#2: 10
          //DEBUG: s.ScopeClass#2: 12
          //DEBUG: s.Tag#2: 9
          //DEBUG: e.Name#2: 14
          //DEBUG: e._#3: 21
          //DEBUG: e._0#3: 23
          //9: s.Tag#2
          //10: t.SrcPos#2
          //12: s.ScopeClass#2
          //14: e.Name#2
          //21: e._#3
          //23: e._0#3
          //25: s.Tag#2

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::alloc_name(vm, context[28], functions[efunc_gen_CheckPseudofunctions_A1L1S1C2]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[30], functions[efunc_Pseudofunctions]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_close_call(vm, context[27]);
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[26] );
          res = refalrts::splice_elem( res, context[27] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[29] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_elem( res, context[29] );
          res = refalrts::splice_elem( res, context[28] );
          res = refalrts::splice_elem( res, context[26] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </26 & CheckPseudofunctions=1\1$1?2/30 e._#4/31 (/37 e.Name#2/39 )/38 e._0#4/33 >/27
            context[28] = 0;
            context[29] = 0;
            context[30] = refalrts::call_left( context[28], context[29], context[26], context[27] );
            context[31] = 0;
            context[32] = 0;
            refalrts::start_e_loop(vm);
            do {
              context[33] = context[28];
              context[34] = context[29];
              context[35] = 0;
              context[36] = 0;
              context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
              if( ! context[37] )
                continue;
              refalrts::bracket_pointers(context[37], context[38]);
              if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[14], context[15], context[35], context[36] ) )
                continue;
              if( ! refalrts::empty_seq( context[35], context[36] ) )
                continue;
              // closed e._0#4 as range 33
              //DEBUG: t.SrcPos#2: 10
              //DEBUG: s.ScopeClass#2: 12
              //DEBUG: s.Tag#2: 9
              //DEBUG: e.Name#2: 14
              //DEBUG: e._#3: 21
              //DEBUG: e._0#3: 23
              //DEBUG: e._#4: 31
              //DEBUG: e._0#4: 33

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} (/5 s.Tag#2/9 {REMOVED TILE} s.ScopeClass#2/12 e.Name#2/14 )/6 </16 & CheckPseudofunctions=1\1$1?1/20 e._#3/21 s.Tag#2/25 e._0#3/23 >/17 </26 {REMOVED TILE} e._#4/31 {REMOVED TILE} e._0#4/33 >/27 >/1 {REMOVED TILE}
              //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#2/10 } Tile{ HalfReuse: # TaggedPseudofunction/30 } Tile{ HalfReuse: s.Tag2 #25/37 AsIs: e.Name#2/39 AsIs: )/38 } Tile{ ]] }
              refalrts::reinit_open_bracket(context[0]);
              refalrts::reinit_ident(context[4], identifiers[ident_Error]);
              refalrts::reinit_ident(context[30], identifiers[ident_TaggedPseudofunction]);
              refalrts::reinit_svar( context[37], context[25] );
              refalrts::link_brackets( context[0], context[38] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = arg_end->next;
              res = refalrts::splice_evar( res, context[37], context[38] );
              res = refalrts::splice_elem( res, context[30] );
              res = refalrts::splice_evar( res, context[10], context[11] );
              refalrts::splice_to_freelist_open( vm, context[4], res );
              return refalrts::cSuccess;
            } while ( refalrts::open_evar_advance( context[31], context[32], context[28], context[29] ) );
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[26], context[27]);
          continue;
        } while ( refalrts::open_evar_advance( context[21], context[22], context[18], context[19] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[16], context[17]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CheckPseudofunctions=1\1/4 (/5 # Spec/9 t.SrcPos#2/10 (/12 e.Name#2/16 )/13 e._#2/14 )/6 >/1
      context[14] = context[7];
      context[15] = context[8];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
        continue;
      // closed e.Name#2 as range 16
      // closed e._#2 as range 14
      //DEBUG: t.SrcPos#2: 10
      //DEBUG: e.Name#2: 16
      //DEBUG: e._#2: 14
      //10: t.SrcPos#2
      //14: e._#2
      //16: e.Name#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckPseudofunctions_A1L1S2C1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Pseudofunctions]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[23] );
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
        // </18 & CheckPseudofunctions=1\1$2?1/22 e._#3/23 (/29 e.Name#2/31 )/30 e._0#3/25 >/19
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
          if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[16], context[17], context[27], context[28] ) )
            continue;
          if( ! refalrts::empty_seq( context[27], context[28] ) )
            continue;
          // closed e._0#3 as range 25
          //DEBUG: t.SrcPos#2: 10
          //DEBUG: e.Name#2: 16
          //DEBUG: e._#2: 14
          //DEBUG: e._#3: 23
          //DEBUG: e._0#3: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckPseudofunctions=1\1/4 {REMOVED TILE} e.Name#2/16 )/13 e._#2/14 )/6 </18 & CheckPseudofunctions=1\1$2?1/22 e._#3/23 {REMOVED TILE} e._0#3/25 >/19 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Error/9 AsIs: t.SrcPos#2/10 HalfReuse: # TaggedPseudofunction/12 } Tile{ HalfReuse: # Spec/29 AsIs: e.Name#2/31 AsIs: )/30 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_Error]);
          refalrts::reinit_ident(context[12], identifiers[ident_TaggedPseudofunction]);
          refalrts::reinit_ident(context[29], identifiers[ident_Spec]);
          refalrts::link_brackets( context[5], context[30] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[5], context[12] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[23], context[24], context[20], context[21] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[18], context[19]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckPseudofunctions=1\1/4 (/5 s.new#6/9 t.new#7/10 s.new#8/12 e.new#9/14 )/6 >/1
    context[14] = context[7];
    context[15] = context[8];
    if( ! refalrts::svar_term( context[12], context[12] ) )
      continue;
    // closed e.new#9 as range 14
    do {
      // </0 & CheckPseudofunctions=1\1/4 (/5 # Entry/9 t.SrcPos#2/10 # GN-Entry/12 e.Name#2/16 )/6 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_Entry], context[9] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
        continue;
      // closed e.Name#2 as range 16
      //DEBUG: t.SrcPos#2: 10
      //DEBUG: e.Name#2: 16
      //10: t.SrcPos#2
      //16: e.Name#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckPseudofunctions_A1L1S3C1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Pseudofunctions]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[23] );
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
        // </18 & CheckPseudofunctions=1\1$3?1/22 e._#3/23 (/29 e.Name#2/31 )/30 e._0#3/25 >/19
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
          if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[16], context[17], context[27], context[28] ) )
            continue;
          if( ! refalrts::empty_seq( context[27], context[28] ) )
            continue;
          // closed e._0#3 as range 25
          //DEBUG: t.SrcPos#2: 10
          //DEBUG: e.Name#2: 16
          //DEBUG: e._#3: 23
          //DEBUG: e._0#3: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} </18 & CheckPseudofunctions=1\1$3?1/22 e._#3/23 (/29 e.Name#2/31 )/30 e._0#3/25 >/19 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Warning/5 Reuse: # pseudofunctions/9 AsIs: t.SrcPos#2/10 Reuse: # EntryPseudofunction/12 AsIs: e.Name#2/16 AsIs: )/6 } Tile{ ]] }
          refalrts::reinit_open_bracket(context[4]);
          refalrts::reinit_ident(context[5], identifiers[ident_Warning]);
          refalrts::update_ident(context[9], identifiers[ident_pseudofunctions]);
          refalrts::update_ident(context[12], identifiers[ident_EntryPseudofunction]);
          refalrts::link_brackets( context[4], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[4], context[6] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[23], context[24], context[20], context[21] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[18], context[19]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckPseudofunctions=1\1/4 (/5 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/12 (/20 e.Name#2/18 )/21 e.Body#2/16 )/6 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Name#2 as range 18
    // closed e.Body#2 as range 16
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.ScopeClass#2: 12
    //DEBUG: e.Name#2: 18
    //DEBUG: e.Body#2: 16
    //10: t.SrcPos#2
    //12: s.ScopeClass#2
    //16: e.Body#2
    //18: e.Name#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_CheckPseudofunctions_A1L1S4C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Pseudofunctions]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </22 & CheckPseudofunctions=1\1$4?1/26 e._#3/27 (/33 e.Name#2/35 )/34 e._0#3/29 >/23
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
        if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[18], context[19], context[31], context[32] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e._0#3 as range 29
        //DEBUG: t.SrcPos#2: 10
        //DEBUG: s.ScopeClass#2: 12
        //DEBUG: e.Name#2: 18
        //DEBUG: e.Body#2: 16
        //DEBUG: e._#3: 27
        //DEBUG: e._0#3: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e._#3/27 {REMOVED TILE} e._0#3/29 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: t.SrcPos#2/10 AsIs: s.ScopeClass#2/12 AsIs: (/20 AsIs: e.Name#2/18 AsIs: )/21 AsIs: e.Body#2/16 AsIs: )/6 AsIs: </22 Reuse: & CheckPseudofunctions-Entry/26 } t.SrcPos#2/10/37 e.Name#2/35/39 s.ScopeClass#2/12/41 Tile{ AsIs: >/23 } Tile{ AsIs: </0 Reuse: & CheckPseudofunctions-Body/4 } t.SrcPos#2/10/42 Tile{ AsIs: (/33 AsIs: e.Name#2/35 AsIs: )/34 } e.Body#2/16/44 Tile{ AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[37], context[38], context[10], context[11]);
        refalrts::copy_evar(vm, context[39], context[40], context[35], context[36]);
        refalrts::copy_stvar(vm, context[41], context[12]);
        refalrts::copy_evar(vm, context[42], context[43], context[10], context[11]);
        refalrts::copy_evar(vm, context[44], context[45], context[16], context[17]);
        refalrts::update_name(context[26], functions[efunc_CheckPseudofunctionsm_Entry]);
        refalrts::update_name(context[4], functions[efunc_CheckPseudofunctionsm_Body]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[37], context[41] );
        res = refalrts::splice_evar( res, context[5], context[26] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[24], context[25] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPseudofunctions=1\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckPseudofunctions=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckPseudofunctions_A1L1("CheckPseudofunctions=1\\1", COOKIE1_, COOKIE2_, func_gen_CheckPseudofunctions_A1L1);


static refalrts::FnResult func_CheckPseudofunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckPseudofunctions/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckPseudofunctions=1/6 Tile{ AsIs: </0 Reuse: & Map@2/4 AsIs: e.AST#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckPseudofunctions_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
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

static refalrts::NativeReference nat_ref_CheckPseudofunctions("CheckPseudofunctions", COOKIE1_, COOKIE2_, func_CheckPseudofunctions);


static refalrts::FnResult func_SeparateErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & SeparateErrors/4 e.AST-and-messages#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-messages#1 as range 2
  //DEBUG: e.AST-and-messages#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoMapAccum@2/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST-and-messages#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z2]);
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

static refalrts::NativeReference nat_ref_SeparateErrors("SeparateErrors", COOKIE1_, COOKIE2_, func_SeparateErrors);


static refalrts::FnResult func_Pseudofunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Pseudofunctions/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: 'g'/4 HalfReuse: 'e'/1 }"n_e__"/5 )/7 (/8"gen-e__"/9 )/11 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "n_e__", 5);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "gen-e__", 7);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], 'g');
  refalrts::reinit_char(context[1], 'e');
  refalrts::link_brackets( context[8], context[11] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pseudofunctions("Pseudofunctions", COOKIE1_, COOKIE2_, func_Pseudofunctions);


static refalrts::FnResult func_CheckPseudofunctionsm_Entry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckPseudofunctions-Entry/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPseudofunctions-Entry/4 t.new#1/5 e.new#2/2 s.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CheckPseudofunctions-Entry/4 t.SrcPos#1/5 e.Name#1/8 # GN-Local/7 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[7] ) )
      continue;
    // closed e.Name#1 as range 8
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.Name#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckPseudofunctions-Entry/4 t.SrcPos#1/5 e.Name#1/8 # GN-Local/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPseudofunctions-Entry/4 t.SrcPos#1/5 e.Name#1/2 # GN-Entry/7 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Warning/4 } # pseudofunctions/8 Tile{ AsIs: t.SrcPos#1/5 } Tile{ Reuse: # EntryPseudofunction/7 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[8], identifiers[ident_pseudofunctions]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Warning]);
  refalrts::update_ident(context[7], identifiers[ident_EntryPseudofunction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckPseudofunctionsm_Entry("CheckPseudofunctions-Entry", COOKIE1_, COOKIE2_, func_CheckPseudofunctionsm_Entry);


static refalrts::FnResult func_CheckPseudofunctionsm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & CheckPseudofunctions-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPseudofunctions-Body/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & CheckPseudofunctions-Body/4 t.SrcPos#1/5 (/9 e.Name#1/11 )/10 # Sentences/15 (/18 (/22 e.Pattern#1/20 )/23 (/26 e.Result#1/24 )/27 (/30 e.Blocks#1/28 )/31 )/19 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = refalrts::ident_left( identifiers[ident_Sentences], context[13], context[14] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[16], context[17] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[16], context[17] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 11
    // closed e.Pattern#1 as range 20
    // closed e.Result#1 as range 24
    // closed e.Blocks#1 as range 28
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Pattern#1: 20
    //DEBUG: e.Result#1: 24
    //DEBUG: e.Blocks#1: 28
    //5: t.SrcPos#1
    //11: e.Name#1
    //20: e.Pattern#1
    //24: e.Result#1
    //28: e.Blocks#1
    //37: e.Pattern#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_CheckPseudofunctionsm_Body_S1C1]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_WholeEVar]);
    refalrts::copy_evar(vm, context[37], context[38], context[20], context[21]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[32] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[37], context[38] );
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
      // </32 & CheckPseudofunctions-Body$1?1/36 # True/37 e.Index#2/34 >/33
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
      context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
      if( ! context[37] )
        continue;
      // closed e.Index#2 as range 34
      //DEBUG: t.SrcPos#1: 5
      //DEBUG: e.Name#1: 11
      //DEBUG: e.Pattern#1: 20
      //DEBUG: e.Result#1: 24
      //DEBUG: e.Blocks#1: 28
      //DEBUG: e.Index#2: 34
      //5: t.SrcPos#1
      //11: e.Name#1
      //20: e.Pattern#1
      //24: e.Result#1
      //28: e.Blocks#1
      //34: e.Index#2
      //43: e.Pattern#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[40], functions[efunc_gen_CheckPseudofunctionsm_Body_S1C2]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_WholeEVar]);
      refalrts::copy_evar(vm, context[43], context[44], context[20], context[21]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[38] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[41] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </38 & CheckPseudofunctions-Body$1?2/42 # True/43 e.Index#2/44 >/39
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::call_left( context[40], context[41], context[38], context[39] );
        context[43] = refalrts::ident_left( identifiers[ident_True], context[40], context[41] );
        if( ! context[43] )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[44], context[45], context[34], context[35], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        //DEBUG: t.SrcPos#1: 5
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Pattern#1: 20
        //DEBUG: e.Result#1: 24
        //DEBUG: e.Blocks#1: 28
        //DEBUG: e.Index#2: 34
        //5: t.SrcPos#1
        //11: e.Name#1
        //20: e.Pattern#1
        //24: e.Result#1
        //28: e.Blocks#1
        //34: e.Index#2
        //44: e.Index#2
        //49: e.Blocks#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_CheckPseudofunctionsm_Body_S1C3]);
        refalrts::copy_evar(vm, context[49], context[50], context[28], context[29]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[46] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[49], context[50] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_elem( res, context[46] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </46 & CheckPseudofunctions-Body$1?3/50 >/47
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::call_left( context[48], context[49], context[46], context[47] );
          if( ! refalrts::empty_seq( context[48], context[49] ) )
            continue;
          //DEBUG: t.SrcPos#1: 5
          //DEBUG: e.Name#1: 11
          //DEBUG: e.Pattern#1: 20
          //DEBUG: e.Result#1: 24
          //DEBUG: e.Blocks#1: 28
          //DEBUG: e.Index#2: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckPseudofunctions-Body/4 t.SrcPos#1/5 (/9 e.Name#1/11 )/10 # Sentences/15 (/18 (/22 e.Pattern#1/20 )/23 (/26 e.Result#1/24 )/27 (/30 e.Blocks#1/28 )/31 )/19 </32 & CheckPseudofunctions-Body$1?1/36 # True/37 e.Index#2/34 >/33 </38 & CheckPseudofunctions-Body$1?2/42 # True/43 e.Index#2/44 >/39 </46 & CheckPseudofunctions-Body$1?3/50 >/47 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[46], context[47]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[38], context[39]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[32], context[33]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPseudofunctions-Body/4 t.SrcPos#1/5 (/9 e.Name#1/7 )/10 e._#1/2 >/1
  // closed e.Name#1 as range 7
  // closed e._#1 as range 2
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e._#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e._#1/2 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: # Warning/0 HalfReuse: # pseudofunctions/4 AsIs: t.SrcPos#1/5 HalfReuse: # BadPseudofunctionBody/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_ident(context[0], identifiers[ident_Warning]);
  refalrts::reinit_ident(context[4], identifiers[ident_pseudofunctions]);
  refalrts::reinit_ident(context[9], identifiers[ident_BadPseudofunctionBody]);
  refalrts::link_brackets( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_elem( res, context[1] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckPseudofunctionsm_Body("CheckPseudofunctions-Body", COOKIE1_, COOKIE2_, func_CheckPseudofunctionsm_Body);


static refalrts::FnResult func_WholeEVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & WholeEVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & WholeEVar/4 (/9 # TkVariable/11 t._pos#1/12 'e'/14 e.Index#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TkVariable], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[14] )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: t._pos#1: 12
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & WholeEVar/4 (/9 # TkVariable/11 t._pos#1/12 'e'/14 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Index#1/7 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WholeEVar/4 e._#1/2 >/1
  // closed e._#1 as range 2
  //DEBUG: e._#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WholeEVar/4 e._#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WholeEVar("WholeEVar", COOKIE1_, COOKIE2_, func_WholeEVar);


static refalrts::FnResult func_gen_CheckSpecs_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckSpecs=3/4 e.AST-and-errors#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#4 as range 2
  //DEBUG: e.AST-and-errors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoMapAccum@2/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST-and-errors#4/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z2]);
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

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A3("CheckSpecs=3", COOKIE1_, COOKIE2_, func_gen_CheckSpecs_A3);


static refalrts::FnResult func_gen_CheckSpecs_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs=2/4 e.AST-and-errors#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#3 as range 2
  //DEBUG: e.AST-and-errors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=3/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST-and-errors#3/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
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

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A2("CheckSpecs=2", COOKIE1_, COOKIE2_, func_gen_CheckSpecs_A2);


static refalrts::FnResult func_gen_CheckSpecs_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs=1/4 e.AST-and-errors#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#2 as range 2
  //DEBUG: e.AST-and-errors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=2/6 Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: e.AST-and-errors#2/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
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

static refalrts::NativeReference nat_ref_gen_CheckSpecs_A1("CheckSpecs=1", COOKIE1_, COOKIE2_, func_gen_CheckSpecs_A1);


static refalrts::FnResult func_CheckSpecs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckSpecs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs=1/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Redefine/4 AsIs: e.AST#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Redefine]);
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

static refalrts::NativeReference nat_ref_CheckSpecs("CheckSpecs", COOKIE1_, COOKIE2_, func_CheckSpecs);


static refalrts::FnResult func_CheckSpecsm_Redefine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & CheckSpecs-Redefine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckSpecs-Redefine/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos1#1/16 (/20 e.Name#1/18 )/21 e.Pattern1#1/11 )/14 e.AST-M#1/22 (/28 # Spec/30 t.SrcPos2#1/31 (/35 e.Name#1/37 )/36 e.Pattern2#1/26 )/29 e.AST-E#1/24 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern1#1 as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Spec], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.AST-E#1 as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[26], context[27] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        if( ! refalrts::repeated_evar_left( vm, context[37], context[38], context[18], context[19], context[33], context[34] ) )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        // closed e.Pattern2#1 as range 26
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Pattern1#1: 11
        //DEBUG: e.AST-M#1: 22
        //DEBUG: e.AST-E#1: 24
        //DEBUG: t.SrcPos2#1: 31
        //DEBUG: e.Pattern2#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Pattern2#1/26 )/29 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-Redefine/4 AsIs: e.AST-B#1/7 AsIs: (/13 AsIs: # Spec/15 AsIs: t.SrcPos1#1/16 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: e.Pattern1#1/11 AsIs: )/14 AsIs: e.AST-M#1/22 AsIs: (/28 Reuse: # Error/30 AsIs: t.SrcPos2#1/31 HalfReuse: # RedefineSpec/35 AsIs: e.Name#1/37 AsIs: )/36 } Tile{ AsIs: e.AST-E#1/24 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[30], identifiers[ident_Error]);
        refalrts::reinit_ident(context[35], identifiers[ident_RedefineSpec]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[28], context[36] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::splice_to_freelist_open( vm, context[36], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Redefine/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Redefine/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Redefine("CheckSpecs-Redefine", COOKIE1_, COOKIE2_, func_CheckSpecsm_Redefine);


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1S1B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 2
  do {
    // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/15 )/10 (/13 e.Pattern#2/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 15
    // closed e.Pattern#2 as range 17
    //DEBUG: t.SrcPos#2: 5
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Pattern#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/13 {REMOVED TILE} )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Spec/4 AsIs: t.SrcPos#2/5 AsIs: (/9 AsIs: e.Name#2/15 AsIs: )/10 } Tile{ AsIs: e.Pattern#2/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Spec]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 e.Errors#4/2 >/1
  // closed e.Name#2 as range 7
  // closed e.Pattern#2 as range 11
  // closed e.Errors#4 as range 2
  //DEBUG: t.SrcPos#2: 5
  //DEBUG: e.Name#2: 7
  //DEBUG: e.Pattern#2: 11
  //DEBUG: e.Errors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Formats\1$1:1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Errors#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1S1B1S1B1("CheckSpecs-Formats\\1$1:1$1:1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Formats_L1S1B1S1B1);


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & CheckSpecs-Formats\1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1$1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 s.new#4/15 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Formats\1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/16 )/10 (/13 e.Pattern#2/18 )/14 # True/15 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    // closed e.Name#2 as range 16
    // closed e.Pattern#2 as range 18
    //DEBUG: t.SrcPos#2: 5
    //DEBUG: e.Name#2: 16
    //DEBUG: e.Pattern#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Formats\1$1:1$1:1/4 AsIs: t.SrcPos#2/5 AsIs: (/9 AsIs: e.Name#2/16 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern#2/18 AsIs: )/14 HalfReuse: </15 HalfReuse: & ErrorsForRepeatedVariables/1 } </20 & Map@4/21 e.Pattern#2/18/22 >/24 >/25 >/26 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z4]);
    refalrts::copy_evar(vm, context[22], context[23], context[18], context[19]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[1], functions[efunc_ErrorsForRepeatedVariables]);
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1$1:1/4 t.SrcPos#2/5 (/9 e.Name#2/7 )/10 (/13 e.Pattern#2/11 )/14 # False/15 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 7
  // closed e.Pattern#2 as range 11
  //DEBUG: t.SrcPos#2: 5
  //DEBUG: e.Name#2: 7
  //DEBUG: e.Pattern#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/13 e.Pattern#2/11 )/14 # False/15 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#2/5 HalfReuse: # MustBeHardPattern/9 AsIs: e.Name#2/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_ident(context[9], identifiers[ident_MustBeHardPattern]);
  refalrts::link_brackets( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1S1B1("CheckSpecs-Formats\\1$1:1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Formats_L1S1B1);


static refalrts::FnResult func_CheckSpecsm_Formats(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs-Formats/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Formats("CheckSpecs-Formats", COOKIE1_, COOKIE2_, func_CheckSpecsm_Formats);


static refalrts::FnResult func_gen_IsHardPattern_S4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$4:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$4:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
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

  // </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$4:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S4B1("IsHardPattern$4:1", COOKIE1_, COOKIE2_, func_gen_IsHardPattern_S4B1);


static refalrts::FnResult func_gen_IsHardPattern_S5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$5:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$5:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
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

  // </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$5:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S5B1("IsHardPattern$5:1", COOKIE1_, COOKIE2_, func_gen_IsHardPattern_S5B1);


static refalrts::FnResult func_gen_IsHardPattern_S6B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$6:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$6:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & IsHardPattern$6:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
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

  // </0 & IsHardPattern$6:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$6:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S6B1("IsHardPattern$6:1", COOKIE1_, COOKIE2_, func_gen_IsHardPattern_S6B1);


static refalrts::FnResult func_gen_IsHardPattern_S7B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsHardPattern$7:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardPattern$7:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & IsHardPattern$7:1/4 (/7 e.PatternPart2#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.PatternPart2#1 as range 10
    //DEBUG: e.PatternPart2#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.PatternPart2#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
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

  // </0 & IsHardPattern$7:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternPart2#1 as range 5
  //DEBUG: e.PatternPart2#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardPattern$7:1/4 (/7 e.PatternPart2#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsHardPattern_S7B1("IsHardPattern$7:1", COOKIE1_, COOKIE2_, func_gen_IsHardPattern_S7B1);


static refalrts::FnResult func_IsHardPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & IsHardPattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsHardPattern/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 {REMOVED TILE}
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
    // </0 & IsHardPattern/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
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
      // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.new#5/16 'e'/18 e.new#6/12 )/10 e.new#4/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
        continue;
      // closed e.new#4 as range 14
      context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'e', context[12], context[13] );
      if( ! context[18] )
        continue;
      // closed e.new#6 as range 12
      do {
        // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index#1/19 )/10 >/1
        context[19] = context[12];
        context[20] = context[13];
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        // closed e.Index#1 as range 19
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Index#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index#1/19 )/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index1#1/19 )/10 e.Pattern-M#1/23 (/29 # TkVariable/31 t.SrcPos2#1/32 'e'/34 e.Index2#1/27 )/30 e.Pattern-E#1/25 >/1
      context[19] = context[12];
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[15];
      // closed e.Index1#1 as range 19
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[21];
        context[26] = context[22];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left( identifiers[ident_TkVariable], context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.Pattern-E#1 as range 25
        context[33] = refalrts::tvar_left( context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        context[34] = refalrts::char_left( 'e', context[27], context[28] );
        if( ! context[34] )
          continue;
        // closed e.Index2#1 as range 27
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Index1#1: 19
        //DEBUG: e.Pattern-M#1: 23
        //DEBUG: e.Pattern-E#1: 25
        //DEBUG: t.SrcPos2#1: 32
        //DEBUG: e.Index2#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsHardPattern/4 (/9 # TkVariable/11 t.SrcPos1#1/16 'e'/18 e.Index1#1/19 )/10 e.Pattern-M#1/23 (/29 # TkVariable/31 t.SrcPos2#1/32 'e'/34 e.Index2#1/27 )/30 e.Pattern-E#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_False]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardPattern/4 (/9 # Brackets/11 e.PatternPart1#1/12 )/10 e.PatternPart2#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[11] ) )
      continue;
    // closed e.PatternPart1#1 as range 12
    // closed e.PatternPart2#1 as range 14
    //DEBUG: e.PatternPart1#1: 12
    //DEBUG: e.PatternPart2#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern$4:1/4 AsIs: (/9 } Tile{ AsIs: e.PatternPart2#1/14 } )/16 </17 Tile{ HalfReuse: & IsHardPattern/11 AsIs: e.PatternPart1#1/12 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_IsHardPattern_S4B1]);
    refalrts::reinit_name(context[11], functions[efunc_IsHardPattern]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[9], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 e.PatternPart1#1/5 (/9 # Brackets/11 e.PatternPart2#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_Brackets], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.PatternPart1#1 as range 5
    // closed e.PatternPart2#1 as range 7
    //DEBUG: e.PatternPart1#1: 5
    //DEBUG: e.PatternPart2#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </1 } & IsHardPattern$5:1/12 (/13 Tile{ AsIs: e.PatternPart2#1/7 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & IsHardPattern/4 AsIs: e.PatternPart1#1/5 HalfReuse: >/9 HalfReuse: >/11 } Tile{ ]] }
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_IsHardPattern_S5B1]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 (/9 # ADT-Brackets/11 t.SrcPos#1/12 (/16 e.Name#1/14 )/17 e.PatternPart1#1/7 )/10 e.PatternPart2#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.PatternPart2#1 as range 5
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 14
    // closed e.PatternPart1#1 as range 7
    //DEBUG: e.PatternPart2#1: 5
    //DEBUG: t.SrcPos#1: 12
    //DEBUG: e.Name#1: 14
    //DEBUG: e.PatternPart1#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/12 {REMOVED TILE} e.Name#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsHardPattern$6:1/4 AsIs: (/9 } Tile{ AsIs: e.PatternPart2#1/5 } Tile{ HalfReuse: )/16 } Tile{ HalfReuse: </11 } Tile{ HalfReuse: & IsHardPattern/17 AsIs: e.PatternPart1#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_IsHardPattern_S6B1]);
    refalrts::reinit_close_bracket(context[16]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[17], functions[efunc_IsHardPattern]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[9], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[10] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 e.PatternPart1#1/5 (/9 # ADT-Brackets/11 t.SrcPos#1/12 (/16 e.Name#1/14 )/17 e.PatternPart2#1/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.PatternPart1#1 as range 5
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 14
    // closed e.PatternPart2#1 as range 7
    //DEBUG: e.PatternPart1#1: 5
    //DEBUG: t.SrcPos#1: 12
    //DEBUG: e.Name#1: 14
    //DEBUG: e.PatternPart2#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/12 {REMOVED TILE} e.Name#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & IsHardPattern$7:1/1 } Tile{ HalfReuse: (/17 AsIs: e.PatternPart2#1/7 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & IsHardPattern/4 AsIs: e.PatternPart1#1/5 HalfReuse: >/9 HalfReuse: >/11 } Tile{ ]] }
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[1], functions[efunc_gen_IsHardPattern_S7B1]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[17], context[10] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsHardPattern/4 t.Term#1/7 e.Pattern-E#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Pattern-E#1 as range 5
    //DEBUG: t.Term#1: 7
    //DEBUG: e.Pattern-E#1: 5
    //5: e.Pattern-E#1
    //7: t.Term#1
    //14: t.Term#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_IsHardPattern_S8C1]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_IsHardTerm]);
    refalrts::copy_stvar(vm, context[14], context[7]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </9 & IsHardPattern$8?1/13 # True/14 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      context[14] = refalrts::ident_left( identifiers[ident_True], context[11], context[12] );
      if( ! context[14] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: t.Term#1: 7
      //DEBUG: e.Pattern-E#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Term#1/7 {REMOVED TILE} </9 & IsHardPattern$8?1/13 # True/14 >/10 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & IsHardPattern/4 } Tile{ AsIs: e.Pattern-E#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardPattern/4 e.Pattern-B#1/2 t.Term#1/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern-B#1 as range 2
  //DEBUG: t.Term#1: 5
  //DEBUG: e.Pattern-B#1: 2
  //2: e.Pattern-B#1
  //5: t.Term#1
  //12: t.Term#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_IsHardPattern_S9C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_IsHardTerm]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[12] );
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
    // </7 & IsHardPattern$9?1/11 # True/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Term#1: 5
    //DEBUG: e.Pattern-B#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.Term#1/5 </7 & IsHardPattern$9?1/11 # True/12 >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & IsHardPattern/4 } Tile{ AsIs: e.Pattern-B#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_IsHardPattern("IsHardPattern", COOKIE1_, COOKIE2_, func_IsHardPattern);


static refalrts::FnResult func_IsHardTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & IsHardTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsHardTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsHardTerm/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & IsHardTerm/4 (/5 # Symbol/9 s.Type#1/10 e.Info#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::svar_term( context[10], context[10] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Info#1 as range 12
      //DEBUG: s.Type#1: 10
      //DEBUG: e.Info#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # Symbol/9 s.Type#1/10 e.Info#1/12 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.new#5/10 s.new#6/14 e.new#7/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 's'/14 e.Index#1/15 )/6 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.Index#1 as range 15
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Index#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 's'/14 e.Index#1/15 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 't'/14 e.Index#1/15 )/6 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::char_term( 't', context[14] ) )
      continue;
    // closed e.Index#1 as range 15
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Index#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 (/5 # TkVariable/9 t.SrcPos#1/10 't'/14 e.Index#1/15 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsHardTerm/4 t.Term#1/5 >/1
  //DEBUG: t.Term#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsHardTerm/4 t.Term#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsHardTerm("IsHardTerm", COOKIE1_, COOKIE2_, func_IsHardTerm);


static refalrts::FnResult func_CheckRepeatedVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CheckRepeatedVariables/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ErrorsForRepeatedVariables/6 Tile{ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ErrorsForRepeatedVariables]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
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

static refalrts::NativeReference nat_ref_CheckRepeatedVariables("CheckRepeatedVariables", COOKIE1_, COOKIE2_, func_CheckRepeatedVariables);


static refalrts::FnResult func_ErrorsForRepeatedVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & ErrorsForRepeatedVariables/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ErrorsForRepeatedVariables/4 e.VarList-B#1/7 (/13 # TkVariable/15 t.SrcPos1#1/16 s.Mode#1/18 e.Index#1/11 )/14 e.VarList-M#1/19 (/25 # TkVariable/27 t.SrcPos2#1/31 s.Mode#1/30 e.Index#1/28 )/26 e.VarList-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_TkVariable], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Index#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_TkVariable], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[30], context[18], context[23], context[24] ) )
          continue;
        // closed e.VarList-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.VarList-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.Mode#1: 18
        //DEBUG: e.Index#1: 11
        //DEBUG: e.VarList-M#1: 19
        //DEBUG: e.VarList-E#1: 21
        //DEBUG: t.SrcPos2#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorsForRepeatedVariables/4 AsIs: e.VarList-B#1/7 AsIs: (/13 AsIs: # TkVariable/15 AsIs: t.SrcPos1#1/16 AsIs: s.Mode#1/18 AsIs: e.Index#1/11 AsIs: )/14 } Tile{ AsIs: e.VarList-M#1/19 } Tile{ AsIs: e.VarList-E#1/21 } Tile{ AsIs: >/1 } Tile{ AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPos2#1/31 } # RepVarInSpecPattern/33 Tile{ AsIs: s.Mode#1/30 AsIs: e.Index#1/28 AsIs: )/26 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[33], identifiers[ident_RepVarInSpecPattern]);
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::link_brackets( context[25], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[30], context[26] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[25], context[32] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ErrorsForRepeatedVariables/4 e.VarList-B#1/7 (/13 # TkVariable/15 t.SrcPos#1/16 s.Mode#1/18 '_'/19 e.Index#1/11 )/14 e.VarList-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_TkVariable], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.VarList-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      context[19] = refalrts::char_left( '_', context[11], context[12] );
      if( ! context[19] )
        continue;
      // closed e.Index#1 as range 11
      //DEBUG: e.VarList-B#1: 7
      //DEBUG: e.VarList-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: s.Mode#1: 18
      //DEBUG: e.Index#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorsForRepeatedVariables/4 } Tile{ AsIs: e.VarList-B#1/7 } Tile{ AsIs: e.VarList-E#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPos#1/16 } # UnnamedVariableInSpecPattern/20 Tile{ AsIs: s.Mode#1/18 AsIs: '_'/19 AsIs: e.Index#1/11 AsIs: )/14 } Tile{ ]] }
      refalrts::alloc_ident(vm, context[20], identifiers[ident_UnnamedVariableInSpecPattern]);
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[14] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorsForRepeatedVariables/4 e.VarList#1/2 >/1
  // closed e.VarList#1 as range 2
  //DEBUG: e.VarList#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ErrorsForRepeatedVariables/4 e.VarList#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorsForRepeatedVariables("ErrorsForRepeatedVariables", COOKIE1_, COOKIE2_, func_ErrorsForRepeatedVariables);


static refalrts::FnResult func_FindVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindVariables/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindVariables("FindVariables", COOKIE1_, COOKIE2_, func_FindVariables);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs-Functions$1=1/4 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#2 as range 2
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S1A1("CheckSpecs-Functions$1=1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S1A1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S1A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckSpecs-Functions$1=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 s.new#4/15 (/18 e.new#5/16 )/19 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 t.new#8/28 s.new#9/30 e.new#10/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new#5 as range 16
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  context[29] = refalrts::tvar_left( context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#10 as range 2
  do {
    // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.AST-B#1/31 )/8 (/11 e.AST-M#1/33 )/12 t.SrcPos2#1/13 s.ScopeClass#1/15 (/18 e.Name#1/35 )/19 (/22 e.Body#1/37 )/23 (/26 e.AST-E#1/39 )/27 t.SrcPos1#1/28 # True/30 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[9];
    context[34] = context[10];
    context[35] = context[16];
    context[36] = context[17];
    context[37] = context[20];
    context[38] = context[21];
    context[39] = context[24];
    context[40] = context[25];
    if( ! refalrts::ident_term( identifiers[ident_True], context[30] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.AST-B#1 as range 31
    // closed e.AST-M#1 as range 33
    // closed e.Name#1 as range 35
    // closed e.Body#1 as range 37
    // closed e.AST-E#1 as range 39
    //DEBUG: t.SrcPos2#1: 13
    //DEBUG: t.SrcPos1#1: 28
    //DEBUG: s.ScopeClass#1: 15
    //DEBUG: e.AST-B#1: 31
    //DEBUG: e.AST-M#1: 33
    //DEBUG: e.Name#1: 35
    //DEBUG: e.Body#1: 37
    //DEBUG: e.AST-E#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$1=1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/23 (/26 {REMOVED TILE} {REMOVED TILE} t.SrcPos1#1/28 # True/30 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/31 } Tile{ AsIs: e.AST-M#1/33 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Function/12 AsIs: t.SrcPos2#1/13 AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/35 AsIs: )/19 } Tile{ AsIs: e.Body#1/37 } Tile{ AsIs: )/27 } Tile{ AsIs: e.AST-E#1/39 } Tile{ ]] }
    refalrts::reinit_ident(context[12], identifiers[ident_Function]);
    refalrts::link_brackets( context[22], context[27] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions$1=1:1/4 (/7 e.AST-B#1/5 )/8 (/11 e.AST-M#1/9 )/12 t.SrcPos2#1/13 s.ScopeClass#1/15 (/18 e.Name#1/16 )/19 (/22 e.Body#1/20 )/23 (/26 e.AST-E#1/24 )/27 t.SrcPos1#1/28 # False/30 e.Messages#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[30] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST-B#1 as range 5
  // closed e.AST-M#1 as range 9
  // closed e.Name#1 as range 16
  // closed e.Body#1 as range 20
  // closed e.AST-E#1 as range 24
  // closed e.Messages#2 as range 2
  //DEBUG: t.SrcPos2#1: 13
  //DEBUG: t.SrcPos1#1: 28
  //DEBUG: s.ScopeClass#1: 15
  //DEBUG: e.AST-B#1: 5
  //DEBUG: e.AST-M#1: 9
  //DEBUG: e.Name#1: 16
  //DEBUG: e.Body#1: 20
  //DEBUG: e.AST-E#1: 24
  //DEBUG: e.Messages#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/26 } Tile{ HalfReuse: # Error/27 AsIs: t.SrcPos1#1/28 } Tile{ HalfReuse: # BadSpecForFunction/7 } e.Name#1/16/31 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & Map@5/4 } t.SrcPos2#1/13/33 Tile{ AsIs: (/22 } e.Name#1/16/35 Tile{ HalfReuse: )/30 AsIs: e.Messages#2/2 AsIs: >/1 } Tile{ AsIs: e.AST-M#1/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: # Function/12 AsIs: t.SrcPos2#1/13 AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 } Tile{ AsIs: e.Body#1/20 } Tile{ AsIs: )/23 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::copy_evar(vm, context[31], context[32], context[16], context[17]);
  refalrts::copy_evar(vm, context[33], context[34], context[13], context[14]);
  refalrts::copy_evar(vm, context[35], context[36], context[16], context[17]);
  refalrts::reinit_ident(context[27], identifiers[ident_Error]);
  refalrts::reinit_ident(context[7], identifiers[ident_BadSpecForFunction]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::reinit_close_bracket(context[30]);
  refalrts::reinit_ident(context[12], identifiers[ident_Function]);
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[22], context[30] );
  refalrts::link_brackets( context[26], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[30], context[1] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S1A1B1("CheckSpecs-Functions$1=1:1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S1A1B1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs-Functions$2=1/4 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#2 as range 2
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions/4 AsIs: e.AST#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Functions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S2A1("CheckSpecs-Functions$2=1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S2A1);


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckSpecs-Functions$2=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 (/14 e.new#4/12 )/15 (/18 e.new#5/16 )/19 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 t.new#8/28 s.new#9/30 e.new#10/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new#4 as range 12
  // closed e.new#5 as range 16
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  context[29] = refalrts::tvar_left( context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#10 as range 2
  do {
    // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.AST-B#1/31 )/8 t.SrcPos1#1/9 s.ScopeClass#1/11 (/14 e.Name#1/33 )/15 (/18 e.Body#1/35 )/19 (/22 e.AST-M#1/37 )/23 (/26 e.AST-E#1/39 )/27 t.SrcPos2#1/28 # True/30 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[12];
    context[34] = context[13];
    context[35] = context[16];
    context[36] = context[17];
    context[37] = context[20];
    context[38] = context[21];
    context[39] = context[24];
    context[40] = context[25];
    if( ! refalrts::ident_term( identifiers[ident_True], context[30] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.AST-B#1 as range 31
    // closed e.Name#1 as range 33
    // closed e.Body#1 as range 35
    // closed e.AST-M#1 as range 37
    // closed e.AST-E#1 as range 39
    //DEBUG: t.SrcPos1#1: 9
    //DEBUG: t.SrcPos2#1: 28
    //DEBUG: s.ScopeClass#1: 11
    //DEBUG: e.AST-B#1: 31
    //DEBUG: e.Name#1: 33
    //DEBUG: e.Body#1: 35
    //DEBUG: e.AST-M#1: 37
    //DEBUG: e.AST-E#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions$2=1:1/4 (/7 {REMOVED TILE} {REMOVED TILE} (/18 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE} )/23 (/26 {REMOVED TILE} {REMOVED TILE} t.SrcPos2#1/28 # True/30 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/31 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Function/8 AsIs: t.SrcPos1#1/9 AsIs: s.ScopeClass#1/11 AsIs: (/14 AsIs: e.Name#1/33 AsIs: )/15 } Tile{ AsIs: e.Body#1/35 } Tile{ AsIs: )/27 } Tile{ AsIs: e.AST-M#1/37 } Tile{ AsIs: e.AST-E#1/39 } Tile{ ]] }
    refalrts::reinit_ident(context[8], identifiers[ident_Function]);
    refalrts::link_brackets( context[22], context[27] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions$2=1:1/4 (/7 e.AST-B#1/5 )/8 t.SrcPos1#1/9 s.ScopeClass#1/11 (/14 e.Name#1/12 )/15 (/18 e.Body#1/16 )/19 (/22 e.AST-M#1/20 )/23 (/26 e.AST-E#1/24 )/27 t.SrcPos2#1/28 # False/30 e.Messages#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[30] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST-B#1 as range 5
  // closed e.Name#1 as range 12
  // closed e.Body#1 as range 16
  // closed e.AST-M#1 as range 20
  // closed e.AST-E#1 as range 24
  // closed e.Messages#2 as range 2
  //DEBUG: t.SrcPos1#1: 9
  //DEBUG: t.SrcPos2#1: 28
  //DEBUG: s.ScopeClass#1: 11
  //DEBUG: e.AST-B#1: 5
  //DEBUG: e.Name#1: 12
  //DEBUG: e.Body#1: 16
  //DEBUG: e.AST-M#1: 20
  //DEBUG: e.AST-E#1: 24
  //DEBUG: e.Messages#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Function/8 AsIs: t.SrcPos1#1/9 AsIs: s.ScopeClass#1/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: e.Body#1/16 } Tile{ HalfReuse: )/22 AsIs: e.AST-M#1/20 HalfReuse: (/23 HalfReuse: # Error/26 } Tile{ AsIs: t.SrcPos2#1/28 } Tile{ HalfReuse: # BadSpecForFunction/19 } e.Name#1/12/31 Tile{ AsIs: )/27 } Tile{ AsIs: </0 Reuse: & Map@6/4 } t.SrcPos2#1/28/33 Tile{ AsIs: (/18 } e.Name#1/12/35 Tile{ HalfReuse: )/30 AsIs: e.Messages#2/2 AsIs: >/1 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::copy_evar(vm, context[31], context[32], context[12], context[13]);
  refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
  refalrts::copy_evar(vm, context[35], context[36], context[12], context[13]);
  refalrts::reinit_ident(context[8], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[22]);
  refalrts::reinit_open_bracket(context[23]);
  refalrts::reinit_ident(context[26], identifiers[ident_Error]);
  refalrts::reinit_ident(context[19], identifiers[ident_BadSpecForFunction]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
  refalrts::reinit_close_bracket(context[30]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[30] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::link_brackets( context[7], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[30], context[1] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S2A1B1("CheckSpecs-Functions$2=1:1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S2A1B1);


static refalrts::FnResult func_CheckSpecsm_Functions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & CheckSpecs-Functions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos1#1/16 (/20 e.Name#1/18 )/21 e.Pattern#1/11 )/14 e.AST-M#1/22 (/28 # Function/30 t.SrcPos2#1/31 s.ScopeClass#1/33 (/36 e.Name#1/38 )/37 e.Body#1/26 )/29 e.AST-E#1/24 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern#1 as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Function], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.AST-E#1 as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        if( ! refalrts::svar_left( context[33], context[26], context[27] ) )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[26], context[27] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[18], context[19], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        // closed e.Body#1 as range 26
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.AST-M#1: 22
        //DEBUG: e.AST-E#1: 24
        //DEBUG: t.SrcPos2#1: 31
        //DEBUG: s.ScopeClass#1: 33
        //DEBUG: e.Body#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$1=1/4 } </40 & CheckSpecs-Functions$1=1:1/41 Tile{ AsIs: (/28 } Tile{ AsIs: e.AST-B#1/7 } Tile{ AsIs: )/14 } Tile{ AsIs: (/13 } Tile{ AsIs: e.AST-M#1/22 } Tile{ HalfReuse: )/30 AsIs: t.SrcPos2#1/31 AsIs: s.ScopeClass#1/33 AsIs: (/36 AsIs: e.Name#1/38 AsIs: )/37 } (/42 Tile{ AsIs: e.Body#1/26 } Tile{ AsIs: )/29 } (/43 Tile{ AsIs: e.AST-E#1/24 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 } </44 & ValidBodyForSpec/45 Tile{ AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 } (/46 Tile{ AsIs: e.Pattern#1/11 } )/47 e.Body#1/26/48 >/50 >/51 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_open_call(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_ValidBodyForSpec]);
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::copy_evar(vm, context[48], context[49], context[26], context[27]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S1A1]);
        refalrts::reinit_close_bracket(context[30]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[44] );
        refalrts::link_brackets( context[46], context[47] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::link_brackets( context[43], context[15] );
        refalrts::link_brackets( context[42], context[29] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[13], context[30] );
        refalrts::link_brackets( context[28], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[47], context[51] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[30], context[37] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Function/15 t.SrcPos1#1/16 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 e.Body#1/11 )/14 e.AST-M#1/23 (/29 # Spec/31 t.SrcPos2#1/32 (/36 e.Name#1/38 )/37 e.Pattern#1/27 )/30 e.AST-E#1/25 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[11], context[12] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Name#1 as range 19
      // closed e.Body#1 as range 11
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[9];
        context[26] = context[10];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left( identifiers[ident_Spec], context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.AST-E#1 as range 25
        context[33] = refalrts::tvar_left( context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[27], context[28] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[19], context[20], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        // closed e.Pattern#1 as range 27
        //DEBUG: e.AST-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 19
        //DEBUG: e.Body#1: 11
        //DEBUG: e.AST-M#1: 23
        //DEBUG: e.AST-E#1: 25
        //DEBUG: t.SrcPos2#1: 32
        //DEBUG: e.Pattern#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$2=1/4 } </40 & CheckSpecs-Functions$2=1:1/41 Tile{ AsIs: (/13 } Tile{ AsIs: e.AST-B#1/7 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 } (/42 Tile{ AsIs: e.Body#1/11 } Tile{ AsIs: )/30 } Tile{ HalfReuse: (/14 AsIs: e.AST-M#1/23 HalfReuse: )/29 HalfReuse: (/31 } Tile{ AsIs: e.AST-E#1/25 } )/43 Tile{ AsIs: t.SrcPos2#1/32 } </44 & ValidBodyForSpec/45 Tile{ AsIs: (/36 AsIs: e.Name#1/38 AsIs: )/37 } (/46 Tile{ AsIs: e.Pattern#1/27 } )/47 e.Body#1/11/48 >/50 >/51 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_call(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_ValidBodyForSpec]);
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::copy_evar(vm, context[48], context[49], context[11], context[12]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S2A1]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[44] );
        refalrts::link_brackets( context[46], context[47] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[31], context[43] );
        refalrts::link_brackets( context[14], context[29] );
        refalrts::link_brackets( context[42], context[30] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[13], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[47], context[51] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[14], context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[15], context[22] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSpecs-Functions/4 e.AST-B#1/7 (/13 # Spec/15 t.SrcPos#1/16 (/20 e.Name#1/18 )/21 e.Pattern#1/11 )/14 e.AST-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.AST-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Name#1 as range 18
      // closed e.Pattern#1 as range 11
      //DEBUG: e.AST-B#1: 7
      //DEBUG: e.AST-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Name#1: 18
      //DEBUG: e.Pattern#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Pattern#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-Functions/4 AsIs: e.AST-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPos#1/16 HalfReuse: # OrphanSpec/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: e.AST-E#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::reinit_ident(context[20], identifiers[ident_OrphanSpec]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Functions/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Functions/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_Functions("CheckSpecs-Functions", COOKIE1_, COOKIE2_, func_CheckSpecsm_Functions);


static refalrts::FnResult func_gen_ValidBodyForSpec_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ValidBodyForSpec$1=1/4 (/7 s.BoolResult#2/9 e.Messages#2/5 )/8 >/1
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
  // closed e.Messages#2 as range 5
  //DEBUG: s.BoolResult#2: 9
  //DEBUG: e.Messages#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ValidBodyForSpec$1=1/4 (/7 s.BoolResult#2/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.BoolResult2 #9/0 } Tile{ AsIs: e.Messages#2/5 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpec_S1A1("ValidBodyForSpec$1=1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpec_S1A1);


static refalrts::FnResult func_ValidBodyForSpec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ValidBodyForSpec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & ValidBodyForSpec/4 (/7 e.Name#1/12 )/8 t.Pattern#1/9 # Sentences/11 e.Sentences#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[11] ) )
      continue;
    // closed e.Name#1 as range 12
    // closed e.Sentences#1 as range 14
    //DEBUG: t.Pattern#1: 9
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Sentences#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Name#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidBodyForSpec$1=1/4 HalfReuse: </7 } Tile{ HalfReuse: & Reduce@2/8 AsIs: t.Pattern#1/9 } (/16 # True/17 Tile{ HalfReuse: )/11 AsIs: e.Sentences#1/14 AsIs: >/1 } >/18 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_True]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpec_S1A1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_gen_Reduce_Z2]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[16], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec/4 (/7 e.Name#1/5 )/8 t.Pattern#1/9 # NativeBody/11 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  // closed e.Code#1 as range 2
  //DEBUG: t.Pattern#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} t.Pattern#1/9 {REMOVED TILE} e.Code#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: # False/11 } Tile{ HalfReuse: (/0 HalfReuse: # NativeOptimizable/4 HalfReuse: # Spec/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident(context[11], identifiers[ident_False]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_NativeOptimizable]);
  refalrts::reinit_ident(context[7], identifiers[ident_Spec]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidBodyForSpec("ValidBodyForSpec", COOKIE1_, COOKIE2_, func_ValidBodyForSpec);


static refalrts::FnResult func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1/4 (/7 s.BoolResult#3/9 (/12 e.Messages#3/10 )/13 e.ExtractedVars#3/5 )/8 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Messages#3 as range 10
  // closed e.ExtractedVars#3 as range 5
  //DEBUG: s.BoolResult#3: 9
  //DEBUG: e.Messages#3: 10
  //DEBUG: e.ExtractedVars#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ValidBodyForSpec-CheckSentensePattern$1:1$1=1/4 (/7 s.BoolResult#3/9 {REMOVED TILE} e.ExtractedVars#3/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.BoolResult3 #9/12 AsIs: e.Messages#3/10 AsIs: )/13 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[12], context[9] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1("ValidBodyForSpec-CheckSentensePattern$1:1$1=1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1);


static refalrts::FnResult func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1$1:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1$1:1/4 (/7 e.NMessages#3/12 )/8 t.Var#3/9 # True/11 e.ExtractedVars#6/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[11] ) )
      continue;
    // closed e.NMessages#3 as range 12
    // closed e.ExtractedVars#6 as range 14
    //DEBUG: t.Var#3: 9
    //DEBUG: e.NMessages#3: 12
    //DEBUG: e.ExtractedVars#6: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Var#3/9 # True/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # True/4 AsIs: (/7 AsIs: e.NMessages#3/12 AsIs: )/8 } Tile{ AsIs: e.ExtractedVars#6/14 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1$1:1/4 (/7 e.NMessages#3/5 )/8 t.Var#3/9 # False/11 e.ExtractedVars#6/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NMessages#3 as range 5
  // closed e.ExtractedVars#6 as range 2
  //DEBUG: t.Var#3: 9
  //DEBUG: e.NMessages#3: 5
  //DEBUG: e.ExtractedVars#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # False/4 AsIs: (/7 AsIs: e.NMessages#3/5 HalfReuse: (/8 } # SpecStaticParamRepeatingVars/12 Tile{ AsIs: t.Var#3/9 } )/13 Tile{ HalfReuse: )/11 AsIs: e.ExtractedVars#6/2 HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[12], identifiers[ident_SpecStaticParamRepeatingVars]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_False]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1("ValidBodyForSpec-CheckSentensePattern$1:1$1=1\\1$1:1$1:1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1);


static refalrts::FnResult func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 s.new#5/19 >/1
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
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1/4 (/7 e.NMessages#3/20 )/8 t.Var#3/9 (/13 e.ExtractedVars#3/22 )/14 (/17 e.Val#3/24 )/18 # True/19 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[11];
    context[23] = context[12];
    context[24] = context[15];
    context[25] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_True], context[19] ) )
      continue;
    // closed e.NMessages#3 as range 20
    // closed e.ExtractedVars#3 as range 22
    // closed e.Val#3 as range 24
    //DEBUG: t.Var#3: 9
    //DEBUG: e.NMessages#3: 20
    //DEBUG: e.ExtractedVars#3: 22
    //DEBUG: e.Val#3: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1$1:1/4 AsIs: (/7 AsIs: e.NMessages#3/20 AsIs: )/8 AsIs: t.Var#3/9 HalfReuse: </13 } & CheckSpec-RepeatingVarInStaticParams/26 Tile{ AsIs: e.ExtractedVars#3/22 } Tile{ HalfReuse: </14 HalfReuse: & ExtractVariables-Expr/17 AsIs: e.Val#3/24 HalfReuse: >/18 HalfReuse: >/19 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[26], functions[efunc_CheckSpecm_RepeatingVarInStaticParams]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[17], functions[efunc_ExtractVariablesm_Expr]);
    refalrts::reinit_close_call(context[18]);
    refalrts::reinit_close_call(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1/4 (/7 e.NMessages#3/5 )/8 t.Var#3/9 (/13 e.ExtractedVars#3/11 )/14 (/17 e.Val#3/15 )/18 # False/19 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NMessages#3 as range 5
  // closed e.ExtractedVars#3 as range 11
  // closed e.Val#3 as range 15
  //DEBUG: t.Var#3: 9
  //DEBUG: e.NMessages#3: 5
  //DEBUG: e.ExtractedVars#3: 11
  //DEBUG: e.Val#3: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/17 e.Val#3/15 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # False/4 AsIs: (/7 AsIs: e.NMessages#3/5 HalfReuse: (/8 } Tile{ Reuse: # SpecStaticParamTypeMismatching/19 } Tile{ AsIs: t.Var#3/9 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/13 AsIs: e.ExtractedVars#3/11 AsIs: )/14 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_False]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::update_ident(context[19], identifiers[ident_SpecStaticParamTypeMismatching]);
  refalrts::reinit_close_bracket(context[13]);
  refalrts::link_brackets( context[0], context[14] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1("ValidBodyForSpec-CheckSentensePattern$1:1$1=1\\1$1:1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1);


static refalrts::FnResult func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 (/7 s.new#1/13 (/16 e.new#2/14 )/17 e.new#3/5 )/8 (/11 e.new#4/9 ':'/20 t.new#5/18 )/12 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new#2 as range 14
  // closed e.new#3 as range 5
  context[19] = refalrts::tvar_right( context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::char_right( ':', context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 (/7 # True/13 (/16 e.NMessages#3/21 )/17 e.ExtractedVars#3/23 )/8 (/11 e.Val#3/25 ':'/20 t.Var#3/18 )/12 >/1
    context[21] = context[14];
    context[22] = context[15];
    context[23] = context[5];
    context[24] = context[6];
    context[25] = context[9];
    context[26] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.NMessages#3 as range 21
    // closed e.ExtractedVars#3 as range 23
    // closed e.Val#3 as range 25
    //DEBUG: t.Var#3: 18
    //DEBUG: e.NMessages#3: 21
    //DEBUG: e.ExtractedVars#3: 23
    //DEBUG: e.Val#3: 25
    //18: t.Var#3
    //21: e.NMessages#3
    //23: e.ExtractedVars#3
    //25: e.Val#3
    //32: t.Var#3

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1C1]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_IsSpecStaticVar]);
    refalrts::copy_stvar(vm, context[32], context[18]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[27] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[30] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </27 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1?1/31 # True/32 >/28
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
      context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: t.Var#3: 18
      //DEBUG: e.NMessages#3: 21
      //DEBUG: e.ExtractedVars#3: 23
      //DEBUG: e.Val#3: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # True/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1$1:1/4 AsIs: (/7 } Tile{ AsIs: e.NMessages#3/21 } Tile{ AsIs: )/12 } Tile{ AsIs: t.Var#3/18 } Tile{ HalfReuse: (/17 AsIs: e.ExtractedVars#3/23 AsIs: )/8 AsIs: (/11 AsIs: e.Val#3/25 HalfReuse: )/20 } Tile{ AsIs: </27 Reuse: & CheckSpec-VarTypeMatching/31 HalfReuse: (/32 } e.Val#3/25/33 Tile{ HalfReuse: )/16 } t.Var#3/18/35 Tile{ AsIs: >/28 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[33], context[34], context[25], context[26]);
      refalrts::copy_evar(vm, context[35], context[36], context[18], context[19]);
      refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_close_bracket(context[20]);
      refalrts::update_name(context[31], functions[efunc_CheckSpecm_VarTypeMatching]);
      refalrts::reinit_open_bracket(context[32]);
      refalrts::reinit_close_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[32], context[16] );
      refalrts::link_brackets( context[11], context[20] );
      refalrts::link_brackets( context[17], context[8] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[27], context[32] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[27], context[28]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 (/7 s.Other#3/13 (/16 e.NMessages#3/14 )/17 e.ExtractedVars#3/5 )/8 (/11 e.Val#3/9 ':'/20 t.Var#3/18 )/12 >/1
  // closed e.NMessages#3 as range 14
  // closed e.ExtractedVars#3 as range 5
  // closed e.Val#3 as range 9
  //DEBUG: t.Var#3: 18
  //DEBUG: s.Other#3: 13
  //DEBUG: e.NMessages#3: 14
  //DEBUG: e.ExtractedVars#3: 5
  //DEBUG: e.Val#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 {REMOVED TILE} (/11 e.Val#3/9 ':'/20 t.Var#3/18 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Other#3/13 AsIs: (/16 AsIs: e.NMessages#3/14 AsIs: )/17 AsIs: e.ExtractedVars#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1("ValidBodyForSpec-CheckSentensePattern$1:1$1=1\\1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1);


static refalrts::FnResult func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.Messages#1/10 )/8 # Clear/9 e.Vars#2/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Clear], context[9] ) )
      continue;
    // closed e.Messages#1 as range 10
    // closed e.Vars#2 as range 12
    //DEBUG: e.Messages#1: 10
    //DEBUG: e.Vars#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Messages#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1/4 HalfReuse: </7 } & Reduce@3/14 (/15 # True/16 (/17 Tile{ AsIs: )/8 HalfReuse: )/9 AsIs: e.Vars#2/12 AsIs: >/1 } >/18 Tile{ ]] }
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z3]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_ident(vm, context[16], identifiers[ident_True]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[15], context[9] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.Messages#1/10 )/8 # Contracted/9 e.Vars#2/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Contracted], context[9] ) )
      continue;
    // closed e.Messages#1 as range 10
    // closed e.Vars#2 as range 12
    //DEBUG: e.Messages#1: 10
    //DEBUG: e.Vars#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # Contracted/9 e.Vars#2/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # False/7 AsIs: e.Messages#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_False]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.new#5/5 )/8 s.new#4/9 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.Messages#1/10 )/8 # Failure/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Failure], context[9] ) )
      continue;
    // closed e.Messages#1 as range 10
    //DEBUG: e.Messages#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # Failure/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # False/7 AsIs: e.Messages#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_False]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern$1:1/4 (/7 e.Messages#1/5 )/8 # Undefined/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_Undefined], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Messages#1 as range 5
  //DEBUG: e.Messages#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # Undefined/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # False/7 AsIs: e.Messages#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_False]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1("ValidBodyForSpec-CheckSentensePattern$1:1", COOKIE1_, COOKIE2_, func_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1);


static refalrts::FnResult func_ValidBodyForSpecm_CheckSentensePattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ValidBodyForSpec-CheckSentensePattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec-CheckSentensePattern/4 t.new#1/5 (/9 s.new#2/11 e.new#3/7 )/10 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#4 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 7
  do {
    // </0 & ValidBodyForSpec-CheckSentensePattern/4 (/5 e.SpecPattern#1/16 )/6 (/9 # True/11 e.Messages#1/12 )/10 (/20 (/24 e.SentencePattern#1/22 )/25 e.OtherSentenceConstruction#1/18 )/21 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[5] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_True], context[11] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.SpecPattern#1 as range 16
    // closed e.Messages#1 as range 12
    // closed e.SentencePattern#1 as range 22
    // closed e.OtherSentenceConstruction#1 as range 18
    //DEBUG: e.SpecPattern#1: 16
    //DEBUG: e.Messages#1: 12
    //DEBUG: e.SentencePattern#1: 22
    //DEBUG: e.OtherSentenceConstruction#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OtherSentenceConstruction#1/18 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: & ValidBodyForSpec-CheckSentensePattern$1:1/9 HalfReuse: (/11 AsIs: e.Messages#1/12 AsIs: )/10 HalfReuse: </20 HalfReuse: & GenericMatch/24 } Tile{ AsIs: (/5 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.SentencePattern#1/22 } >/26 Tile{ AsIs: )/25 } (/27 </28 & RemovePos-Expr/29 Tile{ AsIs: e.SpecPattern#1/16 } >/30 )/31 Tile{ HalfReuse: >/21 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_RemovePosm_Expr]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_name(context[9], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_open_call(context[20]);
    refalrts::reinit_name(context[24], functions[efunc_GenericMatch]);
    refalrts::update_name(context[4], functions[efunc_RemovePosm_Expr]);
    refalrts::reinit_close_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[27], context[31] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[5], context[25] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[6], context[24] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec-CheckSentensePattern/4 t.SpecPattern#1/5 (/9 # False/11 e.Messages#1/7 )/10 e.Anything#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Messages#1 as range 7
  // closed e.Anything#1 as range 2
  //DEBUG: t.SpecPattern#1: 5
  //DEBUG: e.Messages#1: 7
  //DEBUG: e.Anything#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidBodyForSpec-CheckSentensePattern/4 t.SpecPattern#1/5 {REMOVED TILE} e.Anything#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # False/11 AsIs: e.Messages#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidBodyForSpecm_CheckSentensePattern("ValidBodyForSpec-CheckSentensePattern", COOKIE1_, COOKIE2_, func_ValidBodyForSpecm_CheckSentensePattern);


static refalrts::FnResult func_CheckSpecm_VarTypeMatching(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & CheckSpec-VarTypeMatching/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpec-VarTypeMatching/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & CheckSpec-VarTypeMatching/4 (/7 (/19 # TkVariable/21 s.Mode#1/22 e.Val#1/17 )/20 )/8 (/11 s.Mode#1/23 e.Var#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left( identifiers[ident_TkVariable], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[23], context[22], context[15], context[16] ) )
      continue;
    // closed e.Val#1 as range 17
    // closed e.Var#1 as range 15
    //DEBUG: s.Mode#1: 22
    //DEBUG: e.Val#1: 17
    //DEBUG: e.Var#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckSpec-VarTypeMatching/4 (/7 (/19 # TkVariable/21 s.Mode#1/22 e.Val#1/17 )/20 )/8 (/11 s.Mode#1/23 e.Var#1/15 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpec-VarTypeMatching/4 (/7 e.Val#1/5 )/8 (/11 e.Var#1/9 )/12 >/1
  // closed e.Val#1 as range 5
  // closed e.Var#1 as range 9
  //DEBUG: e.Val#1: 5
  //DEBUG: e.Var#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpec-VarTypeMatching/4 (/7 e.Val#1/5 )/8 (/11 e.Var#1/9 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecm_VarTypeMatching("CheckSpec-VarTypeMatching", COOKIE1_, COOKIE2_, func_CheckSpecm_VarTypeMatching);


static refalrts::FnResult func_CheckSpecm_RepeatingVarInStaticParams(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CheckSpec-RepeatingVarInStaticParams/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckSpec-RepeatingVarInStaticParams/4 e.ExtractedVars-B#1/7 (/13 s.Mode#1/15 '_'/16 e.Index#1/11 )/14 e.ExtractedVars-E#1/9 >/1
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
      // closed e.ExtractedVars-E#1 as range 9
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[16] = refalrts::char_left( '_', context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.Index#1 as range 11
      //DEBUG: e.ExtractedVars-B#1: 7
      //DEBUG: e.ExtractedVars-E#1: 9
      //DEBUG: s.Mode#1: 15
      //DEBUG: e.Index#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CheckSpec-RepeatingVarInStaticParams/4 {REMOVED TILE} (/13 s.Mode#1/15 '_'/16 e.Index#1/11 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.ExtractedVars-B#1/7 } Tile{ AsIs: e.ExtractedVars-E#1/9 } Tile{ ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSpec-RepeatingVarInStaticParams/4 e.ExtractedVars-B#1/7 (/13 e.Var#1/11 )/14 e.ExtractedVars-M#1/15 (/21 e.Var#1/23 )/22 e.ExtractedVars-E#1/17 >/1
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
      // closed e.Var#1 as range 11
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[17] = context[9];
        context[18] = context[10];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        if( ! refalrts::repeated_evar_left( vm, context[23], context[24], context[11], context[12], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        // closed e.ExtractedVars-E#1 as range 17
        //DEBUG: e.ExtractedVars-B#1: 7
        //DEBUG: e.Var#1: 11
        //DEBUG: e.ExtractedVars-M#1: 15
        //DEBUG: e.ExtractedVars-E#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/21 e.Var#1/23 )/22 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/4 AsIs: e.ExtractedVars-B#1/7 AsIs: (/13 AsIs: e.Var#1/11 AsIs: )/14 } Tile{ AsIs: e.ExtractedVars-M#1/15 } Tile{ AsIs: e.ExtractedVars-E#1/17 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_False]);
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[4], context[14] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[15], context[16], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpec-RepeatingVarInStaticParams/4 e.ExtractedVars#1/2 >/1
  // closed e.ExtractedVars#1 as range 2
  //DEBUG: e.ExtractedVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & CheckSpec-RepeatingVarInStaticParams/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.ExtractedVars#1/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecm_RepeatingVarInStaticParams("CheckSpec-RepeatingVarInStaticParams", COOKIE1_, COOKIE2_, func_CheckSpecm_RepeatingVarInStaticParams);


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
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSpecStaticVar("IsSpecStaticVar", COOKIE1_, COOKIE2_, func_IsSpecStaticVar);


static refalrts::FnResult func_SeparateDefines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & SeparateDefines/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoMapAccum@1/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z1]);
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

static refalrts::NativeReference nat_ref_SeparateDefines("SeparateDefines", COOKIE1_, COOKIE2_, func_SeparateDefines);


static refalrts::FnResult func_CheckDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckDeclarations/4 (/7 e.WarningIds#1/5 )/8 e.Declarations#1/2 >/1
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
  // closed e.WarningIds#1 as range 5
  // closed e.Declarations#1 as range 2
  //DEBUG: e.WarningIds#1: 5
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.WarningIds#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 } Tile{ HalfReuse: & CleanupValidEntry/8 AsIs: e.Declarations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_CleanupValidEntry]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckDeclarations("CheckDeclarations", COOKIE1_, COOKIE2_, func_CheckDeclarations);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FindInvalidDriveInline=3/4 (/7 e.InvalidDriveInline#4/5 )/8 e.Declarations#4/2 >/1
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
  // closed e.InvalidDriveInline#4 as range 5
  // closed e.Declarations#4 as range 2
  //DEBUG: e.InvalidDriveInline#4: 5
  //DEBUG: e.Declarations#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@7/4 } Tile{ AsIs: e.InvalidDriveInline#4/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Declarations#4/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A3("FindInvalidDriveInline=3", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A3);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A3L1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FindInvalidDriveInline=3\1$1=2/4 t.Definition#4/5 e.DriveInline#6/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.DriveInline#6 as range 2
  //DEBUG: t.Definition#4: 5
  //DEBUG: e.DriveInline#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.DriveInline#6/2 } Tile{ HalfReuse: )/4 AsIs: t.Definition#4/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A3L1S1A2("FindInvalidDriveInline=3\\1$1=2", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A3L1S1A2);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A3L1S1A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindInvalidDriveInline=3\1$1=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidDriveInline=3\1$1=2\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & FindInvalidDriveInline=3\1$1=2\1/4 (/7 e.Name#5/11 )/8 (/9 s.Label#6/17 t.SrcPos#6/18 e.Name#5/15 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.Name#5 as range 11
    if( ! refalrts::repeated_evar_right( vm, context[15], context[16], context[11], context[12], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Name#5: 11
    //DEBUG: s.Label#6: 17
    //DEBUG: t.SrcPos#6: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline=3\1$1=2\1/4 (/7 e.Name#5/11 )/8 (/9 s.Label#6/17 t.SrcPos#6/18 e.Name#5/15 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidDriveInline=3\1$1=2\1/4 (/7 e.Name#5/5 )/8 t.DriveInline#6/9 >/1
  // closed e.Name#5 as range 5
  //DEBUG: t.DriveInline#6: 9
  //DEBUG: e.Name#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline=3\1$1=2\1/4 (/7 e.Name#5/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.DriveInline#6/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A3L1S1A2L1("FindInvalidDriveInline=3\\1$1=2\\1", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A3L1S1A2L1);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & FindInvalidDriveInline=3\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidDriveInline=3\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & FindInvalidDriveInline=3\1/4 (/7 e.DriveInline#4/11 )/8 t.Definition#4/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    // closed e.DriveInline#4 as range 11
    //DEBUG: t.Definition#4: 9
    //DEBUG: e.DriveInline#4: 11
    //9: t.Definition#4
    //11: e.DriveInline#4
    //16: t.Definition#4

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindInvalidDriveInline_A3L1S1C1]);
    refalrts::copy_stvar(vm, context[16], context[9]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & FindInvalidDriveInline=3\1$1?1/17 (/20 # Define/22 t.SrcPosDefine#5/23 s.ScopeClass#5/25 e.Name#5/18 )/21 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_Define], context[18], context[19] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      context[24] = refalrts::tvar_left( context[23], context[18], context[19] );
      if( ! context[24] )
        continue;
      if( ! refalrts::svar_left( context[25], context[18], context[19] ) )
        continue;
      // closed e.Name#5 as range 18
      //DEBUG: t.Definition#4: 9
      //DEBUG: e.DriveInline#4: 11
      //DEBUG: t.SrcPosDefine#5: 23
      //DEBUG: s.ScopeClass#5: 25
      //DEBUG: e.Name#5: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & FindInvalidDriveInline=3\1/4 (/7 {REMOVED TILE} {REMOVED TILE} # Define/22 t.SrcPosDefine#5/23 s.ScopeClass#5/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & FindInvalidDriveInline=3\1$1=2/8 AsIs: t.Definition#4/9 AsIs: </13 Reuse: & Map@8/17 AsIs: (/20 } Tile{ AsIs: e.Name#5/18 } Tile{ AsIs: )/21 } Tile{ AsIs: e.DriveInline#4/11 } Tile{ AsIs: >/14 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_FindInvalidDriveInline_A3L1S1A2]);
      refalrts::update_name(context[17], functions[efunc_gen_Map_Z8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[8], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidDriveInline=3\1/4 (/7 e.DriveInline#4/5 )/8 t.OtherDeclaration#4/9 >/1
  // closed e.DriveInline#4 as range 5
  //DEBUG: t.OtherDeclaration#4: 9
  //DEBUG: e.DriveInline#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline=3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.DriveInline#4/5 AsIs: )/8 AsIs: t.OtherDeclaration#4/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A3L1("FindInvalidDriveInline=3\\1", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A3L1);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindInvalidDriveInline=2/4 (/7 e.DriveInline#2/5 )/8 e.Declarations#3/2 >/1
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
  // closed e.DriveInline#2 as range 5
  // closed e.Declarations#3 as range 2
  //DEBUG: e.DriveInline#2: 5
  //DEBUG: e.Declarations#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindInvalidDriveInline=3/10 Tile{ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: (/7 AsIs: e.DriveInline#2/5 AsIs: )/8 } (/11 )/12 Tile{ AsIs: e.Declarations#3/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindInvalidDriveInline_A3]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
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

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A2("FindInvalidDriveInline=2", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A2);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A2L1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & FindInvalidDriveInline=2\1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidDriveInline=2\1$1:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & FindInvalidDriveInline=2\1$1:1/4 (/7 e.Name#3/9 )/8 e._#4/13 (/19 s.Label#4/23 t.SrcPos#4/24 e.Name#3/21 )/20 e._0#4/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Name#3 as range 9
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
      if( ! refalrts::repeated_evar_right( vm, context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      // closed e._0#4 as range 15
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
      if( ! context[25] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: e.Name#3: 9
      //DEBUG: e._#4: 13
      //DEBUG: e._0#4: 15
      //DEBUG: s.Label#4: 23
      //DEBUG: t.SrcPos#4: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e._#4/13 {REMOVED TILE} s.Label#4/23 {REMOVED TILE} e.Name#3/21 )/20 e._0#4/15 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Error/19 } Tile{ AsIs: t.SrcPos#4/24 } Tile{ HalfReuse: # NativeOptimizable/4 HalfReuse: s.Label4 #23/7 AsIs: e.Name#3/9 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[19], identifiers[ident_Error]);
      refalrts::reinit_ident(context[4], identifiers[ident_NativeOptimizable]);
      refalrts::reinit_svar( context[7], context[23] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[8] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidDriveInline=2\1$1:1/4 (/7 e.Name#3/5 )/8 e._#4/2 >/1
  // closed e.Name#3 as range 5
  // closed e._#4 as range 2
  //DEBUG: e.Name#3: 5
  //DEBUG: e._#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline=2\1$1:1/4 (/7 e.Name#3/5 )/8 e._#4/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A2L1S1B1("FindInvalidDriveInline=2\\1$1:1", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A2L1S1B1);


static refalrts::FnResult func_gen_FindInvalidDriveInline_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindInvalidDriveInline=1/4 (/7 e.DriveInline#2/5 )/8 e.Declarations#2/2 >/1
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
  // closed e.DriveInline#2 as range 5
  // closed e.Declarations#2 as range 2
  //DEBUG: e.DriveInline#2: 5
  //DEBUG: e.Declarations#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FindInvalidDriveInline=2/10 (/11 e.DriveInline#2/5/12 )/14 Tile{ AsIs: </0 Reuse: & Map@9/4 AsIs: (/7 AsIs: e.DriveInline#2/5 AsIs: )/8 AsIs: e.Declarations#2/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindInvalidDriveInline_A2]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_A1("FindInvalidDriveInline=1", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_A1);


static refalrts::FnResult func_FindInvalidDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindInvalidDriveInline/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInvalidDriveInline=1/4 } </5 & DoMapAccum@4/6 (/7 )/8 (/9 )/10 Tile{ AsIs: e.Declarations#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z4]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A1]);
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

static refalrts::NativeReference nat_ref_FindInvalidDriveInline("FindInvalidDriveInline", COOKIE1_, COOKIE2_, func_FindInvalidDriveInline);


static refalrts::FnResult func_CleanupValidEntry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & CleanupValidEntry/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidEntry/4 e.Declarations-B#1/7 (/13 # Entry/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 e.Declarations-M#1/18 (/24 # Define/26 t.SrcPosDefine#1/29 s.ScopeClass#1/31 e.Name#1/27 )/25 e.Declarations-E#1/20 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Entry], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Name#1 as range 11
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[9];
        context[21] = context[10];
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
        if( ! context[24] )
          continue;
        refalrts::bracket_pointers(context[24], context[25]);
        context[26] = refalrts::ident_left( identifiers[ident_Define], context[22], context[23] );
        if( ! context[26] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[27], context[28], context[11], context[12], context[22], context[23] ) )
          continue;
        // closed e.Declarations-E#1 as range 20
        context[30] = refalrts::tvar_left( context[29], context[22], context[23] );
        if( ! context[30] )
          continue;
        if( ! refalrts::svar_left( context[31], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosEntry#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 18
        //DEBUG: e.Declarations-E#1: 20
        //DEBUG: t.SrcPosDefine#1: 29
        //DEBUG: s.ScopeClass#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} t.SrcPosEntry#1/16 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/31 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidEntry/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/18 } Tile{ AsIs: (/24 AsIs: # Define/26 AsIs: t.SrcPosDefine#1/29 } Tile{ Reuse: # GN-Entry/15 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: )/25 AsIs: e.Declarations-E#1/20 AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_GNm_Entry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_evar( res, context[24], context[30] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidEntry/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 s.ScopeClass#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Entry/27 t.SrcPosEntry#1/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Entry], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosEntry#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.ScopeClass#1/18 e.Name#1/11 )/14 {REMOVED TILE} (/25 {REMOVED TILE} t.SrcPosEntry#1/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidEntry/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 } Tile{ Reuse: # GN-Entry/27 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[27], identifiers[ident_GNm_Entry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::splice_to_freelist_open( vm, context[17], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidEntry/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidEntry/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidEntry("CleanupValidEntry", COOKIE1_, COOKIE2_, func_CleanupValidEntry);


static refalrts::FnResult func_FindInvalidEntry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindInvalidEntry/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@10/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInvalidEntry("FindInvalidEntry", COOKIE1_, COOKIE2_, func_FindInvalidEntry);


static refalrts::FnResult func_CleanupValidForwards(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & CleanupValidForwards/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPosDefine#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosForward#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosDefine#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidForwards/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: (/25 AsIs: # Define/27 AsIs: t.SrcPosDefine#1/31 AsIs: # GN-Local/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidForwards/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Declare], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosForward#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: # GN-Local/18 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidForwards/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidForwards/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidForwards("CleanupValidForwards", COOKIE1_, COOKIE2_, func_CleanupValidForwards);


static refalrts::FnResult func_FindInvalidForwards(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & FindInvalidForwards/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPosDefine#1/31 # GN-Entry/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Entry], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosForward#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosDefine#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPosForward#1/16 Reuse: # ForwardForEntry/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 AsIs: # Define/27 AsIs: t.SrcPosDefine#1/31 AsIs: # GN-Entry/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_Error]);
        refalrts::update_ident(context[18], identifiers[ident_ForwardForEntry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 # GN-Entry/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Declare/27 t.SrcPosForward#1/31 # GN-Local/30 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Declare], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        context[30] = refalrts::ident_right( identifiers[ident_GNm_Local], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[32] = refalrts::tvar_left( context[31], context[23], context[24] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPosDefine#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPosForward#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: # GN-Entry/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPosForward#1/31 Reuse: # ForwardForEntry/30 AsIs: e.Name#1/28 AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::update_ident(context[30], identifiers[ident_ForwardForEntry]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindInvalidForwards/4 e.Declarations-B#1/7 (/13 # Declare/15 t.SrcPosForward#1/16 # GN-Local/18 e.Name#1/11 )/14 e.Declarations-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Declare], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Declarations-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_GNm_Local], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Name#1 as range 11
      //DEBUG: e.Declarations-B#1: 7
      //DEBUG: e.Declarations-E#1: 9
      //DEBUG: t.SrcPosForward#1: 16
      //DEBUG: e.Name#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FindInvalidForwards/4 AsIs: e.Declarations-B#1/7 AsIs: (/13 Reuse: # Error/15 AsIs: t.SrcPosForward#1/16 Reuse: # ForwardNotDefined/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-E#1/9 AsIs: >/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_Error]);
      refalrts::update_ident(context[18], identifiers[ident_ForwardNotDefined]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidForwards/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidForwards/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInvalidForwards("FindInvalidForwards", COOKIE1_, COOKIE2_, func_FindInvalidForwards);


static refalrts::FnResult func_gen_FindFinalInitEntry_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & FindFinalInitEntry\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindFinalInitEntry\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindFinalInitEntry\1/4 (/5 # Define/9 t.ScrPosDefine#2/10 # GN-Entry/12 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Define], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::ident_left( identifiers[ident_GNm_Entry], context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.ScrPosDefine#2: 10
    //DEBUG: e.Name#2: 7
    //7: e.Name#2
    //10: t.ScrPosDefine#2
    //19: e.Name#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindFinalInitEntry_L1S1C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_OneOf]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], "__FINAL", 7);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], "__INIT", 6);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[26], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
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
      // </13 & FindFinalInitEntry\1$1?1/17 # True/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: t.ScrPosDefine#2: 10
      //DEBUG: e.Name#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindFinalInitEntry\1/4 {REMOVED TILE} {REMOVED TILE} >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Define/9 AsIs: t.ScrPosDefine#2/10 AsIs: # GN-Entry/12 AsIs: e.Name#2/7 AsIs: )/6 HalfReuse: (/13 HalfReuse: # Error/17 } t.ScrPosDefine#2/10/19 Tile{ Reuse: # InitFinalEntry/18 } e.Name#2/7/21 Tile{ HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[19], context[20], context[10], context[11]);
      refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::reinit_ident(context[17], identifiers[ident_Error]);
      refalrts::update_ident(context[18], identifiers[ident_InitFinalEntry]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[13], context[1] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[5], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFinalInitEntry\1/4 t.OtherDeclaraion#2/5 >/1
  //DEBUG: t.OtherDeclaraion#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindFinalInitEntry\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherDeclaraion#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFinalInitEntry_L1("FindFinalInitEntry\\1", COOKIE1_, COOKIE2_, func_gen_FindFinalInitEntry_L1);


static refalrts::FnResult func_FindFinalInitEntry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindFinalInitEntry/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@11/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFinalInitEntry("FindFinalInitEntry", COOKIE1_, COOKIE2_, func_FindFinalInitEntry);


static refalrts::FnResult func_CheckRedefinitions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CheckRedefinitions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckRedefinitions/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPos1#1/16 s.ScopeClass1#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 # Define/27 t.SrcPos2#1/30 s.ScopeClass2#1/32 e.Name#1/28 )/26 e.Declarations-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Define], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Name#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_Define], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::svar_left( context[32], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Declarations-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.ScopeClass1#1: 18
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 19
        //DEBUG: e.Declarations-E#1: 21
        //DEBUG: t.SrcPos2#1: 30
        //DEBUG: s.ScopeClass2#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass2#1/32 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: </0 AsIs: & CheckRedefinitions/4 } Tile{ AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPos1#1/16 AsIs: s.ScopeClass1#1/18 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Declarations-M#1/19 AsIs: (/25 Reuse: # Error/27 AsIs: t.SrcPos2#1/30 } # AlreadyDefined/33 Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/26 AsIs: e.Declarations-E#1/21 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[33], identifiers[ident_AlreadyDefined]);
        refalrts::update_ident(context[27], identifiers[ident_Error]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[13], context[31] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckRedefinitions/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckRedefinitions/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRedefinitions("CheckRedefinitions", COOKIE1_, COOKIE2_, func_CheckRedefinitions);


static refalrts::FnResult func_CheckFunctionBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckFunctionBody/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckFunctionBody/4 (/7 e.new#1/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & CheckFunctionBody/4 (/7 s.new#2/11 e.new#3/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 9
    do {
      // </0 & CheckFunctionBody/4 (/7 # Sentences/11 e.#0/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Sentences], context[11] ) )
        continue;
      // closed e.#0 as range 12
      //DEBUG: e.#0: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # Sentences/11 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@12/4 } Tile{ AsIs: e.#0/12 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z12]);
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

    // </0 & CheckFunctionBody/4 (/7 # NativeBody/11 e.#0/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[11] ) )
      continue;
    // closed e.#0 as range 12
    //DEBUG: e.#0: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckFunctionBody/4 (/7 # NativeBody/11 e.#0/12 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckFunctionBody/4 (/7 e.Body#1/5 )/8 >/1
  // closed e.Body#1 as range 5
  //DEBUG: e.Body#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec*2/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBodyRec_D2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckFunctionBody("CheckFunctionBody", COOKIE1_, COOKIE2_, func_CheckFunctionBody);


static refalrts::FnResult func_CheckFunctionBodyRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckFunctionBodyRec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckFunctionBodyRec/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/10 )/8 # Sentences/9 e.Sentences#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[9] ) )
      continue;
    // closed e.ScopeVars#1 as range 10
    // closed e.Sentences#1 as range 12
    //DEBUG: e.ScopeVars#1: 10
    //DEBUG: e.Sentences#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Sentences/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@13/4 AsIs: (/7 AsIs: e.ScopeVars#1/10 AsIs: )/8 } Tile{ AsIs: e.Sentences#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 5
  // closed e.Code#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckFunctionBodyRec/4 (/7 e.ScopeVars#1/5 )/8 # NativeBody/9 e.Code#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckFunctionBodyRec("CheckFunctionBodyRec", COOKIE1_, COOKIE2_, func_CheckFunctionBodyRec);


static refalrts::FnResult func_gen_CheckSentence_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CheckSentence=4/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.AssignmentsFunctionsAndErrors#3/9 )/12 (/15 e.ResultFunctionsAndErrors#4/13 )/16 e.BlocksFunctionsAndErrors#5/2 >/1
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
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.AssignmentsFunctionsAndErrors#3 as range 9
  // closed e.ResultFunctionsAndErrors#4 as range 13
  // closed e.BlocksFunctionsAndErrors#5 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 9
  //DEBUG: e.ResultFunctionsAndErrors#4: 13
  //DEBUG: e.BlocksFunctionsAndErrors#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSentence=4/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.PatternFunctionsAndErrors#2/5 } Tile{ AsIs: e.AssignmentsFunctionsAndErrors#3/9 } Tile{ AsIs: e.ResultFunctionsAndErrors#4/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#5/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A4("CheckSentence=4", COOKIE1_, COOKIE2_, func_gen_CheckSentence_A4);


static refalrts::FnResult func_gen_CheckSentence_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & CheckSentence=3/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.AssignmentsFunctionsAndErrors#3/9 )/12 (/15 e.ScopeVars#3/13 )/16 (/19 e.Blocks#1/17 )/20 e.ResultFunctionsAndErrors#4/2 >/1
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
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.AssignmentsFunctionsAndErrors#3 as range 9
  // closed e.ScopeVars#3 as range 13
  // closed e.Blocks#1 as range 17
  // closed e.ResultFunctionsAndErrors#4 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 9
  //DEBUG: e.ScopeVars#3: 13
  //DEBUG: e.Blocks#1: 17
  //DEBUG: e.ResultFunctionsAndErrors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=4/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.AssignmentsFunctionsAndErrors#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#4/2 } Tile{ AsIs: )/16 } </21 & Map@14/22 (/23 Tile{ AsIs: e.ScopeVars#3/13 } Tile{ HalfReuse: )/19 AsIs: e.Blocks#1/17 HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z14]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A4]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[23], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A3("CheckSentence=3", COOKIE1_, COOKIE2_, func_gen_CheckSentence_A3);


static refalrts::FnResult func_gen_CheckSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & CheckSentence=2/4 (/7 e.PatternFunctionsAndErrors#2/5 )/8 (/11 e.Blocks#1/9 )/12 (/15 e.Result#1/13 )/16 (/19 e.ScopeVars#3/17 )/20 e.AssignmentsFunctionsAndErrors#3/2 >/1
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
  // closed e.PatternFunctionsAndErrors#2 as range 5
  // closed e.Blocks#1 as range 9
  // closed e.Result#1 as range 13
  // closed e.ScopeVars#3 as range 17
  // closed e.AssignmentsFunctionsAndErrors#3 as range 2
  //DEBUG: e.PatternFunctionsAndErrors#2: 5
  //DEBUG: e.Blocks#1: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.ScopeVars#3: 17
  //DEBUG: e.AssignmentsFunctionsAndErrors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=3/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.AssignmentsFunctionsAndErrors#3/2 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#3/17 AsIs: )/20 } (/21 Tile{ AsIs: e.Blocks#1/9 } )/22 </23 Tile{ HalfReuse: & CheckResult/12 AsIs: (/15 } e.ScopeVars#3/17/24 )/26 </27 & Map@15/28 Tile{ AsIs: e.Result#1/13 } >/29 >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_gen_Map_Z15]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A3]);
  refalrts::reinit_name(context[12], functions[efunc_CheckResult]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[15], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A2("CheckSentence=2", COOKIE1_, COOKIE2_, func_gen_CheckSentence_A2);


static refalrts::FnResult func_gen_CheckSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & CheckSentence=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSentence=1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & CheckSentence=1/4 (/7 e.Blocks#1/21 )/8 (/11 e.Result#1/23 )/12 (/15 )/16 (/19 e.ScopeVars#2/25 )/20 e.PatternFunctionsAndErrors#2/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Blocks#1 as range 21
    // closed e.Result#1 as range 23
    // closed e.ScopeVars#2 as range 25
    // closed e.PatternFunctionsAndErrors#2 as range 27
    //DEBUG: e.Blocks#1: 21
    //DEBUG: e.Result#1: 23
    //DEBUG: e.ScopeVars#2: 25
    //DEBUG: e.PatternFunctionsAndErrors#2: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=3/4 AsIs: (/7 } Tile{ AsIs: e.PatternFunctionsAndErrors#2/27 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#2/25 AsIs: )/20 } (/29 Tile{ AsIs: e.Blocks#1/21 } )/30 </31 Tile{ HalfReuse: & CheckResult/8 AsIs: (/11 } e.ScopeVars#2/25/32 )/34 </35 & Map/36 & FlatExpr\1/37 Tile{ AsIs: e.Result#1/23 } >/38 >/39 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_Map]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_FlatExpr_L1]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A3]);
    refalrts::reinit_name(context[8], functions[efunc_CheckResult]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[11], context[34] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckSentence=1/4 (/7 e.Blocks#1/21 )/8 (/11 e.Result#1/23 )/12 (/15 (/33 s.ChainType#1/47 (/45 e.3#0/43 )/46 (/41 e.5#0/39 )/42 (/37 e.7#0/35 )/38 )/34 e.#0/25 )/16 (/19 e.ScopeVars#2/27 )/20 e.PatternFunctionsAndErrors#2/29 >/1
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
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_right( context[35], context[36], context[31], context[32] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_right( context[39], context[40], context[31], context[32] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    context[43] = 0;
    context[44] = 0;
    context[45] = refalrts::brackets_right( context[43], context[44], context[31], context[32] );
    if( ! context[45] )
      continue;
    refalrts::bracket_pointers(context[45], context[46]);
    // closed e.Blocks#1 as range 21
    // closed e.Result#1 as range 23
    // closed e.3#0 as range 43
    // closed e.5#0 as range 39
    // closed e.7#0 as range 35
    // closed e.#0 as range 25
    // closed e.ScopeVars#2 as range 27
    // closed e.PatternFunctionsAndErrors#2 as range 29
    if( ! refalrts::svar_left( context[47], context[31], context[32] ) )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: e.Blocks#1: 21
    //DEBUG: e.Result#1: 23
    //DEBUG: e.3#0: 43
    //DEBUG: e.5#0: 39
    //DEBUG: e.7#0: 35
    //DEBUG: e.#0: 25
    //DEBUG: e.ScopeVars#2: 27
    //DEBUG: e.PatternFunctionsAndErrors#2: 29
    //DEBUG: s.ChainType#1: 47

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.ChainType#1/47 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & CheckSentence=2/48 (/49 Tile{ AsIs: e.PatternFunctionsAndErrors#2/29 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/23 AsIs: )/12 HalfReuse: </15 HalfReuse: & DoCheckAssignments$2=1@1/33 } Tile{ HalfReuse: (/34 AsIs: e.#0/25 AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#2/27 AsIs: )/20 } Tile{ AsIs: (/45 } Tile{ AsIs: e.7#0/35 } Tile{ AsIs: )/46 AsIs: (/41 AsIs: e.5#0/39 AsIs: )/42 HalfReuse: </37 } & CheckResult/50 (/51 e.ScopeVars#2/27/52 Tile{ AsIs: )/38 } </54 & Map@15/55 Tile{ AsIs: e.3#0/43 } >/56 >/57 >/58 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[48], functions[efunc_gen_CheckSentence_A2]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_CheckResult]);
    refalrts::alloc_open_bracket(vm, context[51]);
    refalrts::copy_evar(vm, context[52], context[53], context[27], context[28]);
    refalrts::alloc_open_call(vm, context[54]);
    refalrts::alloc_name(vm, context[55], functions[efunc_gen_Map_Z15]);
    refalrts::alloc_close_call(vm, context[56]);
    refalrts::alloc_close_call(vm, context[57]);
    refalrts::alloc_close_call(vm, context[58]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[33], functions[efunc_gen_DoCheckAssignments_S2A1Z1]);
    refalrts::reinit_open_bracket(context[34]);
    refalrts::reinit_open_call(context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[58] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[57] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[56] );
    refalrts::push_stack( vm, context[54] );
    refalrts::link_brackets( context[51], context[38] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[45], context[46] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[34], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[49], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[56], context[58] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[46], context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[34], context[20] );
    res = refalrts::splice_evar( res, context[4], context[33] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSentence=1/4 (/7 e.Blocks#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Assignments#1/13 )/16 (/19 e.ScopeVars#2/17 )/20 e.PatternFunctionsAndErrors#2/2 >/1
  // closed e.Blocks#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Assignments#1 as range 13
  // closed e.ScopeVars#2 as range 17
  // closed e.PatternFunctionsAndErrors#2 as range 2
  //DEBUG: e.Blocks#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Assignments#1: 13
  //DEBUG: e.ScopeVars#2: 17
  //DEBUG: e.PatternFunctionsAndErrors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & CheckSentence=2/21 (/22 Tile{ AsIs: e.PatternFunctionsAndErrors#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </15 } & DoCheckAssignments@0/23 (/24 Tile{ AsIs: e.Assignments#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#2/17 AsIs: )/20 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_CheckSentence_A2]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoCheckAssignments_Z0]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[24], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[22], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentence_A1("CheckSentence=1", COOKIE1_, COOKIE2_, func_gen_CheckSentence_A1);


static refalrts::FnResult func_CheckSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & CheckSentence/4 e.ScopeVars#1/2 (/7 (/11 e.Pattern#1/9 )/12 e.Assignments#1/5 (/19 e.Result#1/17 )/20 (/15 e.Blocks#1/13 )/16 )/8 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.ScopeVars#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Assignments#1 as range 5
  // closed e.Result#1 as range 17
  // closed e.Blocks#1 as range 13
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Blocks#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=1/4 } (/21 Tile{ AsIs: e.Blocks#1/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.Assignments#1/5 } )/22 </23 Tile{ HalfReuse: & CheckPattern/7 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#1/2 } )/24 </25 & Map@15/26 Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: >/16 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z15]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A1]);
  refalrts::reinit_name(context[7], functions[efunc_CheckPattern]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[11], context[24] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[21], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[15] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentence("CheckSentence", COOKIE1_, COOKIE2_, func_CheckSentence);


static refalrts::FnResult func_CheckBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckBlocks/4 (/7 e.ScopeVars#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@14/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckBlocks("CheckBlocks", COOKIE1_, COOKIE2_, func_CheckBlocks);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & DoCheckAssignments$2=3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=3/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 e.new#6/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 21
  // closed e.new#6 as range 2
  do {
    // </0 & DoCheckAssignments$2=3/4 (/7 )/8 (/11 e.Errors#1/25 )/12 (/15 e.ResultFunctionsAndErrors#2/27 )/16 (/19 e.BlocksFunctionsAndErrors#3/29 )/20 (/23 e.ScopeVars#4/31 )/24 e.PatternFunctionsAndErrors#4/33 >/1
    context[25] = context[9];
    context[26] = context[10];
    context[27] = context[13];
    context[28] = context[14];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = context[2];
    context[34] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Errors#1 as range 25
    // closed e.ResultFunctionsAndErrors#2 as range 27
    // closed e.BlocksFunctionsAndErrors#3 as range 29
    // closed e.ScopeVars#4 as range 31
    // closed e.PatternFunctionsAndErrors#4 as range 33
    //DEBUG: e.Errors#1: 25
    //DEBUG: e.ResultFunctionsAndErrors#2: 27
    //DEBUG: e.BlocksFunctionsAndErrors#3: 29
    //DEBUG: e.ScopeVars#4: 31
    //DEBUG: e.PatternFunctionsAndErrors#4: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckAssignments$2=3/4 (/7 )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/23 AsIs: e.ScopeVars#4/31 AsIs: )/24 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/27 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/29 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/33 } Tile{ ]] }
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckAssignments$2=3/4 (/7 (/39 s.ChainType#1/53 (/51 e.3#0/49 )/52 (/47 e.5#0/45 )/48 (/43 e.7#0/41 )/44 )/40 e.#0/25 )/8 (/11 e.Errors#1/27 )/12 (/15 e.ResultFunctionsAndErrors#2/29 )/16 (/19 e.BlocksFunctionsAndErrors#3/31 )/20 (/23 e.ScopeVars#4/33 )/24 e.PatternFunctionsAndErrors#4/35 >/1
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
    context[37] = 0;
    context[38] = 0;
    context[39] = refalrts::brackets_left( context[37], context[38], context[25], context[26] );
    if( ! context[39] )
      continue;
    refalrts::bracket_pointers(context[39], context[40]);
    context[41] = 0;
    context[42] = 0;
    context[43] = refalrts::brackets_right( context[41], context[42], context[37], context[38] );
    if( ! context[43] )
      continue;
    refalrts::bracket_pointers(context[43], context[44]);
    context[45] = 0;
    context[46] = 0;
    context[47] = refalrts::brackets_right( context[45], context[46], context[37], context[38] );
    if( ! context[47] )
      continue;
    refalrts::bracket_pointers(context[47], context[48]);
    context[49] = 0;
    context[50] = 0;
    context[51] = refalrts::brackets_right( context[49], context[50], context[37], context[38] );
    if( ! context[51] )
      continue;
    refalrts::bracket_pointers(context[51], context[52]);
    // closed e.3#0 as range 49
    // closed e.5#0 as range 45
    // closed e.7#0 as range 41
    // closed e.#0 as range 25
    // closed e.Errors#1 as range 27
    // closed e.ResultFunctionsAndErrors#2 as range 29
    // closed e.BlocksFunctionsAndErrors#3 as range 31
    // closed e.ScopeVars#4 as range 33
    // closed e.PatternFunctionsAndErrors#4 as range 35
    if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
      continue;
    if( ! refalrts::empty_seq( context[37], context[38] ) )
      continue;
    //DEBUG: e.3#0: 49
    //DEBUG: e.5#0: 45
    //DEBUG: e.7#0: 41
    //DEBUG: e.#0: 25
    //DEBUG: e.Errors#1: 27
    //DEBUG: e.ResultFunctionsAndErrors#2: 29
    //DEBUG: e.BlocksFunctionsAndErrors#3: 31
    //DEBUG: e.ScopeVars#4: 33
    //DEBUG: e.PatternFunctionsAndErrors#4: 35
    //DEBUG: s.ChainType#1: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ChainType#1/53 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoCheckAssignments$2=1@2/44 HalfReuse: (/40 AsIs: e.#0/25 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/27 AsIs: )/12 AsIs: (/15 AsIs: e.ResultFunctionsAndErrors#2/29 AsIs: )/16 AsIs: (/19 AsIs: e.BlocksFunctionsAndErrors#3/31 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/35 } )/54 Tile{ AsIs: (/51 } e.ScopeVars#4/33/55 )/57 Tile{ AsIs: (/39 } Tile{ AsIs: e.7#0/41 } Tile{ AsIs: )/52 AsIs: (/47 AsIs: e.5#0/45 AsIs: )/48 HalfReuse: </43 } Tile{ Reuse: & CheckResult/4 AsIs: (/7 } Tile{ AsIs: e.ScopeVars#4/33 } Tile{ AsIs: )/24 } </58 & Map@15/59 Tile{ AsIs: e.3#0/49 } >/60 >/61 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[54]);
    refalrts::copy_evar(vm, context[55], context[56], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_open_call(vm, context[58]);
    refalrts::alloc_name(vm, context[59], functions[efunc_gen_Map_Z15]);
    refalrts::alloc_close_call(vm, context[60]);
    refalrts::alloc_close_call(vm, context[61]);
    refalrts::reinit_name(context[44], functions[efunc_gen_DoCheckAssignments_S2A1Z2]);
    refalrts::reinit_open_bracket(context[40]);
    refalrts::reinit_open_call(context[43]);
    refalrts::update_name(context[4], functions[efunc_CheckResult]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[61] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[60] );
    refalrts::push_stack( vm, context[58] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::link_brackets( context[47], context[48] );
    refalrts::link_brackets( context[39], context[52] );
    refalrts::link_brackets( context[51], context[57] );
    refalrts::link_brackets( context[23], context[54] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[40], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[58], context[59] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[52], context[43] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_elem( res, context[57] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_elem( res, context[51] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[44], context[23] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=3/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ResultFunctionsAndErrors#2/13 )/16 (/19 e.BlocksFunctionsAndErrors#3/17 )/20 (/23 e.ScopeVars#4/21 )/24 e.PatternFunctionsAndErrors#4/2 >/1
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ResultFunctionsAndErrors#2 as range 13
  // closed e.BlocksFunctionsAndErrors#3 as range 17
  // closed e.ScopeVars#4 as range 21
  // closed e.PatternFunctionsAndErrors#4 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ResultFunctionsAndErrors#2: 13
  //DEBUG: e.BlocksFunctionsAndErrors#3: 17
  //DEBUG: e.ScopeVars#4: 21
  //DEBUG: e.PatternFunctionsAndErrors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} )/24 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments@0/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#4/21 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Errors#1/9 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/17 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A3("DoCheckAssignments$2=3", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A3);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoCheckAssignments$2=2/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ResultFunctionsAndErrors#2/13 )/16 (/19 e.ScopeVars#1/17 )/20 (/23 e.Pattern#1/21 )/24 e.BlocksFunctionsAndErrors#3/2 >/1
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
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ResultFunctionsAndErrors#2 as range 13
  // closed e.ScopeVars#1 as range 17
  // closed e.Pattern#1 as range 21
  // closed e.BlocksFunctionsAndErrors#3 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ResultFunctionsAndErrors#2: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: e.Pattern#1: 21
  //DEBUG: e.BlocksFunctionsAndErrors#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=3/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.ResultFunctionsAndErrors#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/2 } )/25 </26 & CheckPattern/27 (/28 Tile{ AsIs: e.ScopeVars#1/17 } )/29 Tile{ HalfReuse: </20 HalfReuse: & Map@15/23 AsIs: e.Pattern#1/21 HalfReuse: >/24 } >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_CheckPattern]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[23], functions[efunc_gen_Map_Z15]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[19], context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A2("DoCheckAssignments$2=2", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A2);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoCheckAssignments$2=1/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.Blocks#1/21 )/24 e.ResultFunctionsAndErrors#2/2 >/1
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
  // closed e.Assignments#1 as range 5
  // closed e.Errors#1 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.Blocks#1 as range 21
  // closed e.ResultFunctionsAndErrors#2 as range 2
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Blocks#1: 21
  //DEBUG: e.ResultFunctionsAndErrors#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/2 } )/25 (/26 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: </23 } & Map@14/27 (/28 e.ScopeVars#1/13/29 Tile{ AsIs: )/24 } Tile{ AsIs: e.Blocks#1/21 } >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z14]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2]);
  refalrts::reinit_open_call(context[23]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[28], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[26], context[16] );
  refalrts::link_brackets( context[15], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A1("DoCheckAssignments$2=1", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A1);


static refalrts::FnResult func_DoCheckAssignments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoCheckAssignments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoCheckAssignments/4 (/7 )/8 (/11 e.ScopeVars#1/13 )/12 e.Errors#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.ScopeVars#1 as range 13
    // closed e.Errors#1 as range 15
    //DEBUG: e.ScopeVars#1: 13
    //DEBUG: e.Errors#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckAssignments/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#1/13 AsIs: )/12 } Tile{ AsIs: e.Errors#1/15 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments/4 (/7 (/15 s.ChainType#1/29 (/27 e.Result#1/25 )/28 (/23 e.Blocks#1/21 )/24 (/19 e.Pattern#1/17 )/20 )/16 e.Assignments#1/5 )/8 (/11 e.ScopeVars#1/9 )/12 e.Errors#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[13], context[14] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.Result#1 as range 25
  // closed e.Blocks#1 as range 21
  // closed e.Pattern#1 as range 17
  // closed e.Assignments#1 as range 5
  // closed e.ScopeVars#1 as range 9
  // closed e.Errors#1 as range 2
  if( ! refalrts::svar_left( context[29], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#1: 25
  //DEBUG: e.Blocks#1: 21
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Assignments#1: 5
  //DEBUG: e.ScopeVars#1: 9
  //DEBUG: e.Errors#1: 2
  //DEBUG: s.ChainType#1: 29

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ChainType#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Assignments#1/5 } )/30 Tile{ AsIs: (/27 } Tile{ AsIs: e.Errors#1/2 } Tile{ AsIs: )/28 AsIs: (/23 } e.ScopeVars#1/9/31 Tile{ AsIs: )/24 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: e.Blocks#1/21 } Tile{ HalfReuse: )/15 } </33 Tile{ HalfReuse: & CheckResult/8 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } </34 & Map@15/35 Tile{ AsIs: e.Result#1/25 } >/36 >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z15]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A1]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_name(context[8], functions[efunc_CheckResult]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[15] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[7], context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[16] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[28], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckAssignments("DoCheckAssignments", COOKIE1_, COOKIE2_, func_DoCheckAssignments);


static refalrts::FnResult func_gen_FlatExpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FlatExpr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatExpr\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FlatExpr\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & FlatExpr\1/4 (/5 s.new#4/9 t.new#5/12 t.new#6/14 e.new#7/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[10], context[11] );
      if( ! context[15] )
        continue;
      // closed e.new#7 as range 10
      do {
        // </0 & FlatExpr\1/4 (/5 s.new#8/9 t.new#9/12 s.new#10/14 e.new#11/16 )/6 >/1
        context[16] = context[10];
        context[17] = context[11];
        if( ! refalrts::svar_term( context[14], context[14] ) )
          continue;
        // closed e.new#11 as range 16
        do {
          // </0 & FlatExpr\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
          context[18] = context[16];
          context[19] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 18
          //DEBUG: t.SrcPos#2: 12
          //DEBUG: s.Mode#2: 14
          //DEBUG: e.Index#2: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[5], context[6] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & FlatExpr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/18 )/6 >/1
        context[18] = context[16];
        context[19] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[9] ) )
          continue;
        // closed e.Index#2 as range 18
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: s.Mode#2: 14
        //DEBUG: e.Index#2: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/18 AsIs: )/6 } Tile{ ]] }
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FlatExpr\1/4 (/5 # Symbol/9 # Name/12 t.SrcPos#2/14 e.Name#2/16 )/6 >/1
      context[16] = context[10];
      context[17] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.Name#2 as range 16
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: e.Name#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Name/12 AsIs: t.SrcPos#2/14 AsIs: e.Name#2/16 AsIs: )/6 } Tile{ ]] }
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlatExpr\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
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
      // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.new#4/12 (/16 e.new#5/14 )/17 e.new#6/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.new#5 as range 14
      // closed e.new#6 as range 10
      do {
        // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 # UnnamedADT/22 )/17 e.InBrackets#2/20 )/6 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[10];
        context[21] = context[11];
        context[22] = refalrts::ident_left( identifiers[ident_UnnamedADT], context[18], context[19] );
        if( ! context[22] )
          continue;
        if( ! refalrts::empty_seq( context[18], context[19] ) )
          continue;
        // closed e.InBrackets#2 as range 20
        //DEBUG: t.SrcPos#2: 12
        //DEBUG: e.InBrackets#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 # UnnamedADT/22 )/17 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FlatExpr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/18 )/17 e.InBrackets#2/20 )/6 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[10];
      context[21] = context[11];
      // closed e.Name#2 as range 18
      // closed e.InBrackets#2 as range 20
      //DEBUG: t.SrcPos#2: 12
      //DEBUG: e.Name#2: 18
      //DEBUG: e.InBrackets#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Symbol/5 Reuse: # Name/9 AsIs: t.SrcPos#2/12 } Tile{ AsIs: e.Name#2/18 } Tile{ AsIs: )/17 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@15/6 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[5], identifiers[ident_Symbol]);
      refalrts::update_ident(context[9], identifiers[ident_Name]);
      refalrts::reinit_name(context[6], functions[efunc_gen_Map_Z15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[6] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[4], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FlatExpr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # CallBrackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
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

    // </0 & FlatExpr\1/4 (/5 # Closure/9 e.Sentences#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.Sentences#2 as range 10
    //DEBUG: e.Sentences#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Closure/9 AsIs: e.Sentences#2/10 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatExpr\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatExpr\1/4 t.OtherTerm#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatExpr_L1("FlatExpr\\1", COOKIE1_, COOKIE2_, func_gen_FlatExpr_L1);


static refalrts::FnResult func_FlatExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FlatExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatExpr("FlatExpr", COOKIE1_, COOKIE2_, func_FlatExpr);


static refalrts::FnResult func_gen_CheckPattern_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckPattern$3\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPattern$3\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 t.new#3/14 t.new#4/16 e.new#5/9 )/12 >/1
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
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  do {
    // </0 & CheckPattern$3\1/4 (/7 e.new#6/18 )/8 (/11 s.new#7/13 t.new#8/14 s.new#9/16 e.new#10/20 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::svar_term( context[16], context[16] ) )
      continue;
    // closed e.new#6 as range 18
    // closed e.new#10 as range 20
    do {
      // </0 & CheckPattern$3\1/4 (/7 e.new#11/22 )/8 (/11 # TkVariable/13 t.new#12/14 s.new#13/16 e.new#14/24 )/12 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
        continue;
      // closed e.new#11 as range 22
      // closed e.new#14 as range 24
      do {
        // </0 & CheckPattern$3\1/4 (/7 e.KnownVars-B#2/30 (/36 s.Mode#2/38 e.Index#2/39 )/37 e.KnownVars-E#2/32 )/8 (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.Index#2 as range 28
        context[30] = 0;
        context[31] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[32] = context[26];
          context[33] = context[27];
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
          if( ! context[36] )
            continue;
          refalrts::bracket_pointers(context[36], context[37]);
          if( ! refalrts::repeated_stvar_left( vm, context[38], context[16], context[34], context[35] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[28], context[29], context[34], context[35] ) )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          // closed e.KnownVars-E#2 as range 32
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.Mode#2: 16
          //DEBUG: e.Index#2: 28
          //DEBUG: e.KnownVars-B#2: 30
          //DEBUG: e.KnownVars-E#2: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckPattern$3\1/4 {REMOVED TILE} (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars-B#2/30 AsIs: (/36 AsIs: s.Mode#2/38 AsIs: e.Index#2/39 AsIs: )/37 AsIs: e.KnownVars-E#2/32 AsIs: )/8 } Tile{ ]] }
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[36], context[37] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckPattern$3\1/4 (/7 e.KnownVars#2/26 )/8 (/11 # TkVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/28 )/12 >/1
      context[26] = context[22];
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      // closed e.KnownVars#2 as range 26
      // closed e.Index#2 as range 28
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: s.Mode#2: 16
      //DEBUG: e.KnownVars#2: 26
      //DEBUG: e.Index#2: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckPattern$3\1/4 {REMOVED TILE} (/11 # TkVariable/13 t.SrcPos#2/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/26 HalfReuse: (/8 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/28 AsIs: )/12 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckPattern$3\1/4 (/7 e.KnownVars#2/22 )/8 (/11 # TkNewVariable/13 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/12 >/1
    context[22] = context[18];
    context[23] = context[19];
    context[24] = context[20];
    context[25] = context[21];
    if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[13] ) )
      continue;
    // closed e.KnownVars#2 as range 22
    // closed e.Index#2 as range 24
    //DEBUG: t.SrcPos#2: 14
    //DEBUG: s.Mode#2: 16
    //DEBUG: e.KnownVars#2: 22
    //DEBUG: e.Index#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} t.SrcPos#2/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & FixupKnownVars/7 AsIs: e.KnownVars#2/22 HalfReuse: (/8 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/24 AsIs: )/12 AsIs: >/1 } Tile{ HalfReuse: )/13 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_FixupKnownVars]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::link_brackets( context[0], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckPattern$3\1/4 (/7 e.KnownVars#2/18 )/8 (/11 # Symbol/13 # Name/14 t.SrcPos#2/16 e.Name#2/20 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
      continue;
    // closed e.KnownVars#2 as range 18
    // closed e.Name#2 as range 20
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: e.KnownVars#2: 18
    //DEBUG: e.Name#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckPattern$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/18 AsIs: )/8 AsIs: (/11 AsIs: # Symbol/13 AsIs: # Name/14 AsIs: t.SrcPos#2/16 AsIs: e.Name#2/20 AsIs: )/12 } Tile{ ]] }
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

  // </0 & CheckPattern$3\1/4 (/7 e.KnownVars#2/5 )/8 (/11 # Error/13 t.SrcPos#2/14 s.Type#2/16 e.Info#2/9 )/12 >/1
  if( ! refalrts::svar_term( context[16], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Error], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#2 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: t.SrcPos#2: 14
  //DEBUG: s.Type#2: 16
  //DEBUG: e.KnownVars#2: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckPattern$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.KnownVars#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Error/13 AsIs: t.SrcPos#2/14 AsIs: s.Type#2/16 AsIs: e.Info#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckPattern_S3L1("CheckPattern$3\\1", COOKIE1_, COOKIE2_, func_gen_CheckPattern_S3L1);


static refalrts::FnResult func_CheckPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & CheckPattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckPattern/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckPattern/4 (/7 e.ScopeVars#1/9 )/8 e.Items-B#1/13 (/19 # TkNewVariable/21 t.SrcPos#1/22 s.Mode#1/24 '_'/25 e.Index#1/17 )/20 e.Items-E#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.ScopeVars#1 as range 9
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
      context[21] = refalrts::ident_left( identifiers[ident_TkNewVariable], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.Items-E#1 as range 15
      context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
        continue;
      context[25] = refalrts::char_left( '_', context[17], context[18] );
      if( ! context[25] )
        continue;
      // closed e.Index#1 as range 17
      //DEBUG: e.ScopeVars#1: 9
      //DEBUG: e.Items-B#1: 13
      //DEBUG: e.Items-E#1: 15
      //DEBUG: t.SrcPos#1: 22
      //DEBUG: s.Mode#1: 24
      //DEBUG: e.Index#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckPattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/9 AsIs: )/8 AsIs: e.Items-B#1/13 AsIs: (/19 Reuse: # TkVariable/21 AsIs: t.SrcPos#1/22 AsIs: s.Mode#1/24 AsIs: '_'/25 AsIs: e.Index#1/17 AsIs: )/20 } (/26 # Error/27 t.SrcPos#1/22/28 # UnnamedNewVariable/30 s.Mode#1/24/31 '_'/32 e.Index#1/17/33 )/35 Tile{ AsIs: e.Items-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[28], context[29], context[22], context[23]);
      refalrts::alloc_ident(vm, context[30], identifiers[ident_UnnamedNewVariable]);
      refalrts::copy_stvar(vm, context[31], context[24]);
      refalrts::alloc_char(vm, context[32], '_');
      refalrts::copy_evar(vm, context[33], context[34], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::update_ident(context[21], identifiers[ident_TkVariable]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[26], context[35] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[26], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckPattern/4 (/7 e.ScopeVars#1/9 )/8 e.Items-B#1/13 (/19 # TkVariable/21 t.SrcPos1#1/22 s.Mode1#1/24 e.Index#1/17 )/20 e.Items-M#1/25 (/31 # TkNewVariable/33 t.SrcPos2#1/36 s.Mode2#1/38 e.Index#1/34 )/32 e.Items-E#1/27 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.ScopeVars#1 as range 9
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
      context[21] = refalrts::ident_left( identifiers[ident_TkVariable], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
        continue;
      // closed e.Index#1 as range 17
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[27] = context[15];
        context[28] = context[16];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        context[33] = refalrts::ident_left( identifiers[ident_TkNewVariable], context[29], context[30] );
        if( ! context[33] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[17], context[18], context[29], context[30] ) )
          continue;
        // closed e.Items-E#1 as range 27
        context[37] = refalrts::tvar_left( context[36], context[29], context[30] );
        if( ! context[37] )
          continue;
        if( ! refalrts::svar_left( context[38], context[29], context[30] ) )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: e.ScopeVars#1: 9
        //DEBUG: e.Items-B#1: 13
        //DEBUG: t.SrcPos1#1: 22
        //DEBUG: s.Mode1#1: 24
        //DEBUG: e.Index#1: 17
        //DEBUG: e.Items-M#1: 25
        //DEBUG: e.Items-E#1: 27
        //DEBUG: t.SrcPos2#1: 36
        //DEBUG: s.Mode2#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckPattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/9 AsIs: )/8 AsIs: e.Items-B#1/13 AsIs: (/19 AsIs: # TkVariable/21 AsIs: t.SrcPos1#1/22 AsIs: s.Mode1#1/24 AsIs: e.Index#1/17 AsIs: )/20 AsIs: e.Items-M#1/25 AsIs: (/31 Reuse: # TkVariable/33 AsIs: t.SrcPos2#1/36 AsIs: s.Mode2#1/38 AsIs: e.Index#1/34 AsIs: )/32 } (/39 # Error/40 t.SrcPos2#1/36/41 # AlreadyBounded/43 s.Mode2#1/38/44 e.Index#1/34/45 )/47 Tile{ AsIs: e.Items-E#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_ident(vm, context[40], identifiers[ident_Error]);
        refalrts::copy_evar(vm, context[41], context[42], context[36], context[37]);
        refalrts::alloc_ident(vm, context[43], identifiers[ident_AlreadyBounded]);
        refalrts::copy_stvar(vm, context[44], context[38]);
        refalrts::copy_evar(vm, context[45], context[46], context[34], context[35]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::update_ident(context[33], identifiers[ident_TkVariable]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[39], context[47] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[39], context[47] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[25], context[26], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPattern/4 (/7 e.ScopeVars#1/5 )/8 e.Items#1/2 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.Items#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 } (/9 )/10 Tile{ AsIs: e.Items#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckPattern("CheckPattern", COOKIE1_, COOKIE2_, func_CheckPattern);


static refalrts::FnResult func_FixupKnownVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FixupKnownVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FixupKnownVars/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & FixupKnownVars/4 e.KnownVars-B#1/14 (/20 s.OldMode#1/24 e.Index#1/22 )/21 e.KnownVars-E#1/16 (/7 s.NewMode#1/9 e.Index#1/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.Index#1 as range 12
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
      // closed e.KnownVars-E#1 as range 16
      if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: s.NewMode#1: 9
      //DEBUG: e.Index#1: 12
      //DEBUG: e.KnownVars-B#1: 14
      //DEBUG: e.KnownVars-E#1: 16
      //DEBUG: s.OldMode#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FixupKnownVars/4 {REMOVED TILE} (/20 s.OldMode#1/24 e.Index#1/22 )/21 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.KnownVars-B#1/14 } Tile{ AsIs: (/7 AsIs: s.NewMode#1/9 AsIs: e.Index#1/12 AsIs: )/8 } Tile{ AsIs: e.KnownVars-E#1/16 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupKnownVars/4 e.KnownVars#1/2 (/7 s.Mode#1/9 e.Index#1/5 )/8 >/1
  // closed e.KnownVars#1 as range 2
  // closed e.Index#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.KnownVars#1: 2
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupKnownVars/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.KnownVars#1/2 } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FixupKnownVars("FixupKnownVars", COOKIE1_, COOKIE2_, func_FixupKnownVars);


static refalrts::FnResult func_CheckResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckResult/4 (/7 e.ScopeVars#1/5 )/8 e.Items#1/2 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.Items#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@16/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckResult("CheckResult", COOKIE1_, COOKIE2_, func_CheckResult);


static refalrts::FnResult func_CheckValidUsings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & CheckValidUsings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckValidUsings/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckValidUsings/4 (/7 e.new#8/9 )/8 (/15 s.new#3/17 t.new#4/18 t.new#5/20 e.new#6/13 )/16 e.new#7/11 >/1
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
    // closed e.new#8 as range 9
    // closed e.new#7 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & CheckValidUsings/4 (/7 e.new#12/22 )/8 (/15 # Symbol/17 # Name/18 t.new#10/20 e.new#11/24 )/16 e.new#9/26 >/1
      context[22] = context[9];
      context[23] = context[10];
      context[24] = context[13];
      context[25] = context[14];
      context[26] = context[11];
      context[27] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[18] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[17] ) )
        continue;
      // closed e.new#12 as range 22
      // closed e.new#11 as range 24
      // closed e.new#9 as range 26
      do {
        // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors-B#1/34 (/40 # Declare/42 t.SrcPos#1/45 s.ScopeClass#1/47 e.Name#1/43 )/41 e.DeclarationsAndErrors-E#1/36 )/8 (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name#1 as range 30
        // closed e.NameRefsAndErrors#1 as range 32
        context[34] = 0;
        context[35] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[36] = context[28];
          context[37] = context[29];
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
          if( ! context[40] )
            continue;
          refalrts::bracket_pointers(context[40], context[41]);
          context[42] = refalrts::ident_left( identifiers[ident_Declare], context[38], context[39] );
          if( ! context[42] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[43], context[44], context[30], context[31], context[38], context[39] ) )
            continue;
          // closed e.DeclarationsAndErrors-E#1 as range 36
          context[46] = refalrts::tvar_left( context[45], context[38], context[39] );
          if( ! context[46] )
            continue;
          if( ! refalrts::svar_left( context[47], context[38], context[39] ) )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.SrcPosName#1: 20
          //DEBUG: e.Name#1: 30
          //DEBUG: e.NameRefsAndErrors#1: 32
          //DEBUG: e.DeclarationsAndErrors-B#1: 34
          //DEBUG: e.DeclarationsAndErrors-E#1: 36
          //DEBUG: t.SrcPos#1: 45
          //DEBUG: s.ScopeClass#1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors-B#1/34 AsIs: (/40 AsIs: # Declare/42 AsIs: t.SrcPos#1/45 AsIs: s.ScopeClass#1/47 AsIs: e.Name#1/43 AsIs: )/41 AsIs: e.DeclarationsAndErrors-E#1/36 AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[40], context[41] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[8], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[34], context[35], context[28], context[29] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors-B#1/34 (/40 # Define/42 t.SrcPos#1/45 s.ScopeClass#1/47 e.Name#1/43 )/41 e.DeclarationsAndErrors-E#1/36 )/8 (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name#1 as range 30
        // closed e.NameRefsAndErrors#1 as range 32
        context[34] = 0;
        context[35] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[36] = context[28];
          context[37] = context[29];
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
          if( ! context[40] )
            continue;
          refalrts::bracket_pointers(context[40], context[41]);
          context[42] = refalrts::ident_left( identifiers[ident_Define], context[38], context[39] );
          if( ! context[42] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[43], context[44], context[30], context[31], context[38], context[39] ) )
            continue;
          // closed e.DeclarationsAndErrors-E#1 as range 36
          context[46] = refalrts::tvar_left( context[45], context[38], context[39] );
          if( ! context[46] )
            continue;
          if( ! refalrts::svar_left( context[47], context[38], context[39] ) )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.SrcPosName#1: 20
          //DEBUG: e.Name#1: 30
          //DEBUG: e.NameRefsAndErrors#1: 32
          //DEBUG: e.DeclarationsAndErrors-B#1: 34
          //DEBUG: e.DeclarationsAndErrors-E#1: 36
          //DEBUG: t.SrcPos#1: 45
          //DEBUG: s.ScopeClass#1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/15 # Symbol/17 # Name/18 t.SrcPosName#1/20 e.Name#1/30 )/16 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors-B#1/34 AsIs: (/40 AsIs: # Define/42 AsIs: t.SrcPos#1/45 AsIs: s.ScopeClass#1/47 AsIs: e.Name#1/43 AsIs: )/41 AsIs: e.DeclarationsAndErrors-E#1/36 AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[40], context[41] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[8], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[34], context[35], context[28], context[29] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/28 )/8 (/15 # Symbol/17 # Name/18 t.SrcPos#1/20 e.Name#1/30 )/16 e.NameRefsAndErrors#1/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.DeclarationsAndErrors#1 as range 28
      // closed e.Name#1 as range 30
      // closed e.NameRefsAndErrors#1 as range 32
      //DEBUG: t.SrcPos#1: 20
      //DEBUG: e.DeclarationsAndErrors#1: 28
      //DEBUG: e.Name#1: 30
      //DEBUG: e.NameRefsAndErrors#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 AsIs: e.DeclarationsAndErrors#1/28 HalfReuse: (/8 HalfReuse: # Error/15 } Tile{ AsIs: t.SrcPos#1/20 } Tile{ Reuse: # NotDefined/18 } Tile{ AsIs: e.Name#1/30 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.NameRefsAndErrors#1/32 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[15], identifiers[ident_Error]);
      refalrts::update_ident(context[18], identifiers[ident_NotDefined]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::link_brackets( context[8], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/22 )/8 (/15 # Error/17 t.SrcPos#1/18 s.Type#1/20 e.Info#1/24 )/16 e.NameRefsAndErrors#1/26 >/1
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[11];
    context[27] = context[12];
    if( ! refalrts::svar_term( context[20], context[20] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Error], context[17] ) )
      continue;
    // closed e.DeclarationsAndErrors#1 as range 22
    // closed e.Info#1 as range 24
    // closed e.NameRefsAndErrors#1 as range 26
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: s.Type#1: 20
    //DEBUG: e.DeclarationsAndErrors#1: 22
    //DEBUG: e.Info#1: 24
    //DEBUG: e.NameRefsAndErrors#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckValidUsings/4 AsIs: (/7 } Tile{ AsIs: e.DeclarationsAndErrors#1/22 } Tile{ AsIs: (/15 AsIs: # Error/17 AsIs: t.SrcPos#1/18 AsIs: s.Type#1/20 AsIs: e.Info#1/24 AsIs: )/16 } Tile{ AsIs: )/8 } Tile{ AsIs: e.NameRefsAndErrors#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckValidUsings/4 (/7 e.DeclarationsAndErrors#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DeclarationsAndErrors#1 as range 5
  //DEBUG: e.DeclarationsAndErrors#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@17/4 } Tile{ AsIs: e.DeclarationsAndErrors#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckValidUsings("CheckValidUsings", COOKIE1_, COOKIE2_, func_CheckValidUsings);


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


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
      // </0 & Reduce@1/4 t.new#6/5 (/9 s.new#7/15 t.new#8/16 e.new#9/13 )/10 e.new#10/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#10 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.new#9 as range 13
      do {
        // </0 & Reduce@1/4 t.Acc#1/5 (/9 # Error/15 t.0#0/16 e.1#0/18 )/10 e.Tail#1/20 >/1
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[11];
        context[21] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Error], context[15] ) )
          continue;
        // closed e.1#0 as range 18
        // closed e.Tail#1 as range 20
        //DEBUG: t.Acc#1: 5
        //DEBUG: t.0#0: 16
        //DEBUG: e.1#0: 18
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@1/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: )/10 } </22 & EL-AddErrorAt/23 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.0#0/16 } Tile{ HalfReuse: </15 } & PrepareMessage/24 Tile{ AsIs: e.1#0/18 } >/25 >/26 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_ELm_AddErrorAt]);
        refalrts::alloc_name(vm, context[24], functions[efunc_PrepareMessage]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z1]);
        refalrts::reinit_open_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_elem( res, context[10] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_elem( res, context[9] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@1/4 t.Acc#1/5 (/9 # Warning/15 s.WarningId#2/16 t.1#0/22 e.2#0/18 )/10 e.Tail#1/20 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Warning], context[15] ) )
        continue;
      // closed e.Tail#1 as range 20
      context[23] = refalrts::tvar_left( context[22], context[18], context[19] );
      if( ! context[23] )
        continue;
      // closed e.2#0 as range 18
      //DEBUG: t.Acc#1: 5
      //DEBUG: s.WarningId#2: 16
      //DEBUG: e.Tail#1: 20
      //DEBUG: t.1#0: 22
      //DEBUG: e.2#0: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId#2/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: & Reduce$1=1@1/15 } (/25 Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 Reuse: & EL-AddWarningAt/4 AsIs: t.Acc#1/5 HalfReuse: s.WarningId2 #16/9 } Tile{ AsIs: t.1#0/22 } </26 & PrepareMessage/27 Tile{ AsIs: e.2#0/18 } >/28 >/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_PrepareMessage]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::reinit_name(context[15], functions[efunc_gen_Reduce_S1A1Z1]);
      refalrts::update_name(context[4], functions[efunc_ELm_AddWarningAt]);
      refalrts::reinit_svar( context[9], context[16] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[25], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1@1/14 (/15 Tile{ AsIs: e.Tail#1/11 } )/16 Tile{ AsIs: </0 Reuse: & CheckProgram\1*2/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1Z1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckProgram_L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@1/4 t.Acc#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
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
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & CheckProgram\1@0/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckProgram_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
      // </0 & Map@1/4 (/7 e.new#3/11 )/8 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#3 as range 11
      // closed e.new#4 as range 9
      do {
        // </0 & Map@1/4 (/7 s.new#5/17 e.new#6/13 )/8 e.new#7/15 >/1
        context[13] = context[11];
        context[14] = context[12];
        context[15] = context[9];
        context[16] = context[10];
        // closed e.new#7 as range 15
        if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
          continue;
        // closed e.new#6 as range 13
        do {
          // </0 & Map@1/4 (/7 # Sentences/17 e.0#0/18 )/8 e.Tail#1/20 >/1
          context[18] = context[13];
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_Sentences], context[17] ) )
            continue;
          // closed e.0#0 as range 18
          // closed e.Tail#1 as range 20
          //DEBUG: e.0#0: 18
          //DEBUG: e.Tail#1: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@12/4 } Tile{ AsIs: e.0#0/18 } Tile{ HalfReuse: >/7 HalfReuse: </17 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_gen_Map_Z12]);
          refalrts::reinit_close_call(context[7]);
          refalrts::reinit_open_call(context[17]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[17] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[7], context[17] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 # NativeBody/17 e.0#0/18 )/8 e.Tail#1/20 >/1
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[17] ) )
          continue;
        // closed e.0#0 as range 18
        // closed e.Tail#1 as range 20
        //DEBUG: e.0#0: 18
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # NativeBody/17 e.0#0/18 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 e.#0/13 )/8 e.Tail#1/15 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = context[9];
      context[16] = context[10];
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 15
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec*2/4 AsIs: (/7 } )/17 Tile{ AsIs: e.#0/13 } >/18 </19 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBodyRec_D2]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[17] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBody*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBody_D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckFunctionBody@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBody_Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
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
      // </0 & DoMapAccum@1/4 (/5 e.new#8/21 )/6 (/9 e.new#12/17 )/10 (/15 s.new#9/25 e.new#10/23 )/16 e.new#11/19 >/1
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
      // closed e.new#8 as range 21
      // closed e.new#12 as range 17
      // closed e.new#11 as range 19
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#10 as range 23
      do {
        // </0 & DoMapAccum@1/4 (/5 e.new#13/26 )/6 (/9 e.new#18/28 )/10 (/15 s.new#14/25 t.new#15/34 e.new#16/30 )/16 e.new#17/32 >/1
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new#13 as range 26
        // closed e.new#18 as range 28
        // closed e.new#17 as range 32
        context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
        if( ! context[35] )
          continue;
        // closed e.new#16 as range 30
        do {
          // </0 & DoMapAccum@1/4 (/5 e.new#19/36 )/6 (/9 e.new#25/38 )/10 (/15 s.new#20/25 t.new#21/34 s.new#22/44 e.new#23/40 )/16 e.new#24/42 >/1
          context[36] = context[26];
          context[37] = context[27];
          context[38] = context[28];
          context[39] = context[29];
          context[40] = context[30];
          context[41] = context[31];
          context[42] = context[32];
          context[43] = context[33];
          // closed e.new#19 as range 36
          // closed e.new#25 as range 38
          // closed e.new#24 as range 42
          if( ! refalrts::svar_left( context[44], context[40], context[41] ) )
            continue;
          // closed e.new#23 as range 40
          do {
            // </0 & DoMapAccum@1/4 (/5 e.new#26/45 )/6 (/9 e.new#33/47 )/10 (/15 # Function/25 t.new#27/34 s.new#28/44 (/55 e.new#29/53 )/56 s.new#30/57 e.new#31/49 )/16 e.new#32/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Function], context[25] ) )
              continue;
            context[53] = 0;
            context[54] = 0;
            context[55] = refalrts::brackets_left( context[53], context[54], context[49], context[50] );
            if( ! context[55] )
              continue;
            refalrts::bracket_pointers(context[55], context[56]);
            // closed e.new#26 as range 45
            // closed e.new#33 as range 47
            // closed e.new#29 as range 53
            // closed e.new#32 as range 51
            if( ! refalrts::svar_left( context[57], context[49], context[50] ) )
              continue;
            // closed e.new#31 as range 49
            do {
              // </0 & DoMapAccum@1/4 (/5 e.#0/58 )/6 (/9 e.Scanned#1/60 )/10 (/15 # Function/25 t.0#0/34 s.ScopeClass#2/44 (/55 e.5#0/62 )/56 # Sentences/57 e.6#0/64 )/16 e.Tail#1/66 >/1
              context[58] = context[45];
              context[59] = context[46];
              context[60] = context[47];
              context[61] = context[48];
              context[62] = context[53];
              context[63] = context[54];
              context[64] = context[49];
              context[65] = context[50];
              context[66] = context[51];
              context[67] = context[52];
              if( ! refalrts::ident_term( identifiers[ident_Sentences], context[57] ) )
                continue;
              // closed e.#0 as range 58
              // closed e.Scanned#1 as range 60
              // closed e.5#0 as range 62
              // closed e.6#0 as range 64
              // closed e.Tail#1 as range 66
              //DEBUG: t.0#0: 34
              //DEBUG: s.ScopeClass#2: 44
              //DEBUG: e.#0: 58
              //DEBUG: e.Scanned#1: 60
              //DEBUG: e.5#0: 62
              //DEBUG: e.6#0: 64
              //DEBUG: e.Tail#1: 66

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/58 HalfReuse: (/6 HalfReuse: # Define/9 } Tile{ AsIs: t.0#0/34 } Tile{ HalfReuse: s.ScopeClass2 #44/55 AsIs: e.5#0/62 AsIs: )/56 HalfReuse: )/57 } (/68 Tile{ AsIs: e.Scanned#1/60 } Tile{ AsIs: (/15 Reuse: # Sentences/25 } Tile{ AsIs: e.6#0/64 } Tile{ AsIs: )/10 } Tile{ AsIs: )/16 AsIs: e.Tail#1/66 AsIs: >/1 ]] }
              refalrts::alloc_open_bracket(vm, context[68]);
              refalrts::reinit_open_bracket(context[6]);
              refalrts::reinit_ident(context[9], identifiers[ident_Define]);
              refalrts::reinit_svar( context[55], context[44] );
              refalrts::reinit_close_bracket(context[57]);
              refalrts::update_ident(context[25], identifiers[ident_Sentences]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[68], context[16] );
              refalrts::link_brackets( context[15], context[10] );
              refalrts::link_brackets( context[5], context[57] );
              refalrts::link_brackets( context[6], context[56] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[16];
              res = refalrts::splice_elem( res, context[10] );
              res = refalrts::splice_evar( res, context[64], context[65] );
              res = refalrts::splice_evar( res, context[15], context[25] );
              res = refalrts::splice_evar( res, context[60], context[61] );
              res = refalrts::splice_elem( res, context[68] );
              res = refalrts::splice_evar( res, context[55], context[57] );
              res = refalrts::splice_evar( res, context[34], context[35] );
              refalrts::splice_to_freelist_open( vm, context[9], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & DoMapAccum@1/4 (/5 e.#0/58 )/6 (/9 e.Scanned#1/60 )/10 (/15 # Function/25 t.0#0/34 s.ScopeClass#2/44 (/55 e.5#0/62 )/56 # NativeBody/57 e.6#0/64 )/16 e.Tail#1/66 >/1
            context[58] = context[45];
            context[59] = context[46];
            context[60] = context[47];
            context[61] = context[48];
            context[62] = context[53];
            context[63] = context[54];
            context[64] = context[49];
            context[65] = context[50];
            context[66] = context[51];
            context[67] = context[52];
            if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[57] ) )
              continue;
            // closed e.#0 as range 58
            // closed e.Scanned#1 as range 60
            // closed e.5#0 as range 62
            // closed e.6#0 as range 64
            // closed e.Tail#1 as range 66
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 58
            //DEBUG: e.Scanned#1: 60
            //DEBUG: e.5#0: 62
            //DEBUG: e.6#0: 64
            //DEBUG: e.Tail#1: 66

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/58 HalfReuse: (/6 HalfReuse: # Define/9 } Tile{ AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 } e.5#0/62/68 Tile{ AsIs: )/10 AsIs: (/15 } Tile{ HalfReuse: # NativeBody/55 AsIs: e.5#0/62 AsIs: )/56 HalfReuse: )/57 } (/70 Tile{ AsIs: e.Scanned#1/60 } (/71 Tile{ Reuse: # NativeBody/25 } Tile{ AsIs: e.6#0/64 } )/72 Tile{ AsIs: )/16 AsIs: e.Tail#1/66 AsIs: >/1 ]] }
            refalrts::copy_evar(vm, context[68], context[69], context[62], context[63]);
            refalrts::alloc_open_bracket(vm, context[70]);
            refalrts::alloc_open_bracket(vm, context[71]);
            refalrts::alloc_close_bracket(vm, context[72]);
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_ident(context[9], identifiers[ident_Define]);
            refalrts::reinit_ident(context[55], identifiers[ident_NativeBody]);
            refalrts::reinit_close_bracket(context[57]);
            refalrts::update_ident(context[25], identifiers[ident_NativeBody]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[70], context[16] );
            refalrts::link_brackets( context[71], context[72] );
            refalrts::link_brackets( context[5], context[57] );
            refalrts::link_brackets( context[15], context[56] );
            refalrts::link_brackets( context[6], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_elem( res, context[72] );
            res = refalrts::splice_evar( res, context[64], context[65] );
            res = refalrts::splice_elem( res, context[25] );
            res = refalrts::splice_elem( res, context[71] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            res = refalrts::splice_elem( res, context[70] );
            res = refalrts::splice_evar( res, context[55], context[57] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            res = refalrts::splice_evar( res, context[68], context[69] );
            res = refalrts::splice_evar( res, context[34], context[44] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Swap/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Swap], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/47 AsIs: )/10 } Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: >/1 ]] }
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[6], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Enum/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Enum], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/47 AsIs: )/10 } Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: >/1 ]] }
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[6], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Meta/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Meta], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } (/53 # Declare/54 t.0#0/34/55 # GN-Entry/57"__Meta_"/58 e.3#0/49/60 )/62 (/63 # Declare/64 t.0#0/34/65 # GN-Entry/67"__Step-Drop"/68 )/70 Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/47 AsIs: )/10 } Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[53]);
            refalrts::alloc_ident(vm, context[54], identifiers[ident_Declare]);
            refalrts::copy_evar(vm, context[55], context[56], context[34], context[35]);
            refalrts::alloc_ident(vm, context[57], identifiers[ident_GNm_Entry]);
            refalrts::alloc_chars(vm, context[58], context[59], "__Meta_", 7);
            refalrts::copy_evar(vm, context[60], context[61], context[49], context[50]);
            refalrts::alloc_close_bracket(vm, context[62]);
            refalrts::alloc_open_bracket(vm, context[63]);
            refalrts::alloc_ident(vm, context[64], identifiers[ident_Declare]);
            refalrts::copy_evar(vm, context[65], context[66], context[34], context[35]);
            refalrts::alloc_ident(vm, context[67], identifiers[ident_GNm_Entry]);
            refalrts::alloc_chars(vm, context[68], context[69], "__Step-Drop", 11);
            refalrts::alloc_close_bracket(vm, context[70]);
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::link_brackets( context[63], context[70] );
            refalrts::link_brackets( context[53], context[62] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[6], context[10] );
            res = refalrts::splice_evar( res, context[53], context[70] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Declaration/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Declaration], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Declare/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/47 AsIs: )/10 } Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: >/1 ]] }
            refalrts::update_ident(context[25], identifiers[ident_Declare]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[5], context[6] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[6], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Entry/25 t.0#0/34 # GN-Entry/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Entry], context[25] ) )
              continue;
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[44] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Entry/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/45 HalfReuse: (/6 HalfReuse: # Entry/9 } Tile{ AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/44 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: )/16 AsIs: e.Tail#1/51 AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_ident(context[9], identifiers[ident_Entry]);
            refalrts::reinit_close_bracket(context[44]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[44] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            res = refalrts::splice_elem( res, context[44] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Inline/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Inline], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/45 HalfReuse: (/6 HalfReuse: # Inline/9 } Tile{ AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/25 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: )/16 AsIs: e.Tail#1/51 AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_ident(context[9], identifiers[ident_Inline]);
            refalrts::reinit_close_bracket(context[25]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[25] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            res = refalrts::splice_elem( res, context[25] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Drive/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
            context[45] = context[36];
            context[46] = context[37];
            context[47] = context[38];
            context[48] = context[39];
            context[49] = context[40];
            context[50] = context[41];
            context[51] = context[42];
            context[52] = context[43];
            if( ! refalrts::ident_term( identifiers[ident_Drive], context[25] ) )
              continue;
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.3#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.3#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/45 HalfReuse: (/6 HalfReuse: # Drive/9 } Tile{ AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/25 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: )/16 AsIs: e.Tail#1/51 AsIs: >/1 ]] }
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_ident(context[9], identifiers[ident_Drive]);
            refalrts::reinit_close_bracket(context[25]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::link_brackets( context[5], context[10] );
            refalrts::link_brackets( context[6], context[25] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            res = refalrts::splice_elem( res, context[25] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@1/4 (/5 e.#0/45 )/6 (/9 e.Scanned#1/47 )/10 (/15 # Intrinsic/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 >/1
          context[45] = context[36];
          context[46] = context[37];
          context[47] = context[38];
          context[48] = context[39];
          context[49] = context[40];
          context[50] = context[41];
          context[51] = context[42];
          context[52] = context[43];
          if( ! refalrts::ident_term( identifiers[ident_Intrinsic], context[25] ) )
            continue;
          // closed e.#0 as range 45
          // closed e.Scanned#1 as range 47
          // closed e.3#0 as range 49
          // closed e.Tail#1 as range 51
          //DEBUG: t.0#0: 34
          //DEBUG: s.ScopeClass#2: 44
          //DEBUG: e.#0: 45
          //DEBUG: e.Scanned#1: 47
          //DEBUG: e.3#0: 49
          //DEBUG: e.Tail#1: 51

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/45 HalfReuse: (/6 HalfReuse: # Intrinsic/9 } Tile{ AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/25 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: )/16 AsIs: e.Tail#1/51 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_ident(context[9], identifiers[ident_Intrinsic]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[10], context[15] );
          res = refalrts::splice_elem( res, context[25] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/5 e.#0/36 )/6 (/9 e.Scanned#1/38 )/10 (/15 # Ident/25 t.0#0/34 e.2#0/40 )/16 e.Tail#1/42 >/1
        context[36] = context[26];
        context[37] = context[27];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[30];
        context[41] = context[31];
        context[42] = context[32];
        context[43] = context[33];
        if( ! refalrts::ident_term( identifiers[ident_Ident], context[25] ) )
          continue;
        // closed e.#0 as range 36
        // closed e.Scanned#1 as range 38
        // closed e.2#0 as range 40
        // closed e.Tail#1 as range 42
        //DEBUG: t.0#0: 34
        //DEBUG: e.#0: 36
        //DEBUG: e.Scanned#1: 38
        //DEBUG: e.2#0: 40
        //DEBUG: e.Tail#1: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/15 # Ident/25 t.0#0/34 e.2#0/40 )/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/36 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/38 AsIs: )/10 } Tile{ AsIs: e.Tail#1/42 } Tile{ AsIs: >/1 ]] }
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

      // </0 & DoMapAccum@1/4 (/5 e.#0/26 )/6 (/9 e.Scanned#1/28 )/10 (/15 # NativeBlock/25 e.1#0/30 )/16 e.Tail#1/32 >/1
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[25] ) )
        continue;
      // closed e.#0 as range 26
      // closed e.Scanned#1 as range 28
      // closed e.1#0 as range 30
      // closed e.Tail#1 as range 32
      //DEBUG: e.#0: 26
      //DEBUG: e.Scanned#1: 28
      //DEBUG: e.1#0: 30
      //DEBUG: e.Tail#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 # NativeBlock/25 e.1#0/30 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@1/4 AsIs: (/5 AsIs: e.#0/26 AsIs: )/6 AsIs: (/9 AsIs: e.Scanned#1/28 AsIs: )/10 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & SeparateDefines\1*12/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_SeparateDefines_L1D12]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & SeparateDefines\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SeparateDefines_L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckPseudofunctions=1\1/4 AsIs: t.Next#1/7 } >/9 </10 & Map@2/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckPseudofunctions_A1L1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckPseudofunctions=1\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckPseudofunctions_A1L1Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
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
      // </0 & DoMapAccum@2/4 (/5 e.new#8/21 )/6 (/9 e.new#11/17 )/10 t.new#9/15 e.new#10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[5] ) )
        continue;
      // closed e.new#8 as range 21
      // closed e.new#11 as range 17
      // closed e.new#10 as range 19
      do {
        // </0 & DoMapAccum@2/4 (/5 e.new#12/23 )/6 (/9 e.new#16/25 )/10 (/15 s.new#13/31 e.new#14/29 )/16 e.new#15/27 >/1
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
        // closed e.new#12 as range 23
        // closed e.new#16 as range 25
        // closed e.new#15 as range 27
        if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
          continue;
        // closed e.new#14 as range 29
        do {
          // </0 & DoMapAccum@2/4 (/5 e.#0/32 )/6 (/9 e.Scanned#1/34 )/10 (/15 # Error/31 e.1#0/36 )/16 e.Tail#1/38 >/1
          context[32] = context[23];
          context[33] = context[24];
          context[34] = context[25];
          context[35] = context[26];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[27];
          context[39] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_Error], context[31] ) )
            continue;
          // closed e.#0 as range 32
          // closed e.Scanned#1 as range 34
          // closed e.1#0 as range 36
          // closed e.Tail#1 as range 38
          //DEBUG: e.#0: 32
          //DEBUG: e.Scanned#1: 34
          //DEBUG: e.1#0: 36
          //DEBUG: e.Tail#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e.#0/32 HalfReuse: (/6 HalfReuse: # Error/9 } Tile{ AsIs: e.1#0/36 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/34 } Tile{ AsIs: )/16 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_ident(context[9], identifiers[ident_Error]);
          refalrts::reinit_close_bracket(context[31]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[10], context[15] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 (/5 e.#0/32 )/6 (/9 e.Scanned#1/34 )/10 (/15 # Warning/31 e.1#0/36 )/16 e.Tail#1/38 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[27];
        context[39] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_Warning], context[31] ) )
          continue;
        // closed e.#0 as range 32
        // closed e.Scanned#1 as range 34
        // closed e.1#0 as range 36
        // closed e.Tail#1 as range 38
        //DEBUG: e.#0: 32
        //DEBUG: e.Scanned#1: 34
        //DEBUG: e.1#0: 36
        //DEBUG: e.Tail#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e.#0/32 HalfReuse: (/6 HalfReuse: # Warning/9 } Tile{ AsIs: e.1#0/36 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/34 } Tile{ AsIs: )/16 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[6]);
        refalrts::reinit_ident(context[9], identifiers[ident_Warning]);
        refalrts::reinit_close_bracket(context[31]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[5], context[10] );
        refalrts::link_brackets( context[6], context[31] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/5 e.#0/23 )/6 (/9 e.Scanned#1/25 )/10 t.Next#1/15 e.Tail#1/27 >/1
      context[23] = context[21];
      context[24] = context[22];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      // closed e.#0 as range 23
      // closed e.Scanned#1 as range 25
      // closed e.Tail#1 as range 27
      //DEBUG: t.Next#1: 15
      //DEBUG: e.#0: 23
      //DEBUG: e.Scanned#1: 25
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e.#0/23 AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: t.Next#1/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & SeparateErrors\1*3/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_SeparateErrors_L1D3]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & SeparateErrors\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SeparateErrors_L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
      // </0 & Map@3/4 (/7 # Spec/13 t.0#0/14 (/18 e.3#0/16 )/19 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Spec], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.3#0 as range 16
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.0#0: 14
      //DEBUG: e.3#0: 16
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & CheckSpecs-Formats\1$1:1/13 AsIs: t.0#0/14 AsIs: (/18 AsIs: e.3#0/16 AsIs: )/19 } (/20 e.2#0/11/21 )/23 Tile{ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.2#0/11 } >/24 >/25 </26 Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::copy_evar(vm, context[21], context[22], context[11], context[12]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1]);
      refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[23] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[7], context[19] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@3/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckSpecs-Formats\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1Z0]);
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
        // </0 & Map@4/4 (/7 # TkVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
          continue;
        // closed e.Tail#1 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        if( ! refalrts::svar_left( context[20], context[14], context[15] ) )
          continue;
        // closed e.2#0 as range 14
        //DEBUG: e.Tail#1: 16
        //DEBUG: t.0#0: 18
        //DEBUG: s.Mode#2: 20
        //DEBUG: e.2#0: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

      do {
        // </0 & Map@4/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
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

      // </0 & Map@4/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 e.3#0/20 )/23 e.2#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.Tail#1 as range 16
      context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
      if( ! context[19] )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      // closed e.3#0 as range 20
      // closed e.2#0 as range 14
      //DEBUG: e.Tail#1: 16
      //DEBUG: t.0#0: 18
      //DEBUG: e.3#0: 20
      //DEBUG: e.2#0: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.0#0/18 (/22 e.3#0/20 )/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.2#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[7], context[13] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
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
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindVariables\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindVariables_L1Z0]);
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
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@5/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & Map@5/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
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
      // </0 & Map@5/4 t.SrcPos2#1/5 (/9 e.Name#1/17 )/10 (/15 e.#0/21 )/16 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.Name#1 as range 17
      // closed e.#0 as range 21
      // closed e.Tail#1 as range 19
      //DEBUG: t.SrcPos2#1: 5
      //DEBUG: e.Name#1: 17
      //DEBUG: e.#0: 21
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } # Error/23 t.SrcPos2#1/5/24 Tile{ AsIs: e.#0/21 } e.Name#1/17/26 Tile{ AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/17 AsIs: )/10 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[23], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
      refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.SrcPos2#1/5 (/9 e.Name#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Name#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.SrcPos2#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$1=1:1$2\1*1/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/17 AsIs: )/10 AsIs: t.Next#1/15 } >/21 </22 & Map@5/23 t.SrcPos2#1/5/24 (/26 e.Name#1/17/27 )/29 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z5]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 t.SrcPos2#1/5 (/9 e.Name#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: t.SrcPos2#1: 5
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 t.SrcPos2#1/5 (/9 e.Name#1/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 t.SrcPos2#1/5 (/9 e.Name#1/7 )/10 e.items#0/2 >/1
  // closed e.Name#1 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.SrcPos2#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Map@0/12 Tile{ HalfReuse: [*]/0 Reuse: & CheckSpecs-Functions$1=1:1$2\1@0/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } {*}/13 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@6/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & Map@6/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
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
      // </0 & Map@6/4 t.SrcPos2#1/5 (/9 e.Name#1/17 )/10 (/15 e.#0/21 )/16 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.Name#1 as range 17
      // closed e.#0 as range 21
      // closed e.Tail#1 as range 19
      //DEBUG: t.SrcPos2#1: 5
      //DEBUG: e.Name#1: 17
      //DEBUG: e.#0: 21
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } # Error/23 t.SrcPos2#1/5/24 Tile{ AsIs: e.#0/21 } e.Name#1/17/26 Tile{ AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/17 AsIs: )/10 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[23], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
      refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.SrcPos2#1/5 (/9 e.Name#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Name#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.SrcPos2#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$2=1:1$2\1*1/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/17 AsIs: )/10 AsIs: t.Next#1/15 } >/21 </22 & Map@6/23 t.SrcPos2#1/5/24 (/26 e.Name#1/17/27 )/29 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z6]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 t.SrcPos2#1/5 (/9 e.Name#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: t.SrcPos2#1: 5
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 t.SrcPos2#1/5 (/9 e.Name#1/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 t.SrcPos2#1/5 (/9 e.Name#1/7 )/10 e.items#0/2 >/1
  // closed e.Name#1 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.SrcPos2#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Map@0/12 Tile{ HalfReuse: [*]/0 Reuse: & CheckSpecs-Functions$2=1:1$2\1@0/4 AsIs: t.SrcPos2#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } {*}/13 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@2/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce@2/4 t.new#4/5 t.new#5/7 t.new#6/11 e.new#7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.new#7 as range 9
    do {
      // </0 & Reduce@2/4 t.new#8/5 (/7 s.new#9/17 e.new#10/15 )/8 t.new#11/11 e.new#12/13 >/1
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[7] ) )
        continue;
      // closed e.new#12 as range 13
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      // closed e.new#10 as range 15
      do {
        // </0 & Reduce@2/4 (/5 e.#0/22 )/6 (/7 # True/17 e.2#0/18 )/8 (/11 (/28 e.4#0/26 )/29 e.3#0/24 )/12 e.Tail#1/20 >/1
        context[18] = context[15];
        context[19] = context[16];
        context[20] = context[13];
        context[21] = context[14];
        context[22] = 0;
        context[23] = 0;
        if( ! refalrts::brackets_term( context[22], context[23], context[5] ) )
          continue;
        context[24] = 0;
        context[25] = 0;
        if( ! refalrts::brackets_term( context[24], context[25], context[11] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_True], context[17] ) )
          continue;
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        // closed e.#0 as range 22
        // closed e.2#0 as range 18
        // closed e.4#0 as range 26
        // closed e.3#0 as range 24
        // closed e.Tail#1 as range 20
        //DEBUG: e.#0: 22
        //DEBUG: e.2#0: 18
        //DEBUG: e.4#0: 26
        //DEBUG: e.3#0: 24
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3#0/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@2/4 AsIs: (/5 AsIs: e.#0/22 AsIs: )/6 AsIs: (/7 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: )/12 } </30 & ValidBodyForSpec-CheckSentensePattern$1:1/31 Tile{ HalfReuse: (/17 AsIs: e.2#0/18 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenericMatch/28 } (/32 </33 & RemovePos-Expr/34 Tile{ AsIs: e.4#0/26 } >/35 Tile{ AsIs: )/29 } (/36 </37 & RemovePos-Expr/38 e.#0/22/39 >/41 )/42 >/43 >/44 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_RemovePosm_Expr]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_RemovePosm_Expr]);
        refalrts::copy_evar(vm, context[39], context[40], context[22], context[23]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z2]);
        refalrts::reinit_open_bracket(context[17]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[28], functions[efunc_GenericMatch]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[36], context[42] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[37] );
        refalrts::link_brackets( context[32], context[29] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[17], context[8] );
        refalrts::link_brackets( context[7], context[12] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[44] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[32], context[34] );
        res = refalrts::splice_evar( res, context[17], context[28] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[12] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@2/4 t.Pattern#1/5 (/7 # False/17 e.0#0/18 )/8 t.Next#1/11 e.Tail#1/20 >/1
      context[18] = context[15];
      context[19] = context[16];
      context[20] = context[13];
      context[21] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_False], context[17] ) )
        continue;
      // closed e.0#0 as range 18
      // closed e.Tail#1 as range 20
      //DEBUG: t.Pattern#1: 5
      //DEBUG: t.Next#1: 11
      //DEBUG: e.0#0: 18
      //DEBUG: e.Tail#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Next#1/11 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: t.Pattern#1/5 AsIs: (/7 AsIs: # False/17 AsIs: e.0#0/18 AsIs: )/8 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 t.Pattern#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/13 >/1
    context[13] = context[9];
    context[14] = context[10];
    // closed e.Tail#1 as range 13
    //DEBUG: t.Pattern#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Reduce$1=1@3/16 t.Pattern#1/5/17 (/19 Tile{ AsIs: e.Tail#1/13 } )/20 Tile{ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern*2/4 AsIs: t.Pattern#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Reduce_S1A1Z3]);
    refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@2/4 t.Pattern#1/5 t.Acc#1/7 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Pattern#1: 5
    //DEBUG: t.Acc#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@2/4 t.Pattern#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 t.Pattern#1/5 t.accum#0/7 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: t.accum#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@0/4 } (/9 & ValidBodyForSpec-CheckSentensePattern@0/10 Tile{ AsIs: t.Pattern#1/5 } )/11 Tile{ AsIs: t.accum#0/7 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_Reduce_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & Reduce@3/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 & Reduce$1=1@4/12 (/13 Tile{ AsIs: e.Tail#1/7 } )/14 Tile{ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Reduce_S1A1Z4]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@3/4 t.Acc#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
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
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@3/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1@0/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z3("Reduce@3", COOKIE1_, COOKIE2_, func_gen_Reduce_Z3);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@7/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@7/4 (/7 s.new#3/13 t.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@7/4 (/7 # Inline/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Inline], context[13] ) )
          continue;
        // closed e.1#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: t.0#0: 14
        //DEBUG: e.1#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/13 AsIs: t.0#0/14 } # DanglingInline/20 Tile{ AsIs: e.1#0/16 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@7/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[20], identifiers[ident_DanglingInline]);
        refalrts::update_ident(context[13], identifiers[ident_Error]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z7]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_elem( res, context[4] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@7/4 (/7 # Drive/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Drive], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/13 AsIs: t.0#0/14 } # DanglingDrive/20 Tile{ AsIs: e.1#0/16 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@7/8 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[20], identifiers[ident_DanglingDrive]);
      refalrts::update_ident(context[13], identifiers[ident_Error]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInvalidDriveInline\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@7/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z7]);
    refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_L1D2]);
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
    // </0 & Map@7/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindInvalidDriveInline\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
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
  // </0 & Map@8/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@8/4 (/7 e.Name#5/9 )/8 t.Next#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Name#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.Name#5: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInvalidDriveInline=3\1$1=2\1/4 AsIs: (/7 AsIs: e.Name#5/9 AsIs: )/8 AsIs: t.Next#1/13 } >/15 </16 & Map@8/17 (/18 e.Name#5/9/19 )/21 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z8]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A3L1S1A2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@8/4 (/7 e.Name#5/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#5 as range 9
    //DEBUG: e.Name#5: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@8/4 (/7 e.Name#5/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 (/7 e.Name#5/5 )/8 e.items#0/2 >/1
  // closed e.Name#5 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.Name#5: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & FindInvalidDriveInline=3\1$1=2\1@0/4 AsIs: (/7 AsIs: e.Name#5/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A3L1S1A2L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


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
    // </0 & DoMapAccum@3/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 t.Next#1/15 e.Tail#1/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & FindInvalidDriveInline=3\1/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_FindInvalidDriveInline_A3L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z3]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & FindInvalidDriveInline=3\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A3L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@9/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@9/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Map@9/4 (/7 e.DriveInline#2/15 )/8 (/13 # NativeBody/21 e.0#0/19 )/14 e.Tail#1/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_NativeBody], context[19], context[20] );
      if( ! context[21] )
        continue;
      // closed e.DriveInline#2 as range 15
      // closed e.0#0 as range 19
      // closed e.Tail#1 as range 17
      //DEBUG: e.DriveInline#2: 15
      //DEBUG: e.0#0: 19
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: & FindInvalidDriveInline=2\1$1:1/13 HalfReuse: (/21 AsIs: e.0#0/19 AsIs: )/14 } e.DriveInline#2/15/23 >/25 Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: (/7 AsIs: e.DriveInline#2/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::reinit_name(context[13], functions[efunc_gen_FindInvalidDriveInline_A2L1S1B1]);
      refalrts::reinit_open_bracket(context[21]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[21], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@9/4 (/7 e.DriveInline#2/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.DriveInline#2 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.DriveInline#2: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/13 } Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: (/7 AsIs: e.DriveInline#2/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@9/4 (/7 e.DriveInline#2/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.DriveInline#2 as range 9
    //DEBUG: e.DriveInline#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@9/4 (/7 e.DriveInline#2/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 (/7 e.DriveInline#2/5 )/8 e.items#0/2 >/1
  // closed e.DriveInline#2 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.DriveInline#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & FindInvalidDriveInline=2\1@0/4 AsIs: (/7 AsIs: e.DriveInline#2/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A2L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", COOKIE1_, COOKIE2_, func_gen_Map_Z9);


static refalrts::FnResult func_gen_DoMapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
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
      // </0 & DoMapAccum@4/4 (/5 e.new#8/21 )/6 (/9 e.new#11/17 )/10 t.new#9/15 e.new#10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[5] ) )
        continue;
      // closed e.new#8 as range 21
      // closed e.new#11 as range 17
      // closed e.new#10 as range 19
      do {
        // </0 & DoMapAccum@4/4 (/5 e.new#12/23 )/6 (/9 e.new#17/25 )/10 (/15 s.new#13/31 t.new#14/32 e.new#15/29 )/16 e.new#16/27 >/1
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
        // closed e.new#12 as range 23
        // closed e.new#17 as range 25
        // closed e.new#16 as range 27
        if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
          continue;
        context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        // closed e.new#15 as range 29
        do {
          // </0 & DoMapAccum@4/4 (/5 e.#0/34 )/6 (/9 e.Scanned#1/36 )/10 (/15 # Inline/31 t.0#0/32 e.2#0/38 )/16 e.Tail#1/40 >/1
          context[34] = context[23];
          context[35] = context[24];
          context[36] = context[25];
          context[37] = context[26];
          context[38] = context[29];
          context[39] = context[30];
          context[40] = context[27];
          context[41] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_Inline], context[31] ) )
            continue;
          // closed e.#0 as range 34
          // closed e.Scanned#1 as range 36
          // closed e.2#0 as range 38
          // closed e.Tail#1 as range 40
          //DEBUG: t.0#0: 32
          //DEBUG: e.#0: 34
          //DEBUG: e.Scanned#1: 36
          //DEBUG: e.2#0: 38
          //DEBUG: e.Tail#1: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: e.#0/34 HalfReuse: (/6 HalfReuse: # Inline/9 } Tile{ AsIs: t.0#0/32 } Tile{ AsIs: e.2#0/38 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/36 } Tile{ AsIs: )/16 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_ident(context[9], identifiers[ident_Inline]);
          refalrts::reinit_close_bracket(context[31]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[5], context[10] );
          refalrts::link_brackets( context[6], context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[10], context[15] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@4/4 (/5 e.#0/34 )/6 (/9 e.Scanned#1/36 )/10 (/15 # Drive/31 t.0#0/32 e.2#0/38 )/16 e.Tail#1/40 >/1
        context[34] = context[23];
        context[35] = context[24];
        context[36] = context[25];
        context[37] = context[26];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[27];
        context[41] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_Drive], context[31] ) )
          continue;
        // closed e.#0 as range 34
        // closed e.Scanned#1 as range 36
        // closed e.2#0 as range 38
        // closed e.Tail#1 as range 40
        //DEBUG: t.0#0: 32
        //DEBUG: e.#0: 34
        //DEBUG: e.Scanned#1: 36
        //DEBUG: e.2#0: 38
        //DEBUG: e.Tail#1: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: e.#0/34 HalfReuse: (/6 HalfReuse: # Drive/9 } Tile{ AsIs: t.0#0/32 } Tile{ AsIs: e.2#0/38 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/36 } Tile{ AsIs: )/16 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[6]);
        refalrts::reinit_ident(context[9], identifiers[ident_Drive]);
        refalrts::reinit_close_bracket(context[31]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[5], context[10] );
        refalrts::link_brackets( context[6], context[31] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@4/4 (/5 e.#0/23 )/6 (/9 e.Scanned#1/25 )/10 t.Next#1/15 e.Tail#1/27 >/1
      context[23] = context[21];
      context[24] = context[22];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      // closed e.#0 as range 23
      // closed e.Scanned#1 as range 25
      // closed e.Tail#1 as range 27
      //DEBUG: t.Next#1: 15
      //DEBUG: e.#0: 23
      //DEBUG: e.Scanned#1: 25
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@4/4 AsIs: (/5 AsIs: e.#0/23 AsIs: )/6 AsIs: (/9 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: t.Next#1/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & FindInvalidDriveInline=1\1*3/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_FindInvalidDriveInline_A1L1D3]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & FindInvalidDriveInline=1\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A1L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
      // </0 & Map@10/4 (/7 # Entry/13 t.0#0/14 e.1#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Entry], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.1#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/13 AsIs: t.0#0/14 } # DanglingEntry/16 Tile{ AsIs: e.1#0/11 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@10/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_DanglingEntry]);
      refalrts::update_ident(context[13], identifiers[ident_Error]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::use( res );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@10/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindInvalidEntry\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidEntry_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@11/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFinalInitEntry\1/4 AsIs: t.Next#1/7 } >/9 </10 & Map@11/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z11]);
    refalrts::update_name(context[4], functions[efunc_gen_FindFinalInitEntry_L1]);
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
    // </0 & Map@11/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@11/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindFinalInitEntry\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFinalInitEntry_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@12/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@12/4 (/7 (/15 e.1#0/13 )/16 e.4#0/11 (/23 e.5#0/21 )/24 (/19 e.3#0/17 )/20 )/8 e.Tail#1/9 >/1
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
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[11], context[12] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.1#0 as range 13
      // closed e.4#0 as range 11
      // closed e.5#0 as range 21
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 9
      //DEBUG: e.1#0: 13
      //DEBUG: e.4#0: 11
      //DEBUG: e.5#0: 21
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=1/4 AsIs: (/7 } Tile{ AsIs: e.3#0/17 } )/25 Tile{ AsIs: (/23 AsIs: e.5#0/21 AsIs: )/24 AsIs: (/19 } Tile{ AsIs: e.4#0/11 } )/26 </27 & CheckPattern@1/28 </29 Tile{ HalfReuse: & Map@15/15 AsIs: e.1#0/13 HalfReuse: >/16 } >/30 >/31 Tile{ HalfReuse: </20 HalfReuse: & Map@12/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_CheckPattern_Z1]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_A1]);
      refalrts::reinit_name(context[15], functions[efunc_gen_Map_Z15]);
      refalrts::reinit_close_call(context[16]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[19], context[26] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[7], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[23], context[19] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@12/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@12/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z12]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSentence_D1]);
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
    // </0 & Map@12/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@12/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@12/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map@0/6 (/7 Tile{ HalfReuse: & CheckSentence@0/0 HalfReuse: )/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_CheckSentence_Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z12("Map@12", COOKIE1_, COOKIE2_, func_gen_Map_Z12);


static refalrts::FnResult func_gen_Map_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Map@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@13/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@13/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Map@13/4 (/7 e.ScopeVars#1/15 )/8 (/13 (/23 e.1#0/21 )/24 e.4#0/19 (/31 e.5#0/29 )/32 (/27 e.3#0/25 )/28 )/14 e.Tail#1/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_right( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_right( context[29], context[30], context[19], context[20] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      // closed e.ScopeVars#1 as range 15
      // closed e.1#0 as range 21
      // closed e.4#0 as range 19
      // closed e.5#0 as range 29
      // closed e.3#0 as range 25
      // closed e.Tail#1 as range 17
      //DEBUG: e.ScopeVars#1: 15
      //DEBUG: e.1#0: 21
      //DEBUG: e.4#0: 19
      //DEBUG: e.5#0: 29
      //DEBUG: e.3#0: 25
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 & CheckSentence=1/34 (/35 Tile{ AsIs: e.3#0/25 } )/36 Tile{ AsIs: (/31 AsIs: e.5#0/29 AsIs: )/32 AsIs: (/27 } Tile{ AsIs: e.4#0/19 } Tile{ AsIs: )/28 } Tile{ AsIs: </0 Reuse: & CheckPattern/4 AsIs: (/7 AsIs: e.ScopeVars#1/15 AsIs: )/8 HalfReuse: </13 HalfReuse: & Map@15/23 AsIs: e.1#0/21 HalfReuse: >/24 } >/37 >/38 </39 & Map@13/40 (/41 e.ScopeVars#1/15/42 Tile{ AsIs: )/14 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_CheckSentence_A1]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_gen_Map_Z13]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::copy_evar(vm, context[42], context[43], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_CheckPattern]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[23], functions[efunc_gen_Map_Z15]);
      refalrts::reinit_close_call(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[39] );
      refalrts::link_brackets( context[41], context[14] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[37], context[41] );
      res = refalrts::splice_evar( res, context[0], context[24] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[31], context[27] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@13/4 (/7 e.ScopeVars#1/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.ScopeVars#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.ScopeVars#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & CheckSentence*1/20 e.ScopeVars#1/15/21 Tile{ AsIs: t.Next#1/13 } >/23 Tile{ AsIs: </0 AsIs: & Map@13/4 AsIs: (/7 AsIs: e.ScopeVars#1/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckSentence_D1]);
    refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@13/4 (/7 e.ScopeVars#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScopeVars#1 as range 9
    //DEBUG: e.ScopeVars#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@13/4 (/7 e.ScopeVars#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@13/4 (/7 e.ScopeVars#1/5 )/8 e.items#0/2 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map@0/0 HalfReuse: (/4 HalfReuse: & CheckSentence@0/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_CheckSentence_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z13("Map@13", COOKIE1_, COOKIE2_, func_gen_Map_Z13);


static refalrts::FnResult func_gen_Map_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@14/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@14/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Map@14/4 (/7 e.new#8/15 )/8 (/13 e.new#6/19 )/14 e.new#7/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.new#8 as range 15
      // closed e.new#6 as range 19
      // closed e.new#7 as range 17
      do {
        // </0 & Map@14/4 (/7 e.new#12/21 )/8 (/13 s.new#9/27 e.new#10/23 )/14 e.new#11/25 >/1
        context[21] = context[15];
        context[22] = context[16];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[17];
        context[26] = context[18];
        // closed e.new#12 as range 21
        // closed e.new#11 as range 25
        if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
          continue;
        // closed e.new#10 as range 23
        do {
          // </0 & Map@14/4 (/7 e.ScopeVars#3/28 )/8 (/13 # Sentences/27 e.0#0/30 )/14 e.Tail#1/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[23];
          context[31] = context[24];
          context[32] = context[25];
          context[33] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_Sentences], context[27] ) )
            continue;
          // closed e.ScopeVars#3 as range 28
          // closed e.0#0 as range 30
          // closed e.Tail#1 as range 32
          //DEBUG: e.ScopeVars#3: 28
          //DEBUG: e.0#0: 30
          //DEBUG: e.Tail#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@13/4 AsIs: (/7 AsIs: e.ScopeVars#3/28 AsIs: )/8 } Tile{ AsIs: e.0#0/30 } Tile{ HalfReuse: >/27 } </34 & Map@14/35 Tile{ AsIs: (/13 } e.ScopeVars#3/28/36 Tile{ AsIs: )/14 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z14]);
          refalrts::copy_evar(vm, context[36], context[37], context[28], context[29]);
          refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
          refalrts::reinit_close_call(context[27]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[34] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[14];
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_elem( res, context[13] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_elem( res, context[27] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@14/4 (/7 e.ScopeVars#3/28 )/8 (/13 # NativeBody/27 e.0#0/30 )/14 e.Tail#1/32 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[25];
        context[33] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[27] ) )
          continue;
        // closed e.ScopeVars#3 as range 28
        // closed e.0#0 as range 30
        // closed e.Tail#1 as range 32
        //DEBUG: e.ScopeVars#3: 28
        //DEBUG: e.0#0: 30
        //DEBUG: e.Tail#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/13 # NativeBody/27 e.0#0/30 )/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@14/4 AsIs: (/7 AsIs: e.ScopeVars#3/28 AsIs: )/8 } Tile{ AsIs: e.Tail#1/32 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@14/4 (/7 e.ScopeVars#3/21 )/8 (/13 e.#0/23 )/14 e.Tail#1/25 >/1
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[17];
      context[26] = context[18];
      // closed e.ScopeVars#3 as range 21
      // closed e.#0 as range 23
      // closed e.Tail#1 as range 25
      //DEBUG: e.ScopeVars#3: 21
      //DEBUG: e.#0: 23
      //DEBUG: e.Tail#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec*2/4 AsIs: (/7 AsIs: e.ScopeVars#3/21 AsIs: )/8 } Tile{ AsIs: e.#0/23 } >/27 </28 & Map@14/29 Tile{ AsIs: (/13 } e.ScopeVars#3/21/30 Tile{ AsIs: )/14 AsIs: e.Tail#1/25 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z14]);
      refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
      refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBodyRec_D2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@14/4 (/7 e.ScopeVars#3/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.ScopeVars#3 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.ScopeVars#3: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckBlocks\1*1/4 AsIs: (/7 AsIs: e.ScopeVars#3/15 AsIs: )/8 AsIs: t.Next#1/13 } >/19 </20 & Map@14/21 (/22 e.ScopeVars#3/15/23 )/25 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z14]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckBlocks_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[19], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@14/4 (/7 e.ScopeVars#3/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScopeVars#3 as range 9
    //DEBUG: e.ScopeVars#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@14/4 (/7 e.ScopeVars#3/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@14/4 (/7 e.ScopeVars#3/5 )/8 e.items#0/2 >/1
  // closed e.ScopeVars#3 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & CheckBlocks\1@0/4 AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckBlocks_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z14("Map@14", COOKIE1_, COOKIE2_, func_gen_Map_Z14);


static refalrts::FnResult func_gen_Map_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@15/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@15/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@15/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & Map@15/4 (/7 s.new#6/13 t.new#7/18 t.new#8/20 e.new#9/14 )/8 e.new#10/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#10 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        context[21] = refalrts::tvar_left( context[20], context[14], context[15] );
        if( ! context[21] )
          continue;
        // closed e.new#9 as range 14
        do {
          // </0 & Map@15/4 (/7 s.new#11/13 t.new#12/18 s.new#13/20 e.new#14/22 )/8 e.new#15/24 >/1
          context[22] = context[14];
          context[23] = context[15];
          context[24] = context[16];
          context[25] = context[17];
          if( ! refalrts::svar_term( context[20], context[20] ) )
            continue;
          // closed e.new#14 as range 22
          // closed e.new#15 as range 24
          do {
            // </0 & Map@15/4 (/7 # TkVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
            context[26] = context[22];
            context[27] = context[23];
            context[28] = context[24];
            context[29] = context[25];
            if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
              continue;
            // closed e.2#0 as range 26
            // closed e.Tail#1 as range 28
            //DEBUG: t.0#0: 18
            //DEBUG: s.Mode#2: 20
            //DEBUG: e.2#0: 26
            //DEBUG: e.Tail#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/26 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[7], context[8] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@15/4 (/7 # TkNewVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[13] ) )
            continue;
          // closed e.2#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: t.0#0: 18
          //DEBUG: s.Mode#2: 20
          //DEBUG: e.2#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkNewVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/26 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@15/4 (/7 # Symbol/13 # Name/18 t.1#0/20 e.2#0/22 )/8 e.Tail#1/24 >/1
        context[22] = context[14];
        context[23] = context[15];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[18] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        // closed e.2#0 as range 22
        // closed e.Tail#1 as range 24
        //DEBUG: t.1#0: 20
        //DEBUG: e.2#0: 22
        //DEBUG: e.Tail#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/13 AsIs: # Name/18 AsIs: t.1#0/20 AsIs: e.2#0/22 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@15/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@15/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z15]);
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

      do {
        // </0 & Map@15/4 (/7 # ADT-Brackets/13 t.new#6/18 (/22 e.new#7/20 )/23 e.new#8/14 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
          continue;
        // closed e.new#9 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        // closed e.new#7 as range 20
        // closed e.new#8 as range 14
        do {
          // </0 & Map@15/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 # UnnamedADT/30 )/23 e.2#0/26 )/8 e.Tail#1/28 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[14];
          context[27] = context[15];
          context[28] = context[16];
          context[29] = context[17];
          context[30] = refalrts::ident_left( identifiers[ident_UnnamedADT], context[24], context[25] );
          if( ! context[30] )
            continue;
          if( ! refalrts::empty_seq( context[24], context[25] ) )
            continue;
          // closed e.2#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: t.0#0: 18
          //DEBUG: e.2#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/13 t.0#0/18 {REMOVED TILE} )/23 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: >/22 HalfReuse: </30 } Tile{ HalfReuse: & Map@15/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
          refalrts::reinit_close_call(context[22]);
          refalrts::reinit_open_call(context[30]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z15]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[22], context[30] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@15/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 e.3#0/24 )/23 e.2#0/26 )/8 e.Tail#1/28 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[14];
        context[27] = context[15];
        context[28] = context[16];
        context[29] = context[17];
        // closed e.3#0 as range 24
        // closed e.2#0 as range 26
        // closed e.Tail#1 as range 28
        //DEBUG: t.0#0: 18
        //DEBUG: e.3#0: 24
        //DEBUG: e.2#0: 26
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Symbol/7 Reuse: # Name/13 AsIs: t.0#0/18 } Tile{ AsIs: e.3#0/24 } Tile{ AsIs: )/23 } Tile{ AsIs: </0 } & Map@15/30 Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: >/22 } </31 Tile{ HalfReuse: & Map@15/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[30], functions[efunc_gen_Map_Z15]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_ident(context[7], identifiers[ident_Symbol]);
        refalrts::update_ident(context[13], identifiers[ident_Name]);
        refalrts::reinit_close_call(context[22]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[4], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[4], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@15/4 (/7 # CallBrackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@15/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z15]);
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

      // </0 & Map@15/4 (/7 # Closure/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[13] ) )
        continue;
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Closure/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@15/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@15/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@15/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@15/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@15/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FlatExpr\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FlatExpr_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z15("Map@15", COOKIE1_, COOKIE2_, func_gen_Map_Z15);


static refalrts::FnResult func_gen_DoMapAccum_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@5/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoMapAccum@5/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 t.Next#1/15 e.Tail#1/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@5/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & CheckPattern$3\1/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckPattern_S3L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z5]);
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
    // </0 & DoMapAccum@5/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@5/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@5/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & CheckPattern$3\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckPattern_S3L1Z0]);
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


static refalrts::FnResult func_gen_Map_Z16(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@16/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@16/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@16/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Map@16/4 (/7 e.ScopeVars#1/15 )/8 (/13 # TkVariable/21 t.0#0/22 s.Mode#2/24 '_'/25 e.3#0/19 )/14 e.Tail#1/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_TkVariable], context[19], context[20] );
      if( ! context[21] )
        continue;
      // closed e.ScopeVars#1 as range 15
      // closed e.Tail#1 as range 17
      context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
        continue;
      context[25] = refalrts::char_left( '_', context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.3#0 as range 19
      //DEBUG: e.ScopeVars#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#2: 24
      //DEBUG: e.3#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # Error/21 AsIs: t.0#0/22 } # UnnamedVariableInResult/26 Tile{ AsIs: s.Mode#2/24 AsIs: '_'/25 AsIs: e.3#0/19 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@16/4 AsIs: (/7 AsIs: e.ScopeVars#1/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[26], identifiers[ident_UnnamedVariableInResult]);
      refalrts::update_ident(context[21], identifiers[ident_Error]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[24], context[14] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[13], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@16/4 (/7 e.ScopeVars#1/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.ScopeVars#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.ScopeVars#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & CheckResult\1*1/20 e.ScopeVars#1/15/21 Tile{ AsIs: t.Next#1/13 } >/23 Tile{ AsIs: </0 AsIs: & Map@16/4 AsIs: (/7 AsIs: e.ScopeVars#1/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckResult_L1D1]);
    refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@16/4 (/7 e.ScopeVars#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScopeVars#1 as range 9
    //DEBUG: e.ScopeVars#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@16/4 (/7 e.ScopeVars#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@16/4 (/7 e.ScopeVars#1/5 )/8 e.items#0/2 >/1
  // closed e.ScopeVars#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map@0/0 HalfReuse: (/4 HalfReuse: & CheckResult\1@0/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_CheckResult_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z16("Map@16", COOKIE1_, COOKIE2_, func_gen_Map_Z16);


static refalrts::FnResult func_gen_Map_Z17(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@17/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@17/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@17/4 (/7 s.new#3/13 t.new#4/14 t.new#5/16 e.new#6/11 )/8 e.new#7/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#7 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.new#6 as range 11
      do {
        // </0 & Map@17/4 (/7 # Error/13 t.0#0/14 s.Type#2/16 e.2#0/18 )/8 e.Tail#1/20 >/1
        context[18] = context[11];
        context[19] = context[12];
        context[20] = context[9];
        context[21] = context[10];
        if( ! refalrts::svar_term( context[16], context[16] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Error], context[13] ) )
          continue;
        // closed e.2#0 as range 18
        // closed e.Tail#1 as range 20
        //DEBUG: t.0#0: 14
        //DEBUG: s.Type#2: 16
        //DEBUG: e.2#0: 18
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Error/13 AsIs: t.0#0/14 AsIs: s.Type#2/16 AsIs: e.2#0/18 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@17/4 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@17/4 (/7 # Warning/13 s.WarningId#2/14 t.1#0/16 s.Type#2/22 e.3#0/18 )/8 e.Tail#1/20 >/1
      context[18] = context[11];
      context[19] = context[12];
      context[20] = context[9];
      context[21] = context[10];
      if( ! refalrts::svar_term( context[14], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Warning], context[13] ) )
        continue;
      // closed e.Tail#1 as range 20
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      // closed e.3#0 as range 18
      //DEBUG: t.1#0: 16
      //DEBUG: s.WarningId#2: 14
      //DEBUG: e.Tail#1: 20
      //DEBUG: s.Type#2: 22
      //DEBUG: e.3#0: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Warning/13 AsIs: s.WarningId#2/14 AsIs: t.1#0/16 AsIs: s.Type#2/22 AsIs: e.3#0/18 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@17/4 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@17/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@17/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@17/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@17/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@17/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckValidUsings$5\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckValidUsings_S5L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z17("Map@17", COOKIE1_, COOKIE2_, func_gen_Map_Z17);


static refalrts::FnResult func_gen_CheckResult_L1D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CheckResult\1*1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckResult\1*1/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & CheckResult\1*1/4 e.new#4/10 (/7 s.new#5/9 t.new#6/14 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#4 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & CheckResult\1*1/4 e.new#8/16 (/7 s.new#9/9 t.new#10/14 t.new#11/20 e.new#12/18 )/8 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      // closed e.new#8 as range 16
      context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
      if( ! context[21] )
        continue;
      // closed e.new#12 as range 18
      do {
        // </0 & CheckResult\1*1/4 e.new#13/22 (/7 # TkVariable/9 t.new#14/14 s.new#15/20 e.new#16/24 )/8 >/1
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        if( ! refalrts::svar_term( context[20], context[20] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
          continue;
        // closed e.new#13 as range 22
        // closed e.new#16 as range 24
        do {
          // </0 & CheckResult\1*1/4 e.KnownVars-B#2/30 (/36 s.Mode#2/38 e.Index#2/39 )/37 e.KnownVars-E#2/32 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/20 e.Index#2/28 )/8 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          // closed e.Index#2 as range 28
          context[30] = 0;
          context[31] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[32] = context[26];
            context[33] = context[27];
            context[34] = 0;
            context[35] = 0;
            context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
            if( ! context[36] )
              continue;
            refalrts::bracket_pointers(context[36], context[37]);
            if( ! refalrts::repeated_stvar_left( vm, context[38], context[20], context[34], context[35] ) )
              continue;
            if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[28], context[29], context[34], context[35] ) )
              continue;
            if( ! refalrts::empty_seq( context[34], context[35] ) )
              continue;
            // closed e.KnownVars-E#2 as range 32
            //DEBUG: t.SrcPos#2: 14
            //DEBUG: s.Mode#2: 20
            //DEBUG: e.Index#2: 28
            //DEBUG: e.KnownVars-B#2: 30
            //DEBUG: e.KnownVars-E#2: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars-B#2/30 (/36 s.Mode#2/38 e.Index#2/39 )/37 e.KnownVars-E#2/32 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/20 e.Index#2/28 )/8 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ ]] }
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & CheckResult\1*1/4 e.KnownVars-B#2/30 (/36 s.OldMode#2/40 e.Index#2/38 )/37 e.KnownVars-E#2/32 (/7 # TkVariable/9 t.SrcPos#2/14 s.NewMode#2/20 e.Index#2/28 )/8 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          // closed e.Index#2 as range 28
          context[30] = 0;
          context[31] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[32] = context[26];
            context[33] = context[27];
            context[34] = 0;
            context[35] = 0;
            context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
            if( ! context[36] )
              continue;
            refalrts::bracket_pointers(context[36], context[37]);
            if( ! refalrts::repeated_evar_right( vm, context[38], context[39], context[28], context[29], context[34], context[35] ) )
              continue;
            // closed e.KnownVars-E#2 as range 32
            if( ! refalrts::svar_left( context[40], context[34], context[35] ) )
              continue;
            if( ! refalrts::empty_seq( context[34], context[35] ) )
              continue;
            //DEBUG: t.SrcPos#2: 14
            //DEBUG: s.NewMode#2: 20
            //DEBUG: e.Index#2: 28
            //DEBUG: e.KnownVars-B#2: 30
            //DEBUG: e.KnownVars-E#2: 32
            //DEBUG: s.OldMode#2: 40

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars-B#2/30 {REMOVED TILE} e.Index#2/38 )/37 e.KnownVars-E#2/32 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # InvalidMode/36 AsIs: s.OldMode#2/40 } Tile{ AsIs: s.NewMode#2/20 AsIs: e.Index#2/28 AsIs: )/8 } Tile{ ]] }
            refalrts::update_ident(context[9], identifiers[ident_Error]);
            refalrts::reinit_ident(context[36], identifiers[ident_InvalidMode]);
            refalrts::link_brackets( context[7], context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[20], context[8] );
            res = refalrts::splice_evar( res, context[36], context[40] );
            res = refalrts::splice_evar( res, context[7], context[15] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & CheckResult\1*1/4 e.KnownVars#2/26 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/20 e.Index#2/28 )/8 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.KnownVars#2 as range 26
        // closed e.Index#2 as range 28
        //DEBUG: t.SrcPos#2: 14
        //DEBUG: s.Mode#2: 20
        //DEBUG: e.KnownVars#2: 26
        //DEBUG: e.Index#2: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # VariableNotFound/1 } Tile{ AsIs: s.Mode#2/20 AsIs: e.Index#2/28 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_Error]);
        refalrts::reinit_ident(context[1], identifiers[ident_VariableNotFound]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[8] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckResult\1*1/4 e.KnownVars#2/22 (/7 # Symbol/9 # Name/14 t.SrcPos#2/20 e.Name#2/24 )/8 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      // closed e.KnownVars#2 as range 22
      // closed e.Name#2 as range 24
      //DEBUG: t.SrcPos#2: 20
      //DEBUG: e.KnownVars#2: 22
      //DEBUG: e.Name#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/22 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/9 AsIs: # Name/14 AsIs: t.SrcPos#2/20 AsIs: e.Name#2/24 AsIs: )/8 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckResult\1*1/4 e.new#8/16 (/7 # Closure/9 s.new#9/14 e.new#10/18 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.new#8 as range 16
    // closed e.new#10 as range 18
    do {
      // </0 & CheckResult\1*1/4 e.KnownVars#2/20 (/7 # Closure/9 # Sentences/14 e.#0/22 )/8 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_Sentences], context[14] ) )
        continue;
      // closed e.KnownVars#2 as range 20
      // closed e.#0 as range 22
      //DEBUG: e.KnownVars#2: 20
      //DEBUG: e.#0: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Closure/9 # Sentences/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@13/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownVars#2/20 } Tile{ AsIs: )/8 } Tile{ AsIs: e.#0/22 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckResult\1*1/4 e.KnownVars#2/20 (/7 # Closure/9 # NativeBody/14 e.#0/22 )/8 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[14] ) )
      continue;
    // closed e.KnownVars#2 as range 20
    // closed e.#0 as range 22
    //DEBUG: e.KnownVars#2: 20
    //DEBUG: e.#0: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/20 (/7 # Closure/9 # NativeBody/14 e.#0/22 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckResult\1*1/4 e.KnownVars#2/10 (/7 # Closure/9 e.Body#2/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
      continue;
    // closed e.KnownVars#2 as range 10
    // closed e.Body#2 as range 12
    //DEBUG: e.KnownVars#2: 10
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Closure/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec*2/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownVars#2/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#2/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_CheckFunctionBodyRec_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckResult\1*1/4 e.KnownVars#2/2 (/7 # Error/9 t.SrcPos#2/10 s.Type#2/12 e.Info#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Error], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownVars#2 as range 2
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.KnownVars#2: 2
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: s.Type#2: 12
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Error/9 AsIs: t.SrcPos#2/10 AsIs: s.Type#2/12 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckResult_L1D1("CheckResult\\1*1", COOKIE1_, COOKIE2_, func_gen_CheckResult_L1D1);


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


static refalrts::FnResult func_gen_Reduce_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Reduce$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce$1=1@1/4 (/7 e.Tail0#1/9 )/8 t.Acc#2/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Tail0#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tail0#1: 9
    //DEBUG: t.Acc#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 } Tile{ AsIs: t.Acc#2/13 } Tile{ AsIs: e.Tail0#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@1/4 (/7 e.Tail0#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Tail0#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & CheckProgram\1@0/4 AsIs: (/7 AsIs: e.Tail0#1/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckProgram_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z1("Reduce$1=1@1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z1);


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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & SeparateDefines\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SeparateDefines_L1Z0]);
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & SeparateErrors\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SeparateErrors_L1Z0]);
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


static refalrts::FnResult func_gen_Reduce_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Reduce$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Reduce$1=1@2/4 (/7 e.#0/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.#0 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: e.#0: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@4/4 AsIs: (/7 AsIs: e.#0/13 AsIs: )/8 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@2/4 (/7 e.#0/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.#0 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.#0: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@0/4 AsIs: (/7 } & ValidBodyForSpec-CheckSentensePattern@0/13 (/14 Tile{ AsIs: e.#0/5 } )/15 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_Z0]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z2("Reduce$1=1@2", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z2);


static refalrts::FnResult func_gen_Reduce_S1A1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Reduce$1=1@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@3/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & Reduce$1=1@3/4 t.Pattern#1/5 (/9 e.Tail0#1/11 )/10 t.Acc#2/15 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Tail0#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: t.Pattern#1: 5
    //DEBUG: e.Tail0#1: 11
    //DEBUG: t.Acc#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@2/4 AsIs: t.Pattern#1/5 } Tile{ AsIs: t.Acc#2/15 } Tile{ AsIs: e.Tail0#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@3/4 t.Pattern#1/5 (/9 e.Tail0#1/7 )/10 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 7
  // closed e.dyn#0 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: e.Tail0#1: 7
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@0/4 } (/11 & ValidBodyForSpec-CheckSentensePattern@0/12 Tile{ AsIs: t.Pattern#1/5 } )/13 Tile{ AsIs: (/9 AsIs: e.Tail0#1/7 AsIs: )/10 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_Z0]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z3("Reduce$1=1@3", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z3);


static refalrts::FnResult func_gen_Reduce_S1A1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Reduce$1=1@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@4/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce$1=1@4/4 (/7 e.Tail0#1/9 )/8 t.Acc#2/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Tail0#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tail0#1: 9
    //DEBUG: t.Acc#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@3/4 } Tile{ AsIs: t.Acc#2/13 } Tile{ AsIs: e.Tail0#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@4/4 (/7 e.Tail0#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Tail0#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1@0/4 AsIs: (/7 AsIs: e.Tail0#1/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z4("Reduce$1=1@4", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z4);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@2/8 Tile{ AsIs: </0 Reuse: & Map@10/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z2]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & FindInvalidEntry@0/6 (/7 & CleanupValidForwards@0/8 & FindInvalidForwards@0/9 & FindInvalidDriveInline@0/10 & CheckRedefinitions@0/11 & FindFinalInitEntry@0/12 )/13 {*}/14 >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FindInvalidEntry_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_CleanupValidForwards_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FindInvalidForwards_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindInvalidDriveInline_Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CheckRedefinitions_Z0]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & FindInvalidDriveInline=3\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A3L1Z0]);
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & FindInvalidDriveInline=1\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_A1L1Z0]);
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


static refalrts::FnResult func_gen_CheckPattern_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & CheckPattern@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CheckPattern@1/4 e.Items-B#1/7 (/13 # TkNewVariable/15 t.SrcPos#1/16 s.Mode#1/18 '_'/19 e.Index#1/11 )/14 e.Items-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_TkNewVariable], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Items-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      context[19] = refalrts::char_left( '_', context[11], context[12] );
      if( ! context[19] )
        continue;
      // closed e.Index#1 as range 11
      //DEBUG: e.Items-B#1: 7
      //DEBUG: e.Items-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: s.Mode#1: 18
      //DEBUG: e.Index#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckPattern@1/4 AsIs: e.Items-B#1/7 AsIs: (/13 Reuse: # TkVariable/15 AsIs: t.SrcPos#1/16 AsIs: s.Mode#1/18 AsIs: '_'/19 AsIs: e.Index#1/11 AsIs: )/14 } (/20 # Error/21 t.SrcPos#1/16/22 # UnnamedNewVariable/24 s.Mode#1/18/25 '_'/26 e.Index#1/11/27 )/29 Tile{ AsIs: e.Items-E#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
      refalrts::alloc_ident(vm, context[24], identifiers[ident_UnnamedNewVariable]);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_char(vm, context[26], '_');
      refalrts::copy_evar(vm, context[27], context[28], context[11], context[12]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::update_ident(context[15], identifiers[ident_TkVariable]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[29] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[20], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckPattern@1/4 e.Items-B#1/7 (/13 # TkVariable/15 t.SrcPos1#1/16 s.Mode1#1/18 e.Index#1/11 )/14 e.Items-M#1/19 (/25 # TkNewVariable/27 t.SrcPos2#1/30 s.Mode2#1/32 e.Index#1/28 )/26 e.Items-E#1/21 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_TkVariable], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.Index#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = refalrts::ident_left( identifiers[ident_TkNewVariable], context[23], context[24] );
        if( ! context[27] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Items-E#1 as range 21
        context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
        if( ! context[31] )
          continue;
        if( ! refalrts::svar_left( context[32], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: e.Items-B#1: 7
        //DEBUG: t.SrcPos1#1: 16
        //DEBUG: s.Mode1#1: 18
        //DEBUG: e.Index#1: 11
        //DEBUG: e.Items-M#1: 19
        //DEBUG: e.Items-E#1: 21
        //DEBUG: t.SrcPos2#1: 30
        //DEBUG: s.Mode2#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckPattern@1/4 AsIs: e.Items-B#1/7 AsIs: (/13 AsIs: # TkVariable/15 AsIs: t.SrcPos1#1/16 AsIs: s.Mode1#1/18 AsIs: e.Index#1/11 AsIs: )/14 AsIs: e.Items-M#1/19 AsIs: (/25 Reuse: # TkVariable/27 AsIs: t.SrcPos2#1/30 AsIs: s.Mode2#1/32 AsIs: e.Index#1/28 AsIs: )/26 } (/33 # Error/34 t.SrcPos2#1/30/35 # AlreadyBounded/37 s.Mode2#1/32/38 e.Index#1/28/39 )/41 Tile{ AsIs: e.Items-E#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_ident(vm, context[34], identifiers[ident_Error]);
        refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_AlreadyBounded]);
        refalrts::copy_stvar(vm, context[38], context[32]);
        refalrts::copy_evar(vm, context[39], context[40], context[28], context[29]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::update_ident(context[27], identifiers[ident_TkVariable]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[41] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[33], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckPattern@1/4 e.Items#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Items#1 as range 5
    //DEBUG: e.Items#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & DoMapAccum@5/8 (/9 )/10 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Items#1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckPattern@1/4 e.dyn#1/2 >/1
  // closed e.dyn#1 as range 2
  //DEBUG: e.dyn#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckPattern@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckPattern_Z0]);
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

static refalrts::NativeReference nat_ref_gen_CheckPattern_Z1("CheckPattern@1", COOKIE1_, COOKIE2_, func_gen_CheckPattern_Z1);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoCheckAssignments$2=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & DoCheckAssignments$2=1@1/4 (/7 e.Assignments0#1/21 )/8 (/11 e.ScopeVars#2/23 )/12 (/15 e.Pattern0#1/25 )/16 (/19 e.Blocks0#1/27 )/20 e.ResultFunctionsAndErrors#2/29 >/1
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
    // closed e.Assignments0#1 as range 21
    // closed e.ScopeVars#2 as range 23
    // closed e.Pattern0#1 as range 25
    // closed e.Blocks0#1 as range 27
    // closed e.ResultFunctionsAndErrors#2 as range 29
    //DEBUG: e.Assignments0#1: 21
    //DEBUG: e.ScopeVars#2: 23
    //DEBUG: e.Pattern0#1: 25
    //DEBUG: e.Blocks0#1: 27
    //DEBUG: e.ResultFunctionsAndErrors#2: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2@1/4 AsIs: (/7 } Tile{ AsIs: e.Assignments0#1/21 } Tile{ AsIs: )/20 } (/31 Tile{ AsIs: e.ResultFunctionsAndErrors#2/29 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.ScopeVars#2/23 AsIs: )/12 AsIs: (/15 AsIs: e.Pattern0#1/25 AsIs: )/16 HalfReuse: </19 } & Map@14/32 (/33 e.ScopeVars#2/23/34 )/36 Tile{ AsIs: e.Blocks0#1/27 } >/37 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z14]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2Z1]);
    refalrts::reinit_open_call(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[31], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[32], context[36] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=1@1/4 (/7 e.Assignments0#1/5 )/8 (/11 e.ScopeVars#2/9 )/12 (/15 e.Pattern0#1/13 )/16 (/19 e.Blocks0#1/17 )/20 e.dyn#0/2 >/1
  // closed e.Assignments0#1 as range 5
  // closed e.ScopeVars#2 as range 9
  // closed e.Pattern0#1 as range 13
  // closed e.Blocks0#1 as range 17
  // closed e.dyn#0 as range 2
  //DEBUG: e.Assignments0#1: 5
  //DEBUG: e.ScopeVars#2: 9
  //DEBUG: e.Pattern0#1: 13
  //DEBUG: e.Blocks0#1: 17
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=1@0/4 AsIs: (/7 } Tile{ AsIs: e.Assignments0#1/5 } )/21 (/22 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.ScopeVars#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Pattern0#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Blocks0#1/17 AsIs: )/20 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A1Z1("DoCheckAssignments$2=1@1", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A1Z1);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & DoCheckAssignments$2=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=1@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 (/27 e.new#6/25 )/28 (/31 e.new#7/29 )/32 (/35 e.new#8/33 )/36 e.new#9/2 >/1
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
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 21
  // closed e.new#6 as range 25
  // closed e.new#7 as range 29
  // closed e.new#8 as range 33
  // closed e.new#9 as range 2
  do {
    // </0 & DoCheckAssignments$2=1@2/4 (/7 e.Assignments0#1/37 )/8 (/11 e.Errors0#1/39 )/12 (/15 e.ResultFunctionsAndErrors0#2/41 )/16 (/19 e.BlocksFunctionsAndErrors#3/43 )/20 (/23 e.PatternFunctionsAndErrors#4/45 )/24 (/27 e.ScopeVars#4/47 )/28 (/31 e.Pattern0#1/49 )/32 (/35 e.Blocks0#1/51 )/36 e.ResultFunctionsAndErrors#2/53 >/1
    context[37] = context[5];
    context[38] = context[6];
    context[39] = context[9];
    context[40] = context[10];
    context[41] = context[13];
    context[42] = context[14];
    context[43] = context[17];
    context[44] = context[18];
    context[45] = context[21];
    context[46] = context[22];
    context[47] = context[25];
    context[48] = context[26];
    context[49] = context[29];
    context[50] = context[30];
    context[51] = context[33];
    context[52] = context[34];
    context[53] = context[2];
    context[54] = context[3];
    // closed e.Assignments0#1 as range 37
    // closed e.Errors0#1 as range 39
    // closed e.ResultFunctionsAndErrors0#2 as range 41
    // closed e.BlocksFunctionsAndErrors#3 as range 43
    // closed e.PatternFunctionsAndErrors#4 as range 45
    // closed e.ScopeVars#4 as range 47
    // closed e.Pattern0#1 as range 49
    // closed e.Blocks0#1 as range 51
    // closed e.ResultFunctionsAndErrors#2 as range 53
    //DEBUG: e.Assignments0#1: 37
    //DEBUG: e.Errors0#1: 39
    //DEBUG: e.ResultFunctionsAndErrors0#2: 41
    //DEBUG: e.BlocksFunctionsAndErrors#3: 43
    //DEBUG: e.PatternFunctionsAndErrors#4: 45
    //DEBUG: e.ScopeVars#4: 47
    //DEBUG: e.Pattern0#1: 49
    //DEBUG: e.Blocks0#1: 51
    //DEBUG: e.ResultFunctionsAndErrors#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2@2/4 AsIs: (/7 AsIs: e.Assignments0#1/37 AsIs: )/8 AsIs: (/11 AsIs: e.Errors0#1/39 AsIs: )/12 AsIs: (/15 AsIs: e.ResultFunctionsAndErrors0#2/41 AsIs: )/16 AsIs: (/19 AsIs: e.BlocksFunctionsAndErrors#3/43 AsIs: )/20 AsIs: (/23 AsIs: e.PatternFunctionsAndErrors#4/45 AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/53 } )/55 (/56 Tile{ AsIs: e.ScopeVars#4/47 } Tile{ AsIs: )/28 AsIs: (/31 AsIs: e.Pattern0#1/49 AsIs: )/32 HalfReuse: </35 } & Map@14/57 (/58 e.ScopeVars#4/47/59 Tile{ AsIs: )/36 } Tile{ AsIs: e.Blocks0#1/51 } >/61 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[55]);
    refalrts::alloc_open_bracket(vm, context[56]);
    refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z14]);
    refalrts::alloc_open_bracket(vm, context[58]);
    refalrts::copy_evar(vm, context[59], context[60], context[47], context[48]);
    refalrts::alloc_close_call(vm, context[61]);
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2Z2]);
    refalrts::reinit_open_call(context[35]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[61] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[58], context[36] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[56], context[28] );
    refalrts::link_brackets( context[27], context[55] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[61] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[59], context[60] );
    res = refalrts::splice_evar( res, context[57], context[58] );
    res = refalrts::splice_evar( res, context[28], context[35] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=1@2/4 (/7 e.Assignments0#1/5 )/8 (/11 e.Errors0#1/9 )/12 (/15 e.ResultFunctionsAndErrors0#2/13 )/16 (/19 e.BlocksFunctionsAndErrors#3/17 )/20 (/23 e.PatternFunctionsAndErrors#4/21 )/24 (/27 e.ScopeVars#4/25 )/28 (/31 e.Pattern0#1/29 )/32 (/35 e.Blocks0#1/33 )/36 e.dyn#0/2 >/1
  // closed e.Assignments0#1 as range 5
  // closed e.Errors0#1 as range 9
  // closed e.ResultFunctionsAndErrors0#2 as range 13
  // closed e.BlocksFunctionsAndErrors#3 as range 17
  // closed e.PatternFunctionsAndErrors#4 as range 21
  // closed e.ScopeVars#4 as range 25
  // closed e.Pattern0#1 as range 29
  // closed e.Blocks0#1 as range 33
  // closed e.dyn#0 as range 2
  //DEBUG: e.Assignments0#1: 5
  //DEBUG: e.Errors0#1: 9
  //DEBUG: e.ResultFunctionsAndErrors0#2: 13
  //DEBUG: e.BlocksFunctionsAndErrors#3: 17
  //DEBUG: e.PatternFunctionsAndErrors#4: 21
  //DEBUG: e.ScopeVars#4: 25
  //DEBUG: e.Pattern0#1: 29
  //DEBUG: e.Blocks0#1: 33
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 (/23 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=1@0/4 AsIs: (/7 AsIs: e.Assignments0#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors0#1/9 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/17 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.ScopeVars#4/25 AsIs: )/28 AsIs: (/31 AsIs: e.Pattern0#1/29 AsIs: )/32 AsIs: (/35 AsIs: e.Blocks0#1/33 AsIs: )/36 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[11], context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A1Z2("DoCheckAssignments$2=1@2", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A1Z2);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@5/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@5/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum$1=1@5/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & CheckPattern$3\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckPattern_S3L1Z0]);
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


static refalrts::FnResult func_gen_Reduce_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & Reduce@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@4/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce@4/4 (/7 e.new#7/11 )/8 t.new#4/9 t.new#5/15 e.new#6/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & Reduce@4/4 (/7 e.new#12/17 )/8 (/9 s.new#8/23 e.new#9/21 )/10 t.new#10/15 e.new#11/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      // closed e.new#12 as range 17
      // closed e.new#11 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new#9 as range 21
      do {
        // </0 & Reduce@4/4 (/7 e.#0/24 )/8 (/9 # True/23 e.2#0/26 )/10 (/15 (/34 e.4#0/32 )/35 e.3#0/30 )/16 e.Tail#1/28 >/1
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[19];
        context[29] = context[20];
        context[30] = 0;
        context[31] = 0;
        if( ! refalrts::brackets_term( context[30], context[31], context[15] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_True], context[23] ) )
          continue;
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
        if( ! context[34] )
          continue;
        refalrts::bracket_pointers(context[34], context[35]);
        // closed e.#0 as range 24
        // closed e.2#0 as range 26
        // closed e.4#0 as range 32
        // closed e.3#0 as range 30
        // closed e.Tail#1 as range 28
        //DEBUG: e.#0: 24
        //DEBUG: e.2#0: 26
        //DEBUG: e.4#0: 32
        //DEBUG: e.3#0: 30
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3#0/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@2/4 AsIs: (/7 AsIs: e.#0/24 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: )/16 } </36 & ValidBodyForSpec-CheckSentensePattern$1:1/37 Tile{ HalfReuse: (/23 AsIs: e.2#0/26 AsIs: )/10 HalfReuse: </15 HalfReuse: & GenericMatch/34 } (/38 </39 & RemovePos-Expr/40 Tile{ AsIs: e.4#0/32 } >/41 Tile{ AsIs: )/35 } (/42 </43 & RemovePos-Expr/44 e.#0/24/45 >/47 )/48 >/49 >/50 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1]);
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_RemovePosm_Expr]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_RemovePosm_Expr]);
        refalrts::copy_evar(vm, context[45], context[46], context[24], context[25]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z2]);
        refalrts::reinit_open_bracket(context[23]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[34], functions[efunc_GenericMatch]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[42], context[48] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[43] );
        refalrts::link_brackets( context[38], context[35] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[23], context[10] );
        refalrts::link_brackets( context[9], context[16] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[42], context[50] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[38], context[40] );
        res = refalrts::splice_evar( res, context[23], context[34] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@4/4 (/7 e.#0/24 )/8 (/9 # False/23 e.1#0/26 )/10 t.Next#1/15 e.Tail#1/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_False], context[23] ) )
        continue;
      // closed e.#0 as range 24
      // closed e.1#0 as range 26
      // closed e.Tail#1 as range 28
      //DEBUG: t.Next#1: 15
      //DEBUG: e.#0: 24
      //DEBUG: e.1#0: 26
      //DEBUG: e.Tail#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Next#1/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@4/4 AsIs: (/7 AsIs: e.#0/24 AsIs: )/8 AsIs: (/9 AsIs: # False/23 AsIs: e.1#0/26 AsIs: )/10 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@4/4 (/7 e.#0/17 )/8 t.Acc#1/9 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.#0 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.#0: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & Reduce$1=1@2/22 (/23 e.#0/17/24 )/26 (/27 Tile{ AsIs: e.Tail#1/19 } )/28 Tile{ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern*2/4 AsIs: (/7 AsIs: e.#0/17 AsIs: )/8 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/29 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Reduce_S1A1Z2]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@4/4 (/7 e.#0/11 )/8 t.Acc#1/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.#0 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@4/4 (/7 e.#0/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@4/4 (/7 e.#0/5 )/8 t.accum#0/9 e.items#0/2 >/1
  // closed e.#0 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 9
  //DEBUG: e.#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@0/4 AsIs: (/7 } & ValidBodyForSpec-CheckSentensePattern@0/11 (/12 Tile{ AsIs: e.#0/5 } )/13 Tile{ AsIs: )/8 AsIs: t.accum#0/9 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z4("Reduce@4", COOKIE1_, COOKIE2_, func_gen_Reduce_Z4);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A2Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoCheckAssignments$2=2@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=2@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & DoCheckAssignments$2=2@1/4 (/7 e.Assignments0#1/21 )/8 (/11 e.ResultFunctionsAndErrors0#2/23 )/12 (/15 e.ScopeVars#2/25 )/16 (/19 e.Pattern0#1/27 )/20 e.BlocksFunctionsAndErrors#3/29 >/1
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
    // closed e.Assignments0#1 as range 21
    // closed e.ResultFunctionsAndErrors0#2 as range 23
    // closed e.ScopeVars#2 as range 25
    // closed e.Pattern0#1 as range 27
    // closed e.BlocksFunctionsAndErrors#3 as range 29
    //DEBUG: e.Assignments0#1: 21
    //DEBUG: e.ResultFunctionsAndErrors0#2: 23
    //DEBUG: e.ScopeVars#2: 25
    //DEBUG: e.Pattern0#1: 27
    //DEBUG: e.BlocksFunctionsAndErrors#3: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=3@1/4 AsIs: (/7 AsIs: e.Assignments0#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.ResultFunctionsAndErrors0#2/23 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/29 } )/31 </32 & CheckPattern/33 (/34 Tile{ AsIs: e.ScopeVars#2/25 } )/35 Tile{ HalfReuse: </16 HalfReuse: & Map@15/19 AsIs: e.Pattern0#1/27 HalfReuse: >/20 } >/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_CheckPattern]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3Z1]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[19], functions[efunc_gen_Map_Z15]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[15], context[31] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=2@1/4 (/7 e.Assignments0#1/5 )/8 (/11 e.ResultFunctionsAndErrors0#2/9 )/12 (/15 e.ScopeVars#2/13 )/16 (/19 e.Pattern0#1/17 )/20 e.dyn#0/2 >/1
  // closed e.Assignments0#1 as range 5
  // closed e.ResultFunctionsAndErrors0#2 as range 9
  // closed e.ScopeVars#2 as range 13
  // closed e.Pattern0#1 as range 17
  // closed e.dyn#0 as range 2
  //DEBUG: e.Assignments0#1: 5
  //DEBUG: e.ResultFunctionsAndErrors0#2: 9
  //DEBUG: e.ScopeVars#2: 13
  //DEBUG: e.Pattern0#1: 17
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2@0/4 AsIs: (/7 } Tile{ AsIs: e.Assignments0#1/5 } )/21 (/22 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.ResultFunctionsAndErrors0#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.ScopeVars#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern0#1/17 AsIs: )/20 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A2Z1("DoCheckAssignments$2=2@1", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A2Z1);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A2Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & DoCheckAssignments$2=2@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=2@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 (/27 e.new#6/25 )/28 (/31 e.new#7/29 )/32 (/35 e.new#8/33 )/36 e.new#9/2 >/1
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
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 21
  // closed e.new#6 as range 25
  // closed e.new#7 as range 29
  // closed e.new#8 as range 33
  // closed e.new#9 as range 2
  do {
    // </0 & DoCheckAssignments$2=2@2/4 (/7 e.Assignments0#1/37 )/8 (/11 e.Errors0#1/39 )/12 (/15 e.ResultFunctionsAndErrors0#2/41 )/16 (/19 e.BlocksFunctionsAndErrors0#3/43 )/20 (/23 e.PatternFunctionsAndErrors#4/45 )/24 (/27 e.ResultFunctionsAndErrors1#2/47 )/28 (/31 e.ScopeVars#4/49 )/32 (/35 e.Pattern0#1/51 )/36 e.BlocksFunctionsAndErrors#3/53 >/1
    context[37] = context[5];
    context[38] = context[6];
    context[39] = context[9];
    context[40] = context[10];
    context[41] = context[13];
    context[42] = context[14];
    context[43] = context[17];
    context[44] = context[18];
    context[45] = context[21];
    context[46] = context[22];
    context[47] = context[25];
    context[48] = context[26];
    context[49] = context[29];
    context[50] = context[30];
    context[51] = context[33];
    context[52] = context[34];
    context[53] = context[2];
    context[54] = context[3];
    // closed e.Assignments0#1 as range 37
    // closed e.Errors0#1 as range 39
    // closed e.ResultFunctionsAndErrors0#2 as range 41
    // closed e.BlocksFunctionsAndErrors0#3 as range 43
    // closed e.PatternFunctionsAndErrors#4 as range 45
    // closed e.ResultFunctionsAndErrors1#2 as range 47
    // closed e.ScopeVars#4 as range 49
    // closed e.Pattern0#1 as range 51
    // closed e.BlocksFunctionsAndErrors#3 as range 53
    //DEBUG: e.Assignments0#1: 37
    //DEBUG: e.Errors0#1: 39
    //DEBUG: e.ResultFunctionsAndErrors0#2: 41
    //DEBUG: e.BlocksFunctionsAndErrors0#3: 43
    //DEBUG: e.PatternFunctionsAndErrors#4: 45
    //DEBUG: e.ResultFunctionsAndErrors1#2: 47
    //DEBUG: e.ScopeVars#4: 49
    //DEBUG: e.Pattern0#1: 51
    //DEBUG: e.BlocksFunctionsAndErrors#3: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=3/4 AsIs: (/7 AsIs: e.Assignments0#1/37 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors0#1/39 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/41 } Tile{ AsIs: e.BlocksFunctionsAndErrors0#3/43 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/45 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.ResultFunctionsAndErrors1#2/47 AsIs: )/28 AsIs: (/31 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/53 } Tile{ AsIs: )/20 HalfReuse: </23 } Tile{ HalfReuse: & CheckPattern/16 AsIs: (/19 } Tile{ AsIs: e.ScopeVars#4/49 } Tile{ AsIs: )/12 } Tile{ HalfReuse: </32 HalfReuse: & Map@15/35 AsIs: e.Pattern0#1/51 HalfReuse: >/36 } Tile{ HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_name(context[16], functions[efunc_CheckPattern]);
    refalrts::reinit_open_call(context[32]);
    refalrts::reinit_name(context[35], functions[efunc_gen_Map_Z15]);
    refalrts::reinit_close_call(context[36]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[19], context[12] );
    refalrts::link_brackets( context[31], context[20] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[11], context[24] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[32], context[36] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[24], context[31] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=2@2/4 (/7 e.Assignments0#1/5 )/8 (/11 e.Errors0#1/9 )/12 (/15 e.ResultFunctionsAndErrors0#2/13 )/16 (/19 e.BlocksFunctionsAndErrors0#3/17 )/20 (/23 e.PatternFunctionsAndErrors#4/21 )/24 (/27 e.ResultFunctionsAndErrors1#2/25 )/28 (/31 e.ScopeVars#4/29 )/32 (/35 e.Pattern0#1/33 )/36 e.dyn#0/2 >/1
  // closed e.Assignments0#1 as range 5
  // closed e.Errors0#1 as range 9
  // closed e.ResultFunctionsAndErrors0#2 as range 13
  // closed e.BlocksFunctionsAndErrors0#3 as range 17
  // closed e.PatternFunctionsAndErrors#4 as range 21
  // closed e.ResultFunctionsAndErrors1#2 as range 25
  // closed e.ScopeVars#4 as range 29
  // closed e.Pattern0#1 as range 33
  // closed e.dyn#0 as range 2
  //DEBUG: e.Assignments0#1: 5
  //DEBUG: e.Errors0#1: 9
  //DEBUG: e.ResultFunctionsAndErrors0#2: 13
  //DEBUG: e.BlocksFunctionsAndErrors0#3: 17
  //DEBUG: e.PatternFunctionsAndErrors#4: 21
  //DEBUG: e.ResultFunctionsAndErrors1#2: 25
  //DEBUG: e.ScopeVars#4: 29
  //DEBUG: e.Pattern0#1: 33
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 (/19 {REMOVED TILE} )/20 (/23 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2@0/4 AsIs: (/7 AsIs: e.Assignments0#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors0#1/9 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors0#3/17 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.ResultFunctionsAndErrors1#2/25 AsIs: )/28 AsIs: (/31 AsIs: e.ScopeVars#4/29 AsIs: )/32 AsIs: (/35 AsIs: e.Pattern0#1/33 AsIs: )/36 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A2Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[11], context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A2Z2("DoCheckAssignments$2=2@2", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A2Z2);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@2/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@3/8 Tile{ AsIs: </0 Reuse: & CleanupValidForwards/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z3]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_CleanupValidForwards]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & CleanupValidForwards@0/6 (/7 & FindInvalidForwards@0/8 & FindInvalidDriveInline@0/9 & CheckRedefinitions@0/10 & FindFinalInitEntry@0/11 )/12 {*}/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CleanupValidForwards_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_FindInvalidForwards_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FindInvalidDriveInline_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_CheckRedefinitions_Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A3Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & DoCheckAssignments$2=3@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckAssignments$2=3@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & DoCheckAssignments$2=3@1/4 (/7 e.new#7/17 )/8 (/11 e.new#8/19 )/12 (/15 e.new#9/21 )/16 (/27 e.new#5/25 )/28 e.new#6/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.new#7 as range 17
    // closed e.new#8 as range 19
    // closed e.new#9 as range 21
    // closed e.new#5 as range 25
    // closed e.new#6 as range 23
    do {
      // </0 & DoCheckAssignments$2=3@1/4 (/7 )/8 (/11 e.ResultFunctionsAndErrors0#2/29 )/12 (/15 e.BlocksFunctionsAndErrors0#3/31 )/16 (/27 e.ScopeVars#4/33 )/28 e.PatternFunctionsAndErrors#4/35 >/1
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[23];
      context[36] = context[24];
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.ResultFunctionsAndErrors0#2 as range 29
      // closed e.BlocksFunctionsAndErrors0#3 as range 31
      // closed e.ScopeVars#4 as range 33
      // closed e.PatternFunctionsAndErrors#4 as range 35
      //DEBUG: e.ResultFunctionsAndErrors0#2: 29
      //DEBUG: e.BlocksFunctionsAndErrors0#3: 31
      //DEBUG: e.ScopeVars#4: 33
      //DEBUG: e.PatternFunctionsAndErrors#4: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckAssignments$2=3@1/4 (/7 )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/27 AsIs: e.ScopeVars#4/33 AsIs: )/28 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/29 } Tile{ AsIs: e.BlocksFunctionsAndErrors0#3/31 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/35 } Tile{ ]] }
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoCheckAssignments$2=3@1/4 (/7 (/41 s.ChainType#1/55 (/53 e.3#0/51 )/54 (/49 e.5#0/47 )/50 (/45 e.7#0/43 )/46 )/42 e.#0/29 )/8 (/11 e.ResultFunctionsAndErrors0#2/31 )/12 (/15 e.BlocksFunctionsAndErrors0#3/33 )/16 (/27 e.ScopeVars#4/35 )/28 e.PatternFunctionsAndErrors#4/37 >/1
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      context[33] = context[21];
      context[34] = context[22];
      context[35] = context[25];
      context[36] = context[26];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_right( context[43], context[44], context[39], context[40] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[39], context[40] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = 0;
      context[52] = 0;
      context[53] = refalrts::brackets_right( context[51], context[52], context[39], context[40] );
      if( ! context[53] )
        continue;
      refalrts::bracket_pointers(context[53], context[54]);
      // closed e.3#0 as range 51
      // closed e.5#0 as range 47
      // closed e.7#0 as range 43
      // closed e.#0 as range 29
      // closed e.ResultFunctionsAndErrors0#2 as range 31
      // closed e.BlocksFunctionsAndErrors0#3 as range 33
      // closed e.ScopeVars#4 as range 35
      // closed e.PatternFunctionsAndErrors#4 as range 37
      if( ! refalrts::svar_left( context[55], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: e.3#0: 51
      //DEBUG: e.5#0: 47
      //DEBUG: e.7#0: 43
      //DEBUG: e.#0: 29
      //DEBUG: e.ResultFunctionsAndErrors0#2: 31
      //DEBUG: e.BlocksFunctionsAndErrors0#3: 33
      //DEBUG: e.ScopeVars#4: 35
      //DEBUG: e.PatternFunctionsAndErrors#4: 37
      //DEBUG: s.ChainType#1: 55

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.ChainType#1/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=1/4 AsIs: (/7 } Tile{ AsIs: e.#0/29 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/31 } Tile{ AsIs: e.BlocksFunctionsAndErrors0#3/33 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/37 } Tile{ AsIs: )/12 AsIs: (/15 } e.ScopeVars#4/35/56 Tile{ AsIs: )/50 AsIs: (/45 AsIs: e.7#0/43 AsIs: )/46 HalfReuse: (/42 } Tile{ AsIs: e.5#0/47 } Tile{ HalfReuse: )/41 } </58 Tile{ HalfReuse: & CheckResult/16 AsIs: (/27 AsIs: e.ScopeVars#4/35 AsIs: )/28 } </59 Tile{ HalfReuse: & Map@15/53 AsIs: e.3#0/51 HalfReuse: >/54 HalfReuse: >/49 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[56], context[57], context[35], context[36]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_open_call(vm, context[59]);
      refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A1]);
      refalrts::reinit_open_bracket(context[42]);
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_name(context[16], functions[efunc_CheckResult]);
      refalrts::reinit_name(context[53], functions[efunc_gen_Map_Z15]);
      refalrts::reinit_close_call(context[54]);
      refalrts::reinit_close_call(context[49]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[59] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[42], context[41] );
      refalrts::link_brackets( context[45], context[46] );
      refalrts::link_brackets( context[15], context[50] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[53], context[49] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[16], context[28] );
      res = refalrts::splice_elem( res, context[58] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[50], context[42] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoCheckAssignments$2=3@1/4 (/7 e.Assignments0#1/29 )/8 (/11 e.ResultFunctionsAndErrors0#2/31 )/12 (/15 e.BlocksFunctionsAndErrors0#3/33 )/16 (/27 e.ScopeVars#4/35 )/28 e.PatternFunctionsAndErrors#4/37 >/1
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[21];
    context[34] = context[22];
    context[35] = context[25];
    context[36] = context[26];
    context[37] = context[23];
    context[38] = context[24];
    // closed e.Assignments0#1 as range 29
    // closed e.ResultFunctionsAndErrors0#2 as range 31
    // closed e.BlocksFunctionsAndErrors0#3 as range 33
    // closed e.ScopeVars#4 as range 35
    // closed e.PatternFunctionsAndErrors#4 as range 37
    //DEBUG: e.Assignments0#1: 29
    //DEBUG: e.ResultFunctionsAndErrors0#2: 31
    //DEBUG: e.BlocksFunctionsAndErrors0#3: 33
    //DEBUG: e.ScopeVars#4: 35
    //DEBUG: e.PatternFunctionsAndErrors#4: 37

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} (/27 {REMOVED TILE} )/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments*2/4 AsIs: (/7 AsIs: e.Assignments0#1/29 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#4/35 } Tile{ AsIs: )/16 } Tile{ AsIs: e.ResultFunctionsAndErrors0#2/31 } Tile{ AsIs: e.BlocksFunctionsAndErrors0#3/33 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/37 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckAssignments$2=3@1/4 (/7 e.Assignments0#1/5 )/8 (/11 e.ResultFunctionsAndErrors0#2/9 )/12 (/15 e.BlocksFunctionsAndErrors0#3/13 )/16 e.dyn#0/2 >/1
  // closed e.Assignments0#1 as range 5
  // closed e.ResultFunctionsAndErrors0#2 as range 9
  // closed e.BlocksFunctionsAndErrors0#3 as range 13
  // closed e.dyn#0 as range 2
  //DEBUG: e.Assignments0#1: 5
  //DEBUG: e.ResultFunctionsAndErrors0#2: 9
  //DEBUG: e.BlocksFunctionsAndErrors0#3: 13
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=3@0/4 AsIs: (/7 } Tile{ AsIs: e.Assignments0#1/5 } )/17 (/18 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.ResultFunctionsAndErrors0#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BlocksFunctionsAndErrors0#3/13 AsIs: )/16 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckAssignments_S2A3Z1("DoCheckAssignments$2=3@1", COOKIE1_, COOKIE2_, func_gen_DoCheckAssignments_S2A3Z1);


static refalrts::FnResult func_gen_Fetch_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Fetch@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@3/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@4/8 Tile{ AsIs: </0 Reuse: & FindInvalidForwards/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z4]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_FindInvalidForwards]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@3/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & FindInvalidForwards@0/6 (/7 & FindInvalidDriveInline@0/8 & CheckRedefinitions@0/9 & FindFinalInitEntry@0/10 )/11 {*}/12 >/13 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FindInvalidForwards_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_FindInvalidDriveInline_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_CheckRedefinitions_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z3("Fetch@3", COOKIE1_, COOKIE2_, func_gen_Fetch_Z3);


static refalrts::FnResult func_gen_Fetch_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Fetch@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@4/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@5/4 } </7 & FindInvalidDriveInline=1/8 </9 & DoMapAccum@4/10 (/11 )/12 (/13 )/14 Tile{ AsIs: e.Argument#1/5 } >/15 >/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_FindInvalidDriveInline_A1]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[9] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@4/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & FindInvalidDriveInline@0/6 (/7 & CheckRedefinitions@0/8 & FindFinalInitEntry@0/9 )/10 {*}/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FindInvalidDriveInline_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_CheckRedefinitions_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z4("Fetch@4", COOKIE1_, COOKIE2_, func_gen_Fetch_Z4);


static refalrts::FnResult func_gen_Fetch_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Fetch@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@5/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@6/8 Tile{ AsIs: </0 Reuse: & CheckRedefinitions/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z6]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_CheckRedefinitions]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@5/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & CheckRedefinitions@0/6 (/7 & FindFinalInitEntry@0/8 )/9 {*}/10 >/11 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckRedefinitions_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[1]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z5("Fetch@5", COOKIE1_, COOKIE2_, func_gen_Fetch_Z5);


static refalrts::FnResult func_gen_Fetch_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@6/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@11/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@6/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & FindFinalInitEntry@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_FindFinalInitEntry_Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z6("Fetch@6", COOKIE1_, COOKIE2_, func_gen_Fetch_Z6);


//End of file
