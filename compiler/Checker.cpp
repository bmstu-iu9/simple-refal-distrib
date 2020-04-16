// This file automatically generated from 'Checker.ref'
// Don't edit! Edit 'Checker.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4050005100_4048713605
#define COOKIE1_ 4050005100U
#define COOKIE2_ 4048713605U

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
  efunc_ELm_AddErrorAt = 14,
  efunc_PrepareMessage = 15,
  efunc_FindErrors = 16,
  efunc_gen_Reduce_Z1 = 17,
  efunc_CheckValidUsings = 18,
  efunc_CheckDeclarations = 19,
  efunc_gen_Map_Z1 = 20,
  efunc_SeparateDefines = 21,
  efunc_gen_FindErrors_A3 = 22,
  efunc_gen_FindErrors_A2 = 23,
  efunc_CheckSpecs = 24,
  efunc_gen_FindErrors_A1 = 25,
  efunc_CheckSpecsAndDrives = 26,
  efunc_gen_Map_Z2 = 27,
  efunc_gen_Reduce_Z2 = 28,
  efunc_gen_CheckSpecsAndDrives_A2 = 29,
  efunc_gen_CheckSpecsAndDrives_A1L1S2C1 = 30,
  efunc_OneOf = 31,
  efunc_gen_MapAccum_Z1 = 32,
  efunc_gen_CheckSpecsAndDrives_A1 = 33,
  efunc_gen_ConflictSpecDriveErrorForName_S1C1 = 34,
  efunc_gen_ConflictSpecDriveErrorForName_S1C2 = 35,
  efunc_gen_Map_Z3 = 36,
  efunc_CheckSpecsm_SeparateErrors = 37,
  efunc_gen_CheckSpecs_A3 = 38,
  efunc_CheckSpecsm_Functions = 39,
  efunc_gen_CheckSpecs_A2 = 40,
  efunc_CheckSpecsm_Formats = 41,
  efunc_gen_CheckSpecs_A1 = 42,
  efunc_CheckSpecsm_Redefine = 43,
  efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1 = 44,
  efunc_CheckRepeatedVariables = 45,
  efunc_gen_CheckSpecsm_Formats_L1S1B1 = 46,
  efunc_IsHardPattern = 47,
  efunc_gen_Map_Z4 = 48,
  efunc_gen_IsHardPattern_S4B1 = 49,
  efunc_gen_IsHardPattern_S5B1 = 50,
  efunc_gen_IsHardPattern_S6B1 = 51,
  efunc_gen_IsHardPattern_S7B1 = 52,
  efunc_gen_IsHardPattern_S8C1 = 53,
  efunc_IsHardTerm = 54,
  efunc_gen_IsHardPattern_S9C1 = 55,
  efunc_ErrorsForRepeatedVariables = 56,
  efunc_FindVariables = 57,
  efunc_gen_Map_Z5 = 58,
  efunc_gen_Map_Z6 = 59,
  efunc_gen_Map_Z7 = 60,
  efunc_gen_CheckSpecsm_Functions_S1A1B1 = 61,
  efunc_ValidBodyForSpec = 62,
  efunc_gen_CheckSpecsm_Functions_S1A1 = 63,
  efunc_gen_CheckSpecsm_Functions_S2A1B1 = 64,
  efunc_gen_CheckSpecsm_Functions_S2A1 = 65,
  efunc_gen_ValidBodyForSpec_S1A1 = 66,
  efunc_gen_Reduce_Z3 = 67,
  efunc_CheckSpecm_RepeatingVarInStaticParams = 68,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1S1B1 = 69,
  efunc_ExtractVariablesm_Expr = 70,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1C1 = 71,
  efunc_IsSpecStaticVar = 72,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1S1B1 = 73,
  efunc_CheckSpecm_VarTypeMatching = 74,
  efunc_gen_Reduce_Z4 = 75,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1 = 76,
  efunc_RemovePosm_Expr = 77,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1 = 78,
  efunc_GenericMatch = 79,
  efunc_Type = 80,
  efunc_gen_IsSpecStaticVar_B1 = 81,
  efunc_CheckSpecsm_SeparateErrorsm_Rec = 82,
  efunc_gen_MapAccum_Z2 = 83,
  efunc_FindInvalidEntry = 84,
  efunc_CleanupValidForwards = 85,
  efunc_FindInvalidForwards = 86,
  efunc_CleanupValidDriveInline = 87,
  efunc_FindInvalidDriveInline = 88,
  efunc_CheckRedefinitions = 89,
  efunc_CleanupValidEntry = 90,
  efunc_gen_CleanupValidDriveInline_S1C1 = 91,
  efunc_gen_CleanupValidDriveInline_S2C1 = 92,
  efunc_gen_FindInvalidDriveInline_L1S1C1 = 93,
  efunc_InlineDriveErrors = 94,
  efunc_gen_Map_Z8 = 95,
  efunc_gen_Map_Z9 = 96,
  efunc_CheckFunctionBodyRec = 97,
  efunc_gen_Map_Z10 = 98,
  efunc_CheckBlocks = 99,
  efunc_gen_CheckSentence_A4 = 100,
  efunc_FlatExpr = 101,
  efunc_gen_CheckSentence_A3 = 102,
  efunc_CheckResult = 103,
  efunc_gen_CheckSentence_A2 = 104,
  efunc_DoCheckAssignments = 105,
  efunc_gen_CheckSentence_A1 = 106,
  efunc_CheckPattern = 107,
  efunc_gen_Map_Z11 = 108,
  efunc_gen_DoCheckAssignments_S2A3 = 109,
  efunc_gen_DoCheckAssignments_S2A2 = 110,
  efunc_gen_DoCheckAssignments_S2A1 = 111,
  efunc_gen_Map_Z12 = 112,
  efunc_FixupKnownVars = 113,
  efunc_gen_MapAccum_Z3 = 114,
  efunc_gen_Map_Z13 = 115,
  efunc_gen_Map_Z14 = 116,
  efunc_Mu = 117,
  efunc_Up = 118,
  efunc_Evm_met = 119,
  efunc_Residue = 120,
  efunc_u_u_Metau_Residue = 121,
  efunc_MapAccum = 122,
  efunc_UnBracket = 123,
  efunc_DelAccumulator = 124,
  efunc_Inc = 125,
  efunc_Dec = 126,
  efunc_CheckProgram = 127,
  efunc_ConflictSpecDriveErrorForName = 128,
  efunc_ValidBodyForSpecm_CheckSentensePattern = 129,
  efunc_CheckFunctionBody = 130,
  efunc_CheckSentence = 131,
  efunc_gen_CheckProgram_L1D1 = 132,
  efunc_gen_Reduce_Z0 = 133,
  efunc_gen_CheckProgram_L1 = 134,
  efunc_gen_Map_Z0 = 135,
  efunc_gen_CheckSpecsAndDrives_A2L1 = 136,
  efunc_gen_DoMapAccum_Z1 = 137,
  efunc_gen_MapAccum_Z0 = 138,
  efunc_gen_CheckSpecsAndDrives_A1L1 = 139,
  efunc_gen_ConflictSpecDriveErrorForName_S1L1D1 = 140,
  efunc_gen_ConflictSpecDriveErrorForName_S1L1 = 141,
  efunc_gen_CheckSpecsm_Formats_L1 = 142,
  efunc_gen_FindVariables_L1 = 143,
  efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1D1 = 144,
  efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1 = 145,
  efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1D1 = 146,
  efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1 = 147,
  efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1 = 148,
  efunc_gen_DoMapAccum_Z2 = 149,
  efunc_gen_SeparateDefines_L1 = 150,
  efunc_gen_FindInvalidDriveInline_L1 = 151,
  efunc_gen_FindInvalidEntry_L1 = 152,
  efunc_gen_CheckBlocks_L1D1 = 153,
  efunc_gen_CheckBlocks_L1 = 154,
  efunc_gen_FlatExpr_L1 = 155,
  efunc_gen_DoMapAccum_Z3 = 156,
  efunc_gen_CheckPattern_S3L1 = 157,
  efunc_gen_CheckResult_L1D1 = 158,
  efunc_gen_CheckResult_L1 = 159,
  efunc_gen_CheckValidUsings_S5L1 = 160,
  efunc_gen_DoMapAccumm_Aux_Z1 = 161,
  efunc_gen_CheckSpecsAndDrives_A1L1D1 = 162,
  efunc_gen_DoMapAccum_Z0 = 163,
  efunc_gen_CheckSpecsAndDrives_A1L1D1S2C1 = 164,
  efunc_gen_DoMapAccumm_Aux_Z2 = 165,
  efunc_gen_SeparateDefines_L1D10 = 166,
  efunc_gen_DoMapAccumm_Aux_Z3 = 167,
  efunc_gen_DoMapAccumm_Aux_Z0 = 168,
};


enum ident {
  ident_Error = 0,
  ident_AlreadyDefined = 1,
  ident_ForwardForEntry = 2,
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
  ident_RedefineSpec = 13,
  ident_MustBeHardPattern = 14,
  ident_BadSpecForFunction = 15,
  ident_OrphanSpec = 16,
  ident_RepVarInSpecPattern = 17,
  ident_UnnamedVariableInSpecPattern = 18,
  ident_SpecStaticParamTypeMismatching = 19,
  ident_SpecStaticParamRepeatingVars = 20,
  ident_SpecDriveConflict = 21,
  ident_Spec = 22,
  ident_Drive = 23,
  ident_Inline = 24,
  ident_True = 25,
  ident_False = 26,
  ident_TkVariable = 27,
  ident_Brackets = 28,
  ident_ADTm_Brackets = 29,
  ident_Symbol = 30,
  ident_Function = 31,
  ident_Sentences = 32,
  ident_NativeBody = 33,
  ident_Clear = 34,
  ident_Contracted = 35,
  ident_Failure = 36,
  ident_Undefined = 37,
  ident_Define = 38,
  ident_Swap = 39,
  ident_Enum = 40,
  ident_Meta = 41,
  ident_Declare = 42,
  ident_GNm_Entry = 43,
  ident_Declaration = 44,
  ident_Entry = 45,
  ident_Ident = 46,
  ident_NativeBlock = 47,
  ident_GNm_Local = 48,
  ident_TkNewVariable = 49,
  ident_Name = 50,
  ident_UnnamedADT = 51,
  ident_CallBrackets = 52,
  ident_Closure = 53,
  ident_Mu = 54,
  ident_Up = 55,
  ident_Evm_met = 56,
  ident_Residue = 57,
  ident_u_u_Metau_Residue = 58,
  ident_Apply = 59,
  ident_Map = 60,
  ident_Reduce = 61,
  ident_Fetch = 62,
  ident_MapAccum = 63,
  ident_DoMapAccum = 64,
  ident_DoMapAccumm_Aux = 65,
  ident_UnBracket = 66,
  ident_DelAccumulator = 67,
  ident_Inc = 68,
  ident_Dec = 69,
  ident_Pipe = 70,
  ident_CheckProgram = 71,
  ident_PrepareMessage = 72,
  ident_FindErrors = 73,
  ident_CheckSpecsAndDrives = 74,
  ident_ConflictSpecDriveErrorForName = 75,
  ident_CheckSpecs = 76,
  ident_CheckSpecsm_Redefine = 77,
  ident_CheckSpecsm_Formats = 78,
  ident_IsHardPattern = 79,
  ident_IsHardTerm = 80,
  ident_CheckRepeatedVariables = 81,
  ident_ErrorsForRepeatedVariables = 82,
  ident_FindVariables = 83,
  ident_CheckSpecsm_Functions = 84,
  ident_ValidBodyForSpec = 85,
  ident_ValidBodyForSpecm_CheckSentensePattern = 86,
  ident_CheckSpecm_VarTypeMatching = 87,
  ident_CheckSpecm_RepeatingVarInStaticParams = 88,
  ident_IsSpecStaticVar = 89,
  ident_CheckSpecsm_SeparateErrors = 90,
  ident_CheckSpecsm_SeparateErrorsm_Rec = 91,
  ident_SeparateDefines = 92,
  ident_CheckDeclarations = 93,
  ident_InlineDriveErrors = 94,
  ident_CleanupValidDriveInline = 95,
  ident_FindInvalidDriveInline = 96,
  ident_CleanupValidEntry = 97,
  ident_FindInvalidEntry = 98,
  ident_CleanupValidForwards = 99,
  ident_FindInvalidForwards = 100,
  ident_CheckRedefinitions = 101,
  ident_CheckFunctionBody = 102,
  ident_CheckFunctionBodyRec = 103,
  ident_CheckSentence = 104,
  ident_CheckBlocks = 105,
  ident_DoCheckAssignments = 106,
  ident_FlatExpr = 107,
  ident_CheckPattern = 108,
  ident_FixupKnownVars = 109,
  ident_CheckResult = 110,
  ident_CheckValidUsings = 111,
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


static refalrts::FnResult func_gen_CheckProgram_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckProgram\1/4 t.ErrorList#2/10 (/7 # Error/9 t.SrcPos#2/12 e.Message#2/5 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Error], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#2 as range 5
  //DEBUG: t.ErrorList#2: 10
  //DEBUG: t.SrcPos#2: 12
  //DEBUG: e.Message#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#2/10 } Tile{ AsIs: t.SrcPos#2/12 } Tile{ HalfReuse: </7 HalfReuse: & PrepareMessage/9 } Tile{ AsIs: e.Message#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_PrepareMessage]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckProgram_L1("CheckProgram\\1", COOKIE1_, COOKIE2_, func_gen_CheckProgram_L1);


static refalrts::FnResult func_CheckProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckProgram/4 t.ErrorList#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 AsIs: t.ErrorList#1/5 } </7 & FindErrors/8 Tile{ AsIs: e.AST#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_FindErrors]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
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
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
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
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[8], context[8] );
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
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[8], context[8] );
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
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
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
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
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
    res = refalrts::splice_evar( res, context[1], context[1] );
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
    res = refalrts::splice_evar( res, context[1], context[1] );
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
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[8], context[8] );
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
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 s.new#6/5 (/8 s.new#7/14 e.new#8/12 )/9 e.new#9/10 >/1
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
      // </0 & PrepareMessage/4 # SpecStaticParamTypeMismatching/5 (/8 s.Mode#1/14 e.Index#1/15 )/9 e.FnName#1/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_SpecStaticParamTypeMismatching], context[5] ) )
        continue;
      // closed e.Index#1 as range 15
      // closed e.FnName#1 as range 17
      //DEBUG: s.Mode#1: 14
      //DEBUG: e.Index#1: 15
      //DEBUG: e.FnName#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'T'/0 HalfReuse: 'y'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/8 } ' '/19 Tile{ HalfReuse: 'm'/9 } 'i'/20 Tile{ HalfReuse: 's'/1 }"matching of static parameter "/21 Tile{ AsIs: s.Mode#1/14 } '.'/23 Tile{ AsIs: e.Index#1/15 }" in specialization of function "/24 Tile{ AsIs: e.FnName#1/17 } Tile{ ]] }
      refalrts::alloc_char(vm, context[19], ' ');
      refalrts::alloc_char(vm, context[20], 'i');
      refalrts::alloc_chars(vm, context[21], context[22], "matching of static parameter ", 29);
      refalrts::alloc_char(vm, context[23], '.');
      refalrts::alloc_chars(vm, context[24], context[25], " in specialization of function ", 31);
      refalrts::reinit_char(context[0], 'T');
      refalrts::reinit_char(context[4], 'y');
      refalrts::reinit_char(context[5], 'p');
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_char(context[9], 'm');
      refalrts::reinit_char(context[1], 's');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareMessage/4 # SpecStaticParamRepeatingVars/5 (/8 s.Mode#1/14 e.Index#1/15 )/9 e.FnName#1/17 >/1
    context[15] = context[12];
    context[16] = context[13];
    context[17] = context[10];
    context[18] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_SpecStaticParamRepeatingVars], context[5] ) )
      continue;
    // closed e.Index#1 as range 15
    // closed e.FnName#1 as range 17
    //DEBUG: s.Mode#1: 14
    //DEBUG: e.Index#1: 15
    //DEBUG: e.FnName#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'R'/0 HalfReuse: 'e'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/8 } 'a'/19 Tile{ HalfReuse: 't'/9 } 'i'/20 Tile{ HalfReuse: 'n'/1 }"g variables match static parameter "/21 Tile{ AsIs: s.Mode#1/14 } '.'/23 Tile{ AsIs: e.Index#1/15 }" in specialization of function "/24 Tile{ AsIs: e.FnName#1/17 } Tile{ ]] }
    refalrts::alloc_char(vm, context[19], 'a');
    refalrts::alloc_char(vm, context[20], 'i');
    refalrts::alloc_chars(vm, context[21], context[22], "g variables match static parameter ", 35);
    refalrts::alloc_char(vm, context[23], '.');
    refalrts::alloc_chars(vm, context[24], context[25], " in specialization of function ", 31);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'p');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_char(context[9], 't');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareMessage/4 # SpecDriveConflict/5 e.new#3/2 s.new#4/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_SpecDriveConflict], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & PrepareMessage/4 # SpecDriveConflict/5 e.Name#1/7 # Spec/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[6] ) )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Directive $SP"/9 Tile{ HalfReuse: 'E'/0 HalfReuse: 'C'/4 HalfReuse: ' '/5 AsIs: e.Name#1/7 HalfReuse: ' '/6 HalfReuse: 'i'/1 }"s not compatible with $DRIVE or $INLINE"/11 Tile{ ]] }
    refalrts::alloc_chars(vm, context[9], context[10], "Directive $SP", 13);
    refalrts::alloc_chars(vm, context[11], context[12], "s not compatible with $DRIVE or $INLINE", 39);
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], 'C');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrepareMessage/4 # SpecDriveConflict/5 e.Name#1/7 # Drive/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Drive], context[6] ) )
      continue;
    // closed e.Name#1 as range 7
    //DEBUG: e.Name#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Directive $DRI"/9 Tile{ HalfReuse: 'V'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/7 HalfReuse: ' '/6 HalfReuse: 'i'/1 }"s not compatible with $SPEC"/11 Tile{ ]] }
    refalrts::alloc_chars(vm, context[9], context[10], "Directive $DRI", 14);
    refalrts::alloc_chars(vm, context[11], context[12], "s not compatible with $SPEC", 27);
    refalrts::reinit_char(context[0], 'V');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareMessage/4 # SpecDriveConflict/5 e.Name#1/2 # Inline/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_Inline], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"Directive $INLI"/7 Tile{ HalfReuse: 'N'/0 HalfReuse: 'E'/4 HalfReuse: ' '/5 AsIs: e.Name#1/2 HalfReuse: ' '/6 HalfReuse: 'i'/1 }"s not compatible with $SPEC"/9 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "Directive $INLI", 15);
  refalrts::alloc_chars(vm, context[9], context[10], "s not compatible with $SPEC", 27);
  refalrts::reinit_char(context[0], 'N');
  refalrts::reinit_char(context[4], 'E');
  refalrts::reinit_char(context[5], ' ');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[1], 'i');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
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
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FindErrors=3/4 (/7 e.ConflictErrors#2/5 )/8 (/11 e.SpecErrors#3/9 )/12 (/15 e.Declarations#4/13 )/16 e.FunctionBodies#4/2 >/1
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
  // closed e.ConflictErrors#2 as range 5
  // closed e.SpecErrors#3 as range 9
  // closed e.Declarations#4 as range 13
  // closed e.FunctionBodies#4 as range 2
  //DEBUG: e.ConflictErrors#2: 5
  //DEBUG: e.SpecErrors#3: 9
  //DEBUG: e.Declarations#4: 13
  //DEBUG: e.FunctionBodies#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ConflictErrors#2/5 } Tile{ AsIs: e.SpecErrors#3/9 } Tile{ AsIs: </0 Reuse: & CheckValidUsings/4 AsIs: (/7 } Tile{ HalfReuse: </8 HalfReuse: & CheckDeclarations/11 } Tile{ AsIs: e.Declarations#4/13 } >/17 Tile{ AsIs: )/12 HalfReuse: </15 } Tile{ HalfReuse: & Map@1/16 AsIs: e.FunctionBodies#4/2 AsIs: >/1 } >/18 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_CheckValidUsings]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_CheckDeclarations]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[11] );
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
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindErrors=2/4 (/7 e.ConflictErrors#2/5 )/8 (/11 e.SpecErrors#3/9 )/12 e.AST#3/2 >/1
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
  // closed e.ConflictErrors#2 as range 5
  // closed e.SpecErrors#3 as range 9
  // closed e.AST#3 as range 2
  //DEBUG: e.ConflictErrors#2: 5
  //DEBUG: e.SpecErrors#3: 9
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindErrors=3/4 AsIs: (/7 AsIs: e.ConflictErrors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.SpecErrors#3/9 AsIs: )/12 } </13 & SeparateDefines/14 Tile{ AsIs: e.AST#3/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_SeparateDefines]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A3]);
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

static refalrts::NativeReference nat_ref_gen_FindErrors_A2("FindErrors=2", COOKIE1_, COOKIE2_, func_gen_FindErrors_A2);


static refalrts::FnResult func_gen_FindErrors_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindErrors=1/4 e.ConflictErrors#2/2 (/7 e.AST#2/5 )/8 >/1
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
  // closed e.ConflictErrors#2 as range 2
  // closed e.AST#2 as range 5
  //DEBUG: e.ConflictErrors#2: 2
  //DEBUG: e.AST#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindErrors=2/4 } (/9 Tile{ AsIs: e.ConflictErrors#2/2 } )/10 </11 Tile{ HalfReuse: & CheckSpecs/7 AsIs: e.AST#2/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_FindErrors_A2]);
  refalrts::reinit_name(context[7], functions[efunc_CheckSpecs]);
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

static refalrts::NativeReference nat_ref_gen_FindErrors_A1("FindErrors=1", COOKIE1_, COOKIE2_, func_gen_FindErrors_A1);


static refalrts::FnResult func_FindErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FindErrors/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FindErrors=1/6 Tile{ AsIs: </0 Reuse: & CheckSpecsAndDrives/4 AsIs: e.AST#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_FindErrors_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsAndDrives]);
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

static refalrts::NativeReference nat_ref_FindErrors("FindErrors", COOKIE1_, COOKIE2_, func_FindErrors);


static refalrts::FnResult func_gen_CheckSpecsAndDrives_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CheckSpecsAndDrives=2/4 (/7 e.AST#2/5 )/8 (/11 e.OptMarkGroups#3/9 )/12 >/1
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
  // closed e.AST#2 as range 5
  // closed e.OptMarkGroups#3 as range 9
  //DEBUG: e.AST#2: 5
  //DEBUG: e.OptMarkGroups#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/11 } Tile{ AsIs: e.OptMarkGroups#3/9 } Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: e.AST#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z2]);
  refalrts::reinit_close_call(context[4]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsAndDrives_A2("CheckSpecsAndDrives=2", COOKIE1_, COOKIE2_, func_gen_CheckSpecsAndDrives_A2);


static refalrts::FnResult func_gen_CheckSpecsAndDrives_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CheckSpecsAndDrives=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecsAndDrives=2\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 t.new#3/14 e.new#4/9 )/12 >/1
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
  // closed e.new#4 as range 9
  do {
    // </0 & CheckSpecsAndDrives=2\1/4 (/7 e.Groups-B#3/20 (/26 (/30 e.Name#3/32 )/31 e.Marks#3/24 )/27 e.Groups-E#3/22 )/8 (/11 s.Mark#3/13 t.SrcPos#3/14 e.Name#3/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Name#3 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_evar_left( vm, context[32], context[33], context[18], context[19], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.Marks#3 as range 24
      // closed e.Groups-E#3 as range 22
      //DEBUG: t.SrcPos#3: 14
      //DEBUG: s.Mark#3: 13
      //DEBUG: e.Name#3: 18
      //DEBUG: e.Groups-B#3: 20
      //DEBUG: e.Marks#3: 24
      //DEBUG: e.Groups-E#3: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckSpecsAndDrives=2\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#3/18 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Groups-B#3/20 AsIs: (/26 AsIs: (/30 AsIs: e.Name#3/32 AsIs: )/31 AsIs: e.Marks#3/24 HalfReuse: (/27 } Tile{ AsIs: s.Mark#3/13 AsIs: t.SrcPos#3/14 } Tile{ AsIs: )/8 HalfReuse: )/11 } Tile{ AsIs: e.Groups-E#3/22 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[26], context[11] );
      refalrts::link_brackets( context[27], context[8] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[27] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecsAndDrives=2\1/4 (/7 e.Groups#3/5 )/8 (/11 s.Mark#3/13 t.SrcPos#3/14 e.Name#3/9 )/12 >/1
  // closed e.Groups#3 as range 5
  // closed e.Name#3 as range 9
  //DEBUG: t.SrcPos#3: 14
  //DEBUG: s.Mark#3: 13
  //DEBUG: e.Groups#3: 5
  //DEBUG: e.Name#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Groups#3/5 } Tile{ HalfReuse: (/4 AsIs: (/7 } Tile{ AsIs: e.Name#3/9 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: s.Mark#3/13 AsIs: t.SrcPos#3/14 } )/16 Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsAndDrives_A2L1("CheckSpecsAndDrives=2\\1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsAndDrives_A2L1);


static refalrts::FnResult func_gen_CheckSpecsAndDrives_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckSpecsAndDrives=1/4 (/7 e.OptMarks#2/5 )/8 e.AST#2/2 >/1
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
  // closed e.OptMarks#2 as range 5
  // closed e.AST#2 as range 2
  //DEBUG: e.OptMarks#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecsAndDrives=2/4 AsIs: (/7 } Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: )/8 } </9 & Reduce@2/10 (/11 )/12 Tile{ AsIs: e.OptMarks#2/5 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Reduce_Z2]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsAndDrives_A1("CheckSpecsAndDrives=1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsAndDrives_A1);


static refalrts::FnResult func_gen_CheckSpecsAndDrives_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CheckSpecsAndDrives=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecsAndDrives=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & CheckSpecsAndDrives=1\1/4 (/7 e.new#7/11 )/8 (/9 s.new#3/15 t.new#4/16 t.new#5/18 e.new#6/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#7 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & CheckSpecsAndDrives=1\1/4 (/7 e.OptMarks#2/20 )/8 (/9 # Spec/15 t.SrcPos#2/16 (/18 e.Name#2/24 )/19 e.Pattern#2/22 )/10 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      context[24] = 0;
      context[25] = 0;
      if( ! refalrts::brackets_term( context[24], context[25], context[18] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[15] ) )
        continue;
      // closed e.OptMarks#2 as range 20
      // closed e.Name#2 as range 24
      // closed e.Pattern#2 as range 22
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: e.OptMarks#2: 20
      //DEBUG: e.Name#2: 24
      //DEBUG: e.Pattern#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.OptMarks#2/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Spec/4 } t.SrcPos#2/16/26 e.Name#2/24/28 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: # Spec/15 AsIs: t.SrcPos#2/16 AsIs: (/18 AsIs: e.Name#2/24 AsIs: )/19 AsIs: e.Pattern#2/22 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[26], context[27], context[16], context[17]);
      refalrts::copy_evar(vm, context[28], context[29], context[24], context[25]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Spec]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckSpecsAndDrives=1\1/4 (/7 e.OptMarks#2/20 )/8 (/9 s.DriveInline#2/15 t.SrcPos#2/16 s.ScopeClass#2/18 e.Name#2/22 )/10 >/1
    context[20] = context[11];
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[14];
    if( ! refalrts::svar_term( context[18], context[18] ) )
      continue;
    // closed e.OptMarks#2 as range 20
    // closed e.Name#2 as range 22
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: s.DriveInline#2: 15
    //DEBUG: e.OptMarks#2: 20
    //DEBUG: e.Name#2: 22
    //15: s.DriveInline#2
    //16: t.SrcPos#2
    //18: s.ScopeClass#2
    //20: e.OptMarks#2
    //22: e.Name#2
    //29: s.DriveInline#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_CheckSpecsAndDrives_A1L1S2C1]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[29], context[15]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_Drive]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_Inline]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[27] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
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
      // </24 & CheckSpecsAndDrives=1\1$2?1/28 # True/29 >/25
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
      context[29] = refalrts::ident_left( identifiers[ident_True], context[26], context[27] );
      if( ! context[29] )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: s.DriveInline#2: 15
      //DEBUG: e.OptMarks#2: 20
      //DEBUG: e.Name#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CheckSpecsAndDrives=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & CheckSpecsAndDrives=1\1$2?1/28 # True/29 >/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.OptMarks#2/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.DriveInline2 #15/24 } t.SrcPos#2/16/30 e.Name#2/22/32 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.DriveInline#2/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/22 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[30], context[31], context[16], context[17]);
      refalrts::copy_evar(vm, context[32], context[33], context[22], context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[24], context[15] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[24], context[25]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecsAndDrives=1\1/4 (/7 e.OptMarks#2/5 )/8 t.Other#2/9 >/1
  // closed e.OptMarks#2 as range 5
  //DEBUG: t.Other#2: 9
  //DEBUG: e.OptMarks#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecsAndDrives=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptMarks#2/5 AsIs: )/8 AsIs: t.Other#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsAndDrives_A1L1("CheckSpecsAndDrives=1\\1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsAndDrives_A1L1);


static refalrts::FnResult func_CheckSpecsAndDrives(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckSpecsAndDrives/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecsAndDrives=1/4 } </5 & MapAccum@1/6 (/7 )/8 Tile{ AsIs: e.AST#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A1]);
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

static refalrts::NativeReference nat_ref_CheckSpecsAndDrives("CheckSpecsAndDrives", COOKIE1_, COOKIE2_, func_CheckSpecsAndDrives);


static refalrts::FnResult func_gen_ConflictSpecDriveErrorForName_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ConflictSpecDriveErrorForName$1\1/4 (/7 e.Name#1/5 )/8 (/11 s.Mark#4/13 t.SrcPos#4/14 )/12 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 5
  //DEBUG: s.Mark#4: 13
  //DEBUG: t.SrcPos#4: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mark#4/13 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#4/14 } Tile{ HalfReuse: # SpecDriveConflict/7 AsIs: e.Name#1/5 HalfReuse: s.Mark4 #13/8 HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_ident(context[7], identifiers[ident_SpecDriveConflict]);
  refalrts::reinit_svar( context[8], context[13] );
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConflictSpecDriveErrorForName_S1L1("ConflictSpecDriveErrorForName$1\\1", COOKIE1_, COOKIE2_, func_gen_ConflictSpecDriveErrorForName_S1L1);


static refalrts::FnResult func_ConflictSpecDriveErrorForName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 58 elems
  refalrts::Iter context[58];
  refalrts::zeros( context, 58 );
  // </0 & ConflictSpecDriveErrorForName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ConflictSpecDriveErrorForName/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ConflictSpecDriveErrorForName/4 (/7 (/13 e.Name#1/11 )/14 e.OptMarks#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 11
    // closed e.OptMarks#1 as range 9
    //DEBUG: e.Name#1: 11
    //DEBUG: e.OptMarks#1: 9
    //9: e.OptMarks#1
    //11: e.Name#1
    //18: e.OptMarks#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_ConflictSpecDriveErrorForName_S1C1]);
    refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
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
      // </15 & ConflictSpecDriveErrorForName$1?1/19 e.OptMarks-1-B#2/20 (/26 # Spec/28 t.SpecSrcPos#2/29 )/27 e.OptMarks-1-E#2/22 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = 0;
      context[21] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[22] = context[17];
        context[23] = context[18];
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        context[28] = refalrts::ident_left( identifiers[ident_Spec], context[24], context[25] );
        if( ! context[28] )
          continue;
        // closed e.OptMarks-1-E#2 as range 22
        context[30] = refalrts::tvar_left( context[29], context[24], context[25] );
        if( ! context[30] )
          continue;
        if( ! refalrts::empty_seq( context[24], context[25] ) )
          continue;
        //DEBUG: e.Name#1: 11
        //DEBUG: e.OptMarks#1: 9
        //DEBUG: e.OptMarks-1-B#2: 20
        //DEBUG: e.OptMarks-1-E#2: 22
        //DEBUG: t.SpecSrcPos#2: 29
        //9: e.OptMarks#1
        //11: e.Name#1
        //20: e.OptMarks-1-B#2
        //22: e.OptMarks-1-E#2
        //29: t.SpecSrcPos#2
        //34: e.OptMarks#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_ConflictSpecDriveErrorForName_S1C2]);
        refalrts::copy_evar(vm, context[34], context[35], context[9], context[10]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Drive]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Inline]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[31] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::link_brackets( context[36], context[39] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_elem( res, context[31] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </31 & ConflictSpecDriveErrorForName$1?2/35 e.OptMarks-2-B#3/40 (/48 s.DriveInline#3/50 t.DriveSrcPos#3/51 )/49 e.OptMarks-2-E#3/42 (/38 e.Flags-B#3/53 s.DriveInline#3/57 e.Flags-E#3/55 )/39 >/32
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::call_left( context[33], context[34], context[31], context[32] );
          context[36] = 0;
          context[37] = 0;
          context[38] = refalrts::brackets_right( context[36], context[37], context[33], context[34] );
          if( ! context[38] )
            continue;
          refalrts::bracket_pointers(context[38], context[39]);
          context[40] = 0;
          context[41] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[42] = context[33];
            context[43] = context[34];
            context[44] = context[36];
            context[45] = context[37];
            context[46] = 0;
            context[47] = 0;
            context[48] = refalrts::brackets_left( context[46], context[47], context[42], context[43] );
            if( ! context[48] )
              continue;
            refalrts::bracket_pointers(context[48], context[49]);
            // closed e.OptMarks-2-E#3 as range 42
            if( ! refalrts::svar_left( context[50], context[46], context[47] ) )
              continue;
            context[52] = refalrts::tvar_left( context[51], context[46], context[47] );
            if( ! context[52] )
              continue;
            if( ! refalrts::empty_seq( context[46], context[47] ) )
              continue;
            context[53] = 0;
            context[54] = 0;
            refalrts::start_e_loop(vm);
            do {
              context[55] = context[44];
              context[56] = context[45];
              if( ! refalrts::repeated_stvar_left( vm, context[57], context[50], context[55], context[56] ) )
                continue;
              // closed e.Flags-E#3 as range 55
              //DEBUG: e.Name#1: 11
              //DEBUG: e.OptMarks#1: 9
              //DEBUG: e.OptMarks-1-B#2: 20
              //DEBUG: e.OptMarks-1-E#2: 22
              //DEBUG: t.SpecSrcPos#2: 29
              //DEBUG: e.OptMarks-2-B#3: 40
              //DEBUG: e.OptMarks-2-E#3: 42
              //DEBUG: s.DriveInline#3: 50
              //DEBUG: t.DriveSrcPos#3: 51
              //DEBUG: e.Flags-B#3: 53
              //DEBUG: e.Flags-E#3: 55

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} </0 & ConflictSpecDriveErrorForName/4 {REMOVED TILE} & ConflictSpecDriveErrorForName$1?1/19 e.OptMarks-1-B#2/20 (/26 # Spec/28 t.SpecSrcPos#2/29 )/27 e.OptMarks-1-E#2/22 >/16 </31 & ConflictSpecDriveErrorForName$1?2/35 e.OptMarks-2-B#3/40 (/48 s.DriveInline#3/50 t.DriveSrcPos#3/51 )/49 e.OptMarks-2-E#3/42 (/38 e.Flags-B#3/53 s.DriveInline#3/57 e.Flags-E#3/55 )/39 >/32 >/1 {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Map@3/13 AsIs: e.Name#1/11 HalfReuse: (/14 AsIs: e.OptMarks#1/9 AsIs: )/8 HalfReuse: >/15 } Tile{ ]] }
              refalrts::reinit_open_call(context[7]);
              refalrts::reinit_name(context[13], functions[efunc_gen_Map_Z3]);
              refalrts::reinit_open_bracket(context[14]);
              refalrts::reinit_close_call(context[15]);
              refalrts::push_stack( vm, context[15] );
              refalrts::push_stack( vm, context[7] );
              refalrts::link_brackets( context[14], context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = arg_end->next;
              res = refalrts::splice_evar( res, context[7], context[15] );
              refalrts::splice_to_freelist_open( vm, trash_prev, res );
              return refalrts::cSuccess;
            } while ( refalrts::open_evar_advance( context[53], context[54], context[44], context[45] ) );
          } while ( refalrts::open_evar_advance( context[40], context[41], context[33], context[34] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[31], context[32]);
        continue;
      } while ( refalrts::open_evar_advance( context[20], context[21], context[17], context[18] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ConflictSpecDriveErrorForName/4 (/7 e.Name#1/5 )/8 e.OptMarks#1/2 >/1
  // closed e.Name#1 as range 5
  // closed e.OptMarks#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.OptMarks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConflictSpecDriveErrorForName/4 (/7 e.Name#1/5 )/8 e.OptMarks#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConflictSpecDriveErrorForName("ConflictSpecDriveErrorForName", COOKIE1_, COOKIE2_, func_ConflictSpecDriveErrorForName);


static refalrts::FnResult func_gen_CheckSpecs_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CheckSpecs=3/4 e.AST-and-errors#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST-and-errors#4 as range 2
  //DEBUG: e.AST-and-errors#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-SeparateErrors/4 AsIs: e.AST-and-errors#4/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_SeparateErrors]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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
  res = refalrts::splice_evar( res, context[7], context[7] );
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
  //RESULT: Tile{ [[ } </5 & CheckSpecs=2/6 Tile{ AsIs: </0 Reuse: & CheckSpecs-Formats/4 AsIs: e.AST-and-errors#2/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CheckSpecs_A2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckSpecsm_Formats]);
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
  res = refalrts::splice_evar( res, context[7], context[7] );
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Formats\1$1:1$1:1/4 AsIs: t.SrcPos#2/5 AsIs: (/9 AsIs: e.Name#2/16 AsIs: )/10 AsIs: (/13 AsIs: e.Pattern#2/18 AsIs: )/14 HalfReuse: </15 HalfReuse: & CheckRepeatedVariables/1 } e.Pattern#2/18/20 >/22 >/23 Tile{ ]] }
    refalrts::copy_evar(vm, context[20], context[21], context[18], context[19]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1S1B1]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[1], functions[efunc_CheckRepeatedVariables]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
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


static refalrts::FnResult func_gen_CheckSpecsm_Formats_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CheckSpecs-Formats\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-Formats\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSpecs-Formats\1/4 (/5 # Spec/9 t.SrcPos#2/10 (/14 e.Name#2/12 )/15 e.Pattern#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Spec], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Pattern#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 12
    //DEBUG: e.Pattern#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </5 HalfReuse: & CheckSpecs-Formats\1$1:1/9 AsIs: t.SrcPos#2/10 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } (/16 e.Pattern#2/7/17 )/19 Tile{ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.Pattern#2/7 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::copy_evar(vm, context[17], context[18], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1]);
    refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-Formats\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-Formats\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Formats_L1("CheckSpecs-Formats\\1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Formats_L1);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
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
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
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
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[16], context[16] );
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
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[16], context[16] );
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
  //RESULT: Tile{ [[ } </5 & ErrorsForRepeatedVariables/6 Tile{ AsIs: </0 Reuse: & FindVariables/4 AsIs: e.Pattern#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ErrorsForRepeatedVariables]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_FindVariables]);
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
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[25], context[32] );
        res = refalrts::splice_evar( res, context[1], context[1] );
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
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[1], context[1] );
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


static refalrts::FnResult func_gen_FindVariables_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FindVariables\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindVariables\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindVariables\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & FindVariables\1/4 (/5 # TkVariable/9 t.SrcPos#2/12 s.Mode#2/14 e.Index#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
        continue;
      // closed e.Index#2 as range 10
      //DEBUG: t.SrcPos#2: 12
      //DEBUG: s.Mode#2: 14
      //DEBUG: e.Index#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 AsIs: t.SrcPos#2/12 AsIs: s.Mode#2/14 AsIs: e.Index#2/10 AsIs: )/6 } Tile{ ]] }
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
      // </0 & FindVariables\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FindVariables]);
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

    // </0 & FindVariables\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 e.InBrackets#2/10 )/6 >/1
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
    // closed e.Name#2 as range 14
    // closed e.InBrackets#2 as range 10
    //DEBUG: t.SrcPos#2: 12
    //DEBUG: e.Name#2: 14
    //DEBUG: e.InBrackets#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 t.SrcPos#2/12 (/16 e.Name#2/14 )/17 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindVariables]);
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

  // </0 & FindVariables\1/4 t.Term#2/5 >/1
  //DEBUG: t.Term#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindVariables\1/4 t.Term#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindVariables_L1("FindVariables\\1", COOKIE1_, COOKIE2_, func_gen_FindVariables_L1);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
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


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S1A1B1S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CheckSpecs-Functions$1=1:1$2\1/4 t.SrcPos2#1/13 (/11 e.Name#1/9 )/12 (/7 e.Message#3/5 )/8 >/1
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
  // closed e.Name#1 as range 9
  // closed e.Message#3 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Message#3: 5
  //DEBUG: t.SrcPos2#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos2#1/13 } Tile{ AsIs: e.Message#3/5 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[14], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S1A1B1S2L1("CheckSpecs-Functions$1=1:1$2\\1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S1A1B1S2L1);


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
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
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
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/22 } Tile{ HalfReuse: # Error/27 AsIs: t.SrcPos1#1/28 Reuse: # BadSpecForFunction/30 } e.Name#1/16/31 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & Map@6/4 } t.SrcPos2#1/13/33 e.Name#1/16/35 Tile{ AsIs: (/11 } Tile{ AsIs: e.Messages#2/2 } Tile{ AsIs: )/23 HalfReuse: >/26 } Tile{ AsIs: e.AST-M#1/9 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Function/12 AsIs: t.SrcPos2#1/13 AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 } Tile{ AsIs: e.Body#1/20 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::copy_evar(vm, context[31], context[32], context[16], context[17]);
  refalrts::copy_evar(vm, context[33], context[34], context[13], context[14]);
  refalrts::copy_evar(vm, context[35], context[36], context[16], context[17]);
  refalrts::reinit_ident(context[27], identifiers[ident_Error]);
  refalrts::update_ident(context[30], identifiers[ident_BadSpecForFunction]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
  refalrts::reinit_close_call(context[26]);
  refalrts::reinit_ident(context[12], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[22], context[22] );
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


static refalrts::FnResult func_gen_CheckSpecsm_Functions_S2A1B1S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CheckSpecs-Functions$2=1:1$2\1/4 t.SrcPos2#1/13 (/11 e.Name#1/9 )/12 (/7 e.Message#3/5 )/8 >/1
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
  // closed e.Name#1 as range 9
  // closed e.Message#3 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Message#3: 5
  //DEBUG: t.SrcPos2#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos2#1/13 } Tile{ AsIs: e.Message#3/5 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[14], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsm_Functions_S2A1B1S2L1("CheckSpecs-Functions$2=1:1$2\\1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsm_Functions_S2A1B1S2L1);


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
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[22], context[22] );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST-B#1/5 } Tile{ AsIs: (/18 } Tile{ HalfReuse: # Function/8 AsIs: t.SrcPos1#1/9 AsIs: s.ScopeClass#1/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: e.Body#1/16 } Tile{ HalfReuse: )/22 AsIs: e.AST-M#1/20 HalfReuse: (/23 HalfReuse: # Error/26 } Tile{ AsIs: t.SrcPos2#1/28 Reuse: # BadSpecForFunction/30 } e.Name#1/12/31 Tile{ AsIs: )/27 } Tile{ AsIs: </0 Reuse: & Map@7/4 } t.SrcPos2#1/28/33 e.Name#1/12/35 Tile{ AsIs: (/7 } Tile{ AsIs: e.Messages#2/2 } Tile{ AsIs: )/19 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST-E#1/24 } Tile{ ]] }
  refalrts::copy_evar(vm, context[31], context[32], context[12], context[13]);
  refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
  refalrts::copy_evar(vm, context[35], context[36], context[12], context[13]);
  refalrts::reinit_ident(context[8], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[22]);
  refalrts::reinit_open_bracket(context[23]);
  refalrts::reinit_ident(context[26], identifiers[ident_Error]);
  refalrts::update_ident(context[30], identifiers[ident_BadSpecForFunction]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::link_brackets( context[18], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
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
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$1=1/4 } </40 & CheckSpecs-Functions$1=1:1/41 Tile{ AsIs: (/28 } Tile{ AsIs: e.AST-B#1/7 } )/42 Tile{ AsIs: (/13 } Tile{ AsIs: e.AST-M#1/22 } Tile{ HalfReuse: )/30 AsIs: t.SrcPos2#1/31 AsIs: s.ScopeClass#1/33 AsIs: (/36 AsIs: e.Name#1/38 AsIs: )/37 } (/43 Tile{ AsIs: e.Body#1/26 } Tile{ AsIs: )/29 } (/44 Tile{ AsIs: e.AST-E#1/24 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 HalfReuse: </20 } & ValidBodyForSpec/45 Tile{ HalfReuse: (/21 AsIs: e.Pattern#1/11 AsIs: )/14 } e.Body#1/26/46 >/48 >/49 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_ValidBodyForSpec]);
        refalrts::copy_evar(vm, context[46], context[47], context[26], context[27]);
        refalrts::alloc_close_call(vm, context[48]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S1A1]);
        refalrts::reinit_close_bracket(context[30]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_open_call(context[20]);
        refalrts::reinit_open_bracket(context[21]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[20] );
        refalrts::link_brackets( context[21], context[14] );
        refalrts::link_brackets( context[44], context[15] );
        refalrts::link_brackets( context[43], context[29] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[13], context[30] );
        refalrts::link_brackets( context[28], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[21], context[14] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[15], context[20] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[30], context[37] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSpecs-Functions$2=1/4 } </40 & CheckSpecs-Functions$2=1:1/41 Tile{ AsIs: (/13 } Tile{ AsIs: e.AST-B#1/7 } Tile{ HalfReuse: )/15 AsIs: t.SrcPos1#1/16 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 } (/42 Tile{ AsIs: e.Body#1/11 } )/43 Tile{ HalfReuse: (/14 AsIs: e.AST-M#1/23 HalfReuse: )/29 HalfReuse: (/31 } Tile{ AsIs: e.AST-E#1/25 } )/44 Tile{ AsIs: t.SrcPos2#1/32 HalfReuse: </36 } & ValidBodyForSpec/45 Tile{ HalfReuse: (/37 AsIs: e.Pattern#1/27 AsIs: )/30 } e.Body#1/11/46 >/48 >/49 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_ValidBodyForSpec]);
        refalrts::copy_evar(vm, context[46], context[47], context[11], context[12]);
        refalrts::alloc_close_call(vm, context[48]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Functions_S2A1]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::reinit_open_call(context[36]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[37], context[30] );
        refalrts::link_brackets( context[31], context[44] );
        refalrts::link_brackets( context[14], context[29] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[13], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[37], context[30] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[32], context[36] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[14], context[31] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[15], context[22] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
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
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ValidBodyForSpec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidBodyForSpec/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ValidBodyForSpec/4 t.Pattern#1/5 # Sentences/7 e.Sentences#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[7] ) )
      continue;
    // closed e.Sentences#1 as range 8
    //DEBUG: t.Pattern#1: 5
    //DEBUG: e.Sentences#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & ValidBodyForSpec$1=1/11 Tile{ AsIs: </0 Reuse: & Reduce@3/4 AsIs: t.Pattern#1/5 HalfReuse: (/7 } # True/12 )/13 Tile{ AsIs: e.Sentences#1/8 } >/14 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_ValidBodyForSpec_S1A1]);
    refalrts::alloc_ident(vm, context[12], identifiers[ident_True]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z3]);
    refalrts::reinit_open_bracket(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidBodyForSpec/4 t.Pattern#1/5 # NativeBody/7 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidBodyForSpec/4 t.Pattern#1/5 # NativeBody/7 e.Code#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
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
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
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
    res = refalrts::splice_evar( res, context[26], context[26] );
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
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[19] );
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
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[27], context[32] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[12], context[12] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1/4 HalfReuse: </7 } & Reduce@4/14 (/15 # True/16 (/17 Tile{ AsIs: )/8 HalfReuse: )/9 AsIs: e.Vars#2/12 AsIs: >/1 } >/18 Tile{ ]] }
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z4]);
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
    res = refalrts::splice_evar( res, context[18], context[18] );
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
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
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
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSpecStaticVar("IsSpecStaticVar", COOKIE1_, COOKIE2_, func_IsSpecStaticVar);


static refalrts::FnResult func_CheckSpecsm_SeparateErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & CheckSpecs-SeparateErrors/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CheckSpecs-SeparateErrors-Rec/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_CheckSpecsm_SeparateErrorsm_Rec]);
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

static refalrts::NativeReference nat_ref_CheckSpecsm_SeparateErrors("CheckSpecs-SeparateErrors", COOKIE1_, COOKIE2_, func_CheckSpecsm_SeparateErrors);


static refalrts::FnResult func_CheckSpecsm_SeparateErrorsm_Rec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CheckSpecs-SeparateErrors-Rec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.SpecErrorList#1/9 )/8 e.AST-B#1/13 (/19 # Error/21 t.SrsPos#1/22 t.SpecErrorType#1/24 e.Name#1/17 )/20 e.AST-E#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.SpecErrorList#1 as range 9
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
      context[21] = refalrts::ident_left( identifiers[ident_Error], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.AST-E#1 as range 15
      context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
      if( ! context[25] )
        continue;
      // closed e.Name#1 as range 17
      //DEBUG: e.SpecErrorList#1: 9
      //DEBUG: e.AST-B#1: 13
      //DEBUG: e.AST-E#1: 15
      //DEBUG: t.SrsPos#1: 22
      //DEBUG: t.SpecErrorType#1: 24
      //DEBUG: e.Name#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckSpecs-SeparateErrors-Rec/4 AsIs: (/7 } Tile{ AsIs: e.SpecErrorList#1/9 } Tile{ AsIs: (/19 AsIs: # Error/21 AsIs: t.SrsPos#1/22 AsIs: t.SpecErrorType#1/24 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: )/8 } Tile{ AsIs: e.AST-B#1/13 } Tile{ AsIs: e.AST-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecs-SeparateErrors-Rec/4 (/7 e.ErrorList#1/5 )/8 e.AST#1/2 >/1
  // closed e.ErrorList#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.ErrorList#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecs-SeparateErrors-Rec/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ErrorList#1/5 AsIs: )/8 } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSpecsm_SeparateErrorsm_Rec("CheckSpecs-SeparateErrors-Rec", COOKIE1_, COOKIE2_, func_CheckSpecsm_SeparateErrorsm_Rec);


static refalrts::FnResult func_gen_SeparateDefines_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & SeparateDefines\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SeparateDefines\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & SeparateDefines\1/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 t.new#6/18 e.new#7/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
    if( ! context[19] )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & SeparateDefines\1/4 (/7 e.new#8/20 )/8 (/11 s.new#9/13 t.new#10/18 s.new#11/24 e.new#12/22 )/12 >/1
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      // closed e.new#8 as range 20
      if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
        continue;
      // closed e.new#12 as range 22
      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Function/13 t.SrcPos#2/18 s.ScopeClass#2/24 (/31 e.Name#2/29 )/32 e.Body#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[13] ) )
          continue;
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 29
        // closed e.Body#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 29
        //DEBUG: e.Body#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 } Tile{ AsIs: e.Name#2/29 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/31 } Tile{ HalfReuse: (/32 AsIs: e.Body#2/27 AsIs: )/12 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[31]);
        refalrts::reinit_open_bracket(context[32]);
        refalrts::link_brackets( context[32], context[12] );
        refalrts::link_brackets( context[0], context[31] );
        refalrts::link_brackets( context[11], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[32], context[12] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[11], context[24] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Swap/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Swap], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Enum/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Enum], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Meta/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Meta], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Define/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: (/1 } # Declare/29 t.SrcPos#2/18/30 # GN-Entry/32"__Meta_"/33 e.Name#2/27/35 Tile{ HalfReuse: )/4 AsIs: (/7 } # Declare/37 t.SrcPos#2/18/38 # GN-Entry/40"__Step-Drop"/41 Tile{ AsIs: )/8 } )/43 Tile{ ]] }
        refalrts::alloc_ident(vm, context[29], identifiers[ident_Declare]);
        refalrts::copy_evar(vm, context[30], context[31], context[18], context[19]);
        refalrts::alloc_ident(vm, context[32], identifiers[ident_GNm_Entry]);
        refalrts::alloc_chars(vm, context[33], context[34], "__Meta_", 7);
        refalrts::copy_evar(vm, context[35], context[36], context[27], context[28]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Declare]);
        refalrts::copy_evar(vm, context[38], context[39], context[18], context[19]);
        refalrts::alloc_ident(vm, context[40], identifiers[ident_GNm_Entry]);
        refalrts::alloc_chars(vm, context[41], context[42], "__Step-Drop", 11);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Define]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::link_brackets( context[0], context[43] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[1], context[4] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[37], context[42] );
        res = refalrts::splice_evar( res, context[4], context[7] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[29], context[34] );
        res = refalrts::splice_evar( res, context[11], context[1] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Declaration/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Declaration], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 Reuse: # Declare/13 AsIs: t.SrcPos#2/18 AsIs: s.ScopeClass#2/24 AsIs: e.Name#2/27 AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[13], identifiers[ident_Declare]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Entry/13 t.SrcPos#2/18 # GN-Entry/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Entry], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[24] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} # GN-Entry/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Entry/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[11], context[19] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Inline/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_Inline], context[13] ) )
          continue;
        // closed e.Declarations#2 as range 25
        // closed e.Name#2 as range 27
        //DEBUG: t.SrcPos#2: 18
        //DEBUG: s.ScopeClass#2: 24
        //DEBUG: e.Declarations#2: 25
        //DEBUG: e.Name#2: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} s.ScopeClass#2/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Inline/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[11], context[19] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/25 )/8 (/11 # Drive/13 t.SrcPos#2/18 s.ScopeClass#2/24 e.Name#2/27 )/12 >/1
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_Drive], context[13] ) )
        continue;
      // closed e.Declarations#2 as range 25
      // closed e.Name#2 as range 27
      //DEBUG: t.SrcPos#2: 18
      //DEBUG: s.ScopeClass#2: 24
      //DEBUG: e.Declarations#2: 25
      //DEBUG: e.Name#2: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & SeparateDefines\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} s.ScopeClass#2/24 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#2/25 } Tile{ AsIs: (/11 AsIs: # Drive/13 AsIs: t.SrcPos#2/18 } Tile{ AsIs: e.Name#2/27 } Tile{ AsIs: )/12 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[11], context[19] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/20 )/8 (/11 # Ident/13 t.SrcPos#2/18 e.Name#2/22 )/12 >/1
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[13] ) )
      continue;
    // closed e.Declarations#2 as range 20
    // closed e.Name#2 as range 22
    //DEBUG: t.SrcPos#2: 18
    //DEBUG: e.Declarations#2: 20
    //DEBUG: e.Name#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SeparateDefines\1/4 {REMOVED TILE} (/11 # Ident/13 t.SrcPos#2/18 e.Name#2/22 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#2/20 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SeparateDefines\1/4 (/7 e.Declarations#2/5 )/8 (/11 # NativeBlock/13 e.Block#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Declarations#2 as range 5
  // closed e.Block#2 as range 9
  //DEBUG: e.Declarations#2: 5
  //DEBUG: e.Block#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SeparateDefines\1/4 {REMOVED TILE} (/11 # NativeBlock/13 e.Block#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SeparateDefines_L1("SeparateDefines\\1", COOKIE1_, COOKIE2_, func_gen_SeparateDefines_L1);


static refalrts::FnResult func_SeparateDefines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
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
  //RESULT: Tile{ [[ } </5 & MapAccum@2/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_SeparateDefines("SeparateDefines", COOKIE1_, COOKIE2_, func_SeparateDefines);


static refalrts::FnResult func_CheckDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CheckDeclarations/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 Tile{ AsIs: </0 Reuse: & CleanupValidEntry/4 AsIs: e.Declarations#1/2 AsIs: >/1 } [*]/7 & Pipe$2\1/8 & FindInvalidEntry/9 (/10 & CleanupValidForwards/11 & FindInvalidForwards/12 & CleanupValidDriveInline/13 & FindInvalidDriveInline/14 & CheckRedefinitions/15 )/16 {*}/17 >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Fetch]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Pipe_S2L1]);
  refalrts::alloc_name(vm, context[9], functions[efunc_FindInvalidEntry]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_CleanupValidForwards]);
  refalrts::alloc_name(vm, context[12], functions[efunc_FindInvalidForwards]);
  refalrts::alloc_name(vm, context[13], functions[efunc_CleanupValidDriveInline]);
  refalrts::alloc_name(vm, context[14], functions[efunc_FindInvalidDriveInline]);
  refalrts::alloc_name(vm, context[15], functions[efunc_CheckRedefinitions]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[7]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_CleanupValidEntry]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[10], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[18] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckDeclarations("CheckDeclarations", COOKIE1_, COOKIE2_, func_CheckDeclarations);


static refalrts::FnResult func_InlineDriveErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & InlineDriveErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & InlineDriveErrors/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & InlineDriveErrors/4 # Inline/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & InlineDriveErrors/4 # Inline/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # DanglingInline/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_DanglingInline]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & InlineDriveErrors/4 # Drive/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Drive], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & InlineDriveErrors/4 # Drive/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # DanglingDrive/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_DanglingDrive]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_InlineDriveErrors("InlineDriveErrors", COOKIE1_, COOKIE2_, func_InlineDriveErrors);


static refalrts::FnResult func_CleanupValidDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & CleanupValidDriveInline/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CleanupValidDriveInline/4 e.Declarations-B#1/7 (/13 s.Label#1/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 e.Declarations-M#1/18 (/24 # Define/26 t.SrcPosDefine#1/29 s.ScopeClass#1/31 e.Name#1/27 )/25 e.Declarations-E#1/20 >/1
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
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
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
        //DEBUG: s.Label#1: 15
        //DEBUG: t.SrcPosEntry#1: 16
        //DEBUG: e.Name#1: 11
        //DEBUG: e.Declarations-M#1: 18
        //DEBUG: e.Declarations-E#1: 20
        //DEBUG: t.SrcPosDefine#1: 29
        //DEBUG: s.ScopeClass#1: 31
        //7: e.Declarations-B#1
        //11: e.Name#1
        //15: s.Label#1
        //16: t.SrcPosEntry#1
        //18: e.Declarations-M#1
        //20: e.Declarations-E#1
        //27: e.Name#1
        //29: t.SrcPosDefine#1
        //31: s.ScopeClass#1
        //37: s.Label#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_CleanupValidDriveInline_S1C1]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[37], context[15]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Inline]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_Drive]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[35] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_stvar( res, context[37] );
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
          // </32 & CleanupValidDriveInline$1?1/36 # True/37 >/33
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
          context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
          if( ! context[37] )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          //DEBUG: e.Declarations-B#1: 7
          //DEBUG: s.Label#1: 15
          //DEBUG: t.SrcPosEntry#1: 16
          //DEBUG: e.Name#1: 11
          //DEBUG: e.Declarations-M#1: 18
          //DEBUG: e.Declarations-E#1: 20
          //DEBUG: t.SrcPosDefine#1: 29
          //DEBUG: s.ScopeClass#1: 31

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 s.Label#1/15 t.SrcPosEntry#1/16 e.Name#1/11 )/14 {REMOVED TILE} {REMOVED TILE} & CleanupValidDriveInline$1?1/36 # True/37 >/33 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidDriveInline/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/18 } Tile{ AsIs: (/24 AsIs: # Define/26 AsIs: t.SrcPosDefine#1/29 AsIs: s.ScopeClass#1/31 AsIs: e.Name#1/27 AsIs: )/25 AsIs: e.Declarations-E#1/20 HalfReuse: >/32 } Tile{ ]] }
          refalrts::reinit_close_call(context[32]);
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[24], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[24], context[32] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[32], context[33]);
        continue;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CleanupValidDriveInline/4 e.Declarations-B#1/7 (/13 # Define/15 t.SrcPosDefine#1/16 s.ScopeClass#1/18 e.Name#1/11 )/14 e.Declarations-M#1/19 (/25 s.Label#1/29 t.SrcPosEntry#1/30 e.Name#1/27 )/26 e.Declarations-E#1/21 >/1
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
        if( ! refalrts::repeated_evar_right( vm, context[27], context[28], context[11], context[12], context[23], context[24] ) )
          continue;
        // closed e.Declarations-E#1 as range 21
        if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
          continue;
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
        //DEBUG: s.Label#1: 29
        //DEBUG: t.SrcPosEntry#1: 30
        //7: e.Declarations-B#1
        //11: e.Name#1
        //16: t.SrcPosDefine#1
        //18: s.ScopeClass#1
        //19: e.Declarations-M#1
        //21: e.Declarations-E#1
        //27: e.Name#1
        //29: s.Label#1
        //30: t.SrcPosEntry#1
        //37: s.Label#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_CleanupValidDriveInline_S2C1]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[37], context[29]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Inline]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_Drive]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[32] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[35] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_stvar( res, context[37] );
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
          // </32 & CleanupValidDriveInline$2?1/36 # True/37 >/33
          context[34] = 0;
          context[35] = 0;
          context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
          context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
          if( ! context[37] )
            continue;
          if( ! refalrts::empty_seq( context[34], context[35] ) )
            continue;
          //DEBUG: e.Declarations-B#1: 7
          //DEBUG: t.SrcPosDefine#1: 16
          //DEBUG: s.ScopeClass#1: 18
          //DEBUG: e.Name#1: 11
          //DEBUG: e.Declarations-M#1: 19
          //DEBUG: e.Declarations-E#1: 21
          //DEBUG: s.Label#1: 29
          //DEBUG: t.SrcPosEntry#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 s.Label#1/29 t.SrcPosEntry#1/30 e.Name#1/27 )/26 {REMOVED TILE} </32 & CleanupValidDriveInline$2?1/36 # True/37 >/33 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & CleanupValidDriveInline/4 } Tile{ AsIs: e.Declarations-B#1/7 } Tile{ AsIs: e.Declarations-M#1/19 } Tile{ AsIs: (/13 AsIs: # Define/15 AsIs: t.SrcPosDefine#1/16 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Declarations-E#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[32], context[33]);
        continue;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupValidDriveInline/4 e.Declarations#1/2 >/1
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupValidDriveInline/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Declarations#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupValidDriveInline("CleanupValidDriveInline", COOKIE1_, COOKIE2_, func_CleanupValidDriveInline);


static refalrts::FnResult func_gen_FindInvalidDriveInline_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindInvalidDriveInline\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidDriveInline\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindInvalidDriveInline\1/4 (/5 s.Label#2/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: s.Label#2: 9
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 7
    //7: e.Name#2
    //9: s.Label#2
    //10: t.SrcPos#2
    //17: s.Label#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_FindInvalidDriveInline_L1S1C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[17], context[9]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_Inline]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_Drive]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & FindInvalidDriveInline\1$1?1/16 # True/17 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
      if( ! context[17] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: s.Label#2: 9
      //DEBUG: t.SrcPos#2: 10
      //DEBUG: e.Name#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 s.Label#2/9 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#2/10 } Tile{ AsIs: </12 Reuse: & InlineDriveErrors/16 HalfReuse: s.Label2 #9/17 AsIs: >/13 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Error]);
      refalrts::update_name(context[16], functions[efunc_InlineDriveErrors]);
      refalrts::reinit_svar( context[17], context[9] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidDriveInline\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidDriveInline\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidDriveInline_L1("FindInvalidDriveInline\\1", COOKIE1_, COOKIE2_, func_gen_FindInvalidDriveInline_L1);


static refalrts::FnResult func_FindInvalidDriveInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FindInvalidDriveInline/4 e.Declarations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Declarations#1 as range 2
  //DEBUG: e.Declarations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@8/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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
        res = refalrts::splice_evar( res, context[15], context[15] );
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
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[27], context[27] );
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


static refalrts::FnResult func_gen_FindInvalidEntry_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindInvalidEntry\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindInvalidEntry\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindInvalidEntry\1/4 (/5 # Entry/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Entry], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindInvalidEntry\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Error/9 AsIs: t.SrcPos#2/10 } Tile{ HalfReuse: # DanglingEntry/6 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident(context[9], identifiers[ident_Error]);
    refalrts::reinit_ident(context[6], identifiers[ident_DanglingEntry]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[5], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInvalidEntry\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInvalidEntry\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInvalidEntry_L1("FindInvalidEntry\\1", COOKIE1_, COOKIE2_, func_gen_FindInvalidEntry_L1);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@9/4 AsIs: e.Declarations#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
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
        res = refalrts::splice_evar( res, context[33], context[33] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CheckFunctionBody/4 (/7 e.Body#1/5 )/8 >/1
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
  // closed e.Body#1 as range 5
  //DEBUG: e.Body#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Sentences/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@10/4 } Tile{ AsIs: e.ScopeVars#1/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Sentences#1/12 } Tile{ AsIs: )/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=4/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.AssignmentsFunctionsAndErrors#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#4/2 } Tile{ AsIs: )/16 } </21 & CheckBlocks/22 (/23 Tile{ AsIs: e.ScopeVars#3/13 } Tile{ HalfReuse: )/19 AsIs: e.Blocks#1/17 HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_CheckBlocks]);
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
  res = refalrts::splice_evar( res, context[16], context[16] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=3/4 AsIs: (/7 AsIs: e.PatternFunctionsAndErrors#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.AssignmentsFunctionsAndErrors#3/2 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#3/17 AsIs: )/20 } (/21 Tile{ AsIs: e.Blocks#1/9 } )/22 </23 Tile{ HalfReuse: & CheckResult/12 AsIs: (/15 } e.ScopeVars#3/17/24 )/26 </27 & FlatExpr/28 Tile{ AsIs: e.Result#1/13 } >/29 >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_FlatExpr]);
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
  res = refalrts::splice_evar( res, context[21], context[21] );
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
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CheckSentence=1/4 (/7 e.Blocks#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Assignments#1/13 )/16 (/19 e.ScopeVars#2/17 )/20 e.PatternFunctionsAndErrors#2/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 } & CheckSentence=2/21 (/22 Tile{ AsIs: e.PatternFunctionsAndErrors#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </15 } & DoCheckAssignments/23 (/24 Tile{ AsIs: e.Assignments#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.ScopeVars#2/17 AsIs: )/20 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_CheckSentence_A2]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_DoCheckAssignments]);
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
  res = refalrts::splice_evar( res, context[25], context[25] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentence=1/4 } (/21 Tile{ AsIs: e.Blocks#1/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 } Tile{ AsIs: e.Assignments#1/5 } )/22 </23 Tile{ HalfReuse: & CheckPattern/7 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#1/2 } )/24 </25 & FlatExpr/26 Tile{ AsIs: e.Pattern#1/9 } Tile{ HalfReuse: >/16 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FlatExpr]);
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
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentence("CheckSentence", COOKIE1_, COOKIE2_, func_CheckSentence);


static refalrts::FnResult func_gen_CheckBlocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CheckBlocks\1/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BlockBody#2/9 )/12 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.BlockBody#2 as range 9
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BlockBody#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 } Tile{ AsIs: e.BlockBody#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckBlocks_L1("CheckBlocks\\1", COOKIE1_, COOKIE2_, func_gen_CheckBlocks_L1);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@11/7 AsIs: e.ScopeVars#1/5 HalfReuse: (/8 AsIs: e.Blocks#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z11]);
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

static refalrts::NativeReference nat_ref_CheckBlocks("CheckBlocks", COOKIE1_, COOKIE2_, func_CheckBlocks);


static refalrts::FnResult func_gen_DoCheckAssignments_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoCheckAssignments$2=3/4 (/7 e.Assignments#1/5 )/8 (/11 e.Errors#1/9 )/12 (/15 e.ResultFunctionsAndErrors#2/13 )/16 (/19 e.BlocksFunctionsAndErrors#3/17 )/20 (/23 e.ScopeVars#4/21 )/24 e.PatternFunctionsAndErrors#4/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#4/21 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Errors#1/9 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/13 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/17 } Tile{ AsIs: e.PatternFunctionsAndErrors#4/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoCheckAssignments]);
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
  res = refalrts::splice_evar( res, context[20], context[20] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=3/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.ResultFunctionsAndErrors#2/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.BlocksFunctionsAndErrors#3/2 } )/25 </26 & CheckPattern/27 (/28 Tile{ AsIs: e.ScopeVars#1/17 } )/29 Tile{ HalfReuse: </20 HalfReuse: & FlatExpr/23 AsIs: e.Pattern#1/21 HalfReuse: >/24 } >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_CheckPattern]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckAssignments_S2A3]);
  refalrts::reinit_open_call(context[20]);
  refalrts::reinit_name(context[23], functions[efunc_FlatExpr]);
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
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[29], context[29] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=2/4 AsIs: (/7 AsIs: e.Assignments#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResultFunctionsAndErrors#2/2 } )/25 (/26 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: </23 } & CheckBlocks/27 (/28 e.ScopeVars#1/13/29 Tile{ AsIs: )/24 } Tile{ AsIs: e.Blocks#1/21 } >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_CheckBlocks]);
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
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckAssignments$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Assignments#1/5 } )/30 Tile{ AsIs: (/27 } Tile{ AsIs: e.Errors#1/2 } Tile{ AsIs: )/28 AsIs: (/23 } e.ScopeVars#1/9/31 Tile{ AsIs: )/24 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: e.Blocks#1/21 } Tile{ HalfReuse: )/15 } </33 Tile{ HalfReuse: & CheckResult/8 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } </34 & FlatExpr/35 Tile{ AsIs: e.Result#1/25 } >/36 >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_FlatExpr]);
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
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[16] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[28], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[30], context[30] );
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlatExpr]);
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FlatExpr]);
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Symbol/5 Reuse: # Name/9 AsIs: t.SrcPos#2/12 } Tile{ AsIs: e.Name#2/18 } Tile{ AsIs: )/17 } Tile{ AsIs: </0 } Tile{ HalfReuse: & FlatExpr/6 } Tile{ AsIs: e.InBrackets#2/20 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[5], identifiers[ident_Symbol]);
      refalrts::update_ident(context[9], identifiers[ident_Name]);
      refalrts::reinit_name(context[6], functions[efunc_FlatExpr]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[6], context[6] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[17], context[17] );
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FlatExpr]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@12/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z12]);
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
    res = refalrts::splice_evar( res, context[13], context[13] );
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@3/4 AsIs: (/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
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


static refalrts::FnResult func_gen_CheckResult_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & CheckResult\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckResult\1/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
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
    // </0 & CheckResult\1/4 e.new#4/10 (/7 s.new#5/9 t.new#6/14 t.new#7/16 e.new#8/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#4 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.new#8 as range 12
    do {
      // </0 & CheckResult\1/4 e.new#9/18 (/7 # TkVariable/9 t.new#10/14 s.new#11/16 e.new#12/20 )/8 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      // closed e.new#9 as range 18
      // closed e.new#12 as range 20
      do {
        // </0 & CheckResult\1/4 e.KnownVars#2/22 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 '_'/26 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        context[26] = refalrts::char_left( '_', context[24], context[25] );
        if( ! context[26] )
          continue;
        // closed e.KnownVars#2 as range 22
        // closed e.Index#2 as range 24
        //DEBUG: t.SrcPos#2: 14
        //DEBUG: s.Mode#2: 16
        //DEBUG: e.KnownVars#2: 22
        //DEBUG: e.Index#2: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # UnnamedVariableInResult/1 } Tile{ AsIs: s.Mode#2/16 AsIs: '_'/26 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_Error]);
        refalrts::reinit_ident(context[1], identifiers[ident_UnnamedVariableInResult]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[8] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_stvar_left( vm, context[34], context[16], context[30], context[31] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[24], context[25], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.Mode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckResult\1/4 e.KnownVars-B#2/26 (/32 s.OldMode#2/36 e.Index#2/34 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.NewMode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[24], context[25], context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.NewMode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28
          //DEBUG: s.OldMode#2: 36

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars-B#2/26 {REMOVED TILE} e.Index#2/34 )/33 e.KnownVars-E#2/28 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # InvalidMode/32 AsIs: s.OldMode#2/36 } Tile{ AsIs: s.NewMode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_Error]);
          refalrts::reinit_ident(context[32], identifiers[ident_InvalidMode]);
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[16], context[8] );
          res = refalrts::splice_evar( res, context[32], context[36] );
          res = refalrts::splice_evar( res, context[7], context[15] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckResult\1/4 e.KnownVars#2/22 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      // closed e.KnownVars#2 as range 22
      // closed e.Index#2 as range 24
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: s.Mode#2: 16
      //DEBUG: e.KnownVars#2: 22
      //DEBUG: e.Index#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # VariableNotFound/1 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[9], identifiers[ident_Error]);
      refalrts::reinit_ident(context[1], identifiers[ident_VariableNotFound]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[8] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckResult\1/4 e.KnownVars#2/18 (/7 # Symbol/9 # Name/14 t.SrcPos#2/16 e.Name#2/20 )/8 >/1
    context[18] = context[10];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    // closed e.KnownVars#2 as range 18
    // closed e.Name#2 as range 20
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: e.KnownVars#2: 18
    //DEBUG: e.Name#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/18 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/9 AsIs: # Name/14 AsIs: t.SrcPos#2/16 AsIs: e.Name#2/20 AsIs: )/8 } Tile{ ]] }
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
    // </0 & CheckResult\1/4 e.KnownVars#2/10 (/7 # Closure/9 e.Body#2/12 )/8 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownVars#2/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#2/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckResult\1/4 e.KnownVars#2/2 (/7 # Error/9 t.SrcPos#2/10 s.Type#2/12 e.Info#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE} </0 & CheckResult\1/4 e.KnownVars#2/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Error/9 AsIs: t.SrcPos#2/10 AsIs: s.Type#2/12 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckResult_L1("CheckResult\\1", COOKIE1_, COOKIE2_, func_gen_CheckResult_L1);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@13/7 AsIs: e.ScopeVars#1/5 HalfReuse: (/8 AsIs: e.Items#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z13]);
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

static refalrts::NativeReference nat_ref_CheckResult("CheckResult", COOKIE1_, COOKIE2_, func_CheckResult);


static refalrts::FnResult func_gen_CheckValidUsings_S5L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CheckValidUsings$5\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckValidUsings$5\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckValidUsings$5\1/4 (/5 # Error/9 t.SrcPos#2/10 s.Type#2/12 e.Info#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Error], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Info#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.Type#2: 12
    //DEBUG: e.Info#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckValidUsings$5\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Error/9 AsIs: t.SrcPos#2/10 AsIs: s.Type#2/12 AsIs: e.Info#2/7 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckValidUsings$5\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckValidUsings$5\1/4 t.OtherItem#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckValidUsings_S5L1("CheckValidUsings$5\\1", COOKIE1_, COOKIE2_, func_gen_CheckValidUsings_S5L1);


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
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[18], context[18] );
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
    res = refalrts::splice_evar( res, context[8], context[8] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@14/4 } Tile{ AsIs: e.DeclarationsAndErrors#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z14]);
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
        // </0 & Reduce@1/4 t.Acc#1/7 (/11 # Error/17 t.0#0/18 e.1#0/15 )/12 e.Tail#1/13 >/1
        context[13] = context[9];
        context[14] = context[10];
        context[15] = 0;
        context[16] = 0;
        if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
          continue;
        context[17] = refalrts::ident_left( identifiers[ident_Error], context[15], context[16] );
        if( ! context[17] )
          continue;
        // closed e.Tail#1 as range 13
        context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
        if( ! context[19] )
          continue;
        // closed e.1#0 as range 15
        //DEBUG: t.Acc#1: 7
        //DEBUG: e.Tail#1: 13
        //DEBUG: t.0#0: 18
        //DEBUG: e.1#0: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 } </20 & EL-AddErrorAt/21 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.0#0/18 } Tile{ HalfReuse: </11 HalfReuse: & PrepareMessage/17 } Tile{ AsIs: e.1#0/15 } >/22 Tile{ HalfReuse: >/12 AsIs: e.Tail#1/13 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_ELm_AddErrorAt]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_PrepareMessage]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::use( res );
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
      //RESULT: Tile{ [[ } </15 & Reduce@1/16 Tile{ AsIs: </0 Reuse: & CheckProgram\1*1/4 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_Reduce_Z1]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::update_name(context[4], functions[efunc_gen_CheckProgram_L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@0/0 Reuse: & CheckProgram\1/4 AsIs: e.accum-and-items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckProgram_L1]);
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBody/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_CheckFunctionBody]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckFunctionBody/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_CheckFunctionBody]);
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ConflictSpecDriveErrorForName/4 AsIs: t.Next#1/7 } >/9 </10 & Map@2/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_ConflictSpecDriveErrorForName]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ConflictSpecDriveErrorForName/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_ConflictSpecDriveErrorForName]);
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
      //RESULT: Tile{ [[ } </13 & Reduce@2/14 Tile{ AsIs: </0 Reuse: & CheckSpecsAndDrives=2\1/4 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/15 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z2]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A2L1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@0/0 Reuse: & CheckSpecsAndDrives=2\1/4 AsIs: e.accum-and-items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A2L1]);
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
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

  // </0 & MapAccum@1/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CheckSpecsAndDrives=1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
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
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@3/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
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
      // </0 & Map@3/4 e.Name#1/15 (/7 (/13 s.Mark#4/21 t.0#0/22 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: s.Mark#4: 21
      //DEBUG: t.0#0: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mark#4/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } # Error/24 Tile{ AsIs: t.0#0/22 } Tile{ HalfReuse: # SpecDriveConflict/4 AsIs: e.Name#1/15 HalfReuse: s.Mark4 #21/7 HalfReuse: )/13 } </25 & Map@3/26 e.Name#1/15/27 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[24], identifiers[ident_Error]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z3]);
      refalrts::copy_evar(vm, context[27], context[28], context[15], context[16]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_SpecDriveConflict]);
      refalrts::reinit_svar( context[7], context[21] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[0], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[4], context[13] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 e.Name#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & ConflictSpecDriveErrorForName$1\1*1/20 (/21 e.Name#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: e.Name#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ConflictSpecDriveErrorForName_S1L1D1]);
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
    // </0 & Map@3/4 e.Name#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 e.Name#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.Name#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Name#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.Name#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & ConflictSpecDriveErrorForName$1\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ConflictSpecDriveErrorForName_S1L1]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


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
      // </0 & Map@4/4 (/7 # Spec/13 t.0#0/14 (/18 e.3#0/16 )/19 e.2#0/11 )/8 e.Tail#1/9 >/1
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & CheckSpecs-Formats\1$1:1/13 AsIs: t.0#0/14 AsIs: (/18 AsIs: e.3#0/16 AsIs: )/19 } (/20 e.2#0/11/21 )/23 Tile{ AsIs: </0 Reuse: & IsHardPattern/4 } Tile{ AsIs: e.2#0/11 } >/24 >/25 </26 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::copy_evar(vm, context[21], context[22], context[11], context[12]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_gen_CheckSpecsm_Formats_L1S1B1]);
      refalrts::update_name(context[4], functions[efunc_IsHardPattern]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
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

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckSpecs-Formats\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsm_Formats_L1]);
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
        // </0 & Map@5/4 (/7 # TkVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Map@5/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FindVariables]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
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

      // </0 & Map@5/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 e.3#0/20 )/23 e.2#0/14 )/8 e.Tail#1/16 >/1
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindVariables/4 } Tile{ AsIs: e.2#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FindVariables]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
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

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindVariables\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindVariables_L1]);
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
  // </0 & Map@6/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & Map@6/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
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
      // </0 & Map@6/4 t.SrcPos2#1/9 e.Name#1/17 (/7 (/15 e.#0/21 )/16 e.Tail#1/19 )/8 >/1
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
      //DEBUG: t.SrcPos2#1: 9
      //DEBUG: e.Name#1: 17
      //DEBUG: e.#0: 21
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } # Error/23 t.SrcPos2#1/9/24 Tile{ AsIs: e.#0/21 } e.Name#1/17/26 Tile{ AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.SrcPos2#1/9 AsIs: e.Name#1/17 AsIs: (/7 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[23], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[24], context[25], context[9], context[10]);
      refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.SrcPos2#1/9 e.Name#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Name#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.SrcPos2#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & CheckSpecs-Functions$1=1:1$2\1*1/22 t.SrcPos2#1/9/23 (/25 e.Name#1/17/26 )/28 Tile{ AsIs: t.Next#1/15 } >/29 Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.SrcPos2#1/9 AsIs: e.Name#1/17 AsIs: (/7 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1D1]);
    refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 t.SrcPos2#1/9 e.Name#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: t.SrcPos2#1: 9
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 t.SrcPos2#1/9 e.Name#1/11 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 t.SrcPos2#1/9 e.Name#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Name#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.SrcPos2#1: 9
  //DEBUG: e.Name#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/11 & CheckSpecs-Functions$1=1:1$2\1/12 Tile{ AsIs: t.SrcPos2#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: )/8 } {*}/13 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_CheckSpecsm_Functions_S1A1B1S2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
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
    // </0 & Map@7/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
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
      // </0 & Map@7/4 t.SrcPos2#1/9 e.Name#1/17 (/7 (/15 e.#0/21 )/16 e.Tail#1/19 )/8 >/1
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
      //DEBUG: t.SrcPos2#1: 9
      //DEBUG: e.Name#1: 17
      //DEBUG: e.#0: 21
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } # Error/23 t.SrcPos2#1/9/24 Tile{ AsIs: e.#0/21 } e.Name#1/17/26 Tile{ AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: t.SrcPos2#1/9 AsIs: e.Name#1/17 AsIs: (/7 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[23], identifiers[ident_Error]);
      refalrts::copy_evar(vm, context[24], context[25], context[9], context[10]);
      refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 t.SrcPos2#1/9 e.Name#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Name#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.SrcPos2#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & CheckSpecs-Functions$2=1:1$2\1*1/22 t.SrcPos2#1/9/23 (/25 e.Name#1/17/26 )/28 Tile{ AsIs: t.Next#1/15 } >/29 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: t.SrcPos2#1/9 AsIs: e.Name#1/17 AsIs: (/7 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1D1]);
    refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::copy_evar(vm, context[26], context[27], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@7/4 t.SrcPos2#1/9 e.Name#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: t.SrcPos2#1: 9
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 t.SrcPos2#1/9 e.Name#1/11 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 t.SrcPos2#1/9 e.Name#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Name#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.SrcPos2#1: 9
  //DEBUG: e.Name#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/11 & CheckSpecs-Functions$2=1:1$2\1/12 Tile{ AsIs: t.SrcPos2#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: )/8 } {*}/13 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_CheckSpecsm_Functions_S2A1B1S2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


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
      // </0 & Reduce@3/4 t.Pattern#1/5 t.Acc#1/9 t.Next#1/13 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Pattern#1: 5
      //DEBUG: t.Acc#1: 9
      //DEBUG: t.Next#1: 13
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & Reduce@3/16 t.Pattern#1/5/17 Tile{ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern/4 AsIs: t.Pattern#1/5 AsIs: t.Acc#1/9 AsIs: t.Next#1/13 } >/19 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_Reduce_Z3]);
      refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::update_name(context[4], functions[efunc_ValidBodyForSpecm_CheckSentensePattern]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@3/4 t.Pattern#1/5 t.Acc#1/9 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.Pattern#1: 5
    //DEBUG: t.Acc#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@3/4 t.Pattern#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@3/4 t.Pattern#1/5 e.accum-and-items#0/2 >/1
  // closed e.accum-and-items#0 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: e.accum-and-items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@0/4 } (/7 & ValidBodyForSpec-CheckSentensePattern/8 Tile{ AsIs: t.Pattern#1/5 } )/9 Tile{ AsIs: e.accum-and-items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_ValidBodyForSpecm_CheckSentensePattern]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z3("Reduce@3", COOKIE1_, COOKIE2_, func_gen_Reduce_Z3);


static refalrts::FnResult func_gen_Reduce_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Reduce@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Reduce@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Reduce@4/4 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
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
      //RESULT: Tile{ [[ } </13 & Reduce@4/14 Tile{ AsIs: </0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/15 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z4]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1]);
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

    // </0 & Reduce@4/4 t.Acc#1/7 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.Acc#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@4/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@4/4 e.accum-and-items#0/2 >/1
  // closed e.accum-and-items#0 as range 2
  //DEBUG: e.accum-and-items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@0/0 Reuse: & ValidBodyForSpec-CheckSentensePattern$1:1$1=1\1/4 AsIs: e.accum-and-items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ValidBodyForSpecm_CheckSentensePattern_S1B1S1A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z4("Reduce@4", COOKIE1_, COOKIE2_, func_gen_Reduce_Z4);


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
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & SeparateDefines\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_SeparateDefines_L1]);
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


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@8/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInvalidDriveInline\1/4 AsIs: t.Next#1/7 } >/9 </10 & Map@8/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z8]);
    refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_L1]);
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
    // </0 & Map@8/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@8/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindInvalidDriveInline\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidDriveInline_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
      // </0 & Map@9/4 (/7 # Entry/13 t.0#0/14 e.1#0/11 )/8 e.Tail#1/9 >/1
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
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/13 AsIs: t.0#0/14 } # DanglingEntry/16 Tile{ AsIs: e.1#0/11 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@9/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_DanglingEntry]);
      refalrts::update_ident(context[13], identifiers[ident_Error]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[7], context[15] );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FindInvalidEntry\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInvalidEntry_L1]);
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


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@10/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@10/4 e.ScopeVars#1/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.ScopeVars#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.ScopeVars#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & CheckSentence/16 e.ScopeVars#1/9/17 Tile{ AsIs: t.Next#1/13 } >/19 Tile{ AsIs: </0 AsIs: & Map@10/4 AsIs: e.ScopeVars#1/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_CheckSentence]);
    refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@10/4 e.ScopeVars#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.ScopeVars#1 as range 9
    //DEBUG: e.ScopeVars#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@10/4 e.ScopeVars#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@10/4 e.ScopeVars#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.ScopeVars#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </1 } & Map@0/9 Tile{ HalfReuse: (/0 Reuse: & CheckSentence/4 AsIs: e.ScopeVars#1/2 HalfReuse: )/7 AsIs: e.items#0/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_CheckSentence]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
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
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@11/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@11/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
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
      // </0 & Map@11/4 e.ScopeVars#1/15 (/7 (/13 e.#0/19 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.ScopeVars#1 as range 15
      // closed e.#0 as range 19
      // closed e.Tail#1 as range 17
      //DEBUG: e.ScopeVars#1: 15
      //DEBUG: e.#0: 19
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.ScopeVars#1/15 } )/21 Tile{ AsIs: e.#0/19 } Tile{ HalfReuse: >/13 } </22 & Map@11/23 e.ScopeVars#1/15/24 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z11]);
      refalrts::copy_evar(vm, context[24], context[25], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@11/4 e.ScopeVars#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
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
    //RESULT: Tile{ [[ } </19 & CheckBlocks\1*1/20 (/21 e.ScopeVars#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: e.ScopeVars#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckBlocks_L1D1]);
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
    // </0 & Map@11/4 e.ScopeVars#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.ScopeVars#1 as range 9
    //DEBUG: e.ScopeVars#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@11/4 e.ScopeVars#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 e.ScopeVars#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.ScopeVars#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & CheckBlocks\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.ScopeVars#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_CheckBlocks_L1]);
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
      // </0 & Map@12/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & Map@12/4 (/7 s.new#6/13 t.new#7/18 t.new#8/20 e.new#9/14 )/8 e.new#10/16 >/1
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
          // </0 & Map@12/4 (/7 s.new#11/13 t.new#12/18 s.new#13/20 e.new#14/22 )/8 e.new#15/24 >/1
          context[22] = context[14];
          context[23] = context[15];
          context[24] = context[16];
          context[25] = context[17];
          if( ! refalrts::svar_term( context[20], context[20] ) )
            continue;
          // closed e.new#14 as range 22
          // closed e.new#15 as range 24
          do {
            // </0 & Map@12/4 (/7 # TkVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
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
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/26 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@12/4 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
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

          // </0 & Map@12/4 (/7 # TkNewVariable/13 t.0#0/18 s.Mode#2/20 e.2#0/26 )/8 e.Tail#1/28 >/1
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
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkNewVariable/13 AsIs: t.0#0/18 AsIs: s.Mode#2/20 AsIs: e.2#0/26 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@12/4 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@12/4 (/7 # Symbol/13 # Name/18 t.1#0/20 e.2#0/22 )/8 e.Tail#1/24 >/1
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
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/13 AsIs: # Name/18 AsIs: t.1#0/20 AsIs: e.2#0/22 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@12/4 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Map@12/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@12/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FlatExpr]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
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
        // </0 & Map@12/4 (/7 # ADT-Brackets/13 t.new#6/18 (/22 e.new#7/20 )/23 e.new#8/14 )/8 e.new#9/16 >/1
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
          // </0 & Map@12/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 # UnnamedADT/30 )/23 e.2#0/26 )/8 e.Tail#1/28 >/1
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
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: >/22 HalfReuse: </30 } Tile{ HalfReuse: & Map@12/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_FlatExpr]);
          refalrts::reinit_close_call(context[22]);
          refalrts::reinit_open_call(context[30]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
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

        // </0 & Map@12/4 (/7 # ADT-Brackets/13 t.0#0/18 (/22 e.3#0/24 )/23 e.2#0/26 )/8 e.Tail#1/28 >/1
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
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Symbol/7 Reuse: # Name/13 AsIs: t.0#0/18 } Tile{ AsIs: e.3#0/24 } Tile{ AsIs: )/23 } Tile{ AsIs: </0 } & FlatExpr/30 Tile{ AsIs: e.2#0/26 } Tile{ HalfReuse: >/22 } </31 Tile{ HalfReuse: & Map@12/8 AsIs: e.Tail#1/28 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[30], functions[efunc_FlatExpr]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_ident(context[7], identifiers[ident_Symbol]);
        refalrts::update_ident(context[13], identifiers[ident_Name]);
        refalrts::reinit_close_call(context[22]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[4], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[4], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@12/4 (/7 # CallBrackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatExpr/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@12/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_FlatExpr]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z12]);
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

      // </0 & Map@12/4 (/7 # Closure/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Closure/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@12/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@12/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@12/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FlatExpr\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FlatExpr_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z12("Map@12", COOKIE1_, COOKIE2_, func_gen_Map_Z12);


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
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CheckPattern$3\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckPattern_S3L1]);
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


static refalrts::FnResult func_gen_Map_Z13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@13/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@13/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@13/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
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
      // </0 & Map@13/4 e.ScopeVars#1/15 (/7 (/13 # TkVariable/21 t.0#0/22 s.Mode#2/24 '_'/25 e.3#0/19 )/14 e.Tail#1/17 )/8 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 Reuse: # Error/21 AsIs: t.0#0/22 } Tile{ HalfReuse: # UnnamedVariableInResult/7 } Tile{ AsIs: s.Mode#2/24 AsIs: '_'/25 } Tile{ AsIs: e.3#0/19 } )/26 Tile{ AsIs: </0 AsIs: & Map@13/4 } Tile{ AsIs: e.ScopeVars#1/15 } Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::update_ident(context[21], identifiers[ident_Error]);
      refalrts::reinit_ident(context[7], identifiers[ident_UnnamedVariableInResult]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[13], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[13], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@13/4 e.ScopeVars#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
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
    //RESULT: Tile{ [[ } </19 & CheckResult\1*1/20 e.ScopeVars#1/15/21 Tile{ AsIs: t.Next#1/13 } >/23 Tile{ AsIs: </0 AsIs: & Map@13/4 AsIs: e.ScopeVars#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@13/4 e.ScopeVars#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.ScopeVars#1 as range 9
    //DEBUG: e.ScopeVars#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@13/4 e.ScopeVars#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@13/4 e.ScopeVars#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.ScopeVars#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.ScopeVars#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </1 } & Map@0/9 Tile{ HalfReuse: (/0 Reuse: & CheckResult\1/4 AsIs: e.ScopeVars#1/2 HalfReuse: )/7 AsIs: e.items#0/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckResult_L1]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z13("Map@13", COOKIE1_, COOKIE2_, func_gen_Map_Z13);


static refalrts::FnResult func_gen_CheckResult_L1D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & CheckResult\1*1/4 e.new#4/10 (/7 s.new#5/9 t.new#6/14 t.new#7/16 e.new#8/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#4 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.new#8 as range 12
    do {
      // </0 & CheckResult\1*1/4 e.new#9/18 (/7 # TkVariable/9 t.new#10/14 s.new#11/16 e.new#12/20 )/8 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      // closed e.new#9 as range 18
      // closed e.new#12 as range 20
      do {
        // </0 & CheckResult\1*1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_stvar_left( vm, context[34], context[16], context[30], context[31] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[24], context[25], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.Mode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars-B#2/26 (/32 s.Mode#2/34 e.Index#2/35 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CheckResult\1*1/4 e.KnownVars-B#2/26 (/32 s.OldMode#2/36 e.Index#2/34 )/33 e.KnownVars-E#2/28 (/7 # TkVariable/9 t.SrcPos#2/14 s.NewMode#2/16 e.Index#2/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Index#2 as range 24
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[24], context[25], context[30], context[31] ) )
            continue;
          // closed e.KnownVars-E#2 as range 28
          if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          //DEBUG: t.SrcPos#2: 14
          //DEBUG: s.NewMode#2: 16
          //DEBUG: e.Index#2: 24
          //DEBUG: e.KnownVars-B#2: 26
          //DEBUG: e.KnownVars-E#2: 28
          //DEBUG: s.OldMode#2: 36

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars-B#2/26 {REMOVED TILE} e.Index#2/34 )/33 e.KnownVars-E#2/28 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # InvalidMode/32 AsIs: s.OldMode#2/36 } Tile{ AsIs: s.NewMode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_Error]);
          refalrts::reinit_ident(context[32], identifiers[ident_InvalidMode]);
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[16], context[8] );
          res = refalrts::splice_evar( res, context[32], context[36] );
          res = refalrts::splice_evar( res, context[7], context[15] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckResult\1*1/4 e.KnownVars#2/22 (/7 # TkVariable/9 t.SrcPos#2/14 s.Mode#2/16 e.Index#2/24 )/8 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      // closed e.KnownVars#2 as range 22
      // closed e.Index#2 as range 24
      //DEBUG: t.SrcPos#2: 14
      //DEBUG: s.Mode#2: 16
      //DEBUG: e.KnownVars#2: 22
      //DEBUG: e.Index#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.SrcPos#2/14 } Tile{ HalfReuse: # VariableNotFound/1 } Tile{ AsIs: s.Mode#2/16 AsIs: e.Index#2/24 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[9], identifiers[ident_Error]);
      refalrts::reinit_ident(context[1], identifiers[ident_VariableNotFound]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[8] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckResult\1*1/4 e.KnownVars#2/18 (/7 # Symbol/9 # Name/14 t.SrcPos#2/16 e.Name#2/20 )/8 >/1
    context[18] = context[10];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[14] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    // closed e.KnownVars#2 as range 18
    // closed e.Name#2 as range 20
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: e.KnownVars#2: 18
    //DEBUG: e.Name#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckResult\1*1/4 e.KnownVars#2/18 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Symbol/9 AsIs: # Name/14 AsIs: t.SrcPos#2/16 AsIs: e.Name#2/20 AsIs: )/8 } Tile{ ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckFunctionBodyRec/4 } Tile{ AsIs: (/7 } Tile{ AsIs: e.KnownVars#2/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Body#2/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CheckFunctionBodyRec]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[7] );
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


static refalrts::FnResult func_gen_Map_Z14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Map@14/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@14/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@14/4 (/7 # Error/13 t.0#0/14 s.Type#2/16 e.2#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Error], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.0#0: 14
      //DEBUG: s.Type#2: 16
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Error/13 AsIs: t.0#0/14 AsIs: s.Type#2/16 AsIs: e.2#0/11 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@14/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@14/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@14/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@14/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@14/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@14/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CheckValidUsings$5\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckValidUsings_S5L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z14("Map@14", COOKIE1_, COOKIE2_, func_gen_Map_Z14);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
    // </0 & DoMapAccum@1/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
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
      // </0 & DoMapAccum@1/4 (/9 e.#0/21 )/10 e.Scanned#1/17 (/7 (/15 # Spec/25 t.0#0/26 (/30 e.4#0/28 )/31 e.3#0/23 )/16 e.Tail#1/19 )/8 >/1
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
      context[25] = refalrts::ident_left( identifiers[ident_Spec], context[23], context[24] );
      if( ! context[25] )
        continue;
      // closed e.#0 as range 21
      // closed e.Scanned#1 as range 17
      // closed e.Tail#1 as range 19
      context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[23], context[24] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.4#0 as range 28
      // closed e.3#0 as range 23
      //DEBUG: e.#0: 21
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: t.0#0: 26
      //DEBUG: e.4#0: 28
      //DEBUG: e.3#0: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & DoMapAccum-Aux@1/32 Tile{ AsIs: e.Scanned#1/17 } Tile{ HalfReuse: (/4 AsIs: (/9 AsIs: e.#0/21 HalfReuse: (/10 } # Spec/33 t.0#0/26/34 e.4#0/28/36 )/38 Tile{ HalfReuse: )/7 AsIs: (/15 AsIs: # Spec/25 AsIs: t.0#0/26 AsIs: (/30 AsIs: e.4#0/28 AsIs: )/31 AsIs: e.3#0/23 AsIs: )/16 } )/39 (/40 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_Spec]);
      refalrts::copy_evar(vm, context[34], context[35], context[26], context[27]);
      refalrts::copy_evar(vm, context[36], context[37], context[28], context[29]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[40], context[8] );
      refalrts::link_brackets( context[4], context[39] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[9], context[7] );
      refalrts::link_brackets( context[10], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
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
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & CheckSpecsAndDrives=1\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckSpecsAndDrives_A1L1D1]);
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
    // </0 & DoMapAccum@1/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@1/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & CheckSpecsAndDrives=1\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CheckSpecsAndDrives_A1L1]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_CheckSpecsAndDrives_A1L1D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & CheckSpecsAndDrives=1\1*1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSpecsAndDrives=1\1*1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & CheckSpecsAndDrives=1\1*1/4 (/7 e.OptMarks#2/11 )/8 (/9 s.DriveInline#2/15 t.SrcPos#2/16 s.ScopeClass#2/18 e.Name#2/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.OptMarks#2 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#2 as range 13
    //DEBUG: e.OptMarks#2: 11
    //DEBUG: s.DriveInline#2: 15
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: e.Name#2: 13
    //11: e.OptMarks#2
    //13: e.Name#2
    //15: s.DriveInline#2
    //16: t.SrcPos#2
    //18: s.ScopeClass#2
    //24: s.DriveInline#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_CheckSpecsAndDrives_A1L1D1S2C1]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[24], context[15]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_Drive]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_Inline]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
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
      // </19 & CheckSpecsAndDrives=1\1*1$2?1/23 # True/24 >/20
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
      context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.OptMarks#2: 11
      //DEBUG: s.DriveInline#2: 15
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.Name#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CheckSpecsAndDrives=1\1*1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & CheckSpecsAndDrives=1\1*1$2?1/23 # True/24 >/20 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.OptMarks#2/11 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.DriveInline2 #15/19 } t.SrcPos#2/16/25 e.Name#2/13/27 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.DriveInline#2/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/13 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[25], context[26], context[16], context[17]);
      refalrts::copy_evar(vm, context[27], context[28], context[13], context[14]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[19], context[15] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[19], context[20]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSpecsAndDrives=1\1*1/4 (/7 e.OptMarks#2/5 )/8 t.Other#2/9 >/1
  // closed e.OptMarks#2 as range 5
  //DEBUG: t.Other#2: 9
  //DEBUG: e.OptMarks#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSpecsAndDrives=1\1*1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptMarks#2/5 AsIs: )/8 AsIs: t.Other#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSpecsAndDrives_A1L1D1("CheckSpecsAndDrives=1\\1*1", COOKIE1_, COOKIE2_, func_gen_CheckSpecsAndDrives_A1L1D1);


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
      // </0 & DoMapAccum@2/4 (/9 e.new#8/21 )/10 e.new#9/17 (/7 (/15 s.new#10/25 e.new#11/23 )/16 e.new#12/19 )/8 >/1
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
      // closed e.new#8 as range 21
      // closed e.new#9 as range 17
      // closed e.new#12 as range 19
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#11 as range 23
      do {
        // </0 & DoMapAccum@2/4 (/9 e.new#13/26 )/10 e.new#14/28 (/7 (/15 s.new#15/25 t.new#16/34 e.new#17/30 )/16 e.new#18/32 )/8 >/1
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[17];
        context[29] = context[18];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new#13 as range 26
        // closed e.new#14 as range 28
        // closed e.new#18 as range 32
        context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
        if( ! context[35] )
          continue;
        // closed e.new#17 as range 30
        do {
          // </0 & DoMapAccum@2/4 (/9 e.new#19/36 )/10 e.new#20/38 (/7 (/15 s.new#21/25 t.new#22/34 s.new#23/44 e.new#24/40 )/16 e.new#25/42 )/8 >/1
          context[36] = context[26];
          context[37] = context[27];
          context[38] = context[28];
          context[39] = context[29];
          context[40] = context[30];
          context[41] = context[31];
          context[42] = context[32];
          context[43] = context[33];
          // closed e.new#19 as range 36
          // closed e.new#20 as range 38
          // closed e.new#25 as range 42
          if( ! refalrts::svar_left( context[44], context[40], context[41] ) )
            continue;
          // closed e.new#24 as range 40
          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Function/25 t.0#0/34 s.ScopeClass#2/44 (/55 e.5#0/53 )/56 e.4#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            // closed e.#0 as range 45
            // closed e.Scanned#1 as range 47
            // closed e.5#0 as range 53
            // closed e.4#0 as range 49
            // closed e.Tail#1 as range 51
            //DEBUG: t.0#0: 34
            //DEBUG: s.ScopeClass#2: 44
            //DEBUG: e.#0: 45
            //DEBUG: e.Scanned#1: 47
            //DEBUG: e.5#0: 53
            //DEBUG: e.4#0: 49
            //DEBUG: e.Tail#1: 51

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@2/4 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: (/9 } Tile{ AsIs: (/55 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 } Tile{ AsIs: e.5#0/53 } Tile{ AsIs: )/56 } Tile{ AsIs: )/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.4#0/49 } )/57 )/58 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/51 AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[57]);
            refalrts::alloc_close_bracket(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::reinit_open_bracket(context[16]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[16], context[8] );
            refalrts::link_brackets( context[9], context[58] );
            refalrts::link_brackets( context[7], context[57] );
            refalrts::link_brackets( context[55], context[10] );
            refalrts::link_brackets( context[15], context[56] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[57], context[58] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[7], context[7] );
            res = refalrts::splice_evar( res, context[10], context[10] );
            res = refalrts::splice_evar( res, context[56], context[56] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[15], context[44] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[55], context[55] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Swap/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@2/4 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: (/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/10 } )/53 (/54 Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_open_bracket(vm, context[54]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[54], context[8] );
            refalrts::link_brackets( context[9], context[53] );
            refalrts::link_brackets( context[7], context[10] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[10], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[7], context[7] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Enum/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@2/4 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: (/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/10 } )/53 (/54 Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_open_bracket(vm, context[54]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[54], context[8] );
            refalrts::link_brackets( context[9], context[53] );
            refalrts::link_brackets( context[7], context[10] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[10], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[7], context[7] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Meta/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@2/4 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: (/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Define/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } (/53 # Declare/54 t.0#0/34/55 # GN-Entry/57"__Meta_"/58 e.3#0/49/60 Tile{ AsIs: )/10 } (/62 # Declare/63 t.0#0/34/64 # GN-Entry/66"__Step-Drop"/67 )/69 )/70 )/71 (/72 Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[53]);
            refalrts::alloc_ident(vm, context[54], identifiers[ident_Declare]);
            refalrts::copy_evar(vm, context[55], context[56], context[34], context[35]);
            refalrts::alloc_ident(vm, context[57], identifiers[ident_GNm_Entry]);
            refalrts::alloc_chars(vm, context[58], context[59], "__Meta_", 7);
            refalrts::copy_evar(vm, context[60], context[61], context[49], context[50]);
            refalrts::alloc_open_bracket(vm, context[62]);
            refalrts::alloc_ident(vm, context[63], identifiers[ident_Declare]);
            refalrts::copy_evar(vm, context[64], context[65], context[34], context[35]);
            refalrts::alloc_ident(vm, context[66], identifiers[ident_GNm_Entry]);
            refalrts::alloc_chars(vm, context[67], context[68], "__Step-Drop", 11);
            refalrts::alloc_close_bracket(vm, context[69]);
            refalrts::alloc_close_bracket(vm, context[70]);
            refalrts::alloc_close_bracket(vm, context[71]);
            refalrts::alloc_open_bracket(vm, context[72]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::update_ident(context[25], identifiers[ident_Define]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[72], context[8] );
            refalrts::link_brackets( context[9], context[71] );
            refalrts::link_brackets( context[7], context[70] );
            refalrts::link_brackets( context[62], context[69] );
            refalrts::link_brackets( context[53], context[10] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[62], context[72] );
            res = refalrts::splice_evar( res, context[10], context[10] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            res = refalrts::splice_evar( res, context[53], context[59] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[7], context[7] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Declaration/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@2/4 } Tile{ AsIs: e.Scanned#1/47 } Tile{ AsIs: (/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/15 Reuse: # Declare/25 AsIs: t.0#0/34 AsIs: s.ScopeClass#2/44 AsIs: e.3#0/49 AsIs: )/16 } Tile{ AsIs: )/10 } )/53 (/54 Tile{ AsIs: e.Tail#1/51 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_open_bracket(vm, context[54]);
            refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::update_ident(context[25], identifiers[ident_Declare]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[54], context[8] );
            refalrts::link_brackets( context[9], context[53] );
            refalrts::link_brackets( context[7], context[10] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[51], context[52] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[10], context[10] );
            res = refalrts::splice_evar( res, context[15], context[16] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[7], context[7] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Entry/25 t.0#0/34 # GN-Entry/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/10 AsIs: e.Scanned#1/47 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/9 } Tile{ AsIs: # Entry/25 AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/44 } Tile{ HalfReuse: )/4 } )/53 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/51 AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::reinit_name(context[10], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::reinit_close_bracket(context[44]);
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_open_bracket(context[16]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[16], context[8] );
            refalrts::link_brackets( context[7], context[53] );
            refalrts::link_brackets( context[15], context[4] );
            refalrts::link_brackets( context[9], context[44] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[53], context[53] );
            res = refalrts::splice_evar( res, context[4], context[4] );
            res = refalrts::splice_evar( res, context[44], context[44] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[25], context[35] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Inline/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/10 AsIs: e.Scanned#1/47 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/9 } Tile{ AsIs: # Inline/25 AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/4 } )/53 )/54 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/51 AsIs: )/8 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::alloc_close_bracket(vm, context[54]);
            refalrts::reinit_name(context[10], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
            refalrts::reinit_close_bracket(context[4]);
            refalrts::reinit_open_bracket(context[16]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[16], context[8] );
            refalrts::link_brackets( context[7], context[54] );
            refalrts::link_brackets( context[15], context[53] );
            refalrts::link_brackets( context[9], context[4] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_evar( res, context[4], context[4] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_evar( res, context[25], context[35] );
            res = refalrts::splice_evar( res, context[9], context[9] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[10], context[15] );
            refalrts::splice_to_freelist_open( vm, context[0], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoMapAccum@2/4 (/9 e.#0/45 )/10 e.Scanned#1/47 (/7 (/15 # Drive/25 t.0#0/34 s.ScopeClass#2/44 e.3#0/49 )/16 e.Tail#1/51 )/8 >/1
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
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#2/44 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/10 AsIs: e.Scanned#1/47 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.#0/45 } Tile{ AsIs: (/9 } Tile{ AsIs: # Drive/25 AsIs: t.0#0/34 } Tile{ AsIs: e.3#0/49 } Tile{ HalfReuse: )/4 } )/53 )/54 Tile{ HalfReuse: (/16 AsIs: e.Tail#1/51 AsIs: )/8 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[53]);
          refalrts::alloc_close_bracket(vm, context[54]);
          refalrts::reinit_name(context[10], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_open_bracket(context[16]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[16], context[8] );
          refalrts::link_brackets( context[7], context[54] );
          refalrts::link_brackets( context[15], context[53] );
          refalrts::link_brackets( context[9], context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[25], context[35] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[10], context[15] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 (/9 e.#0/36 )/10 e.Scanned#1/38 (/7 (/15 # Ident/25 t.0#0/34 e.2#0/40 )/16 e.Tail#1/42 )/8 >/1
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Ident/25 t.0#0/34 e.2#0/40 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/10 AsIs: e.Scanned#1/38 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.#0/36 } Tile{ HalfReuse: )/4 HalfReuse: )/9 } Tile{ HalfReuse: (/16 AsIs: e.Tail#1/42 AsIs: )/8 AsIs: >/1 ]] }
        refalrts::reinit_name(context[10], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_close_bracket(context[9]);
        refalrts::reinit_open_bracket(context[16]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[8] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::link_brackets( context[15], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[4], context[9] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 (/9 e.#0/26 )/10 e.Scanned#1/28 (/7 (/15 # NativeBlock/25 e.1#0/30 )/16 e.Tail#1/32 )/8 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # NativeBlock/25 e.1#0/30 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@2/10 AsIs: e.Scanned#1/28 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.#0/26 } Tile{ HalfReuse: )/4 HalfReuse: )/9 } Tile{ HalfReuse: (/16 AsIs: e.Tail#1/32 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::reinit_name(context[10], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[15], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[4], context[9] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[10], context[15] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
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
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@2/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & SeparateDefines\1*10/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_SeparateDefines_L1D10]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & SeparateDefines\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_SeparateDefines_L1]);
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
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@3/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & CheckPattern$3\1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z3]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckPattern_S3L1]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & CheckPattern$3\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CheckPattern_S3L1]);
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


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@1/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
    // </0 & DoMapAccum-Aux@1/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
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

  // </0 & DoMapAccum-Aux@1/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & CheckSpecsAndDrives=1\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CheckSpecsAndDrives_A1L1]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & SeparateDefines\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_SeparateDefines_L1]);
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & CheckPattern$3\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CheckPattern_S3L1]);
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


//End of file
