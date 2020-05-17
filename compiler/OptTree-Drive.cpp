// This file automatically generated from 'OptTree-Drive.ref'
// Don't edit! Edit 'OptTree-Drive.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2823297357_939141710
#define COOKIE1_ 2823297357U
#define COOKIE2_ 939141710U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_gen_Reduce_S1A1 = 6,
  efunc_DoMapAccum = 7,
  efunc_gen_DoMapAccum_S1A1 = 8,
  efunc_Add = 9,
  efunc_Sub = 10,
  efunc_Fetch = 11,
  efunc_Pipe = 12,
  efunc_gen_Pipe_S2L1 = 13,
  efunc_gen_Pipe_S3L1 = 14,
  efunc_UpdateDriveInfo = 15,
  efunc_DriveInlineOptimizerTick = 16,
  efunc_gen_GenRemainderFuncNames_S2C1 = 17,
  efunc_gen_GenRemainderFuncNames_S2C1B1 = 18,
  efunc_Dec = 19,
  efunc_DisplayName = 20,
  efunc_Logm_PutLine = 21,
  efunc_Upper = 22,
  efunc_Explode = 23,
  efunc_gen_UpdateDriveInfo_A3L1A1 = 24,
  efunc_GenRemainderFuncNames = 25,
  efunc_gen_UpdateDriveInfo_A3L2S1C1 = 26,
  efunc_gen_UpdateDriveInfo_A3L2S1A2 = 27,
  efunc_Lenw = 28,
  efunc_gen_MapAccum_Z1 = 29,
  efunc_gen_UpdateDriveInfo_A3 = 30,
  efunc_gen_Map_Z1 = 31,
  efunc_SetNamesm_Reject = 32,
  efunc_gen_UpdateDriveInfo_A2 = 33,
  efunc_gen_UpdateDriveInfo_A1 = 34,
  efunc_gen_MapAccum_Z2 = 35,
  efunc_gen_DriveInlineOptimizerTick_S2A4L1S1C1 = 36,
  efunc_OneOf = 37,
  efunc_gen_MapAccum_Z3 = 38,
  efunc_gen_DriveInlineOptimizerTick_S2A4 = 39,
  efunc_gen_MapAccum_Z4 = 40,
  efunc_gen_DriveInlineOptimizerTick_S2A3 = 41,
  efunc_OptFunction = 42,
  efunc_gen_DriveInlineOptimizerTick_S2A2 = 43,
  efunc_gen_MapAccum_Z5 = 44,
  efunc_OptSwitch = 45,
  efunc_gen_DriveInlineOptimizerTick_S2A1 = 46,
  efunc_IsPassiveCallm_Aux = 47,
  efunc_gen_Reduce_Z1 = 48,
  efunc_IsPassiveCall = 49,
  efunc_gen_IsLexpr_B1 = 50,
  efunc_IsLexprm_Aux = 51,
  efunc_gen_Map_Z2 = 52,
  efunc_OptSentence = 53,
  efunc_gen_OptFunction_A1L1A1 = 54,
  efunc_gen_OptFunction_A1 = 55,
  efunc_gen_Reduce_Z2 = 56,
  efunc_OptSentencem_Aux = 57,
  efunc_gen_OptSentence_S1B1S2A1 = 58,
  efunc_gen_OptSentence_S1B1 = 59,
  efunc_FindOptimizedCall = 60,
  efunc_ApplySolutions = 61,
  efunc_gen_MapAccum_Z6 = 62,
  efunc_gen_OptSentencem_Aux_A2 = 63,
  efunc_OptSentencem_MakeSubstitutions = 64,
  efunc_gen_OptSentencem_Aux_A1 = 65,
  efunc_FindOptInfo = 66,
  efunc_DoOptSentencem_MakeSubstitutions = 67,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A3 = 68,
  efunc_DecreaseMode = 69,
  efunc_ExtractVariables = 70,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A2 = 71,
  efunc_gen_OptSentencem_MakeSubstitutions_S1C1 = 72,
  efunc_MakeColdSolution = 73,
  efunc_IsLexpr = 74,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A1 = 75,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A1B1 = 76,
  efunc_gen_MakeColdSolution_S1C1 = 77,
  efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1S2C1 = 78,
  efunc_RemainderFuncIncName = 79,
  efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1 = 80,
  efunc_Solve = 81,
  efunc_FindOptInfom_Aux = 82,
  efunc_DropLeft = 83,
  efunc_gen_FindOptInfom_Aux_A1 = 84,
  efunc_gen_MapAccum_Z7 = 85,
  efunc_gen_FindOptimizedCallm_Term_S1A1 = 86,
  efunc_gen_FindOptimizedCallm_Term_S2A1 = 87,
  efunc_gen_FindOptimizedCallm_Term_S3B1 = 88,
  efunc_gen_FindOptimizedCallm_Term_S4A1 = 89,
  efunc_ApplySolution = 90,
  efunc_gen_Map_Z3 = 91,
  efunc_ApplyContractions = 92,
  efunc_gen_ApplySolution_A1 = 93,
  efunc_ApplyAssigns = 94,
  efunc_ApplyAssignsm_Term = 95,
  efunc_gen_Map_Z4 = 96,
  efunc_ApplyContractionsm_Term = 97,
  efunc_gen_Map_Z5 = 98,
  efunc_gen_ApplyContractionsm_Term_S3B1 = 99,
  efunc_CleanupColdm_Body = 100,
  efunc_gen_Map_Z6 = 101,
  efunc_gen_Map_Z7 = 102,
  efunc_CleanupColdm_Result = 103,
  efunc_gen_Map_Z8 = 104,
  efunc_gen_Map_Z9 = 105,
  efunc_Mu = 106,
  efunc_Up = 107,
  efunc_Evm_met = 108,
  efunc_Residue = 109,
  efunc_u_u_Metau_Residue = 110,
  efunc_MapAccum = 111,
  efunc_UnBracket = 112,
  efunc_DelAccumulator = 113,
  efunc_Inc = 114,
  efunc_OptTreem_Drivem_Prepare = 115,
  efunc_OptTreem_Drive = 116,
  efunc_CutSUF = 117,
  efunc_FindOptimizedCallm_Term = 118,
  efunc_OptTreem_Drivem_CleanupColdCalls = 119,
  efunc_CleanupColdm_Sentence = 120,
  efunc_CleanupColdm_Term = 121,
  efunc_gen_UpdateDriveInfo_A3L1D1 = 122,
  efunc_gen_Map_Z0 = 123,
  efunc_gen_UpdateDriveInfo_A3L1 = 124,
  efunc_gen_DoMapAccum_Z1 = 125,
  efunc_gen_UpdateDriveInfo_A3L2 = 126,
  efunc_gen_MapAccum_Z0 = 127,
  efunc_gen_DoMapAccum_Z2 = 128,
  efunc_gen_UpdateDriveInfo_A1L1 = 129,
  efunc_gen_DoMapAccum_Z3 = 130,
  efunc_gen_DriveInlineOptimizerTick_S2A4L1 = 131,
  efunc_gen_DoMapAccum_Z4 = 132,
  efunc_gen_DriveInlineOptimizerTick_S2A3L1 = 133,
  efunc_gen_DoMapAccum_Z5 = 134,
  efunc_gen_DriveInlineOptimizerTick_S2A2L1 = 135,
  efunc_gen_Reduce_S1A1Z1 = 136,
  efunc_gen_IsPassiveCall_L1D2 = 137,
  efunc_gen_Reduce_Z0 = 138,
  efunc_gen_IsPassiveCall_L1 = 139,
  efunc_gen_IsLexprm_Aux_S2L1 = 140,
  efunc_gen_Reduce_S1A1Z2 = 141,
  efunc_gen_OptFunction_A1L1D1 = 142,
  efunc_gen_OptFunction_A1L1 = 143,
  efunc_gen_DoMapAccum_Z6 = 144,
  efunc_gen_OptSentencem_Aux_L1 = 145,
  efunc_gen_DoMapAccum_Z7 = 146,
  efunc_gen_ApplySolutions_L1 = 147,
  efunc_gen_ApplyAssigns_L1 = 148,
  efunc_gen_ApplyContractions_L1 = 149,
  efunc_gen_OptTreem_Drivem_CleanupColdCalls_L1 = 150,
  efunc_gen_CleanupColdm_Sentence_L1D1 = 151,
  efunc_gen_CleanupColdm_Sentence_L1 = 152,
  efunc_gen_DoMapAccum_S1A1Z1 = 153,
  efunc_gen_DoMapAccum_Z0 = 154,
  efunc_gen_UpdateDriveInfo_A1L1D3 = 155,
  efunc_gen_DoMapAccum_S1A1Z2 = 156,
  efunc_gen_DoMapAccum_S1A1Z3 = 157,
  efunc_gen_DoMapAccum_S1A1Z4 = 158,
  efunc_gen_DoMapAccum_S1A1Z5 = 159,
  efunc_gen_Reduce_S1A1Z0 = 160,
  efunc_gen_DoMapAccum_S1A1Z6 = 161,
  efunc_gen_OptSentencem_Aux_L1D1 = 162,
  efunc_gen_DoMapAccum_S1A1Z7 = 163,
  efunc_gen_DoMapAccum_S1A1Z0 = 164,
};


enum ident {
  ident_NoOpt = 0,
  ident_DriveInfo = 1,
  ident_SUF = 2,
  ident_Function = 3,
  ident_Sentences = 4,
  ident_Drive = 5,
  ident_Inline = 6,
  ident_OptDrive = 7,
  ident_OptInline = 8,
  ident_ColdFunction = 9,
  ident_True = 10,
  ident_NewFunction = 11,
  ident_False = 12,
  ident_Brackets = 13,
  ident_ADTm_Brackets = 14,
  ident_CallBrackets = 15,
  ident_ColdCallBrackets = 16,
  ident_OpenE = 17,
  ident_TkVariable = 18,
  ident_None = 19,
  ident_Symbol = 20,
  ident_Name = 21,
  ident_Success = 22,
  ident_GNm_Local = 23,
  ident_Failure = 24,
  ident_DRIVEN = 25,
  ident_ClosureBrackets = 26,
  ident_Condition = 27,
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
  ident_OptTreem_Drivem_Prepare = 44,
  ident_OptTreem_Drive = 45,
  ident_GenRemainderFuncNames = 46,
  ident_UpdateDriveInfo = 47,
  ident_SetNamesm_Reject = 48,
  ident_OptSwitch = 49,
  ident_DriveInlineOptimizerTick = 50,
  ident_IsPassiveCall = 51,
  ident_IsPassiveCallm_Aux = 52,
  ident_IsLexpr = 53,
  ident_IsLexprm_Aux = 54,
  ident_OptFunction = 55,
  ident_OptSentence = 56,
  ident_OptSentencem_Aux = 57,
  ident_OptSentencem_MakeSubstitutions = 58,
  ident_MakeColdSolution = 59,
  ident_DecreaseMode = 60,
  ident_DoOptSentencem_MakeSubstitutions = 61,
  ident_DropLeft = 62,
  ident_FindOptInfo = 63,
  ident_FindOptInfom_Aux = 64,
  ident_CutSUF = 65,
  ident_FindOptimizedCall = 66,
  ident_FindOptimizedCallm_Term = 67,
  ident_ApplySolutions = 68,
  ident_ApplySolution = 69,
  ident_ApplyAssigns = 70,
  ident_ApplyAssignsm_Term = 71,
  ident_ApplyContractions = 72,
  ident_ApplyContractionsm_Term = 73,
  ident_RemainderFuncIncName = 74,
  ident_OptTreem_Drivem_CleanupColdCalls = 75,
  ident_CleanupColdm_Body = 76,
  ident_CleanupColdm_Sentence = 77,
  ident_CleanupColdm_Result = 78,
  ident_CleanupColdm_Term = 79,
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[18] );
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
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Apply]);
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
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
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


static refalrts::FnResult func_gen_OptTreem_Drivem_Prepare_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & OptTree-Drive-Prepare$3=1/4 s.OptDrive#1/5 s.OptIntrinsic#1/6 (/9 e.AST#1/7 )/10 e.EmptyInfo#2/2 >/1
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
  // closed e.AST#1 as range 7
  // closed e.EmptyInfo#2 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptIntrinsic#1: 6
  //DEBUG: e.AST#1: 7
  //DEBUG: e.EmptyInfo#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo/4 AsIs: s.OptDrive#1/5 AsIs: s.OptIntrinsic#1/6 AsIs: (/9 } Tile{ AsIs: e.EmptyInfo#2/2 } Tile{ AsIs: )/10 } Tile{ AsIs: e.AST#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_UpdateDriveInfo]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Drivem_Prepare_S3A1("OptTree-Drive-Prepare$3=1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Drivem_Prepare_S3A1);


static refalrts::FnResult func_OptTreem_Drivem_Prepare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & OptTree-Drive-Prepare/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive-Prepare/4 (/7 s.new#1/9 s.new#2/10 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Drive-Prepare/4 (/7 # NoOpt/9 # NoOpt/10 )/8 e.AST#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[10] ) )
      continue;
    // closed e.AST#1 as range 11
    //DEBUG: e.AST#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Drive-Prepare/4 (/7 # NoOpt/9 # NoOpt/10 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OptTree-Drive-Prepare/4 (/7 s.OptDrive#1/9 s.OptIntrinsic#1/10 )/8 e.AST-B#1/13 (/19 # DriveInfo/21 e.DriveInfo#1/17 )/20 e.AST-E#1/15 >/1
    context[11] = context[2];
    context[12] = context[3];
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
      context[21] = refalrts::ident_left( identifiers[ident_DriveInfo], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.DriveInfo#1 as range 17
      // closed e.AST-E#1 as range 15
      //DEBUG: s.OptDrive#1: 9
      //DEBUG: s.OptIntrinsic#1: 10
      //DEBUG: e.AST-B#1: 13
      //DEBUG: e.DriveInfo#1: 17
      //DEBUG: e.AST-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/19 # DriveInfo/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & UpdateDriveInfo/7 AsIs: s.OptDrive#1/9 AsIs: s.OptIntrinsic#1/10 HalfReuse: (/8 } Tile{ AsIs: e.DriveInfo#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: e.AST-B#1/13 } Tile{ AsIs: e.AST-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_UpdateDriveInfo]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[8], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Drive-Prepare/4 (/7 s.OptDrive#1/9 s.OptIntrinsic#1/10 )/8 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: s.OptDrive#1: 9
  //DEBUG: s.OptIntrinsic#1: 10
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.OptDrive#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo/4 HalfReuse: s.OptDrive1 #9/7 } Tile{ AsIs: s.OptIntrinsic#1/10 } (/11 (/12 )/13 Tile{ AsIs: )/8 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_UpdateDriveInfo]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Drivem_Prepare("OptTree-Drive-Prepare", 0U, 0U, func_OptTreem_Drivem_Prepare);


static refalrts::FnResult func_OptTreem_Drive(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-Drive/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive/4 (/7 s.new#1/9 s.new#2/10 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Drive/4 (/7 # NoOpt/9 # NoOpt/10 )/8 e.AST#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[10] ) )
      continue;
    // closed e.AST#1 as range 11
    //DEBUG: e.AST#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Drive/4 (/7 # NoOpt/9 # NoOpt/10 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Drive/4 (/7 s.OptDrive#1/9 s.OptIntrinsic#1/10 )/8 e.AST-B#1/11 (/17 # DriveInfo/19 e.DriveInfo#1/15 )/18 e.AST-E#1/13 >/1
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_DriveInfo], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.DriveInfo#1 as range 15
    // closed e.AST-E#1 as range 13
    //DEBUG: s.OptDrive#1: 9
    //DEBUG: s.OptIntrinsic#1: 10
    //DEBUG: e.AST-B#1: 11
    //DEBUG: e.DriveInfo#1: 15
    //DEBUG: e.AST-E#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/17 # DriveInfo/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick/4 AsIs: (/7 } Tile{ AsIs: e.DriveInfo#1/15 } Tile{ AsIs: )/18 } Tile{ AsIs: e.AST-B#1/11 } Tile{ AsIs: e.AST-E#1/13 } Tile{ AsIs: s.OptDrive#1/9 AsIs: s.OptIntrinsic#1/10 HalfReuse: >/8 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_DriveInlineOptimizerTick]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_OptTreem_Drive("OptTree-Drive", 0U, 0U, func_OptTreem_Drive);


static refalrts::FnResult func_gen_GenRemainderFuncNames_S2C1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GenRemainderFuncNames$2?1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenRemainderFuncNames$2?1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & GenRemainderFuncNames$2?1:1/4 (/7 e.Name#1/10 )/8 s.LastCount#1/9 e.ProperName#2/14 # SUF/18 e.Suffix#2/16 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Name#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[12];
      context[17] = context[13];
      context[18] = refalrts::ident_left( identifiers[ident_SUF], context[16], context[17] );
      if( ! context[18] )
        continue;
      // closed e.Suffix#2 as range 16
      //DEBUG: s.LastCount#1: 9
      //DEBUG: e.Name#1: 10
      //DEBUG: e.ProperName#2: 14
      //DEBUG: e.Suffix#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenRemainderFuncNames$2?1:1/4 (/7 {REMOVED TILE} {REMOVED TILE} s.LastCount#1/9 e.ProperName#2/14 # SUF/18 e.Suffix#2/16 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/10 } Tile{ HalfReuse: '*'/8 } Tile{ HalfReuse: s.LastCount1 #9/1 ]] }
      refalrts::reinit_char(context[8], '*');
      refalrts::reinit_svar( context[1], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenRemainderFuncNames$2?1:1/4 (/7 e.Name#1/5 )/8 s.LastCount#1/9 e.ProperName#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.ProperName#2 as range 2
  //DEBUG: s.LastCount#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.ProperName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Name#1/5 )/8 s.LastCount#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ProperName#2/2 } Tile{ HalfReuse: # SUF/4 HalfReuse: '*'/7 } Tile{ HalfReuse: s.LastCount1 #9/1 ]] }
  refalrts::reinit_ident(context[4], identifiers[ident_SUF]);
  refalrts::reinit_char(context[7], '*');
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenRemainderFuncNames_S2C1B1("GenRemainderFuncNames$2?1:1", COOKIE1_, COOKIE2_, func_gen_GenRemainderFuncNames_S2C1B1);


static refalrts::FnResult func_GenRemainderFuncNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GenRemainderFuncNames/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenRemainderFuncNames/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & GenRemainderFuncNames/4 e.Name#1/6 0/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenRemainderFuncNames/4 e.Name#1/6 0/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenRemainderFuncNames/4 e.Name#1/2 s.LastCount#1/5 >/1
  // closed e.Name#1 as range 2
  //DEBUG: s.LastCount#1: 5
  //DEBUG: e.Name#1: 2
  //2: e.Name#1
  //5: s.LastCount#1
  //12: e.Name#1
  //15: s.LastCount#1
  //16: e.Name#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_GenRemainderFuncNames_S2C1]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_GenRemainderFuncNames_S2C1B1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::copy_evar(vm, context[16], context[17], context[12], context[13]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[9] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_stvar( res, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </6 & GenRemainderFuncNames$2?1/10 e.NewName#2/8 >/7
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
    // closed e.NewName#2 as range 8
    //DEBUG: s.LastCount#1: 5
    //DEBUG: e.Name#1: 2
    //DEBUG: e.NewName#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenRemainderFuncNames/4 } Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: </6 Reuse: & Dec/10 } Tile{ AsIs: s.LastCount#1/5 } Tile{ AsIs: >/7 AsIs: >/1 } (/11 Tile{ AsIs: e.NewName#2/8 } )/12 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::update_name(context[10], functions[efunc_Dec]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[6], context[7]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_GenRemainderFuncNames("GenRemainderFuncNames", COOKIE1_, COOKIE2_, func_GenRemainderFuncNames);


static refalrts::FnResult func_gen_UpdateDriveInfo_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & UpdateDriveInfo=3/4 (/7 e.KnownNames#1/5 )/8 (/11 e.KnownFunctions#1/9 )/12 (/15 (/19 e.OptFunctions#4/17 )/20 (/23 e.DrivenNames#4/21 )/24 )/16 e.AST#4/2 >/1
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
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.KnownNames#1 as range 5
  // closed e.KnownFunctions#1 as range 9
  // closed e.OptFunctions#4 as range 17
  // closed e.DrivenNames#4 as range 21
  // closed e.AST#4 as range 2
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.KnownFunctions#1: 9
  //DEBUG: e.OptFunctions#4: 17
  //DEBUG: e.DrivenNames#4: 21
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 (/19 {REMOVED TILE} )/20 (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # DriveInfo/4 AsIs: (/7 } Tile{ AsIs: e.KnownNames#1/5 } Tile{ AsIs: e.DrivenNames#4/21 } Tile{ AsIs: )/16 } Tile{ AsIs: e.KnownFunctions#1/9 } Tile{ AsIs: e.OptFunctions#4/17 } Tile{ AsIs: )/24 } Tile{ AsIs: e.AST#4/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_DriveInfo]);
  refalrts::link_brackets( context[0], context[24] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A3("UpdateDriveInfo=3", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A3);


static refalrts::FnResult func_gen_UpdateDriveInfo_A3L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & UpdateDriveInfo=3\1=1/4 (/7 e.Name#4/5 )/8 e.Label#5/2 >/1
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
  // closed e.Name#4 as range 5
  // closed e.Label#5 as range 2
  //DEBUG: e.Name#4: 5
  //DEBUG: e.Label#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine/4 HalfReuse: 'N'/7 }"ew "/9 Tile{ AsIs: e.Label#5/2 } Tile{ HalfReuse: ' '/8 }"function: "/11 </13 & DisplayName/14 Tile{ AsIs: e.Name#4/5 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "ew ", 3);
  refalrts::alloc_chars(vm, context[11], context[12], "function: ", 10);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Logm_PutLine]);
  refalrts::reinit_char(context[7], 'N');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A3L1A1("UpdateDriveInfo=3\\1=1", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A3L1A1);


static refalrts::FnResult func_gen_UpdateDriveInfo_A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & UpdateDriveInfo=3\1/4 (/7 s.Label#4/9 e.Name#4/5 )/8 >/1
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
  // closed e.Name#4 as range 5
  //DEBUG: s.Label#4: 9
  //DEBUG: e.Name#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=3\1=1/4 AsIs: (/7 } Tile{ AsIs: e.Name#4/5 } )/10 '$'/11 </12 & Upper/13 </14 & Explode/15 Tile{ AsIs: s.Label#4/9 } >/16 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_char(vm, context[11], '$');
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Upper]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Explode]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3L1A1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A3L1("UpdateDriveInfo=3\\1", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A3L1);


static refalrts::FnResult func_gen_UpdateDriveInfo_A3L2S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & UpdateDriveInfo=3\2$1=2/4 (/7 e.OptFunctions#4/5 )/8 s.Label#5/9 s.ScopeClass#4/10 (/13 e.Name#4/11 )/14 (/17 e.RemNames#4/15 )/18 s.CountSentences#6/19 e.Sentences#6/2 >/1
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
  // closed e.OptFunctions#4 as range 5
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
  // closed e.Name#4 as range 11
  // closed e.RemNames#4 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#6 as range 2
  //DEBUG: e.OptFunctions#4: 5
  //DEBUG: s.Label#5: 9
  //DEBUG: s.ScopeClass#4: 10
  //DEBUG: e.Name#4: 11
  //DEBUG: e.RemNames#4: 15
  //DEBUG: s.CountSentences#6: 19
  //DEBUG: e.Sentences#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.OptFunctions#4/5 HalfReuse: (/8 AsIs: s.Label#5/9 AsIs: s.ScopeClass#4/10 AsIs: (/13 AsIs: e.Name#4/11 AsIs: )/14 HalfReuse: # Sentences/17 } e.Sentences#6/2/20 Tile{ AsIs: )/18 } )/22 (/23 Tile{ AsIs: e.RemNames#4/15 } (/24 e.Name#4/11/25 )/27 Tile{ AsIs: </0 } & GenRemainderFuncNames/28 e.Name#4/11/29 Tile{ AsIs: s.CountSentences#6/19 } >/31 )/32 )/33 (/34 # Function/35 s.ScopeClass#4/10/36 (/37 e.Name#4/11/38 )/40 # Sentences/41 Tile{ AsIs: e.Sentences#6/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::copy_evar(vm, context[20], context[21], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_GenRemainderFuncNames]);
  refalrts::copy_evar(vm, context[29], context[30], context[11], context[12]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_ident(vm, context[35], identifiers[ident_Function]);
  refalrts::copy_stvar(vm, context[36], context[10]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::copy_evar(vm, context[38], context[39], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_ident(vm, context[41], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[17], identifiers[ident_Sentences]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[34], context[1] );
  refalrts::link_brackets( context[37], context[40] );
  refalrts::link_brackets( context[4], context[33] );
  refalrts::link_brackets( context[23], context[32] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[7], context[22] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[41] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[4], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A3L2S1A2("UpdateDriveInfo=3\\2$1=2", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A3L2S1A2);


static refalrts::FnResult func_gen_UpdateDriveInfo_A3L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & UpdateDriveInfo=3\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateDriveInfo=3\2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & UpdateDriveInfo=3\2/4 (/7 e.OptNames#3/15 )/8 (/11 (/24 e.OptFunctions#4/22 )/25 (/28 e.RemNames#4/26 )/29 )/12 (/13 # Function/21 s.ScopeClass#4/30 (/33 e.Name#4/31 )/34 # Sentences/35 e.Sentences#4/19 )/14 >/1
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
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[17], context[18] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.OptNames#3 as range 15
    // closed e.OptFunctions#4 as range 22
    // closed e.RemNames#4 as range 26
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[19], context[20] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = refalrts::ident_left( identifiers[ident_Sentences], context[19], context[20] );
    if( ! context[35] )
      continue;
    // closed e.Name#4 as range 31
    // closed e.Sentences#4 as range 19
    //DEBUG: e.OptNames#3: 15
    //DEBUG: e.OptFunctions#4: 22
    //DEBUG: e.RemNames#4: 26
    //DEBUG: s.ScopeClass#4: 30
    //DEBUG: e.Name#4: 31
    //DEBUG: e.Sentences#4: 19
    //15: e.OptNames#3
    //19: e.Sentences#4
    //22: e.OptFunctions#4
    //26: e.RemNames#4
    //30: s.ScopeClass#4
    //31: e.Name#4
    //39: e.OptNames#3

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_UpdateDriveInfo_A3L2S1C1]);
    refalrts::copy_evar(vm, context[39], context[40], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[36] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </36 & UpdateDriveInfo=3\2$1?1/40 e.B#5/41 (/47 s.Label#5/51 e.Name#4/49 )/48 e.E#5/43 >/37
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[43] = context[38];
        context[44] = context[39];
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::brackets_left( context[45], context[46], context[43], context[44] );
        if( ! context[47] )
          continue;
        refalrts::bracket_pointers(context[47], context[48]);
        if( ! refalrts::repeated_evar_right( vm, context[49], context[50], context[31], context[32], context[45], context[46] ) )
          continue;
        // closed e.E#5 as range 43
        if( ! refalrts::svar_left( context[51], context[45], context[46] ) )
          continue;
        if( ! refalrts::empty_seq( context[45], context[46] ) )
          continue;
        //DEBUG: e.OptNames#3: 15
        //DEBUG: e.OptFunctions#4: 22
        //DEBUG: e.RemNames#4: 26
        //DEBUG: s.ScopeClass#4: 30
        //DEBUG: e.Name#4: 31
        //DEBUG: e.Sentences#4: 19
        //DEBUG: e.B#5: 41
        //DEBUG: e.E#5: 43
        //DEBUG: s.Label#5: 51

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.OptNames#3/15 )/8 (/11 (/24 {REMOVED TILE} )/25 (/28 {REMOVED TILE} )/29 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.B#5/41 (/47 s.Label#5/51 e.Name#4/49 )/48 e.E#5/43 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=3\2$1=2/4 AsIs: (/7 } Tile{ AsIs: e.OptFunctions#4/22 } Tile{ HalfReuse: )/13 HalfReuse: s.Label5 #51/21 AsIs: s.ScopeClass#4/30 AsIs: (/33 AsIs: e.Name#4/31 AsIs: )/34 HalfReuse: (/35 } Tile{ AsIs: e.RemNames#4/26 } Tile{ AsIs: )/14 AsIs: </36 Reuse: & Lenw/40 } Tile{ AsIs: e.Sentences#4/19 } Tile{ AsIs: >/37 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3L2S1A2]);
        refalrts::reinit_close_bracket(context[13]);
        refalrts::reinit_svar( context[21], context[51] );
        refalrts::reinit_open_bracket(context[35]);
        refalrts::update_name(context[40], functions[efunc_Lenw]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[35], context[14] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[7], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[37];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[14], context[40] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[13], context[35] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[38], context[39] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[36], context[37]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateDriveInfo=3\2/4 (/7 e.OptNames#3/5 )/8 (/11 e.OptInfo#4/9 )/12 t.Other#4/13 >/1
  // closed e.OptNames#3 as range 5
  // closed e.OptInfo#4 as range 9
  //DEBUG: t.Other#4: 13
  //DEBUG: e.OptNames#3: 5
  //DEBUG: e.OptInfo#4: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UpdateDriveInfo=3\2/4 (/7 e.OptNames#3/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptInfo#4/9 AsIs: )/12 AsIs: t.Other#4/13 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A3L2("UpdateDriveInfo=3\\2", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A3L2);


static refalrts::FnResult func_gen_UpdateDriveInfo_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & UpdateDriveInfo=2/4 (/7 e.KnownNames#1/5 )/8 (/11 e.KnownFunctions#1/9 )/12 (/15 e.AST#2/13 )/16 e.OptNames#3/2 >/1
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
  // closed e.KnownNames#1 as range 5
  // closed e.KnownFunctions#1 as range 9
  // closed e.AST#2 as range 13
  // closed e.OptNames#3 as range 2
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.KnownFunctions#1: 9
  //DEBUG: e.AST#2: 13
  //DEBUG: e.OptNames#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=3/4 AsIs: (/7 AsIs: e.KnownNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.KnownFunctions#1/9 AsIs: )/12 HalfReuse: </15 } Tile{ HalfReuse: & Map@1/16 AsIs: e.OptNames#3/2 AsIs: >/1 } </17 & MapAccum@1/18 (/19 e.OptNames#3/2/20 )/22 (/23 (/24 )/25 (/26 )/27 )/28 Tile{ AsIs: e.AST#2/13 } >/29 >/30 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[28] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A2("UpdateDriveInfo=2", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A2);


static refalrts::FnResult func_gen_UpdateDriveInfo_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & UpdateDriveInfo=1/4 (/7 e.KnownNames#1/5 )/8 (/11 e.KnownFunctions#1/9 )/12 (/15 e.OptNames#2/13 )/16 e.AST#2/2 >/1
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
  // closed e.KnownNames#1 as range 5
  // closed e.KnownFunctions#1 as range 9
  // closed e.OptNames#2 as range 13
  // closed e.AST#2 as range 2
  //DEBUG: e.KnownNames#1: 5
  //DEBUG: e.KnownFunctions#1: 9
  //DEBUG: e.OptNames#2: 13
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=2/4 AsIs: (/7 AsIs: e.KnownNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.KnownFunctions#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: )/16 } </17 & SetNames-Reject/18 (/19 Tile{ AsIs: e.OptNames#2/13 } )/20 (/21 e.KnownNames#1/5/22 )/24 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_SetNamesm_Reject]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[25] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A1("UpdateDriveInfo=1", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A1);


static refalrts::FnResult func_gen_UpdateDriveInfo_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & UpdateDriveInfo=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateDriveInfo=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & UpdateDriveInfo=1\1/4 (/7 e.new#5/11 )/8 (/9 s.new#3/15 e.new#4/13 )/10 >/1
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
      // </0 & UpdateDriveInfo=1\1/4 (/7 e.Optimizable#2/16 )/8 (/9 # Drive/15 e.Name#2/18 )/10 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Drive], context[15] ) )
        continue;
      // closed e.Optimizable#2 as range 16
      // closed e.Name#2 as range 18
      //DEBUG: e.Optimizable#2: 16
      //DEBUG: e.Name#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & UpdateDriveInfo=1\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Optimizable#2/16 } Tile{ AsIs: (/9 AsIs: # Drive/15 AsIs: e.Name#2/18 AsIs: )/10 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & UpdateDriveInfo=1\1/4 (/7 e.Optimizable#2/16 )/8 (/9 # Inline/15 e.Name#2/18 )/10 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[15] ) )
      continue;
    // closed e.Optimizable#2 as range 16
    // closed e.Name#2 as range 18
    //DEBUG: e.Optimizable#2: 16
    //DEBUG: e.Name#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & UpdateDriveInfo=1\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Optimizable#2/16 } Tile{ AsIs: (/9 AsIs: # Inline/15 AsIs: e.Name#2/18 AsIs: )/10 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateDriveInfo=1\1/4 (/7 e.Optimizable#2/5 )/8 t.Other#2/9 >/1
  // closed e.Optimizable#2 as range 5
  //DEBUG: t.Other#2: 9
  //DEBUG: e.Optimizable#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UpdateDriveInfo=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Optimizable#2/5 AsIs: )/8 AsIs: t.Other#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateDriveInfo_A1L1("UpdateDriveInfo=1\\1", COOKIE1_, COOKIE2_, func_gen_UpdateDriveInfo_A1L1);


static refalrts::FnResult func_UpdateDriveInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & UpdateDriveInfo/4 s.OptDrive#1/5 s.OptIntrinsic#1/6 (/9 (/13 e.KnownNames#1/11 )/14 e.KnownFunctions#1/7 )/10 e.AST#1/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.KnownNames#1 as range 11
  // closed e.KnownFunctions#1 as range 7
  // closed e.AST#1 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptIntrinsic#1: 6
  //DEBUG: e.KnownNames#1: 11
  //DEBUG: e.KnownFunctions#1: 7
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptDrive#1/5 s.OptIntrinsic#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & UpdateDriveInfo=1/9 AsIs: (/13 AsIs: e.KnownNames#1/11 AsIs: )/14 } (/15 Tile{ AsIs: e.KnownFunctions#1/7 } )/16 </17 Tile{ Reuse: & MapAccum@2/4 } (/18 Tile{ AsIs: )/10 AsIs: e.AST#1/2 AsIs: >/1 } >/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_name(context[9], functions[efunc_gen_UpdateDriveInfo_A1]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z2]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[18], context[10] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateDriveInfo("UpdateDriveInfo", COOKIE1_, COOKIE2_, func_UpdateDriveInfo);


static refalrts::FnResult func_SetNamesm_Reject(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & SetNames-Reject/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetNames-Reject/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & SetNames-Reject/4 (/7 e.Minuent-B#1/17 (/25 s._M#1/27 e.Name#1/23 )/26 e.Minuent-E#1/19 )/8 (/11 e.Subtr-B#1/28 (/34 s.Label#1/38 e.Name#1/36 )/35 e.Subtr-E#1/30 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.Minuent-E#1 as range 19
      if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
        continue;
      // closed e.Name#1 as range 23
      context[28] = 0;
      context[29] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[30] = context[21];
        context[31] = context[22];
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
        if( ! context[34] )
          continue;
        refalrts::bracket_pointers(context[34], context[35]);
        if( ! refalrts::repeated_evar_right( vm, context[36], context[37], context[23], context[24], context[32], context[33] ) )
          continue;
        // closed e.Subtr-E#1 as range 30
        if( ! refalrts::svar_left( context[38], context[32], context[33] ) )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: e.Minuent-B#1: 17
        //DEBUG: e.Minuent-E#1: 19
        //DEBUG: s._M#1: 27
        //DEBUG: e.Name#1: 23
        //DEBUG: e.Subtr-B#1: 28
        //DEBUG: e.Subtr-E#1: 30
        //DEBUG: s.Label#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} (/25 s._M#1/27 e.Name#1/23 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Minuent-B#1/17 } Tile{ AsIs: </0 AsIs: & SetNames-Reject/4 } Tile{ HalfReuse: (/26 AsIs: e.Minuent-E#1/19 AsIs: )/8 AsIs: (/11 AsIs: e.Subtr-B#1/28 AsIs: (/34 AsIs: s.Label#1/38 AsIs: e.Name#1/36 AsIs: )/35 AsIs: e.Subtr-E#1/30 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[26]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[34], context[35] );
        refalrts::link_brackets( context[26], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[28], context[29], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetNames-Reject/4 (/7 e.Minuent#1/5 )/8 (/11 e.Subtrahend#1/9 )/12 >/1
  // closed e.Minuent#1 as range 5
  // closed e.Subtrahend#1 as range 9
  //DEBUG: e.Minuent#1: 5
  //DEBUG: e.Subtrahend#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetNames-Reject/4 (/7 {REMOVED TILE} )/8 (/11 e.Subtrahend#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Minuent#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetNamesm_Reject("SetNames-Reject", COOKIE1_, COOKIE2_, func_SetNamesm_Reject);


static refalrts::FnResult func_OptSwitch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & OptSwitch/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptSwitch/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptSwitch/4 # OptDrive/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_OptDrive], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptSwitch/4 # OptDrive/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Drive/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Drive]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptSwitch/4 # OptInline/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_OptInline], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptSwitch/4 # OptInline/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Inline/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Inline]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSwitch("OptSwitch", COOKIE1_, COOKIE2_, func_OptSwitch);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DriveInlineOptimizerTick$2=4/4 (/7 e.OptInfo#3/5 )/8 (/11 e.NewFunctions#5/9 )/12 e.AST#5/2 >/1
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
  // closed e.OptInfo#3 as range 5
  // closed e.NewFunctions#5 as range 9
  // closed e.AST#5 as range 2
  //DEBUG: e.OptInfo#3: 5
  //DEBUG: e.NewFunctions#5: 9
  //DEBUG: e.AST#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # DriveInfo/7 AsIs: e.OptInfo#3/5 AsIs: )/8 } Tile{ AsIs: e.AST#5/2 } Tile{ AsIs: e.NewFunctions#5/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_DriveInfo]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A4("DriveInlineOptimizerTick$2=4", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A4);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A4L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & DriveInlineOptimizerTick$2=4\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DriveInlineOptimizerTick$2=4\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & DriveInlineOptimizerTick$2=4\1/4 (/7 e.News-B#5/21 (/27 # Function/29 s.ScopeClass#5/30 (/33 e.Name#5/35 )/34 e._#5/25 )/28 e.News-E#5/23 )/8 (/9 s.Function#5/15 s.ScopeClass#5/16 (/19 e.Name#5/17 )/20 e.Body#5/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Name#5 as range 17
    // closed e.Body#5 as range 13
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[11];
      context[24] = context[12];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_Function], context[25], context[26] );
      if( ! context[29] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[30], context[16], context[25], context[26] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[17], context[18], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e._#5 as range 25
      // closed e.News-E#5 as range 23
      //DEBUG: s.Function#5: 15
      //DEBUG: s.ScopeClass#5: 16
      //DEBUG: e.Name#5: 17
      //DEBUG: e.Body#5: 13
      //DEBUG: e.News-B#5: 21
      //DEBUG: e._#5: 25
      //DEBUG: e.News-E#5: 23
      //13: e.Body#5
      //15: s.Function#5
      //16: s.ScopeClass#5
      //17: e.Name#5
      //21: e.News-B#5
      //23: e.News-E#5
      //25: e._#5
      //30: s.ScopeClass#5
      //35: e.Name#5
      //42: s.Function#5

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_name(vm, context[39], functions[efunc_gen_DriveInlineOptimizerTick_S2A4L1S1C1]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[42], context[15]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Function]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_ColdFunction]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[37] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[40] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </37 & DriveInlineOptimizerTick$2=4\1$1?1/41 # True/42 >/38
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::call_left( context[39], context[40], context[37], context[38] );
        context[42] = refalrts::ident_left( identifiers[ident_True], context[39], context[40] );
        if( ! context[42] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        //DEBUG: s.Function#5: 15
        //DEBUG: s.ScopeClass#5: 16
        //DEBUG: e.Name#5: 17
        //DEBUG: e.Body#5: 13
        //DEBUG: e.News-B#5: 21
        //DEBUG: e._#5: 25
        //DEBUG: e.News-E#5: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & DriveInlineOptimizerTick$2=4\1/4 (/7 {REMOVED TILE} (/27 # Function/29 s.ScopeClass#5/30 (/33 e.Name#5/35 )/34 e._#5/25 )/28 {REMOVED TILE} {REMOVED TILE} </37 & DriveInlineOptimizerTick$2=4\1$1?1/41 # True/42 >/38 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.News-B#5/21 } Tile{ AsIs: e.News-E#5/23 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Function#5/15 AsIs: s.ScopeClass#5/16 AsIs: (/19 AsIs: e.Name#5/17 AsIs: )/20 AsIs: e.Body#5/13 AsIs: )/10 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[10] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[37], context[38]);
      continue;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DriveInlineOptimizerTick$2=4\1/4 (/7 e.NewFunctions#5/5 )/8 t.Other#5/9 >/1
  // closed e.NewFunctions#5 as range 5
  //DEBUG: t.Other#5: 9
  //DEBUG: e.NewFunctions#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DriveInlineOptimizerTick$2=4\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.NewFunctions#5/5 AsIs: )/8 AsIs: t.Other#5/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A4L1("DriveInlineOptimizerTick$2=4\\1", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A4L1);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DriveInlineOptimizerTick$2=3/4 (/7 e.OptInfo#3/5 )/8 (/11 e.NewFunctions#4/9 )/12 e.AST#4/2 >/1
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
  // closed e.OptInfo#3 as range 5
  // closed e.NewFunctions#4 as range 9
  // closed e.AST#4 as range 2
  //DEBUG: e.OptInfo#3: 5
  //DEBUG: e.NewFunctions#4: 9
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick$2=4/4 AsIs: (/7 AsIs: e.OptInfo#3/5 AsIs: )/8 HalfReuse: </11 } & MapAccum@3/13 (/14 Tile{ AsIs: e.NewFunctions#4/9 } Tile{ AsIs: )/12 AsIs: e.AST#4/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MapAccum_Z3]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A4]);
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

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A3("DriveInlineOptimizerTick$2=3", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A3);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & DriveInlineOptimizerTick$2=3\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DriveInlineOptimizerTick$2=3\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & DriveInlineOptimizerTick$2=3\1/4 (/7 e.new#6/11 )/8 (/9 # NewFunction/15 s.new#3/16 (/19 e.new#4/17 )/20 e.new#5/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_NewFunction], context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.new#6 as range 11
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new#4 as range 17
    // closed e.new#5 as range 13
    do {
      // </0 & DriveInlineOptimizerTick$2=3\1/4 (/7 e.News-B#4/27 (/33 # Function/35 s.ScopeClass#4/36 (/39 e.Name#4/41 )/40 e.Body#4/31 )/34 e.News-E#4/29 )/8 (/9 # NewFunction/15 s.ScopeClass#4/16 (/19 e.Name#4/23 )/20 e._#4/25 )/10 >/1
      context[21] = context[11];
      context[22] = context[12];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[13];
      context[26] = context[14];
      // closed e.Name#4 as range 23
      // closed e._#4 as range 25
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[29] = context[21];
        context[30] = context[22];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left( identifiers[ident_Function], context[31], context[32] );
        if( ! context[35] )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[36], context[16], context[31], context[32] ) )
          continue;
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[23], context[24], context[37], context[38] ) )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Body#4 as range 31
        // closed e.News-E#4 as range 29
        //DEBUG: s.ScopeClass#4: 16
        //DEBUG: e.Name#4: 23
        //DEBUG: e._#4: 25
        //DEBUG: e.News-B#4: 27
        //DEBUG: e.Body#4: 31
        //DEBUG: e.News-E#4: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DriveInlineOptimizerTick$2=3\1/4 {REMOVED TILE} (/9 # NewFunction/15 s.ScopeClass#4/16 (/19 e.Name#4/23 )/20 e._#4/25 )/10 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.News-B#4/27 AsIs: (/33 AsIs: # Function/35 AsIs: s.ScopeClass#4/36 AsIs: (/39 AsIs: e.Name#4/41 AsIs: )/40 AsIs: e.Body#4/31 AsIs: )/34 AsIs: e.News-E#4/29 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[39], context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[21], context[22] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DriveInlineOptimizerTick$2=3\1/4 (/7 e.NewFunctions#4/21 )/8 (/9 # NewFunction/15 s.ScopeClass#4/16 (/19 e.Name#4/23 )/20 e.Body#4/25 )/10 >/1
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[13];
    context[26] = context[14];
    // closed e.NewFunctions#4 as range 21
    // closed e.Name#4 as range 23
    // closed e.Body#4 as range 25
    //DEBUG: s.ScopeClass#4: 16
    //DEBUG: e.NewFunctions#4: 21
    //DEBUG: e.Name#4: 23
    //DEBUG: e.Body#4: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DriveInlineOptimizerTick$2=3\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.NewFunctions#4/21 } Tile{ AsIs: (/9 Reuse: # Function/15 AsIs: s.ScopeClass#4/16 AsIs: (/19 AsIs: e.Name#4/23 AsIs: )/20 AsIs: e.Body#4/25 AsIs: )/10 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_ident(context[15], identifiers[ident_Function]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DriveInlineOptimizerTick$2=3\1/4 (/7 e.NewFunctions#4/5 )/8 t.Other#4/9 >/1
  // closed e.NewFunctions#4 as range 5
  //DEBUG: t.Other#4: 9
  //DEBUG: e.NewFunctions#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DriveInlineOptimizerTick$2=3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.NewFunctions#4/5 AsIs: )/8 AsIs: t.Other#4/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A3L1("DriveInlineOptimizerTick$2=3\\1", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A3L1);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DriveInlineOptimizerTick$2=2/4 (/7 e.OptInfo#3/5 )/8 e.AST#3/2 >/1
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
  // closed e.OptInfo#3 as range 5
  // closed e.AST#3 as range 2
  //DEBUG: e.OptInfo#3: 5
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick$2=3/4 AsIs: (/7 AsIs: e.OptInfo#3/5 AsIs: )/8 } </9 & MapAccum@4/10 (/11 )/12 Tile{ AsIs: e.AST#3/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_MapAccum_Z4]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A3]);
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
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A2("DriveInlineOptimizerTick$2=2", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A2);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DriveInlineOptimizerTick$2=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DriveInlineOptimizerTick$2=2\1/4 s.new#1/5 t.new#2/6 t.new#3/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DriveInlineOptimizerTick$2=2\1/4 s.Mode#2/5 t.OptInfo#3/6 (/8 # Function/12 s.ScopeClass#3/13 (/16 e.Name#3/14 )/17 # Sentences/18 e.Sentences#3/10 )/9 >/1
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
      continue;
    context[12] = refalrts::ident_left( identifiers[ident_Function], context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Sentences], context[10], context[11] );
    if( ! context[18] )
      continue;
    // closed e.Name#3 as range 14
    // closed e.Sentences#3 as range 10
    //DEBUG: t.OptInfo#3: 6
    //DEBUG: s.Mode#2: 5
    //DEBUG: s.ScopeClass#3: 13
    //DEBUG: e.Name#3: 14
    //DEBUG: e.Sentences#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptFunction/4 } Tile{ AsIs: (/8 AsIs: # Function/12 AsIs: s.ScopeClass#3/13 AsIs: (/16 AsIs: e.Name#3/14 AsIs: )/17 AsIs: # Sentences/18 AsIs: e.Sentences#3/10 AsIs: )/9 } Tile{ AsIs: t.OptInfo#3/6 } Tile{ AsIs: s.Mode#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_OptFunction]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DriveInlineOptimizerTick$2=2\1/4 s.Mode#2/5 t.OptInfo#3/6 t.Other#3/8 >/1
  //DEBUG: t.OptInfo#3: 6
  //DEBUG: t.Other#3: 8
  //DEBUG: s.Mode#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DriveInlineOptimizerTick$2=2\1/4 s.Mode#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OptInfo#3/6 AsIs: t.Other#3/8 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A2L1("DriveInlineOptimizerTick$2=2\\1", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A2L1);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DriveInlineOptimizerTick$2=1/4 t.OptInfo#1/5 (/9 e.AST#1/7 )/10 s.Mode#2/11 >/1
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
  // closed e.AST#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.OptInfo#1: 5
  //DEBUG: e.AST#1: 7
  //DEBUG: s.Mode#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick$2=2/4 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & MapAccum@5/10 AsIs: s.Mode#2/11 } Tile{ AsIs: t.OptInfo#1/5 } Tile{ AsIs: e.AST#1/7 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A2]);
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_gen_MapAccum_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_S2A1("DriveInlineOptimizerTick$2=1", COOKIE1_, COOKIE2_, func_gen_DriveInlineOptimizerTick_S2A1);


static refalrts::FnResult func_DriveInlineOptimizerTick(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DriveInlineOptimizerTick/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DriveInlineOptimizerTick/4 t.new#1/5 e.new#2/2 s.new#3/8 s.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DriveInlineOptimizerTick/4 (/5 e.OptInfo#1/11 )/6 e.AST#1/9 # NoOpt/8 s.OptIntrinsic#1/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[8] ) )
      continue;
    // closed e.OptInfo#1 as range 11
    // closed e.AST#1 as range 9
    //DEBUG: s.OptIntrinsic#1: 7
    //DEBUG: e.OptInfo#1: 11
    //DEBUG: e.AST#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} # NoOpt/8 s.OptIntrinsic#1/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # DriveInfo/5 AsIs: e.OptInfo#1/11 AsIs: )/6 } Tile{ AsIs: e.AST#1/9 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[5], identifiers[ident_DriveInfo]);
    refalrts::link_brackets( context[4], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DriveInlineOptimizerTick/4 t.OptInfo#1/5 e.AST#1/2 s.OptDrive#1/8 s.OptIntrinsic#1/7 >/1
  // closed e.AST#1 as range 2
  //DEBUG: t.OptInfo#1: 5
  //DEBUG: s.OptDrive#1: 8
  //DEBUG: s.OptIntrinsic#1: 7
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OptIntrinsic#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick$2=1/4 AsIs: t.OptInfo#1/5 } (/9 Tile{ AsIs: e.AST#1/2 } )/10 </11 & OptSwitch/12 Tile{ AsIs: s.OptDrive#1/8 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_OptSwitch]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DriveInlineOptimizerTick("DriveInlineOptimizerTick", COOKIE1_, COOKIE2_, func_DriveInlineOptimizerTick);


static refalrts::FnResult func_gen_IsPassiveCall_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IsPassiveCall\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsPassiveCall\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsPassiveCall\1/4 # True/5 t.Term#2/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    //DEBUG: t.Term#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & IsPassiveCall-Aux/5 AsIs: t.Term#2/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_IsPassiveCallm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsPassiveCall\1/4 # False/5 t.Term#2/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Term#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsPassiveCall\1/4 # False/5 t.Term#2/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsPassiveCall_L1("IsPassiveCall\\1", COOKIE1_, COOKIE2_, func_gen_IsPassiveCall_L1);


static refalrts::FnResult func_IsPassiveCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & IsPassiveCall/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Reduce@1/0 HalfReuse: # True/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_IsPassiveCall("IsPassiveCall", COOKIE1_, COOKIE2_, func_IsPassiveCall);


static refalrts::FnResult func_IsPassiveCallm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IsPassiveCall-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsPassiveCall-Aux/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsPassiveCall-Aux/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsPassiveCall-Aux/4 (/5 # Brackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsPassiveCall/4 } Tile{ AsIs: e.Expr#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsPassiveCall]);
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
      // </0 & IsPassiveCall-Aux/4 (/5 # ADT-Brackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsPassiveCall/4 } Tile{ AsIs: e.Expr#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsPassiveCall]);
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
      // </0 & IsPassiveCall-Aux/4 (/5 # CallBrackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsPassiveCall-Aux/4 (/5 # CallBrackets/9 e.Expr#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsPassiveCall-Aux/4 (/5 # ColdCallBrackets/9 e.Expr#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Expr#1 as range 10
    //DEBUG: e.Expr#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsPassiveCall-Aux/4 (/5 # ColdCallBrackets/9 e.Expr#1/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsPassiveCall-Aux/4 t.Other#1/5 >/1
  //DEBUG: t.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsPassiveCall-Aux/4 t.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsPassiveCallm_Aux("IsPassiveCall-Aux", COOKIE1_, COOKIE2_, func_IsPassiveCallm_Aux);


static refalrts::FnResult func_gen_IsLexpr_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & IsLexpr:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsLexpr:1/4 e.Res-B#2/7 # OpenE/11 e.Res-E#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left( identifiers[ident_OpenE], context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Res-E#2 as range 9
      //DEBUG: e.Res-B#2: 7
      //DEBUG: e.Res-E#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsLexpr:1/4 e.Res-B#2/7 # OpenE/11 e.Res-E#2/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsLexpr:1/4 e.Res-B#2/7 (/13 s.Mode#2/15 e.Index#2/11 )/14 e.Res-M#2/16 (/22 s.Mode#2/24 e.Index#2/25 )/23 e.Res-E#2/18 >/1
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
      // closed e.Index#2 as range 11
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
        if( ! refalrts::repeated_stvar_left( vm, context[24], context[15], context[20], context[21] ) )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[11], context[12], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        // closed e.Res-E#2 as range 18
        //DEBUG: e.Res-B#2: 7
        //DEBUG: s.Mode#2: 15
        //DEBUG: e.Index#2: 11
        //DEBUG: e.Res-M#2: 16
        //DEBUG: e.Res-E#2: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsLexpr:1/4 e.Res-B#2/7 (/13 s.Mode#2/15 e.Index#2/11 )/14 e.Res-M#2/16 (/22 s.Mode#2/24 e.Index#2/25 )/23 e.Res-E#2/18 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_False]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsLexpr:1/4 e.Other#2/2 >/1
  // closed e.Other#2 as range 2
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsLexpr:1/4 e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsLexpr_B1("IsLexpr:1", COOKIE1_, COOKIE2_, func_gen_IsLexpr_B1);


static refalrts::FnResult func_IsLexpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IsLexpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & IsLexpr:1/6 Tile{ AsIs: </0 Reuse: & IsLexpr-Aux/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_IsLexpr_B1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
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

static refalrts::NativeReference nat_ref_IsLexpr("IsLexpr", COOKIE1_, COOKIE2_, func_IsLexpr);


static refalrts::FnResult func_gen_IsLexprm_Aux_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & IsLexpr-Aux$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsLexpr-Aux$2\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsLexpr-Aux$2\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsLexpr-Aux$2\1/4 (/5 # TkVariable/9 s.new#4/12 e.new#5/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      // closed e.new#5 as range 10
      do {
        // </0 & IsLexpr-Aux$2\1/4 (/5 # TkVariable/9 'e'/12 e.Index#2/13 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::char_term( 'e', context[12] ) )
          continue;
        // closed e.Index#2 as range 13
        //DEBUG: e.Index#2: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsLexpr-Aux$2\1/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: 'e'/12 AsIs: e.Index#2/13 AsIs: )/6 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::link_brackets( context[9], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[9], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & IsLexpr-Aux$2\1/4 (/5 # TkVariable/9 't'/12 e.Index#2/13 )/6 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::char_term( 't', context[12] ) )
        continue;
      // closed e.Index#2 as range 13
      //DEBUG: e.Index#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsLexpr-Aux$2\1/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: 't'/12 AsIs: e.Index#2/13 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::link_brackets( context[9], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & IsLexpr-Aux$2\1/4 (/5 # Brackets/9 e.InBrackets#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.InBrackets#2 as range 10
      //DEBUG: e.InBrackets#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # Brackets/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
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

    // </0 & IsLexpr-Aux$2\1/4 (/5 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 e.InBrackets#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.InBrackets#2 as range 10
    //DEBUG: e.Name#2: 12
    //DEBUG: e.InBrackets#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 # ADT-Brackets/9 (/14 e.Name#2/12 )/15 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.InBrackets#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
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

  // </0 & IsLexpr-Aux$2\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsLexpr-Aux$2\1/4 t.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsLexprm_Aux_S2L1("IsLexpr-Aux$2\\1", COOKIE1_, COOKIE2_, func_gen_IsLexprm_Aux_S2L1);


static refalrts::FnResult func_IsLexprm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & IsLexpr-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsLexpr-Aux/4 e.Expr-B#1/7 (/13 # TkVariable/15 'e'/16 e.Index1#1/11 )/14 e.Expr-M#1/17 (/23 # TkVariable/25 'e'/26 e.Index2#1/21 )/24 e.Expr-E#1/19 >/1
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
      context[16] = refalrts::char_left( 'e', context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.Index1#1 as range 11
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[19] = context[9];
        context[20] = context[10];
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        context[25] = refalrts::ident_left( identifiers[ident_TkVariable], context[21], context[22] );
        if( ! context[25] )
          continue;
        context[26] = refalrts::char_left( 'e', context[21], context[22] );
        if( ! context[26] )
          continue;
        // closed e.Index2#1 as range 21
        // closed e.Expr-E#1 as range 19
        //DEBUG: e.Expr-B#1: 7
        //DEBUG: e.Index1#1: 11
        //DEBUG: e.Expr-M#1: 17
        //DEBUG: e.Index2#1: 21
        //DEBUG: e.Expr-E#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsLexpr-Aux/4 e.Expr-B#1/7 (/13 # TkVariable/15 'e'/16 e.Index1#1/11 )/14 e.Expr-M#1/17 (/23 # TkVariable/25 'e'/26 e.Index2#1/21 )/24 e.Expr-E#1/19 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OpenE/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OpenE]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[17], context[18], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsLexpr-Aux/4 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsLexprm_Aux("IsLexpr-Aux", COOKIE1_, COOKIE2_, func_IsLexprm_Aux);


static refalrts::FnResult func_gen_OptFunction_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & OptFunction=1/4 s.ScopeClass#1/21 (/11 e.Name#1/9 )/12 (/7 t.OptInfo#2/22 (/19 e.Sentences#2/17 )/20 (/15 e.NewFunctions#2/13 )/16 )/8 >/1
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
  // closed e.Name#1 as range 9
  // closed e.Sentences#2 as range 17
  // closed e.NewFunctions#2 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[5], context[6] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Sentences#2: 17
  //DEBUG: e.NewFunctions#2: 13
  //DEBUG: s.ScopeClass#1: 21
  //DEBUG: t.OptInfo#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} )/20 (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OptInfo#2/22 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/21 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: # Sentences/7 } Tile{ AsIs: e.Sentences#2/17 } Tile{ AsIs: )/8 } Tile{ AsIs: e.NewFunctions#2/13 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_ident(context[7], identifiers[ident_Sentences]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptFunction_A1("OptFunction=1", COOKIE1_, COOKIE2_, func_gen_OptFunction_A1);


static refalrts::FnResult func_gen_OptFunction_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptFunction=1\1=1/4 (/7 e.SntAcc#2/5 )/8 (/11 e.FunAcc#2/9 )/12 t.OptInfo#3/13 (/17 e.NewFunctions#3/15 )/18 e.NewSentences#3/2 >/1
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
  // closed e.SntAcc#2 as range 5
  // closed e.FunAcc#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.NewFunctions#3 as range 15
  // closed e.NewSentences#3 as range 2
  //DEBUG: e.SntAcc#2: 5
  //DEBUG: e.FunAcc#2: 9
  //DEBUG: t.OptInfo#3: 13
  //DEBUG: e.NewFunctions#3: 15
  //DEBUG: e.NewSentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptFunction=1\1=1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: t.OptInfo#3/13 AsIs: (/17 } Tile{ AsIs: e.SntAcc#2/5 } Tile{ AsIs: e.NewSentences#3/2 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FunAcc#2/9 } Tile{ AsIs: e.NewFunctions#3/15 } Tile{ AsIs: )/18 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[11], context[18] );
  refalrts::link_brackets( context[17], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptFunction_A1L1A1("OptFunction=1\\1=1", COOKIE1_, COOKIE2_, func_gen_OptFunction_A1L1A1);


static refalrts::FnResult func_gen_OptFunction_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & OptFunction=1\1/4 s.Mode#1/5 (/8 t.OptInfo#2/18 (/16 e.SntAcc#2/14 )/17 (/12 e.FunAcc#2/10 )/13 )/9 t.Sentence#2/20 >/1
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
  context[12] = refalrts::brackets_right( context[10], context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_right( context[14], context[15], context[6], context[7] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.SntAcc#2 as range 14
  // closed e.FunAcc#2 as range 10
  context[19] = refalrts::tvar_left( context[18], context[6], context[7] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.SntAcc#2: 14
  //DEBUG: e.FunAcc#2: 10
  //DEBUG: t.OptInfo#2: 18
  //DEBUG: t.Sentence#2: 20

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptFunction=1\1=1/4 } Tile{ AsIs: (/16 AsIs: e.SntAcc#2/14 AsIs: )/17 AsIs: (/12 AsIs: e.FunAcc#2/10 AsIs: )/13 HalfReuse: </9 } & OptSentence/22 Tile{ AsIs: t.Sentence#2/20 } Tile{ AsIs: t.OptInfo#2/18 } Tile{ AsIs: s.Mode#1/5 HalfReuse: >/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_OptSentence]);
  refalrts::update_name(context[4], functions[efunc_gen_OptFunction_A1L1A1]);
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[16], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptFunction_A1L1("OptFunction=1\\1", COOKIE1_, COOKIE2_, func_gen_OptFunction_A1L1);


static refalrts::FnResult func_OptFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & OptFunction/4 (/7 # Function/9 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 # Sentences/15 e.Sentences#1/5 )/8 t.OptInfo#1/16 s.Mode#1/18 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Function], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = refalrts::ident_left( identifiers[ident_Sentences], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 11
  // closed e.Sentences#1 as range 5
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.Name#1: 11
  //DEBUG: e.Sentences#1: 5
  //DEBUG: t.OptInfo#1: 16
  //DEBUG: s.Mode#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OptFunction=1/9 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 HalfReuse: </15 } Tile{ Reuse: & Reduce@2/4 } Tile{ AsIs: s.Mode#1/18 } Tile{ HalfReuse: (/8 AsIs: t.OptInfo#1/16 } Tile{ HalfReuse: (/0 } )/19 (/20 )/21 )/22 Tile{ AsIs: e.Sentences#1/5 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_gen_OptFunction_A1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[8], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[0], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[8], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptFunction("OptFunction", COOKIE1_, COOKIE2_, func_OptFunction);


static refalrts::FnResult func_gen_OptSentence_S1B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & OptSentence$1:1$2=1/4 (/7 e.OptFuncNames#2/5 )/8 (/11 e.OptFuncs#3/9 )/12 (/15 e.NewFunctions#3/13 )/16 e.NewSentences#3/2 >/1
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
  // closed e.OptFuncNames#2 as range 5
  // closed e.OptFuncs#3 as range 9
  // closed e.NewFunctions#3 as range 13
  // closed e.NewSentences#3 as range 2
  //DEBUG: e.OptFuncNames#2: 5
  //DEBUG: e.OptFuncs#3: 9
  //DEBUG: e.NewFunctions#3: 13
  //DEBUG: e.NewSentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.OptFuncNames#2/5 } Tile{ HalfReuse: )/11 AsIs: e.OptFuncs#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.NewFunctions#3/13 AsIs: )/16 } Tile{ AsIs: e.NewSentences#3/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::link_brackets( context[4], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentence_S1B1S2A1("OptSentence$1:1$2=1", COOKIE1_, COOKIE2_, func_gen_OptSentence_S1B1S2A1);


static refalrts::FnResult func_gen_OptSentence_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & OptSentence$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptSentence$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 t.new#5/18 )/17 e.new#6/2 >/1
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
  // closed e.new#6 as range 2
  context[19] = refalrts::tvar_right( context[18], context[14], context[15] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 14
  do {
    // </0 & OptSentence$1:1/4 (/7 e.OptFuncs#1/20 )/8 (/11 e.Left#1/22 )/12 s.Mode#1/13 (/16 e.OptFuncNames#2/24 # None/18 )/17 e.Right#2/26 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[18] ) )
      continue;
    // closed e.OptFuncs#1 as range 20
    // closed e.Left#1 as range 22
    // closed e.OptFuncNames#2 as range 24
    // closed e.Right#2 as range 26
    //DEBUG: s.Mode#1: 13
    //DEBUG: e.OptFuncs#1: 20
    //DEBUG: e.Left#1: 22
    //DEBUG: e.OptFuncNames#2: 24
    //DEBUG: e.Right#2: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.OptFuncNames#2/24 } Tile{ HalfReuse: )/7 AsIs: e.OptFuncs#1/20 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: )/12 } (/28 Tile{ AsIs: (/16 } Tile{ AsIs: e.Left#1/22 } Tile{ HalfReuse: )/18 HalfReuse: (/17 AsIs: e.Right#2/26 HalfReuse: )/1 } )/29 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_close_bracket(context[18]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[16], context[18] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[4], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptSentence$1:1/4 (/7 e.OptFuncs#1/5 )/8 (/11 e.Left#1/9 )/12 s.Mode#1/13 (/16 e.OptFuncNames#2/14 t.Call#2/18 )/17 e.Right#2/2 >/1
  // closed e.OptFuncs#1 as range 5
  // closed e.Left#1 as range 9
  // closed e.OptFuncNames#2 as range 14
  // closed e.Right#2 as range 2
  //DEBUG: t.Call#2: 18
  //DEBUG: s.Mode#1: 13
  //DEBUG: e.OptFuncs#1: 5
  //DEBUG: e.Left#1: 9
  //DEBUG: e.OptFuncNames#2: 14
  //DEBUG: e.Right#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence$1:1$2=1/4 AsIs: (/7 } Tile{ AsIs: e.OptFuncNames#2/14 } Tile{ AsIs: )/17 } </20 & OptSentence-Aux/21 Tile{ AsIs: s.Mode#1/13 } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Right#2/2 } )/22 )/23 Tile{ AsIs: t.Call#2/18 } Tile{ AsIs: e.OptFuncs#1/5 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_OptSentencem_Aux]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentence_S1B1S2A1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[8], context[23] );
  refalrts::link_brackets( context[16], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentence_S1B1("OptSentence$1:1", COOKIE1_, COOKIE2_, func_gen_OptSentence_S1B1);


static refalrts::FnResult func_OptSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & OptSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptSentence/4 t.new#1/5 t.new#2/7 s.new#3/9 >/1
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
  do {
    // </0 & OptSentence/4 (/5 (/16 e.Left#1/14 )/17 (/20 e.Right#1/18 )/21 )/6 (/7 (/24 e.OptFuncNames#1/22 )/25 e.OptFuncs#1/12 )/8 s.Mode#1/9 >/1
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[5] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[7] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[10], context[11] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[12], context[13] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Left#1 as range 14
    // closed e.Right#1 as range 18
    // closed e.OptFuncNames#1 as range 22
    // closed e.OptFuncs#1 as range 12
    //DEBUG: s.Mode#1: 9
    //DEBUG: e.Left#1: 14
    //DEBUG: e.Right#1: 18
    //DEBUG: e.OptFuncNames#1: 22
    //DEBUG: e.OptFuncs#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence$1:1/4 AsIs: (/5 } Tile{ AsIs: e.OptFuncs#1/12 } Tile{ AsIs: )/8 } Tile{ AsIs: (/16 AsIs: e.Left#1/14 AsIs: )/17 } Tile{ HalfReuse: s.Mode1 #9/21 HalfReuse: </6 HalfReuse: & FindOptimizedCall/7 AsIs: (/24 AsIs: e.OptFuncNames#1/22 AsIs: )/25 } Tile{ AsIs: e.Right#1/18 } Tile{ HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_OptSentence_S1B1]);
    refalrts::reinit_svar( context[21], context[9] );
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_name(context[7], functions[efunc_FindOptimizedCall]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[6] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[5], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptSentence/4 t.Sentence#1/5 t.OptInfo#1/7 s.Mode#1/9 >/1
  //DEBUG: t.Sentence#1: 5
  //DEBUG: t.OptInfo#1: 7
  //DEBUG: s.Mode#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OptInfo#1/7 } Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: t.Sentence#1/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSentence("OptSentence", COOKIE1_, COOKIE2_, func_OptSentence);


static refalrts::FnResult func_gen_OptSentencem_Aux_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & OptSentence-Aux\1/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 (/15 e.NewFunctions#4/13 )/16 (/19 (/23 e.RS#4/21 )/24 e.Solutions#4/17 (/27 e.NewFunction#4/25 )/28 )/20 >/1
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
  context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[17], context[18] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.NewFunctions#4 as range 13
  // closed e.RS#4 as range 21
  // closed e.Solutions#4 as range 17
  // closed e.NewFunction#4 as range 25
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.NewFunctions#4: 13
  //DEBUG: e.RS#4: 21
  //DEBUG: e.Solutions#4: 17
  //DEBUG: e.NewFunction#4: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/28 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/20 } Tile{ AsIs: e.NewFunctions#4/13 } Tile{ AsIs: e.NewFunction#4/25 } Tile{ AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & ApplySolutions/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/9 AsIs: )/12 HalfReuse: )/15 } Tile{ AsIs: (/23 AsIs: e.RS#4/21 AsIs: )/24 AsIs: e.Solutions#4/17 HalfReuse: >/27 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_name(context[0], functions[efunc_ApplySolutions]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[27]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[4], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_L1("OptSentence-Aux\\1", COOKIE1_, COOKIE2_, func_gen_OptSentencem_Aux_L1);


static refalrts::FnResult func_gen_OptSentencem_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptSentence-Aux=2/4 (/7 e.OptFuncs#2/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.Right#1/13 )/16 e.SolutionPacks#3/2 >/1
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
  // closed e.OptFuncs#2 as range 5
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 13
  // closed e.SolutionPacks#3 as range 2
  //DEBUG: e.OptFuncs#2: 5
  //DEBUG: e.Left#1: 9
  //DEBUG: e.Right#1: 13
  //DEBUG: e.SolutionPacks#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.OptFuncs#2/5 } )/17 Tile{ HalfReuse: </4 } Tile{ HalfReuse: & MapAccum@6/8 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 } Tile{ AsIs: (/7 } )/18 Tile{ AsIs: e.SolutionPacks#3/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[8], functions[efunc_gen_MapAccum_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[7], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_A2("OptSentence-Aux=2", COOKIE1_, COOKIE2_, func_gen_OptSentencem_Aux_A2);


static refalrts::FnResult func_gen_OptSentencem_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & OptSentence-Aux=1/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 s.Mode#1/13 (/16 e.Args#1/14 )/17 e.OptFuncs#2/2 t.FunctionForDrive#2/18 >/1
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
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Args#1 as range 14
  context[19] = refalrts::tvar_right( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.OptFuncs#2 as range 2
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: s.Mode#1: 13
  //DEBUG: e.Args#1: 14
  //DEBUG: t.FunctionForDrive#2: 18
  //DEBUG: e.OptFuncs#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 & OptSentence-Aux=2/21 (/22 Tile{ AsIs: e.OptFuncs#2/2 } )/23 (/24 e.Left#1/5/25 )/27 (/28 e.Right#1/9/29 )/31 </32 & OptSentence-MakeSubstitutions/33 Tile{ HalfReuse: s.Mode1 #13/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/9 AsIs: )/12 } )/34 Tile{ AsIs: (/16 AsIs: e.Args#1/14 AsIs: )/17 } Tile{ AsIs: t.FunctionForDrive#2/18 AsIs: >/1 } >/35 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_OptSentencem_Aux_A2]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_OptSentencem_MakeSubstitutions]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[4], context[34] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[18], context[1] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[23], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_A1("OptSentence-Aux=1", COOKIE1_, COOKIE2_, func_gen_OptSentencem_Aux_A1);


static refalrts::FnResult func_OptSentencem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & OptSentence-Aux/4 s.Mode#1/5 (/8 (/12 e.Left#1/10 )/13 (/16 e.Right#1/14 )/17 )/9 (/20 # CallBrackets/22 (/25 # Symbol/27 # Name/28 e.Name#1/23 )/26 e.Args#1/18 )/21 e.OptFuncs#1/2 >/1
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
  context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[6], context[7] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = refalrts::ident_left( identifiers[ident_CallBrackets], context[18], context[19] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[18], context[19] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  context[27] = refalrts::ident_left( identifiers[ident_Symbol], context[23], context[24] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::ident_left( identifiers[ident_Name], context[23], context[24] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 10
  // closed e.Right#1 as range 14
  // closed e.Name#1 as range 23
  // closed e.Args#1 as range 18
  // closed e.OptFuncs#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Left#1: 10
  //DEBUG: e.Right#1: 14
  //DEBUG: e.Name#1: 23
  //DEBUG: e.Args#1: 18
  //DEBUG: e.OptFuncs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & OptSentence-Aux/4 s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & OptSentence-Aux=1/8 AsIs: (/12 AsIs: e.Left#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Right#1/14 AsIs: )/17 HalfReuse: s.Mode1 #5/9 AsIs: (/20 } Tile{ AsIs: e.Args#1/18 } Tile{ AsIs: )/21 } Tile{ HalfReuse: </22 HalfReuse: & FindOptInfo/25 } Tile{ AsIs: e.OptFuncs#1/2 } Tile{ HalfReuse: (/28 AsIs: e.Name#1/23 AsIs: )/26 } Tile{ HalfReuse: >/27 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_name(context[8], functions[efunc_gen_OptSentencem_Aux_A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::reinit_open_call(context[22]);
  refalrts::reinit_name(context[25], functions[efunc_FindOptInfo]);
  refalrts::reinit_open_bracket(context[28]);
  refalrts::reinit_close_call(context[27]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[28], context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[28], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSentencem_Aux("OptSentence-Aux", COOKIE1_, COOKIE2_, func_OptSentencem_Aux);


static refalrts::FnResult func_gen_OptSentencem_MakeSubstitutions_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & OptSentence-MakeSubstitutions$2=3/4 (/7 e.SentenceVars#3/5 )/8 (/11 e.Args#1/9 )/12 s.ScopeClass#1/13 (/16 e.Name#1/14 )/17 (/20 e.Body#1/18 )/21 s.Mode#4/22 >/1
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
  // closed e.SentenceVars#3 as range 5
  // closed e.Args#1 as range 9
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
  // closed e.Name#1 as range 14
  // closed e.Body#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.SentenceVars#3: 5
  //DEBUG: e.Args#1: 9
  //DEBUG: s.ScopeClass#1: 13
  //DEBUG: e.Name#1: 14
  //DEBUG: e.Body#1: 18
  //DEBUG: s.Mode#4: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#4/22 {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: & DoOptSentence-MakeSubstitutions/0 HalfReuse: s.Mode4 #22/4 AsIs: (/7 AsIs: e.SentenceVars#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Args#1/9 AsIs: )/12 } (/24 )/25 (/26 # Function/27 Tile{ AsIs: s.ScopeClass#1/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 HalfReuse: # Sentences/20 AsIs: e.Body#1/18 AsIs: )/21 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_Function]);
  refalrts::reinit_name(context[0], functions[efunc_DoOptSentencem_MakeSubstitutions]);
  refalrts::reinit_svar( context[4], context[22] );
  refalrts::reinit_ident(context[20], identifiers[ident_Sentences]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[26], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A3("OptSentence-MakeSubstitutions$2=3", COOKIE1_, COOKIE2_, func_gen_OptSentencem_MakeSubstitutions_S2A3);


static refalrts::FnResult func_gen_OptSentencem_MakeSubstitutions_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & OptSentence-MakeSubstitutions$2=2/4 (/7 e.Args#1/5 )/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 (/16 e.Body#1/14 )/17 s.Mode#2/18 s.FuncMode#1/19 e.SentenceVars#3/2 >/1
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
  // closed e.Args#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Name#1 as range 10
  // closed e.Body#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentenceVars#3 as range 2
  //DEBUG: e.Args#1: 5
  //DEBUG: s.ScopeClass#1: 9
  //DEBUG: e.Name#1: 10
  //DEBUG: e.Body#1: 14
  //DEBUG: s.Mode#2: 18
  //DEBUG: s.FuncMode#1: 19
  //DEBUG: e.SentenceVars#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & OptSentence-MakeSubstitutions$2=3/20 (/21 Tile{ AsIs: e.SentenceVars#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Args#1/5 AsIs: )/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Body#1/14 AsIs: )/17 } </22 & DecreaseMode/23 Tile{ AsIs: s.Mode#2/18 AsIs: s.FuncMode#1/19 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_OptSentencem_MakeSubstitutions_S2A3]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_DecreaseMode]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[21], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[4], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A2("OptSentence-MakeSubstitutions$2=2", COOKIE1_, COOKIE2_, func_gen_OptSentencem_MakeSubstitutions_S2A2);


static refalrts::FnResult func_gen_OptSentencem_MakeSubstitutions_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & OptSentence-MakeSubstitutions$2=1/4 (/7 e.Args#1/5 )/8 s.ScopeClass#1/9 (/12 e.Name#1/10 )/13 (/16 e.Body#1/14 )/17 s.FuncMode#1/18 (/21 e.Left#1/19 )/22 (/25 e.Expr#1/23 )/26 s.Mode#2/27 >/1
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
  // closed e.Args#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Name#1 as range 10
  // closed e.Body#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Left#1 as range 19
  // closed e.Expr#1 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Args#1: 5
  //DEBUG: s.ScopeClass#1: 9
  //DEBUG: e.Name#1: 10
  //DEBUG: e.Body#1: 14
  //DEBUG: s.FuncMode#1: 18
  //DEBUG: e.Left#1: 19
  //DEBUG: e.Expr#1: 23
  //DEBUG: s.Mode#2: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence-MakeSubstitutions$2=2/4 AsIs: (/7 AsIs: e.Args#1/5 AsIs: )/8 AsIs: s.ScopeClass#1/9 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Body#1/14 AsIs: )/17 } Tile{ AsIs: s.Mode#2/27 } Tile{ AsIs: s.FuncMode#1/18 } </28 & ExtractVariables/29 (/30 Tile{ AsIs: (/21 AsIs: e.Left#1/19 AsIs: )/22 AsIs: (/25 AsIs: e.Expr#1/23 AsIs: )/26 } )/31 >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_ExtractVariables]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_MakeSubstitutions_S2A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A1("OptSentence-MakeSubstitutions$2=1", COOKIE1_, COOKIE2_, func_gen_OptSentencem_MakeSubstitutions_S2A1);


static refalrts::FnResult func_gen_OptSentencem_MakeSubstitutions_S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OptSentence-MakeSubstitutions$2=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptSentence-MakeSubstitutions$2=1:1/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptSentence-MakeSubstitutions$2=1:1/4 s.Mode#1/5 # True/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[6] ) )
      continue;
    //DEBUG: s.Mode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptSentence-MakeSubstitutions$2=1:1/4 s.Mode#1/5 # True/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Mode1 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptSentence-MakeSubstitutions$2=1:1/4 s.Mode#1/5 # False/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptSentence-MakeSubstitutions$2=1:1/4 s.Mode#1/5 # False/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Inline/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Inline]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A1B1("OptSentence-MakeSubstitutions$2=1:1", COOKIE1_, COOKIE2_, func_gen_OptSentencem_MakeSubstitutions_S2A1B1);


static refalrts::FnResult func_OptSentencem_MakeSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & OptSentence-MakeSubstitutions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptSentence-MakeSubstitutions/4 s.new#1/5 (/8 (/12 e.new#2/10 )/13 (/16 e.new#3/14 )/17 )/9 (/20 e.new#4/18 )/21 t.new#5/22 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[6], context[7] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 10
  // closed e.new#3 as range 14
  // closed e.new#4 as range 18
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptSentence-MakeSubstitutions/4 s.Mode#1/5 (/8 (/12 e.Left#1/24 )/13 (/16 e.Expr#1/26 )/17 )/9 (/20 e.Args#1/28 )/21 t.Function#1/22 >/1
    context[24] = context[10];
    context[25] = context[11];
    context[26] = context[14];
    context[27] = context[15];
    context[28] = context[18];
    context[29] = context[19];
    // closed e.Left#1 as range 24
    // closed e.Expr#1 as range 26
    // closed e.Args#1 as range 28
    //DEBUG: t.Function#1: 22
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Left#1: 24
    //DEBUG: e.Expr#1: 26
    //DEBUG: e.Args#1: 28
    //5: s.Mode#1
    //22: t.Function#1
    //24: e.Left#1
    //26: e.Expr#1
    //28: e.Args#1
    //35: e.Args#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_OptSentencem_MakeSubstitutions_S1C1]);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_IsPassiveCall]);
    refalrts::copy_evar(vm, context[35], context[36], context[28], context[29]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[33] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
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
      // </30 & OptSentence-MakeSubstitutions$1?1/34 # False/35 >/31
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
      context[35] = refalrts::ident_left( identifiers[ident_False], context[32], context[33] );
      if( ! context[35] )
        continue;
      if( ! refalrts::empty_seq( context[32], context[33] ) )
        continue;
      //DEBUG: t.Function#1: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Left#1: 24
      //DEBUG: e.Expr#1: 26
      //DEBUG: e.Args#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 (/8 (/12 e.Left#1/24 )/13 (/16 e.Expr#1/26 )/17 )/9 (/20 {REMOVED TILE} )/21 {REMOVED TILE} </30 & OptSentence-MakeSubstitutions$1?1/34 # False/35 >/31 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeColdSolution/4 } Tile{ AsIs: t.Function#1/22 } Tile{ AsIs: e.Args#1/28 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_MakeColdSolution]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[30], context[31]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptSentence-MakeSubstitutions/4 s.Mode#1/5 (/8 (/12 e.Left#1/10 )/13 (/16 e.Expr#1/14 )/17 )/9 (/20 e.Args#1/18 )/21 (/22 s.FuncMode#1/26 s.ScopeClass#1/27 (/30 e.Name#1/28 )/31 # Sentences/32 e.Body#1/24 )/23 >/1
  context[24] = 0;
  context[25] = 0;
  if( ! refalrts::brackets_term( context[24], context[25], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 10
  // closed e.Expr#1 as range 14
  // closed e.Args#1 as range 18
  if( ! refalrts::svar_left( context[26], context[24], context[25] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[27], context[24], context[25] ) )
    return refalrts::cRecognitionImpossible;
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  context[32] = refalrts::ident_left( identifiers[ident_Sentences], context[24], context[25] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 28
  // closed e.Body#1 as range 24
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Left#1: 10
  //DEBUG: e.Expr#1: 14
  //DEBUG: e.Args#1: 18
  //DEBUG: s.FuncMode#1: 26
  //DEBUG: s.ScopeClass#1: 27
  //DEBUG: e.Name#1: 28
  //DEBUG: e.Body#1: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FuncMode#1/26 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence-MakeSubstitutions$2=1/4 } Tile{ AsIs: (/22 } Tile{ AsIs: e.Args#1/18 } Tile{ AsIs: )/21 } Tile{ AsIs: s.ScopeClass#1/27 AsIs: (/30 AsIs: e.Name#1/28 AsIs: )/31 HalfReuse: (/32 AsIs: e.Body#1/24 AsIs: )/23 } Tile{ HalfReuse: s.FuncMode1 #26/8 AsIs: (/12 AsIs: e.Left#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Expr#1/14 AsIs: )/17 HalfReuse: </9 HalfReuse: & OptSentence-MakeSubstitutions$2=1:1/20 } Tile{ AsIs: s.Mode#1/5 } </33 & IsLexpr/34 e.Left#1/10/35 >/37 >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_IsLexpr]);
  refalrts::copy_evar(vm, context[35], context[36], context[10], context[11]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_MakeSubstitutions_S2A1]);
  refalrts::reinit_open_bracket(context[32]);
  refalrts::reinit_svar( context[8], context[26] );
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[20], functions[efunc_gen_OptSentencem_MakeSubstitutions_S2A1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[32], context[23] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[22], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[38] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[27], context[23] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSentencem_MakeSubstitutions("OptSentence-MakeSubstitutions", COOKIE1_, COOKIE2_, func_OptSentencem_MakeSubstitutions);


static refalrts::FnResult func_MakeColdSolution(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & MakeColdSolution/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeColdSolution/4 (/7 s.new#1/9 s.new#2/10 (/13 e.new#3/11 )/14 # Sentences/15 e.new#4/5 )/8 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#5 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = refalrts::ident_left( identifiers[ident_Sentences], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 11
  // closed e.new#4 as range 5
  do {
    // </0 & MakeColdSolution/4 (/7 s.FuncMode#1/9 s.ScopeClass#1/10 (/13 e.Name#1/16 )/14 # Sentences/15 e.Body#1/18 )/8 e.Args#1/20 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.Name#1 as range 16
    // closed e.Body#1 as range 18
    // closed e.Args#1 as range 20
    //DEBUG: s.FuncMode#1: 9
    //DEBUG: s.ScopeClass#1: 10
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Body#1: 18
    //DEBUG: e.Args#1: 20
    //9: s.FuncMode#1
    //10: s.ScopeClass#1
    //16: e.Name#1
    //18: e.Body#1
    //20: e.Args#1
    //25: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_MakeColdSolution_S1C1]);
    refalrts::copy_evar(vm, context[25], context[26], context[16], context[17]);
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
      // </22 & MakeColdSolution$1?1/26 e.Prefix#2/24 '*'/28 s.Num#2/27 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      if( ! refalrts::svar_right( context[27], context[24], context[25] ) )
        continue;
      context[28] = refalrts::char_right( '*', context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.Prefix#2 as range 24
      //DEBUG: s.FuncMode#1: 9
      //DEBUG: s.ScopeClass#1: 10
      //DEBUG: e.Name#1: 16
      //DEBUG: e.Body#1: 18
      //DEBUG: e.Args#1: 20
      //DEBUG: s.Num#2: 27
      //DEBUG: e.Prefix#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FuncMode#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Prefix#2/24 {REMOVED TILE} s.Num#2/27 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 } Tile{ HalfReuse: # ColdCallBrackets/28 } Tile{ HalfReuse: (/22 HalfReuse: # Symbol/26 } # Name/29 e.Name#1/16/30 )/32 Tile{ AsIs: e.Args#1/20 } )/33 )/34 (/35 (/36 )/37 (/38 )/39 )/40 (/41 (/42 # NewFunction/43 Tile{ AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/16 AsIs: )/14 AsIs: # Sentences/15 AsIs: e.Body#1/18 AsIs: )/8 } Tile{ HalfReuse: )/23 HalfReuse: )/1 ]] }
      refalrts::alloc_ident(vm, context[29], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[30], context[31], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_NewFunction]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[28], identifiers[ident_ColdCallBrackets]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_ident(context[26], identifiers[ident_Symbol]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[41], context[23] );
      refalrts::link_brackets( context[42], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[35], context[40] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::link_brackets( context[4], context[34] );
      refalrts::link_brackets( context[7], context[33] );
      refalrts::link_brackets( context[22], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[10], context[8] );
      res = refalrts::splice_evar( res, context[33], context[43] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[22], context[26] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeColdSolution/4 (/7 s.FuncMode#1/9 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 # Sentences/15 e.Body#1/5 )/8 e.Args#1/2 >/1
  // closed e.Name#1 as range 11
  // closed e.Body#1 as range 5
  // closed e.Args#1 as range 2
  //DEBUG: s.FuncMode#1: 9
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.Name#1: 11
  //DEBUG: e.Body#1: 5
  //DEBUG: e.Args#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FuncMode#1/9 s.ScopeClass#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Body#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 } # ColdCallBrackets/16 Tile{ AsIs: (/13 } # Symbol/17 # Name/18 Tile{ AsIs: e.Name#1/11 } Tile{ AsIs: )/8 AsIs: e.Args#1/2 HalfReuse: )/1 } Tile{ AsIs: )/14 HalfReuse: (/15 } (/19 )/20 (/21 )/22 )/23 (/24 )/25 )/26 Tile{ ]] }
  refalrts::alloc_ident(vm, context[16], identifiers[ident_ColdCallBrackets]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Name]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::link_brackets( context[0], context[26] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[15], context[23] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[4], context[14] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[26] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeColdSolution("MakeColdSolution", COOKIE1_, COOKIE2_, func_MakeColdSolution);


static refalrts::FnResult func_DecreaseMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DecreaseMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DecreaseMode/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DecreaseMode/4 # Inline/5 s.Mode#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[5] ) )
      continue;
    //DEBUG: s.Mode#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DecreaseMode/4 # Inline/5 s.Mode#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Inline/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Inline]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DecreaseMode/4 # Drive/5 s.Mode#1/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_Drive], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DecreaseMode/4 # Drive/5 s.Mode#1/6 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Mode1 #6/1 ]] }
  refalrts::reinit_svar( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecreaseMode("DecreaseMode", COOKIE1_, COOKIE2_, func_DecreaseMode);


static refalrts::FnResult func_gen_DoOptSentencem_MakeSubstitutions_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 96 elems
  refalrts::Iter context[96];
  refalrts::zeros( context, 96 );
  // </0 & DoOptSentence-MakeSubstitutions$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 (/20 e.new#5/18 )/21 (/24 e.new#6/22 )/25 (/28 e.new#7/26 )/29 s.new#8/30 (/33 e.new#9/31 )/34 e.new#10/2 >/1
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
  // closed e.new#4 as range 14
  // closed e.new#5 as range 18
  // closed e.new#6 as range 22
  // closed e.new#7 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[31] = 0;
  context[32] = 0;
  context[33] = refalrts::brackets_left( context[31], context[32], context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[33], context[34]);
  // closed e.new#9 as range 31
  // closed e.new#10 as range 2
  do {
    // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.new#15/35 )/8 (/11 e.new#16/37 )/12 s.new#11/13 (/16 e.new#17/39 )/17 (/20 e.new#18/41 )/21 (/24 e.new#19/43 )/25 (/28 e.new#20/45 )/29 s.new#12/30 (/33 e.new#21/47 )/34 s.new#13/51 e.new#14/49 >/1
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[9];
    context[38] = context[10];
    context[39] = context[14];
    context[40] = context[15];
    context[41] = context[18];
    context[42] = context[19];
    context[43] = context[22];
    context[44] = context[23];
    context[45] = context[26];
    context[46] = context[27];
    context[47] = context[31];
    context[48] = context[32];
    context[49] = context[2];
    context[50] = context[3];
    // closed e.new#15 as range 35
    // closed e.new#16 as range 37
    // closed e.new#17 as range 39
    // closed e.new#18 as range 41
    // closed e.new#19 as range 43
    // closed e.new#20 as range 45
    // closed e.new#21 as range 47
    if( ! refalrts::svar_left( context[51], context[49], context[50] ) )
      continue;
    // closed e.new#14 as range 49
    do {
      // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.new#25/52 )/8 (/11 e.new#26/54 )/12 s.new#22/13 (/16 e.new#27/56 )/17 (/20 e.new#28/58 )/21 (/24 e.new#29/60 )/25 (/28 e.new#30/62 )/29 s.new#23/30 (/33 e.new#31/64 )/34 # Success/51 e.new#24/66 >/1
      context[52] = context[35];
      context[53] = context[36];
      context[54] = context[37];
      context[55] = context[38];
      context[56] = context[39];
      context[57] = context[40];
      context[58] = context[41];
      context[59] = context[42];
      context[60] = context[43];
      context[61] = context[44];
      context[62] = context[45];
      context[63] = context[46];
      context[64] = context[47];
      context[65] = context[48];
      context[66] = context[49];
      context[67] = context[50];
      if( ! refalrts::ident_term( identifiers[ident_Success], context[51] ) )
        continue;
      // closed e.new#25 as range 52
      // closed e.new#26 as range 54
      // closed e.new#27 as range 56
      // closed e.new#28 as range 58
      // closed e.new#29 as range 60
      // closed e.new#30 as range 62
      // closed e.new#31 as range 64
      // closed e.new#24 as range 66
      do {
        // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.Substitutions#1/68 )/8 (/11 e.RS#1/70 )/12 s.Mode#1/13 (/16 e.SentenceVars#1/72 )/17 (/20 e.Args#1/74 )/21 (/24 e.Name#1/76 )/25 (/28 e.Rest#1/78 )/29 s.ScopeClass#1/30 (/33 e.LS#1/80 )/34 # Success/51 (/86 (/90 )/91 (/94 e.Assigns#2/92 )/95 )/87 >/1
        context[68] = context[52];
        context[69] = context[53];
        context[70] = context[54];
        context[71] = context[55];
        context[72] = context[56];
        context[73] = context[57];
        context[74] = context[58];
        context[75] = context[59];
        context[76] = context[60];
        context[77] = context[61];
        context[78] = context[62];
        context[79] = context[63];
        context[80] = context[64];
        context[81] = context[65];
        context[82] = context[66];
        context[83] = context[67];
        context[84] = 0;
        context[85] = 0;
        context[86] = refalrts::brackets_left( context[84], context[85], context[82], context[83] );
        if( ! context[86] )
          continue;
        refalrts::bracket_pointers(context[86], context[87]);
        context[88] = 0;
        context[89] = 0;
        context[90] = refalrts::brackets_left( context[88], context[89], context[84], context[85] );
        if( ! context[90] )
          continue;
        refalrts::bracket_pointers(context[90], context[91]);
        context[92] = 0;
        context[93] = 0;
        context[94] = refalrts::brackets_left( context[92], context[93], context[84], context[85] );
        if( ! context[94] )
          continue;
        refalrts::bracket_pointers(context[94], context[95]);
        if( ! refalrts::empty_seq( context[88], context[89] ) )
          continue;
        if( ! refalrts::empty_seq( context[84], context[85] ) )
          continue;
        if( ! refalrts::empty_seq( context[82], context[83] ) )
          continue;
        // closed e.Substitutions#1 as range 68
        // closed e.RS#1 as range 70
        // closed e.SentenceVars#1 as range 72
        // closed e.Args#1 as range 74
        // closed e.Name#1 as range 76
        // closed e.Rest#1 as range 78
        // closed e.LS#1 as range 80
        // closed e.Assigns#2 as range 92
        //DEBUG: s.Mode#1: 13
        //DEBUG: s.ScopeClass#1: 30
        //DEBUG: e.Substitutions#1: 68
        //DEBUG: e.RS#1: 70
        //DEBUG: e.SentenceVars#1: 72
        //DEBUG: e.Args#1: 74
        //DEBUG: e.Name#1: 76
        //DEBUG: e.Rest#1: 78
        //DEBUG: e.LS#1: 80
        //DEBUG: e.Assigns#2: 92

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 s.Mode#1/13 (/16 e.SentenceVars#1/72 )/17 (/20 e.Args#1/74 {REMOVED TILE} e.Name#1/76 {REMOVED TILE} e.Rest#1/78 )/29 s.ScopeClass#1/30 (/33 e.LS#1/80 )/34 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Substitutions#1/68 } Tile{ HalfReuse: (/25 AsIs: (/28 } Tile{ AsIs: e.RS#1/70 } Tile{ HalfReuse: )/51 AsIs: (/86 AsIs: (/90 AsIs: )/91 AsIs: (/94 AsIs: e.Assigns#2/92 AsIs: )/95 AsIs: )/87 HalfReuse: (/1 } Tile{ AsIs: )/21 HalfReuse: )/24 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[25]);
        refalrts::reinit_close_bracket(context[51]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_close_bracket(context[24]);
        refalrts::link_brackets( context[25], context[24] );
        refalrts::link_brackets( context[1], context[21] );
        refalrts::link_brackets( context[86], context[87] );
        refalrts::link_brackets( context[94], context[95] );
        refalrts::link_brackets( context[90], context[91] );
        refalrts::link_brackets( context[28], context[51] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[51], context[1] );
        res = refalrts::splice_evar( res, context[70], context[71] );
        res = refalrts::splice_evar( res, context[25], context[28] );
        res = refalrts::splice_evar( res, context[68], context[69] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.Substitutions#1/68 )/8 (/11 e.RS#1/70 )/12 s.Mode#1/13 (/16 e.SentenceVars#1/72 )/17 (/20 e.Args#1/74 )/21 (/24 e.Name#1/76 )/25 (/28 e.Rest#1/78 )/29 s.ScopeClass#1/30 (/33 e.LS#1/80 )/34 # Success/51 e.M#2/82 >/1
      context[68] = context[52];
      context[69] = context[53];
      context[70] = context[54];
      context[71] = context[55];
      context[72] = context[56];
      context[73] = context[57];
      context[74] = context[58];
      context[75] = context[59];
      context[76] = context[60];
      context[77] = context[61];
      context[78] = context[62];
      context[79] = context[63];
      context[80] = context[64];
      context[81] = context[65];
      context[82] = context[66];
      context[83] = context[67];
      // closed e.Substitutions#1 as range 68
      // closed e.RS#1 as range 70
      // closed e.SentenceVars#1 as range 72
      // closed e.Args#1 as range 74
      // closed e.Name#1 as range 76
      // closed e.Rest#1 as range 78
      // closed e.LS#1 as range 80
      // closed e.M#2 as range 82
      //DEBUG: s.Mode#1: 13
      //DEBUG: s.ScopeClass#1: 30
      //DEBUG: e.Substitutions#1: 68
      //DEBUG: e.RS#1: 70
      //DEBUG: e.SentenceVars#1: 72
      //DEBUG: e.Args#1: 74
      //DEBUG: e.Name#1: 76
      //DEBUG: e.Rest#1: 78
      //DEBUG: e.LS#1: 80
      //DEBUG: e.M#2: 82
      //13: s.Mode#1
      //30: s.ScopeClass#1
      //68: e.Substitutions#1
      //70: e.RS#1
      //72: e.SentenceVars#1
      //74: e.Args#1
      //76: e.Name#1
      //78: e.Rest#1
      //80: e.LS#1
      //82: e.M#2
      //87: s.Mode#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[84]);
      refalrts::alloc_name(vm, context[86], functions[efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1S2C1]);
      refalrts::copy_stvar(vm, context[87], context[13]);
      refalrts::alloc_close_call(vm, context[85]);
      refalrts::push_stack( vm, context[85] );
      refalrts::push_stack( vm, context[84] );
      res = refalrts::splice_elem( res, context[85] );
      res = refalrts::splice_stvar( res, context[87] );
      res = refalrts::splice_elem( res, context[86] );
      res = refalrts::splice_elem( res, context[84] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </84 & DoOptSentence-MakeSubstitutions$1:1$2?1/88 # Drive/89 >/85
        context[86] = 0;
        context[87] = 0;
        context[88] = refalrts::call_left( context[86], context[87], context[84], context[85] );
        context[89] = refalrts::ident_left( identifiers[ident_Drive], context[86], context[87] );
        if( ! context[89] )
          continue;
        if( ! refalrts::empty_seq( context[86], context[87] ) )
          continue;
        //DEBUG: s.Mode#1: 13
        //DEBUG: s.ScopeClass#1: 30
        //DEBUG: e.Substitutions#1: 68
        //DEBUG: e.RS#1: 70
        //DEBUG: e.SentenceVars#1: 72
        //DEBUG: e.Args#1: 74
        //DEBUG: e.Name#1: 76
        //DEBUG: e.Rest#1: 78
        //DEBUG: e.LS#1: 80
        //DEBUG: e.M#2: 82

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/30 {REMOVED TILE} e.LS#1/80 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoOptSentence-MakeSubstitutions/12 AsIs: s.Mode#1/13 AsIs: (/16 AsIs: e.SentenceVars#1/72 AsIs: )/17 AsIs: (/20 AsIs: e.Args#1/74 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Substitutions#1/68 } Tile{ HalfReuse: (/8 AsIs: (/11 } Tile{ AsIs: e.RS#1/70 } Tile{ HalfReuse: )/51 AsIs: e.M#2/82 HalfReuse: (/84 HalfReuse: )/88 HalfReuse: )/89 HalfReuse: )/85 HalfReuse: (/1 } Tile{ HalfReuse: # Function/33 } Tile{ HalfReuse: # GN-Local/4 AsIs: (/7 } </90 & RemainderFuncIncName/91 Tile{ AsIs: e.Name#1/76 } Tile{ HalfReuse: >/34 } Tile{ AsIs: )/25 HalfReuse: # Sentences/28 AsIs: e.Rest#1/78 AsIs: )/29 } >/92 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[90]);
        refalrts::alloc_name(vm, context[91], functions[efunc_RemainderFuncIncName]);
        refalrts::alloc_close_call(vm, context[92]);
        refalrts::reinit_name(context[12], functions[efunc_DoOptSentencem_MakeSubstitutions]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_close_bracket(context[51]);
        refalrts::reinit_open_bracket(context[84]);
        refalrts::reinit_close_bracket(context[88]);
        refalrts::reinit_close_bracket(context[89]);
        refalrts::reinit_close_bracket(context[85]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_ident(context[33], identifiers[ident_Function]);
        refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
        refalrts::reinit_close_call(context[34]);
        refalrts::reinit_ident(context[28], identifiers[ident_Sentences]);
        refalrts::push_stack( vm, context[92] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[1], context[29] );
        refalrts::link_brackets( context[7], context[25] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[90] );
        refalrts::link_brackets( context[24], context[85] );
        refalrts::link_brackets( context[8], context[89] );
        refalrts::link_brackets( context[84], context[88] );
        refalrts::link_brackets( context[11], context[51] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[92], context[92] );
        res = refalrts::splice_evar( res, context[25], context[29] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[76], context[77] );
        res = refalrts::splice_evar( res, context[90], context[91] );
        res = refalrts::splice_evar( res, context[4], context[7] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[51], context[1] );
        res = refalrts::splice_evar( res, context[70], context[71] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[68], context[69] );
        res = refalrts::splice_evar( res, context[12], context[24] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[84], context[85]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.Substitutions#1/52 )/8 (/11 e.RS#1/54 )/12 s.Mode#1/13 (/16 e.SentenceVars#1/56 )/17 (/20 e.Args#1/58 )/21 (/24 e.Name#1/60 )/25 (/28 e.Rest#1/62 )/29 s.ScopeClass#1/30 (/33 e.LS#1/64 )/34 # Failure/51 >/1
    context[52] = context[35];
    context[53] = context[36];
    context[54] = context[37];
    context[55] = context[38];
    context[56] = context[39];
    context[57] = context[40];
    context[58] = context[41];
    context[59] = context[42];
    context[60] = context[43];
    context[61] = context[44];
    context[62] = context[45];
    context[63] = context[46];
    context[64] = context[47];
    context[65] = context[48];
    if( ! refalrts::ident_term( identifiers[ident_Failure], context[51] ) )
      continue;
    if( ! refalrts::empty_seq( context[49], context[50] ) )
      continue;
    // closed e.Substitutions#1 as range 52
    // closed e.RS#1 as range 54
    // closed e.SentenceVars#1 as range 56
    // closed e.Args#1 as range 58
    // closed e.Name#1 as range 60
    // closed e.Rest#1 as range 62
    // closed e.LS#1 as range 64
    //DEBUG: s.Mode#1: 13
    //DEBUG: s.ScopeClass#1: 30
    //DEBUG: e.Substitutions#1: 52
    //DEBUG: e.RS#1: 54
    //DEBUG: e.SentenceVars#1: 56
    //DEBUG: e.Args#1: 58
    //DEBUG: e.Name#1: 60
    //DEBUG: e.Rest#1: 62
    //DEBUG: e.LS#1: 64

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.RS#1/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/30 {REMOVED TILE} e.LS#1/64 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoOptSentence-MakeSubstitutions/12 AsIs: s.Mode#1/13 AsIs: (/16 AsIs: e.SentenceVars#1/56 AsIs: )/17 AsIs: (/20 AsIs: e.Args#1/58 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Substitutions#1/52 } Tile{ AsIs: )/8 AsIs: (/11 } # Function/66 Tile{ HalfReuse: # GN-Local/4 AsIs: (/7 } Tile{ HalfReuse: </34 HalfReuse: & RemainderFuncIncName/51 } Tile{ AsIs: e.Name#1/60 } Tile{ HalfReuse: >/33 } Tile{ AsIs: )/25 HalfReuse: # Sentences/28 AsIs: e.Rest#1/62 AsIs: )/29 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[66], identifiers[ident_Function]);
    refalrts::reinit_name(context[12], functions[efunc_DoOptSentencem_MakeSubstitutions]);
    refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
    refalrts::reinit_open_call(context[34]);
    refalrts::reinit_name(context[51], functions[efunc_RemainderFuncIncName]);
    refalrts::reinit_close_call(context[33]);
    refalrts::reinit_ident(context[28], identifiers[ident_Sentences]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[29] );
    refalrts::link_brackets( context[7], context[25] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[24], context[8] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_evar( res, context[34], context[51] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[66], context[66] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[12], context[24] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOptSentence-MakeSubstitutions$1:1/4 (/7 e.Substitutions#1/5 )/8 (/11 e.RS#1/9 )/12 s.Mode#1/13 (/16 e.SentenceVars#1/14 )/17 (/20 e.Args#1/18 )/21 (/24 e.Name#1/22 )/25 (/28 e.Rest#1/26 )/29 s.ScopeClass#1/30 (/33 e.LS#1/31 )/34 e.Other#2/2 >/1
  // closed e.Substitutions#1 as range 5
  // closed e.RS#1 as range 9
  // closed e.SentenceVars#1 as range 14
  // closed e.Args#1 as range 18
  // closed e.Name#1 as range 22
  // closed e.Rest#1 as range 26
  // closed e.LS#1 as range 31
  // closed e.Other#2 as range 2
  //DEBUG: s.Mode#1: 13
  //DEBUG: s.ScopeClass#1: 30
  //DEBUG: e.Substitutions#1: 5
  //DEBUG: e.RS#1: 9
  //DEBUG: e.SentenceVars#1: 14
  //DEBUG: e.Args#1: 18
  //DEBUG: e.Name#1: 22
  //DEBUG: e.Rest#1: 26
  //DEBUG: e.LS#1: 31
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/13 {REMOVED TILE} e.SentenceVars#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/30 (/33 {REMOVED TILE} {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Substitutions#1/5 } Tile{ AsIs: </0 Reuse: & MakeColdSolution/4 AsIs: (/7 } Tile{ HalfReuse: # Function/16 } Tile{ HalfReuse: s.ScopeClass1 #30/21 AsIs: (/24 AsIs: e.Name#1/22 AsIs: )/25 HalfReuse: # Sentences/28 } Tile{ HalfReuse: (/17 AsIs: (/20 } Tile{ AsIs: e.LS#1/31 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.RS#1/9 AsIs: )/12 } Tile{ AsIs: )/34 } Tile{ AsIs: e.Rest#1/26 } Tile{ AsIs: )/29 } Tile{ AsIs: e.Args#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MakeColdSolution]);
  refalrts::reinit_ident(context[16], identifiers[ident_Function]);
  refalrts::reinit_svar( context[21], context[30] );
  refalrts::reinit_ident(context[28], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::link_brackets( context[17], context[34] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[20], context[8] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[21], context[28] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptSentencem_MakeSubstitutions_S1B1("DoOptSentence-MakeSubstitutions$1:1", COOKIE1_, COOKIE2_, func_gen_DoOptSentencem_MakeSubstitutions_S1B1);


static refalrts::FnResult func_DoOptSentencem_MakeSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & DoOptSentence-MakeSubstitutions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOptSentence-MakeSubstitutions/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 t.new#5/18 >/1
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
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoOptSentence-MakeSubstitutions/4 s.Mode#1/5 (/8 e.SentenceVars#1/20 )/9 (/12 e.Args#1/22 )/13 (/16 e.Substitutions#1/24 )/17 (/18 # Function/28 s.ScopeClass#1/29 (/32 e.Name#1/30 )/33 # Sentences/34 (/37 (/41 e.LS#1/39 )/42 (/45 e.RS#1/43 )/46 )/38 e.Rest#1/26 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left( identifiers[ident_Function], context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.SentenceVars#1 as range 20
    // closed e.Args#1 as range 22
    // closed e.Substitutions#1 as range 24
    if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = refalrts::ident_left( identifiers[ident_Sentences], context[26], context[27] );
    if( ! context[34] )
      continue;
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[26], context[27] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[35], context[36] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    context[43] = 0;
    context[44] = 0;
    context[45] = refalrts::brackets_left( context[43], context[44], context[35], context[36] );
    if( ! context[45] )
      continue;
    refalrts::bracket_pointers(context[45], context[46]);
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    // closed e.Name#1 as range 30
    // closed e.LS#1 as range 39
    // closed e.RS#1 as range 43
    // closed e.Rest#1 as range 26
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.SentenceVars#1: 20
    //DEBUG: e.Args#1: 22
    //DEBUG: e.Substitutions#1: 24
    //DEBUG: s.ScopeClass#1: 29
    //DEBUG: e.Name#1: 30
    //DEBUG: e.LS#1: 39
    //DEBUG: e.RS#1: 43
    //DEBUG: e.Rest#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ScopeClass#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & DoOptSentence-MakeSubstitutions$1:1/47 (/48 Tile{ AsIs: e.Substitutions#1/24 } )/49 Tile{ AsIs: (/32 } Tile{ AsIs: e.RS#1/43 } Tile{ HalfReuse: )/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.SentenceVars#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Args#1/22 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Name#1/30 } Tile{ AsIs: )/33 } (/50 Tile{ AsIs: e.Rest#1/26 } Tile{ HalfReuse: )/34 HalfReuse: s.ScopeClass1 #29/37 AsIs: (/41 AsIs: e.LS#1/39 AsIs: )/42 HalfReuse: </45 } & Solve/51 (/52 e.SentenceVars#1/20/53 Tile{ AsIs: )/17 AsIs: (/18 HalfReuse: (/28 } e.Args#1/22/55 )/57 ':'/58 (/59 e.LS#1/39/60 Tile{ AsIs: )/46 AsIs: )/38 } Tile{ HalfReuse: >/19 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[47], functions[efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::alloc_close_bracket(vm, context[49]);
    refalrts::alloc_open_bracket(vm, context[50]);
    refalrts::alloc_name(vm, context[51], functions[efunc_Solve]);
    refalrts::alloc_open_bracket(vm, context[52]);
    refalrts::copy_evar(vm, context[53], context[54], context[20], context[21]);
    refalrts::copy_evar(vm, context[55], context[56], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_char(vm, context[58], ':');
    refalrts::alloc_open_bracket(vm, context[59]);
    refalrts::copy_evar(vm, context[60], context[61], context[39], context[40]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_close_bracket(context[34]);
    refalrts::reinit_svar( context[37], context[29] );
    refalrts::reinit_open_call(context[45]);
    refalrts::reinit_open_bracket(context[28]);
    refalrts::reinit_close_call(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[45] );
    refalrts::link_brackets( context[18], context[38] );
    refalrts::link_brackets( context[59], context[46] );
    refalrts::link_brackets( context[28], context[57] );
    refalrts::link_brackets( context[52], context[17] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[50], context[34] );
    refalrts::link_brackets( context[16], context[33] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[32], context[4] );
    refalrts::link_brackets( context[48], context[49] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[46], context[38] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_evar( res, context[57], context[59] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[17], context[28] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[34], context[45] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[50], context[50] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[49], context[49] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOptSentence-MakeSubstitutions/4 s.Mode#1/5 (/8 e.SentenceVars#1/6 )/9 (/12 e.Args#1/10 )/13 (/16 e.Substitutions#1/14 )/17 t.RestFunction#1/18 >/1
  // closed e.SentenceVars#1 as range 6
  // closed e.Args#1 as range 10
  // closed e.Substitutions#1 as range 14
  //DEBUG: t.RestFunction#1: 18
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.SentenceVars#1: 6
  //DEBUG: e.Args#1: 10
  //DEBUG: e.Substitutions#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 (/8 e.SentenceVars#1/6 )/9 (/12 {REMOVED TILE} )/13 (/16 {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Substitutions#1/14 } Tile{ AsIs: </0 Reuse: & MakeColdSolution/4 } Tile{ AsIs: t.RestFunction#1/18 } Tile{ AsIs: e.Args#1/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MakeColdSolution]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoOptSentencem_MakeSubstitutions("DoOptSentence-MakeSubstitutions", COOKIE1_, COOKIE2_, func_DoOptSentencem_MakeSubstitutions);


static refalrts::FnResult func_DropLeft(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DropLeft/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DropLeft/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & DropLeft/4 e.List#1/6 0/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.List#1 as range 6
    //DEBUG: e.List#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DropLeft/4 {REMOVED TILE} 0/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.List#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DropLeft/4 t.Head#1/6 e.Tail#1/2 s.N#1/5 >/1
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: s.N#1: 5
  //DEBUG: t.Head#1: 6
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Head#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DropLeft/4 } Tile{ AsIs: e.Tail#1/2 } </8 & Sub/9 Tile{ AsIs: s.N#1/5 } 1/10 >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Sub]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DropLeft("DropLeft", COOKIE1_, COOKIE2_, func_DropLeft);


static refalrts::FnResult func_gen_FindOptInfo_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindOptInfo=1/4 (/7 e.OptFuncs#1/5 )/8 (/11 e.Name#1/9 )/12 e.LookupName#2/2 s.Drop#2/13 >/1
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
  // closed e.OptFuncs#1 as range 5
  // closed e.Name#1 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LookupName#2 as range 2
  //DEBUG: e.OptFuncs#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: s.Drop#2: 13
  //DEBUG: e.LookupName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptInfo-Aux/4 } Tile{ AsIs: e.OptFuncs#1/5 } Tile{ AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: (/7 } Tile{ AsIs: e.LookupName#2/2 } Tile{ AsIs: )/8 } Tile{ AsIs: s.Drop#2/13 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FindOptInfom_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptInfo_A1("FindOptInfo=1", COOKIE1_, COOKIE2_, func_gen_FindOptInfo_A1);


static refalrts::FnResult func_gen_FindOptInfo_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindOptInfo=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FindOptInfo=1:1/4 e.new#1/5 '*'/8 s.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    context[8] = refalrts::char_right( '*', context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & FindOptInfo=1:1/4 e.#0/9 # SUF/11 '*'/8 s.N#2/7 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_right( identifiers[ident_SUF], context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.#0 as range 9
      //DEBUG: s.N#2: 7
      //DEBUG: e.#0: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindOptInfo=1:1/4 {REMOVED TILE} # SUF/11 '*'/8 s.N#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.#0/9 } Tile{ HalfReuse: s.N2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindOptInfo=1:1/4 e.Prefix#2/9 '*'/8 s.N#2/7 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Prefix#2 as range 9
    //DEBUG: s.N#2: 7
    //DEBUG: e.Prefix#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindOptInfo=1:1/4 {REMOVED TILE} '*'/8 s.N#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#2/9 } Tile{ HalfReuse: s.N2 #7/1 ]] }
    refalrts::reinit_svar( context[1], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindOptInfo=1:1/4 e.Name#2/2 >/1
  // closed e.Name#2 as range 2
  //DEBUG: e.Name#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindOptInfo=1:1/4 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#2/2 } Tile{ HalfReuse: 0/1 ]] }
  refalrts::reinit_number(context[1], 0UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptInfo_A1B1("FindOptInfo=1:1", COOKIE1_, COOKIE2_, func_gen_FindOptInfo_A1B1);


static refalrts::FnResult func_FindOptInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FindOptInfo/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindOptInfo/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & FindOptInfo/4 e.new#3/9 (/7 e.new#4/11 '*'/14 s.new#5/13 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
      continue;
    context[14] = refalrts::char_right( '*', context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & FindOptInfo/4 e.OptFuncs#1/15 (/7 e.#0/17 # SUF/19 '*'/14 s.N#2/13 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = refalrts::ident_right( identifiers[ident_SUF], context[17], context[18] );
      if( ! context[19] )
        continue;
      // closed e.OptFuncs#1 as range 15
      // closed e.#0 as range 17
      //DEBUG: s.N#2: 13
      //DEBUG: e.OptFuncs#1: 15
      //DEBUG: e.#0: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptInfo-Aux/4 AsIs: e.OptFuncs#1/15 AsIs: (/7 AsIs: e.#0/17 AsIs: # SUF/19 AsIs: '*'/14 AsIs: s.N#2/13 AsIs: )/8 HalfReuse: (/1 } e.#0/17/20 )/22 s.N#2/13/23 >/24 Tile{ ]] }
      refalrts::copy_evar(vm, context[20], context[21], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::copy_stvar(vm, context[23], context[13]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_FindOptInfom_Aux]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindOptInfo/4 e.OptFuncs#1/15 (/7 e.0#0/17 '*'/14 s.N#2/13 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.OptFuncs#1 as range 15
    // closed e.0#0 as range 17
    //DEBUG: s.N#2: 13
    //DEBUG: e.OptFuncs#1: 15
    //DEBUG: e.0#0: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptInfo-Aux/4 AsIs: e.OptFuncs#1/15 AsIs: (/7 AsIs: e.0#0/17 AsIs: '*'/14 AsIs: s.N#2/13 AsIs: )/8 HalfReuse: (/1 } e.0#0/17/19 )/21 s.N#2/13/22 >/23 Tile{ ]] }
    refalrts::copy_evar(vm, context[19], context[20], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::copy_stvar(vm, context[22], context[13]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::update_name(context[4], functions[efunc_FindOptInfom_Aux]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[1], context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindOptInfo/4 e.OptFuncs#1/2 (/7 e.Name#1/5 )/8 >/1
  // closed e.OptFuncs#1 as range 2
  // closed e.Name#1 as range 5
  //DEBUG: e.OptFuncs#1: 2
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptInfo-Aux/4 AsIs: e.OptFuncs#1/2 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 HalfReuse: (/1 } e.Name#1/5/9 )/11 0/12 >/13 Tile{ ]] }
  refalrts::copy_evar(vm, context[9], context[10], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_FindOptInfom_Aux]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindOptInfo("FindOptInfo", COOKIE1_, COOKIE2_, func_FindOptInfo);


static refalrts::FnResult func_gen_FindOptInfom_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & FindOptInfo-Aux=1/4 (/7 e.OptFuncs-B#1/5 )/8 s.Mode#1/9 s.ScopeClass#1/10 (/13 e.LookupName#1/11 )/14 (/17 e.Body#1/15 )/18 (/21 e.OptFuncs-E#1/19 )/22 (/25 e.Name#1/23 )/26 s.Drop#1/27 # Sentences/28 e.Sentences#2/2 >/1
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
  // closed e.OptFuncs-B#1 as range 5
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
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.LookupName#1 as range 11
  // closed e.Body#1 as range 15
  // closed e.OptFuncs-E#1 as range 19
  // closed e.Name#1 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::ident_left( identifiers[ident_Sentences], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2
  //DEBUG: e.OptFuncs-B#1: 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.LookupName#1: 11
  //DEBUG: e.Body#1: 15
  //DEBUG: e.OptFuncs-E#1: 19
  //DEBUG: e.Name#1: 23
  //DEBUG: s.Drop#1: 27
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Drop#1/27 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OptFuncs-B#1/5 } Tile{ HalfReuse: (/8 AsIs: s.Mode#1/9 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.LookupName#1/11 AsIs: )/14 } Tile{ AsIs: e.Body#1/15 } Tile{ AsIs: )/18 } Tile{ AsIs: e.OptFuncs-E#1/19 } Tile{ AsIs: (/21 } Tile{ HalfReuse: s.Mode1 #9/17 } Tile{ HalfReuse: s.ScopeClass1 #10/22 AsIs: (/25 AsIs: e.Name#1/23 AsIs: )/26 } # Sentences/29 Tile{ AsIs: </0 } Tile{ HalfReuse: & DropLeft/28 AsIs: e.Sentences#2/2 HalfReuse: s.Drop1 #27/1 } Tile{ HalfReuse: >/4 HalfReuse: )/7 } Tile{ ]] }
  refalrts::alloc_ident(vm, context[29], identifiers[ident_Sentences]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[17], context[9] );
  refalrts::reinit_svar( context[22], context[10] );
  refalrts::reinit_name(context[28], functions[efunc_DropLeft]);
  refalrts::reinit_svar( context[1], context[27] );
  refalrts::reinit_close_call(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::link_brackets( context[21], context[7] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[28], context[1] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[8], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptInfom_Aux_A1("FindOptInfo-Aux=1", COOKIE1_, COOKIE2_, func_gen_FindOptInfom_Aux_A1);


static refalrts::FnResult func_FindOptInfom_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & FindOptInfo-Aux/4 e.OptFuncs-B#1/14 (/20 s.Mode#1/22 s.ScopeClass#1/23 (/26 e.LookupName#1/28 )/27 e.Body#1/18 )/21 e.OptFuncs-E#1/16 (/12 e.Name#1/10 )/13 (/8 e.LookupName#1/6 )/9 s.Drop#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#1 as range 10
  // closed e.LookupName#1 as range 6
  context[14] = 0;
  context[15] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.OptFuncs-E#1 as range 16
    if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[18], context[19] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::repeated_evar_left( vm, context[28], context[29], context[6], context[7], context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.Body#1 as range 18
    //DEBUG: s.Drop#1: 5
    //DEBUG: e.Name#1: 10
    //DEBUG: e.LookupName#1: 6
    //DEBUG: e.OptFuncs-B#1: 14
    //DEBUG: e.OptFuncs-E#1: 16
    //DEBUG: s.Mode#1: 22
    //DEBUG: s.ScopeClass#1: 23
    //DEBUG: e.Body#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LookupName#1/6 {REMOVED TILE} s.Drop#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: & FindOptInfo-Aux=1/0 HalfReuse: (/4 AsIs: e.OptFuncs-B#1/14 HalfReuse: )/20 AsIs: s.Mode#1/22 AsIs: s.ScopeClass#1/23 AsIs: (/26 AsIs: e.LookupName#1/28 AsIs: )/27 } (/31 Tile{ AsIs: e.Body#1/18 } Tile{ AsIs: )/21 } (/32 Tile{ AsIs: e.OptFuncs-E#1/16 } Tile{ AsIs: )/9 } Tile{ AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 HalfReuse: s.Drop1 #5/8 } e.Body#1/18/33 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_open_bracket(vm, context[32]);
    refalrts::copy_evar(vm, context[33], context[34], context[18], context[19]);
    refalrts::reinit_name(context[0], functions[efunc_gen_FindOptInfom_Aux_A1]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[20]);
    refalrts::reinit_svar( context[8], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[32], context[9] );
    refalrts::link_brackets( context[31], context[21] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[4], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[0], context[27] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_FindOptInfom_Aux("FindOptInfo-Aux", COOKIE1_, COOKIE2_, func_FindOptInfom_Aux);


static refalrts::FnResult func_CutSUF(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CutSUF/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CutSUF/4 e.Prefix#1/5 # SUF/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_right( identifiers[ident_SUF], context[5], context[6] );
    if( ! context[7] )
      continue;
    // closed e.Prefix#1 as range 5
    //DEBUG: e.Prefix#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CutSUF/4 {REMOVED TILE} # SUF/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CutSUF/4 e.Prefix#1/2 >/1
  // closed e.Prefix#1 as range 2
  //DEBUG: e.Prefix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CutSUF/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CutSUF("CutSUF", COOKIE1_, COOKIE2_, func_CutSUF);


static refalrts::FnResult func_FindOptimizedCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FindOptimizedCall/4 (/7 e.OptFuncNames#1/5 )/8 e.Expr#1/2 >/1
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
  // closed e.OptFuncNames#1 as range 5
  // closed e.Expr#1 as range 2
  //DEBUG: e.OptFuncNames#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@7/4 AsIs: (/7 AsIs: e.OptFuncNames#1/5 HalfReuse: # None/8 } )/9 Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z7]);
  refalrts::reinit_ident(context[8], identifiers[ident_None]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindOptimizedCall("FindOptimizedCall", COOKIE1_, COOKIE2_, func_FindOptimizedCall);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindOptimizedCall-Term$1=1/4 (/7 e.OptFuncNames#2/5 t.Found#2/9 )/8 e.Expr#2/2 >/1
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
  // closed e.Expr#2 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.OptFuncNames#2 as range 5
  //DEBUG: e.Expr#2: 2
  //DEBUG: t.Found#2: 9
  //DEBUG: e.OptFuncNames#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptFuncNames#2/5 AsIs: t.Found#2/9 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S1A1("FindOptimizedCall-Term$1=1", COOKIE1_, COOKIE2_, func_gen_FindOptimizedCallm_Term_S1A1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FindOptimizedCall-Term$2=1/4 (/7 e.Name#1/5 )/8 (/11 e.OptFuncNames#2/9 t.Found#2/13 )/12 e.Expr#2/2 >/1
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
  // closed e.Name#1 as range 5
  // closed e.Expr#2 as range 2
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.OptFuncNames#2 as range 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Expr#2: 2
  //DEBUG: t.Found#2: 13
  //DEBUG: e.OptFuncNames#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames#2/9 AsIs: t.Found#2/13 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S2A1("FindOptimizedCall-Term$2=1", COOKIE1_, COOKIE2_, func_gen_FindOptimizedCallm_Term_S2A1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & FindOptimizedCall-Term$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 t.new#3/13 )/12 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 9
  do {
    // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.new#6/15 )/8 (/11 e.new#7/17 # None/13 )/12 e.new#5/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[13] ) )
      continue;
    // closed e.new#6 as range 15
    // closed e.new#7 as range 17
    // closed e.new#5 as range 19
    do {
      // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.Name#1/21 )/8 (/11 e.OptFuncNames-B#2/27 (/33 e.Name#1/35 )/34 e.OptFuncNames-E#2/29 # None/13 )/12 e.Arg#2/25 >/1
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      // closed e.Name#1 as range 21
      // closed e.Arg#2 as range 25
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[29] = context[23];
        context[30] = context[24];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[21], context[22], context[31], context[32] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.OptFuncNames-E#2 as range 29
        //DEBUG: e.Name#1: 21
        //DEBUG: e.Arg#2: 25
        //DEBUG: e.OptFuncNames-B#2: 27
        //DEBUG: e.OptFuncNames-E#2: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames-B#2/27 AsIs: (/33 AsIs: e.Name#1/35 AsIs: )/34 AsIs: e.OptFuncNames-E#2/29 HalfReuse: (/13 HalfReuse: # CallBrackets/12 } Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/21 AsIs: )/8 } Tile{ AsIs: e.Arg#2/25 } )/37 )/38 (/39 # TkVariable/40 'e'/41 # DRIVEN/42 0/43 Tile{ HalfReuse: )/1 ]] }
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_ident(vm, context[40], identifiers[ident_TkVariable]);
        refalrts::alloc_char(vm, context[41], 'e');
        refalrts::alloc_ident(vm, context[42], identifiers[ident_DRIVEN]);
        refalrts::alloc_number(vm, context[43], 0UL);
        refalrts::reinit_open_bracket(context[13]);
        refalrts::reinit_ident(context[12], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
        refalrts::reinit_ident(context[7], identifiers[ident_Name]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[39], context[1] );
        refalrts::link_brackets( context[11], context[38] );
        refalrts::link_brackets( context[13], context[37] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[37], context[43] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[23], context[24] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.Name#1/21 )/8 (/11 e.OptFuncNames#2/23 # None/13 )/12 e.Arg#2/25 >/1
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    // closed e.Name#1 as range 21
    // closed e.OptFuncNames#2 as range 23
    // closed e.Arg#2 as range 25
    //DEBUG: e.Name#1: 21
    //DEBUG: e.OptFuncNames#2: 23
    //DEBUG: e.Arg#2: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames#2/23 AsIs: # None/13 AsIs: )/12 } (/27 # ColdCallBrackets/28 Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/21 AsIs: )/8 } Tile{ AsIs: e.Arg#2/25 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_ColdCallBrackets]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[7], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[27], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.Name#1/5 )/8 (/11 e.OptFuncNames#2/9 t.Found#2/13 )/12 e.Arg#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.OptFuncNames#2 as range 9
  // closed e.Arg#2 as range 2
  //DEBUG: t.Found#2: 13
  //DEBUG: e.Name#1: 5
  //DEBUG: e.OptFuncNames#2: 9
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames#2/9 AsIs: t.Found#2/13 AsIs: )/12 } (/15 # CallBrackets/16 Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Arg#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_CallBrackets]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[7], identifiers[ident_Name]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S3B1("FindOptimizedCall-Term$3:1", COOKIE1_, COOKIE2_, func_gen_FindOptimizedCallm_Term_S3B1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindOptimizedCall-Term$4=1/4 (/7 e.OptFuncNames#2/5 t.Found#2/9 )/8 e.Expr#2/2 >/1
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
  // closed e.Expr#2 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.OptFuncNames#2 as range 5
  //DEBUG: e.Expr#2: 2
  //DEBUG: t.Found#2: 9
  //DEBUG: e.OptFuncNames#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptFuncNames#2/5 AsIs: t.Found#2/9 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S4A1("FindOptimizedCall-Term$4=1", COOKIE1_, COOKIE2_, func_gen_FindOptimizedCallm_Term_S4A1);


static refalrts::FnResult func_FindOptimizedCallm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & FindOptimizedCall-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindOptimizedCall-Term/4 (/7 e.new#1/5 t.new#2/11 )/8 t.new#3/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_right( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & FindOptimizedCall-Term/4 (/7 e.new#6/13 # None/11 )/8 (/9 s.new#4/17 e.new#5/15 )/10 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
      continue;
    // closed e.new#6 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.new#5 as range 15
    do {
      // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/18 # None/11 )/8 (/9 # Brackets/17 e.Expr#1/20 )/10 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[17] ) )
        continue;
      // closed e.OptFuncNames#1 as range 18
      // closed e.Expr#1 as range 20
      //DEBUG: e.OptFuncNames#1: 18
      //DEBUG: e.Expr#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Brackets/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & FindOptimizedCall-Term$1=1/9 } Tile{ AsIs: </0 Reuse: & FindOptimizedCall/4 AsIs: (/7 AsIs: e.OptFuncNames#1/18 HalfReuse: )/11 } Tile{ AsIs: e.Expr#1/20 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[9], functions[efunc_gen_FindOptimizedCallm_Term_S1A1]);
      refalrts::update_name(context[4], functions[efunc_FindOptimizedCall]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FindOptimizedCall-Term/4 (/7 e.new#10/18 # None/11 )/8 (/9 s.new#7/17 (/24 e.new#8/22 )/25 e.new#9/20 )/10 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      // closed e.new#10 as range 18
      // closed e.new#8 as range 22
      // closed e.new#9 as range 20
      do {
        // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/26 # None/11 )/8 (/9 # ADT-Brackets/17 (/24 e.Name#1/28 )/25 e.Expr#1/30 )/10 >/1
        context[26] = context[18];
        context[27] = context[19];
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[20];
        context[31] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[17] ) )
          continue;
        // closed e.OptFuncNames#1 as range 26
        // closed e.Name#1 as range 28
        // closed e.Expr#1 as range 30
        //DEBUG: e.OptFuncNames#1: 26
        //DEBUG: e.Name#1: 28
        //DEBUG: e.Expr#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} # None/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptimizedCall-Term$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/8 HalfReuse: </9 HalfReuse: & FindOptimizedCall/17 AsIs: (/24 } Tile{ AsIs: e.OptFuncNames#1/26 } Tile{ AsIs: )/25 AsIs: e.Expr#1/30 HalfReuse: >/10 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_FindOptimizedCallm_Term_S2A1]);
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[17], functions[efunc_FindOptimizedCall]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[9] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[8], context[24] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/26 # None/11 )/8 (/9 # CallBrackets/17 (/24 # Symbol/32 # Name/33 e.Name#1/28 )/25 e.Arg#1/30 )/10 >/1
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[20];
      context[31] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[17] ) )
        continue;
      context[32] = refalrts::ident_left( identifiers[ident_Symbol], context[28], context[29] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::ident_left( identifiers[ident_Name], context[28], context[29] );
      if( ! context[33] )
        continue;
      // closed e.OptFuncNames#1 as range 26
      // closed e.Name#1 as range 28
      // closed e.Arg#1 as range 30
      //DEBUG: e.OptFuncNames#1: 26
      //DEBUG: e.Name#1: 28
      //DEBUG: e.Arg#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} # None/11 {REMOVED TILE} # Symbol/32 # Name/33 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptimizedCall-Term$3:1/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/8 HalfReuse: </9 HalfReuse: & FindOptimizedCall/17 AsIs: (/24 } Tile{ AsIs: e.OptFuncNames#1/26 } Tile{ AsIs: )/25 AsIs: e.Arg#1/30 HalfReuse: >/10 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_FindOptimizedCallm_Term_S3B1]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[17], functions[efunc_FindOptimizedCall]);
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[8], context[24] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/18 # None/11 )/8 (/9 # CallBrackets/17 e.Expr#1/20 )/10 >/1
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[17] ) )
      continue;
    // closed e.OptFuncNames#1 as range 18
    // closed e.Expr#1 as range 20
    //DEBUG: e.OptFuncNames#1: 18
    //DEBUG: e.Expr#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # CallBrackets/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & FindOptimizedCall-Term$4=1/9 } Tile{ AsIs: </0 Reuse: & FindOptimizedCall/4 AsIs: (/7 AsIs: e.OptFuncNames#1/18 HalfReuse: )/11 } Tile{ AsIs: e.Expr#1/20 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[9], functions[efunc_gen_FindOptimizedCallm_Term_S4A1]);
    refalrts::update_name(context[4], functions[efunc_FindOptimizedCall]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/5 t.Found#1/11 )/8 t.AnyTerm#1/9 >/1
  // closed e.OptFuncNames#1 as range 5
  //DEBUG: t.Found#1: 11
  //DEBUG: t.AnyTerm#1: 9
  //DEBUG: e.OptFuncNames#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindOptimizedCall-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptFuncNames#1/5 AsIs: t.Found#1/11 AsIs: )/8 AsIs: t.AnyTerm#1/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindOptimizedCallm_Term("FindOptimizedCall-Term", COOKIE1_, COOKIE2_, func_FindOptimizedCallm_Term);


static refalrts::FnResult func_gen_ApplySolutions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ApplySolutions\1/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 (/15 e.RS#1/13 )/16 t.S#2/17 >/1
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
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.RS#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.RS#1: 13
  //DEBUG: t.S#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & ApplySolution/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/9 AsIs: )/12 HalfReuse: )/15 } (/20 Tile{ AsIs: e.RS#1/13 } Tile{ AsIs: )/16 AsIs: t.S#2/17 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::reinit_name(context[0], functions[efunc_ApplySolution]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::link_brackets( context[4], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplySolutions_L1("ApplySolutions\\1", COOKIE1_, COOKIE2_, func_gen_ApplySolutions_L1);


static refalrts::FnResult func_ApplySolutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ApplySolutions/4 (/7 (/11 e.Left#1/9 )/12 (/15 e.Right#1/13 )/16 )/8 (/19 e.RS#1/17 )/20 e.Solutions#1/2 >/1
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
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 13
  // closed e.RS#1 as range 17
  // closed e.Solutions#1 as range 2
  //DEBUG: e.Left#1: 9
  //DEBUG: e.Right#1: 13
  //DEBUG: e.RS#1: 17
  //DEBUG: e.Solutions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Right#1/13 } Tile{ AsIs: )/8 AsIs: (/19 AsIs: e.RS#1/17 AsIs: )/20 AsIs: e.Solutions#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplySolutions("ApplySolutions", COOKIE1_, COOKIE2_, func_ApplySolutions);


static refalrts::FnResult func_gen_ApplySolution_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ApplySolution=2/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 e.Contrs#3/2 >/1
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
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.Contrs#3 as range 2
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.Contrs#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 } & ApplyContractions/13 Tile{ AsIs: e.Left#1/5 } (/14 e.Contrs#3/2/15 )/17 >/18 )/19 (/20 Tile{ HalfReuse: </8 HalfReuse: & ApplyContractions/11 AsIs: e.Right#1/9 HalfReuse: (/12 AsIs: e.Contrs#3/2 HalfReuse: )/1 } >/21 )/22 )/23 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_ApplyContractions]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_ApplyContractions]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[23] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplySolution_A2("ApplySolution=2", COOKIE1_, COOKIE2_, func_gen_ApplySolution_A2);


static refalrts::FnResult func_gen_ApplySolution_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & ApplySolution=1/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 (/15 e.Contrs#1/13 )/16 e.CallReplacer#2/2 >/1
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
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.Contrs#1 as range 13
  // closed e.CallReplacer#2 as range 2
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.Contrs#1: 13
  //DEBUG: e.CallReplacer#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 } & ApplyContractions/17 Tile{ AsIs: e.Left#1/5 } Tile{ AsIs: (/15 AsIs: e.Contrs#1/13 HalfReuse: (/16 } (/18 # TkVariable/19 'e'/20 # DRIVEN/21 0/22 Tile{ AsIs: )/12 } ':'/23 e.CallReplacer#2/2/24 )/26 )/27 >/28 Tile{ AsIs: )/8 AsIs: (/11 } </29 & ApplyContractions/30 Tile{ AsIs: e.Right#1/9 } (/31 e.Contrs#1/13/32 (/34 (/35 # TkVariable/36 'e'/37 # DRIVEN/38 0/39 )/40 ':'/41 Tile{ AsIs: e.CallReplacer#2/2 } )/42 )/43 >/44 )/45 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_ApplyContractions]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[20], 'e');
  refalrts::alloc_ident(vm, context[21], identifiers[ident_DRIVEN]);
  refalrts::alloc_number(vm, context[22], 0UL);
  refalrts::alloc_char(vm, context[23], ':');
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_ApplyContractions]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[37], 'e');
  refalrts::alloc_ident(vm, context[38], identifiers[ident_DRIVEN]);
  refalrts::alloc_number(vm, context[39], 0UL);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_char(vm, context[41], ':');
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_call(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[11], context[45] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[31], context[43] );
  refalrts::link_brackets( context[34], context[42] );
  refalrts::link_brackets( context[35], context[40] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[15], context[27] );
  refalrts::link_brackets( context[16], context[26] );
  refalrts::link_brackets( context[18], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[42], context[45] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[41] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplySolution_A1("ApplySolution=1", COOKIE1_, COOKIE2_, func_gen_ApplySolution_A1);


static refalrts::FnResult func_ApplySolution(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ApplySolution/4 (/7 (/11 e.Left#1/9 )/12 (/15 e.Right#1/13 )/16 )/8 (/19 e.RS#1/17 )/20 (/23 (/27 e.Contrs#1/25 )/28 (/31 e.Assigns#1/29 )/32 )/24 >/1
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
  context[31] = refalrts::brackets_left( context[29], context[30], context[21], context[22] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 13
  // closed e.RS#1 as range 17
  // closed e.Contrs#1 as range 25
  // closed e.Assigns#1 as range 29
  //DEBUG: e.Left#1: 9
  //DEBUG: e.Right#1: 13
  //DEBUG: e.RS#1: 17
  //DEBUG: e.Contrs#1: 25
  //DEBUG: e.Assigns#1: 29

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/28 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ApplySolution=1/7 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 HalfReuse: (/8 } Tile{ AsIs: e.Contrs#1/25 } Tile{ AsIs: )/20 HalfReuse: </23 HalfReuse: & ApplyAssigns/27 } Tile{ AsIs: e.RS#1/17 } Tile{ AsIs: (/31 AsIs: e.Assigns#1/29 AsIs: )/32 HalfReuse: >/24 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ApplySolution_A1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_open_call(context[23]);
  refalrts::reinit_name(context[27], functions[efunc_ApplyAssigns]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[8], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[31];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[20], context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplySolution("ApplySolution", COOKIE1_, COOKIE2_, func_ApplySolution);


static refalrts::FnResult func_gen_ApplyAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ApplyAssigns\1/4 (/7 e.Assigns#1/5 )/8 t.T#2/9 >/1
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
  // closed e.Assigns#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Assigns#1: 5
  //DEBUG: t.T#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyAssigns-Term/4 } Tile{ AsIs: t.T#2/9 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/5 AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ApplyAssignsm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplyAssigns_L1("ApplyAssigns\\1", COOKIE1_, COOKIE2_, func_gen_ApplyAssigns_L1);


static refalrts::FnResult func_ApplyAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ApplyAssigns/4 e.Expr#1/2 (/7 e.Assigns#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 2
  // closed e.Assigns#1 as range 5
  //DEBUG: e.Expr#1: 2
  //DEBUG: e.Assigns#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
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

static refalrts::NativeReference nat_ref_ApplyAssigns("ApplyAssigns", COOKIE1_, COOKIE2_, func_ApplyAssigns);


static refalrts::FnResult func_ApplyAssignsm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ApplyAssigns-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ApplyAssigns-Term/4 t.new#1/9 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ApplyAssigns-Term/4 (/9 s.new#3/15 e.new#4/13 )/10 (/7 e.new#5/11 )/8 >/1
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
      // </0 & ApplyAssigns-Term/4 (/9 # Brackets/15 e.Expr#1/16 )/10 (/7 e.Assigns#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[15] ) )
        continue;
      // closed e.Expr#1 as range 16
      // closed e.Assigns#1 as range 18
      //DEBUG: e.Expr#1: 16
      //DEBUG: e.Assigns#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </9 HalfReuse: & ApplyAssigns/15 } Tile{ AsIs: e.Expr#1/16 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyAssigns]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyAssigns-Term/4 (/9 # CallBrackets/15 e.Args#1/16 )/10 (/7 e.Assigns#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[15] ) )
        continue;
      // closed e.Args#1 as range 16
      // closed e.Assigns#1 as range 18
      //DEBUG: e.Args#1: 16
      //DEBUG: e.Assigns#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </9 HalfReuse: & ApplyAssigns/15 } Tile{ AsIs: e.Args#1/16 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyAssigns]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyAssigns-Term/4 (/9 # ColdCallBrackets/15 e.Args#1/16 )/10 (/7 e.Assigns#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[15] ) )
        continue;
      // closed e.Args#1 as range 16
      // closed e.Assigns#1 as range 18
      //DEBUG: e.Args#1: 16
      //DEBUG: e.Assigns#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ColdCallBrackets/4 HalfReuse: </9 HalfReuse: & ApplyAssigns/15 } Tile{ AsIs: e.Args#1/16 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ColdCallBrackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyAssigns]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyAssigns-Term/4 (/9 # ClosureBrackets/15 e.Args#1/16 )/10 (/7 e.Assigns#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[15] ) )
        continue;
      // closed e.Args#1 as range 16
      // closed e.Assigns#1 as range 18
      //DEBUG: e.Args#1: 16
      //DEBUG: e.Assigns#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ClosureBrackets/4 HalfReuse: </9 HalfReuse: & ApplyAssigns/15 } Tile{ AsIs: e.Args#1/16 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ClosureBrackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyAssigns]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ApplyAssigns-Term/4 (/9 # ADT-Brackets/15 (/22 e.Name#1/20 )/23 e.Expr#1/16 )/10 (/7 e.Assigns#1/18 )/8 >/1
    context[16] = context[13];
    context[17] = context[14];
    context[18] = context[11];
    context[19] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[15] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Name#1 as range 20
    // closed e.Expr#1 as range 16
    // closed e.Assigns#1 as range 18
    //DEBUG: e.Name#1: 20
    //DEBUG: e.Expr#1: 16
    //DEBUG: e.Assigns#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT-Brackets/15 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & ApplyAssigns/4 } Tile{ AsIs: e.Expr#1/16 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ApplyAssigns]);
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ApplyAssigns-Term/4 t.T#1/9 (/7 e.B#1/13 (/19 e.Asgn#1/17 ':'/23 t.T#1/21 )/20 e.E#1/15 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
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
      context[22] = refalrts::repeated_stvar_right( vm, context[21], context[9], context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_right( ':', context[17], context[18] );
      if( ! context[23] )
        continue;
      // closed e.Asgn#1 as range 17
      // closed e.E#1 as range 15
      //DEBUG: t.T#1: 9
      //DEBUG: e.B#1: 13
      //DEBUG: e.Asgn#1: 17
      //DEBUG: e.E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ApplyAssigns-Term/4 t.T#1/9 (/7 e.B#1/13 (/19 {REMOVED TILE} ':'/23 t.T#1/21 )/20 e.E#1/15 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Asgn#1/17 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplyAssigns-Term/4 t.T#1/9 (/7 e.Assigns#1/5 )/8 >/1
  // closed e.Assigns#1 as range 5
  //DEBUG: t.T#1: 9
  //DEBUG: e.Assigns#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ApplyAssigns-Term/4 {REMOVED TILE} (/7 e.Assigns#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.T#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyAssignsm_Term("ApplyAssigns-Term", COOKIE1_, COOKIE2_, func_ApplyAssignsm_Term);


static refalrts::FnResult func_gen_ApplyContractions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ApplyContractions\1/4 (/7 e.Contrs#1/5 )/8 t.T#2/9 >/1
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
  // closed e.Contrs#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Contrs#1: 5
  //DEBUG: t.T#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContractions-Term/4 } Tile{ AsIs: t.T#2/9 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/5 AsIs: )/8 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ApplyContractionsm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplyContractions_L1("ApplyContractions\\1", COOKIE1_, COOKIE2_, func_gen_ApplyContractions_L1);


static refalrts::FnResult func_ApplyContractions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ApplyContractions/4 e.Expr#1/2 (/7 e.Contrs#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 2
  // closed e.Contrs#1 as range 5
  //DEBUG: e.Expr#1: 2
  //DEBUG: e.Contrs#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
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

static refalrts::NativeReference nat_ref_ApplyContractions("ApplyContractions", COOKIE1_, COOKIE2_, func_ApplyContractions);


static refalrts::FnResult func_gen_ApplyContractionsm_Term_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ApplyContractions-Term$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ApplyContractions-Term$3:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ApplyContractions-Term$3:1/4 (/7 e.OriginArgs#1/9 )/8 e.OriginArgs#1/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.OriginArgs#1 as range 9
    if( ! refalrts::repeated_evar_left( vm, context[13], context[14], context[9], context[10], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.OriginArgs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ApplyContractions-Term$3:1/4 (/7 e.OriginArgs#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # ColdCallBrackets/8 AsIs: e.OriginArgs#1/13 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[8], identifiers[ident_ColdCallBrackets]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplyContractions-Term$3:1/4 (/7 e.OriginArgs#1/5 )/8 e.ChangedArgs#2/2 >/1
  // closed e.OriginArgs#1 as range 5
  // closed e.ChangedArgs#2 as range 2
  //DEBUG: e.OriginArgs#1: 5
  //DEBUG: e.ChangedArgs#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ApplyContractions-Term$3:1/4 (/7 e.OriginArgs#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # CallBrackets/8 AsIs: e.ChangedArgs#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[8], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ApplyContractionsm_Term_S3B1("ApplyContractions-Term$3:1", COOKIE1_, COOKIE2_, func_gen_ApplyContractionsm_Term_S3B1);


static refalrts::FnResult func_ApplyContractionsm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ApplyContractions-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ApplyContractions-Term/4 t.new#1/9 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ApplyContractions-Term/4 (/9 s.new#3/15 e.new#4/13 )/10 (/7 e.new#5/11 )/8 >/1
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
      // </0 & ApplyContractions-Term/4 (/9 # Brackets/15 e.Expr#1/16 )/10 (/7 e.Contrs#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[15] ) )
        continue;
      // closed e.Expr#1 as range 16
      // closed e.Contrs#1 as range 18
      //DEBUG: e.Expr#1: 16
      //DEBUG: e.Contrs#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </9 HalfReuse: & ApplyContractions/15 } Tile{ AsIs: e.Expr#1/16 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyContractions]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyContractions-Term/4 (/9 # CallBrackets/15 e.Args#1/16 )/10 (/7 e.Contrs#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[15] ) )
        continue;
      // closed e.Args#1 as range 16
      // closed e.Contrs#1 as range 18
      //DEBUG: e.Args#1: 16
      //DEBUG: e.Contrs#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </9 HalfReuse: & ApplyContractions/15 } Tile{ AsIs: e.Args#1/16 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyContractions]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyContractions-Term/4 (/9 # ColdCallBrackets/15 e.OriginArgs#1/16 )/10 (/7 e.Contrs#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[15] ) )
        continue;
      // closed e.OriginArgs#1 as range 16
      // closed e.Contrs#1 as range 18
      //DEBUG: e.OriginArgs#1: 16
      //DEBUG: e.Contrs#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContractions-Term$3:1/4 AsIs: (/9 } Tile{ AsIs: e.OriginArgs#1/16 } Tile{ AsIs: )/10 } </20 Tile{ HalfReuse: & ApplyContractions/15 } e.OriginArgs#1/16/21 Tile{ AsIs: (/7 AsIs: e.Contrs#1/18 AsIs: )/8 AsIs: >/1 } >/23 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::copy_evar(vm, context[21], context[22], context[16], context[17]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_gen_ApplyContractionsm_Term_S3B1]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyContractions]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ApplyContractions-Term/4 (/9 # ClosureBrackets/15 e.Args#1/16 )/10 (/7 e.Contrs#1/18 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[15] ) )
        continue;
      // closed e.Args#1 as range 16
      // closed e.Contrs#1 as range 18
      //DEBUG: e.Args#1: 16
      //DEBUG: e.Contrs#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ClosureBrackets/4 HalfReuse: </9 HalfReuse: & ApplyContractions/15 } Tile{ AsIs: e.Args#1/16 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ClosureBrackets]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_ApplyContractions]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ApplyContractions-Term/4 (/9 # ADT-Brackets/15 (/22 e.Name#1/20 )/23 e.Expr#1/16 )/10 (/7 e.Contrs#1/18 )/8 >/1
    context[16] = context[13];
    context[17] = context[14];
    context[18] = context[11];
    context[19] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[15] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Name#1 as range 20
    // closed e.Expr#1 as range 16
    // closed e.Contrs#1 as range 18
    //DEBUG: e.Name#1: 20
    //DEBUG: e.Expr#1: 16
    //DEBUG: e.Contrs#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # ADT-Brackets/15 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & ApplyContractions/4 } Tile{ AsIs: e.Expr#1/16 } Tile{ AsIs: (/7 AsIs: e.Contrs#1/18 AsIs: )/8 AsIs: >/1 } Tile{ AsIs: )/10 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ApplyContractions]);
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ApplyContractions-Term/4 t.Term#1/9 (/7 e.B#1/13 (/19 t.Term#1/21 ':'/23 e.Contr#1/17 )/20 e.E#1/15 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
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
      context[22] = refalrts::repeated_stvar_left( vm, context[21], context[9], context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( ':', context[17], context[18] );
      if( ! context[23] )
        continue;
      // closed e.Contr#1 as range 17
      // closed e.E#1 as range 15
      //DEBUG: t.Term#1: 9
      //DEBUG: e.B#1: 13
      //DEBUG: e.Contr#1: 17
      //DEBUG: e.E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Term#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContractions/4 } e.Contr#1/17/24 Tile{ AsIs: (/7 AsIs: e.B#1/13 AsIs: (/19 AsIs: t.Term#1/21 AsIs: ':'/23 AsIs: e.Contr#1/17 AsIs: )/20 AsIs: e.E#1/15 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[17], context[18]);
      refalrts::update_name(context[4], functions[efunc_ApplyContractions]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplyContractions-Term/4 t.T#1/9 (/7 e.Contrs#1/5 )/8 >/1
  // closed e.Contrs#1 as range 5
  //DEBUG: t.T#1: 9
  //DEBUG: e.Contrs#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ApplyContractions-Term/4 {REMOVED TILE} (/7 e.Contrs#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.T#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContractionsm_Term("ApplyContractions-Term", COOKIE1_, COOKIE2_, func_ApplyContractionsm_Term);


static refalrts::FnResult func_RemainderFuncIncName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & RemainderFuncIncName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & RemainderFuncIncName/4 e.Name#1/9 # SUF/13 e.Suffixes#1/11 '*'/8 s.N#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    context[8] = refalrts::char_right( '*', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[5];
      context[12] = context[6];
      context[13] = refalrts::ident_left( identifiers[ident_SUF], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Suffixes#1 as range 11
      //DEBUG: s.N#1: 7
      //DEBUG: e.Name#1: 9
      //DEBUG: e.Suffixes#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: # SUF/13 AsIs: e.Suffixes#1/11 AsIs: '*'/8 } Tile{ AsIs: </0 Reuse: & Add/4 } Tile{ AsIs: s.N#1/7 } 1/14 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[14], 1UL);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[8] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RemainderFuncIncName/4 e.Name#1/7 # SUF/11 e.Suffixes#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left( identifiers[ident_SUF], context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Suffixes#1 as range 9
      //DEBUG: e.Name#1: 7
      //DEBUG: e.Suffixes#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: # SUF/11 AsIs: e.Suffixes#1/9 HalfReuse: '*'/1 } Tile{ HalfReuse: 1/4 } Tile{ ]] }
      refalrts::reinit_char(context[1], '*');
      refalrts::reinit_number(context[4], 1UL);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemainderFuncIncName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: # SUF/0 HalfReuse: '*'/4 } Tile{ HalfReuse: 1/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_SUF]);
  refalrts::reinit_char(context[4], '*');
  refalrts::reinit_number(context[1], 1UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemainderFuncIncName("RemainderFuncIncName", COOKIE1_, COOKIE2_, func_RemainderFuncIncName);


static refalrts::FnResult func_gen_OptTreem_Drivem_CleanupColdCalls_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & OptTree-Drive-CleanupColdCalls\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive-CleanupColdCalls\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Drive-CleanupColdCalls\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 # Sentences/15 e.Body#2/7 )/6 >/1
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
    context[15] = refalrts::ident_left( identifiers[ident_Sentences], context[7], context[8] );
    if( ! context[15] )
      continue;
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: # Sentences/15 } Tile{ AsIs: </0 Reuse: & CleanupCold-Body/4 } Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CleanupColdm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Drive-CleanupColdCalls\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Drive-CleanupColdCalls\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Drivem_CleanupColdCalls_L1("OptTree-Drive-CleanupColdCalls\\1", COOKIE1_, COOKIE2_, func_gen_OptTreem_Drivem_CleanupColdCalls_L1);


static refalrts::FnResult func_OptTreem_Drivem_CleanupColdCalls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-Drive-CleanupColdCalls/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Drivem_CleanupColdCalls("OptTree-Drive-CleanupColdCalls", 0U, 0U, func_OptTreem_Drivem_CleanupColdCalls);


static refalrts::FnResult func_CleanupColdm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CleanupCold-Body/4 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sentences#1 as range 2
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@7/4 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Body("CleanupCold-Body", COOKIE1_, COOKIE2_, func_CleanupColdm_Body);


static refalrts::FnResult func_gen_CleanupColdm_Sentence_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CleanupCold-Sentence\1/4 (/7 # Condition/9 (/12 e.Name#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Pattern#2/18 )/21 )/8 >/1
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
  // closed e.Name#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Pattern#2 as range 18
  //DEBUG: e.Name#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Pattern#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Condition/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: </0 Reuse: & CleanupCold-Result/4 } Tile{ AsIs: e.Result#2/14 } Tile{ AsIs: >/1 } Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.Pattern#2/18 AsIs: )/21 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Result]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CleanupColdm_Sentence_L1("CleanupCold-Sentence\\1", COOKIE1_, COOKIE2_, func_gen_CleanupColdm_Sentence_L1);


static refalrts::FnResult func_CleanupColdm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CleanupCold-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/15 e.Result#1/13 )/16 )/8 >/1
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
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 13
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map@8/4 } Tile{ AsIs: e.Conditions#1/5 } >/17 (/18 </19 Tile{ HalfReuse: & CleanupCold-Result/15 AsIs: e.Result#1/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::reinit_name(context[15], functions[efunc_CleanupColdm_Result]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Sentence("CleanupCold-Sentence", COOKIE1_, COOKIE2_, func_CleanupColdm_Sentence);


static refalrts::FnResult func_CleanupColdm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & CleanupCold-Result/4 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result#1 as range 2
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@9/4 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Result("CleanupCold-Result", COOKIE1_, COOKIE2_, func_CleanupColdm_Result);


static refalrts::FnResult func_CleanupColdm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CleanupCold-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupCold-Term/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CleanupCold-Term/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & CleanupCold-Term/4 (/5 # Brackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CleanupCold-Term/4 (/5 # ADT-Brackets/9 (/14 e.Name#1/12 )/15 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#1 as range 12
      // closed e.Expr#1 as range 10
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & CleanupCold-Result/4 } Tile{ AsIs: e.Expr#1/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CleanupCold-Term/4 (/5 # CallBrackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CleanupCold-Term/4 (/5 # ColdCallBrackets/9 e.Expr#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Expr#1 as range 10
    //DEBUG: e.Expr#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupCold-Term/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupCold-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Term("CleanupCold-Term", COOKIE1_, COOKIE2_, func_CleanupColdm_Term);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
      // </0 & Map@1/4 (/7 s.Label#4/13 e.0#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.0#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Label#4: 13
      //DEBUG: e.0#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=3\1=1/4 AsIs: (/7 } Tile{ AsIs: e.0#0/11 } )/14 '$'/15 </16 & Upper/17 </18 & Explode/19 Tile{ AsIs: s.Label#4/13 } >/20 >/21 >/22 </23 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::alloc_char(vm, context[15], '$');
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_Upper]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_Explode]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3L1A1]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[20], context[23] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[14], context[19] );
      res = refalrts::splice_evar( res, context[11], context[12] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateDriveInfo=3\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & UpdateDriveInfo=3\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A3L1]);
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
  // </0 & MapAccum@1/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
    // </0 & MapAccum@1/4 (/7 e.OptNames#3/11 )/8 t.Acc#1/9 e.Tail#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.OptNames#3 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.OptNames#3: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.OptNames#3/11 AsIs: )/8 AsIs: t.Acc#1/9 } (/15 )/16 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
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

  // </0 & MapAccum@1/4 (/7 e.OptNames#3/5 )/8 t.accum#0/9 e.items#0/2 >/1
  // closed e.OptNames#3 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 9
  //DEBUG: e.OptNames#3: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 HalfReuse: [*]/7 } & UpdateDriveInfo=3\2/11 (/12 Tile{ AsIs: e.OptNames#3/5 } )/13 Tile{ HalfReuse: {*}/8 AsIs: t.accum#0/9 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_UpdateDriveInfo_A3L2]);
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
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Acc#1/5 } (/9 )/10 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
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

  // </0 & MapAccum@2/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & UpdateDriveInfo=1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A1L1]);
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Acc#1/5 } (/9 )/10 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
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

  // </0 & MapAccum@3/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & DriveInlineOptimizerTick$2=4\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A4L1]);
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

  // </0 & MapAccum@4/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & DriveInlineOptimizerTick$2=3\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A3L1]);
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & MapAccum@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@5/4 s.new#1/5 t.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & MapAccum@5/4 s.Mode#2/5 t.Acc#1/6 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    // closed e.Tail#1 as range 8
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.Mode#2: 5
    //DEBUG: e.Tail#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 AsIs: s.Mode#2/5 AsIs: t.Acc#1/6 } (/10 )/11 Tile{ AsIs: e.Tail#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@5/4 s.Mode#2/5 t.accum#0/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 6
  //DEBUG: s.Mode#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 } [*]/8 & DriveInlineOptimizerTick$2=2\1/9 Tile{ AsIs: s.Mode#2/5 } {*}/10 Tile{ AsIs: t.accum#0/6 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_DriveInlineOptimizerTick_S2A2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z5("MapAccum@5", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z5);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@1/4 HalfReuse: (/5 } Tile{ AsIs: e.Tail#1/13 } )/15 </16 & IsPassiveCall-Aux/17 Tile{ AsIs: t.Next#1/9 } >/18 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[15]);
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_IsPassiveCallm_Aux]);
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z1]);
        refalrts::reinit_open_bracket(context[5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[16] );
        refalrts::link_brackets( context[5], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@1/4 # False/5 t.Next#1/9 e.Tail#1/13 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
        continue;
      // closed e.Tail#1 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Next#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: # False/5 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Reduce@1/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1@1/14 (/15 Tile{ AsIs: e.Tail#1/11 } )/16 Tile{ AsIs: </0 Reuse: & IsPassiveCall\1*2/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1Z1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_IsPassiveCall_L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
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
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & IsPassiveCall\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_IsPassiveCall_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
      // </0 & Map@2/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & Map@2/4 (/7 # TkVariable/13 s.new#6/18 e.new#7/14 )/8 e.new#8/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
          continue;
        // closed e.new#8 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#7 as range 14
        do {
          // </0 & Map@2/4 (/7 # TkVariable/13 'e'/18 e.1#0/19 )/8 e.Tail#1/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::char_term( 'e', context[18] ) )
            continue;
          // closed e.1#0 as range 19
          // closed e.Tail#1 as range 21
          //DEBUG: e.1#0: 19
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: 'e'/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[13]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[13], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[13], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 # TkVariable/13 't'/18 e.1#0/19 )/8 e.Tail#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::char_term( 't', context[18] ) )
          continue;
        // closed e.1#0 as range 19
        // closed e.Tail#1 as range 21
        //DEBUG: e.1#0: 19
        //DEBUG: e.Tail#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: 't'/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[13], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
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

      // </0 & Map@2/4 (/7 # ADT-Brackets/13 (/20 e.2#0/18 )/21 e.1#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.2#0 as range 18
      // closed e.1#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.2#0: 18
      //DEBUG: e.1#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} e.2#0/18 )/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.1#0/14 } Tile{ HalfReuse: >/13 HalfReuse: </20 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
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
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & IsLexpr-Aux$2\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_IsLexprm_Aux_S2L1]);
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
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@2/4 s.new#1/5 t.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce@2/4 s.new#4/5 t.new#5/6 t.new#6/10 e.new#7/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[11] = refalrts::tvar_left( context[10], context[8], context[9] );
    if( ! context[11] )
      continue;
    // closed e.new#7 as range 8
    do {
      // </0 & Reduce@2/4 s.Mode#1/5 (/6 t.#0/24 (/22 e.2#0/20 )/23 (/18 e.4#0/16 )/19 )/7 t.Next#1/10 e.Tail#1/12 >/1
      context[12] = context[8];
      context[13] = context[9];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[6] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_right( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_right( context[20], context[21], context[14], context[15] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      // closed e.2#0 as range 20
      // closed e.4#0 as range 16
      // closed e.Tail#1 as range 12
      context[25] = refalrts::tvar_left( context[24], context[14], context[15] );
      if( ! context[25] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.Next#1: 10
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.2#0: 20
      //DEBUG: e.4#0: 16
      //DEBUG: e.Tail#1: 12
      //DEBUG: t.#0: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@2/4 AsIs: s.Mode#1/5 AsIs: (/6 } Tile{ AsIs: e.Tail#1/12 } )/26 </27 & OptFunction=1\1=1/28 Tile{ AsIs: (/22 AsIs: e.2#0/20 AsIs: )/23 AsIs: (/18 AsIs: e.4#0/16 AsIs: )/19 HalfReuse: </7 } & OptSentence/29 Tile{ AsIs: t.Next#1/10 } Tile{ AsIs: t.#0/24 } s.Mode#1/5/30 >/31 >/32 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_OptFunction_A1L1A1]);
      refalrts::alloc_name(vm, context[29], functions[efunc_OptSentence]);
      refalrts::copy_stvar(vm, context[30], context[5]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z2]);
      refalrts::reinit_open_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[6], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[22], context[7] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 s.Mode#1/5 t.Acc#1/6 t.Next#1/10 e.Tail#1/12 >/1
    context[12] = context[8];
    context[13] = context[9];
    // closed e.Tail#1 as range 12
    //DEBUG: t.Acc#1: 6
    //DEBUG: t.Next#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & Reduce$1=1@2/15 s.Mode#1/5/16 (/17 Tile{ AsIs: e.Tail#1/12 } )/18 Tile{ AsIs: </0 Reuse: & OptFunction=1\1*1/4 AsIs: s.Mode#1/5 AsIs: t.Acc#1/6 AsIs: t.Next#1/10 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Reduce_S1A1Z2]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_OptFunction_A1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@2/4 s.Mode#1/5 t.Acc#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.Mode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@2/4 s.Mode#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 s.Mode#1/5 t.accum#0/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@0/4 } [*]/8 & OptFunction=1\1/9 Tile{ AsIs: s.Mode#1/5 } {*}/10 Tile{ AsIs: t.accum#0/6 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_OptFunction_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_MapAccum_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MapAccum@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@6/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & MapAccum@6/4 (/7 e.Left#1/15 )/8 (/11 e.Right#1/17 )/12 t.Acc#1/13 e.Tail#1/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Left#1 as range 15
    // closed e.Right#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.Left#1: 15
    //DEBUG: e.Right#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@6/4 AsIs: (/7 AsIs: e.Left#1/15 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/17 AsIs: )/12 AsIs: t.Acc#1/13 } (/21 )/22 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@6/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 t.accum#0/13 e.items#0/2 >/1
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 13
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & MapAccum@0/16 Tile{ HalfReuse: [*]/0 Reuse: & OptSentence-Aux\1/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/9 AsIs: )/12 } {*}/17 Tile{ AsIs: t.accum#0/13 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_Aux_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@7/4 AsIs: t.Acc#1/5 } (/9 )/10 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z7]);
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

  // </0 & MapAccum@7/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & FindOptimizedCall-Term/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_FindOptimizedCallm_Term]);
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
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & Map@3/4 (/7 e.Left#1/17 )/8 (/11 e.Right#1/19 )/12 (/15 e.RS#1/21 )/16 t.Next#1/25 e.Tail#1/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 19
    // closed e.RS#1 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.Tail#1 as range 23
    //DEBUG: e.Left#1: 17
    //DEBUG: e.Right#1: 19
    //DEBUG: e.RS#1: 21
    //DEBUG: t.Next#1: 25
    //DEBUG: e.Tail#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & ApplySolution/28 (/29 (/30 e.Left#1/17/31 )/33 (/34 e.Right#1/19/35 )/37 )/38 (/39 e.RS#1/21/40 )/42 Tile{ AsIs: t.Next#1/25 } >/43 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: (/7 AsIs: e.Left#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.RS#1/21 AsIs: )/16 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_ApplySolution]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::copy_evar(vm, context[31], context[32], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::copy_evar(vm, context[35], context[36], context[19], context[20]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_evar(vm, context[40], context[41], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[29], context[38] );
    refalrts::link_brackets( context[34], context[37] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[42] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 (/7 e.Left#1/17 )/8 (/11 e.Right#1/19 )/12 (/15 e.RS#1/21 )/16 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Left#1 as range 17
    // closed e.Right#1 as range 19
    // closed e.RS#1 as range 21
    //DEBUG: e.Left#1: 17
    //DEBUG: e.Right#1: 19
    //DEBUG: e.RS#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 (/7 e.Left#1/17 )/8 (/11 e.Right#1/19 )/12 (/15 e.RS#1/21 )/16 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 (/15 e.RS#1/13 )/16 e.items#0/2 >/1
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.RS#1 as range 13
  // closed e.items#0 as range 2
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.RS#1: 13
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 & Map@0/18 Tile{ HalfReuse: [*]/0 Reuse: & ApplySolutions\1/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.RS#1/13 AsIs: )/16 } {*}/19 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ApplySolutions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@4/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@4/4 (/7 e.Assigns#1/9 )/8 t.Next#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Assigns#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.Assigns#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & ApplyAssigns-Term/16 Tile{ AsIs: t.Next#1/13 } (/17 e.Assigns#1/9/18 )/20 >/21 Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: (/7 AsIs: e.Assigns#1/9 AsIs: )/8 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_ApplyAssignsm_Term]);
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
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 (/7 e.Assigns#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Assigns#1 as range 9
    //DEBUG: e.Assigns#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 (/7 e.Assigns#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 (/7 e.Assigns#1/5 )/8 e.items#0/2 >/1
  // closed e.Assigns#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.Assigns#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & ApplyAssigns\1/4 AsIs: (/7 AsIs: e.Assigns#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ApplyAssigns_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@5/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@5/4 (/7 e.Contrs#1/9 )/8 t.Next#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Contrs#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.Contrs#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & ApplyContractions-Term/16 Tile{ AsIs: t.Next#1/13 } (/17 e.Contrs#1/9/18 )/20 >/21 Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: (/7 AsIs: e.Contrs#1/9 AsIs: )/8 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_ApplyContractionsm_Term]);
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
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 (/7 e.Contrs#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Contrs#1 as range 9
    //DEBUG: e.Contrs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 (/7 e.Contrs#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 (/7 e.Contrs#1/5 )/8 e.items#0/2 >/1
  // closed e.Contrs#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.Contrs#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & ApplyContractions\1/4 AsIs: (/7 AsIs: e.Contrs#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ApplyContractions_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@6/4 (/7 # Function/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 # Sentences/19 e.4#0/11 )/8 e.Tail#1/9 >/1
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
      context[19] = refalrts::ident_left( identifiers[ident_Sentences], context[11], context[12] );
      if( ! context[19] )
        continue;
      // closed e.3#0 as range 15
      // closed e.4#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.4#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 AsIs: # Sentences/19 } Tile{ AsIs: </0 Reuse: & CleanupCold-Body/4 } Tile{ AsIs: e.4#0/11 } >/20 )/21 </22 Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_CleanupColdm_Body]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@6/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & OptTree-Drive-CleanupColdCalls\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Drivem_CleanupColdCalls_L1]);
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


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@7/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CleanupCold-Sentence/4 AsIs: t.Next#1/7 } >/9 </10 & Map@7/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z7]);
    refalrts::update_name(context[4], functions[efunc_CleanupColdm_Sentence]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CleanupCold-Sentence/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Sentence]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
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
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@8/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@8/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 e.6#0/22 )/25 )/8 e.Tail#1/9 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Condition/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 AsIs: (/20 } </26 & CleanupCold-Result/27 Tile{ AsIs: e.4#0/18 } >/28 Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.6#0/22 AsIs: )/25 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@8/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_CleanupColdm_Result]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[8] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@8/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CleanupCold-Sentence\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@8/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z8]);
    refalrts::update_name(context[4], functions[efunc_gen_CleanupColdm_Sentence_L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CleanupCold-Sentence\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CleanupColdm_Sentence_L1]);
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@9/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CleanupCold-Term/4 AsIs: t.Next#1/7 } >/9 </10 & Map@9/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z9]);
    refalrts::update_name(context[4], functions[efunc_CleanupColdm_Term]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CleanupCold-Term/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Term]);
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
  // </0 & DoMapAccum@1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
  // closed e.new#3 as range 11
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum@1/4 (/7 e.OptNames#3/15 )/8 t.Acc#1/9 (/13 e.Scanned#1/17 )/14 t.Next#1/21 e.Tail#1/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.OptNames#3 as range 15
    // closed e.Scanned#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.OptNames#3: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.OptNames#3/15 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned#1/17 AsIs: )/14 } (/23 Tile{ AsIs: e.Tail#1/19 } )/24 </25 & UpdateDriveInfo=3\2/26 (/27 e.OptNames#3/15/28 )/30 Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/21 } >/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_UpdateDriveInfo_A3L2]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[27], context[30] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[24], context[30] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 (/7 e.OptNames#3/15 )/8 t.Acc#1/9 (/13 e.Scanned#1/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.OptNames#3 as range 15
    // closed e.Scanned#1 as range 17
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.OptNames#3: 15
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 (/7 e.OptNames#3/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 (/7 e.OptNames#3/5 )/8 t.acc#0/9 (/13 e.scanned#0/11 )/14 e.items#0/2 >/1
  // closed e.OptNames#3 as range 5
  // closed e.scanned#0 as range 11
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 9
  //DEBUG: e.OptNames#3: 5
  //DEBUG: e.scanned#0: 11
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & UpdateDriveInfo=3\2/15 (/16 Tile{ AsIs: e.OptNames#3/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc#0/9 AsIs: (/13 AsIs: e.scanned#0/11 AsIs: )/14 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_UpdateDriveInfo_A3L2]);
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
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


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
          // </0 & DoMapAccum@2/4 (/5 e.#0/32 )/6 (/9 e.Scanned#1/34 )/10 (/15 # Drive/31 e.1#0/36 )/16 e.Tail#1/38 >/1
          context[32] = context[23];
          context[33] = context[24];
          context[34] = context[25];
          context[35] = context[26];
          context[36] = context[29];
          context[37] = context[30];
          context[38] = context[27];
          context[39] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_Drive], context[31] ) )
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
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e.#0/32 HalfReuse: (/6 HalfReuse: # Drive/9 } Tile{ AsIs: e.1#0/36 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/34 } Tile{ AsIs: )/16 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
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
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[10], context[15] );
          res = refalrts::splice_evar( res, context[31], context[31] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@2/4 (/5 e.#0/32 )/6 (/9 e.Scanned#1/34 )/10 (/15 # Inline/31 e.1#0/36 )/16 e.Tail#1/38 >/1
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[27];
        context[39] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_Inline], context[31] ) )
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
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: (/5 AsIs: e.#0/32 HalfReuse: (/6 HalfReuse: # Inline/9 } Tile{ AsIs: e.1#0/36 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Scanned#1/34 } Tile{ AsIs: )/16 AsIs: e.Tail#1/38 AsIs: >/1 ]] }
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
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_evar( res, context[31], context[31] );
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
      res = refalrts::splice_evar( res, context[10], context[10] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & UpdateDriveInfo=1\1*3/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_UpdateDriveInfo_A1L1D3]);
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
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[21], context[21] );
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & UpdateDriveInfo=1\1/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@3/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & DriveInlineOptimizerTick$2=4\1/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DriveInlineOptimizerTick_S2A4L1]);
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
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & DriveInlineOptimizerTick$2=4\1/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A4L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
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
    // </0 & DoMapAccum@4/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 t.Next#1/15 e.Tail#1/13 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@4/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & DriveInlineOptimizerTick$2=3\1/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DriveInlineOptimizerTick_S2A3L1]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & DriveInlineOptimizerTick$2=3\1/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A3L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
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
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoMapAccum@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@5/4 s.new#1/5 t.new#2/6 (/10 e.new#3/8 )/11 e.new#4/2 >/1
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
    // </0 & DoMapAccum@5/4 s.new#5/5 t.new#6/6 (/10 e.new#9/12 )/11 t.new#7/16 e.new#8/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.new#9 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.new#8 as range 14
    do {
      // </0 & DoMapAccum@5/4 s.Mode#2/5 t.Acc#1/6 (/10 e.Scanned#1/18 )/11 (/16 # Function/24 s.ScopeClass#3/25 (/28 e.3#0/26 )/29 # Sentences/30 e.4#0/22 )/17 e.Tail#1/20 >/1
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = 0;
      context[23] = 0;
      if( ! refalrts::brackets_term( context[22], context[23], context[16] ) )
        continue;
      context[24] = refalrts::ident_left( identifiers[ident_Function], context[22], context[23] );
      if( ! context[24] )
        continue;
      // closed e.Scanned#1 as range 18
      // closed e.Tail#1 as range 20
      if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left( identifiers[ident_Sentences], context[22], context[23] );
      if( ! context[30] )
        continue;
      // closed e.3#0 as range 26
      // closed e.4#0 as range 22
      //DEBUG: t.Acc#1: 6
      //DEBUG: s.Mode#2: 5
      //DEBUG: e.Scanned#1: 18
      //DEBUG: e.Tail#1: 20
      //DEBUG: s.ScopeClass#3: 25
      //DEBUG: e.3#0: 26
      //DEBUG: e.4#0: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@5/4 AsIs: s.Mode#2/5 } (/31 Tile{ AsIs: e.Scanned#1/18 } )/32 (/33 Tile{ AsIs: e.Tail#1/20 } )/34 </35 Tile{ HalfReuse: & OptFunction/11 AsIs: (/16 AsIs: # Function/24 AsIs: s.ScopeClass#3/25 AsIs: (/28 AsIs: e.3#0/26 AsIs: )/29 AsIs: # Sentences/30 AsIs: e.4#0/22 AsIs: )/17 } Tile{ AsIs: t.Acc#1/6 HalfReuse: s.Mode2 #5/10 } >/36 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z5]);
      refalrts::reinit_name(context[11], functions[efunc_OptFunction]);
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@5/4 s.Mode#2/5 t.Acc#1/6 (/10 e.Scanned#1/18 )/11 t.Next#1/16 e.Tail#1/20 >/1
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    // closed e.Scanned#1 as range 18
    // closed e.Tail#1 as range 20
    //DEBUG: t.Acc#1: 6
    //DEBUG: t.Next#1: 16
    //DEBUG: s.Mode#2: 5
    //DEBUG: e.Scanned#1: 18
    //DEBUG: e.Tail#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@5/4 AsIs: s.Mode#2/5 AsIs: t.Acc#1/6 AsIs: (/10 } Tile{ AsIs: e.Scanned#1/18 } Tile{ AsIs: t.Next#1/16 } Tile{ AsIs: )/11 } Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@5/4 s.Mode#2/5 t.Acc#1/6 (/10 e.Scanned#1/12 )/11 >/1
    context[12] = context[8];
    context[13] = context[9];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 12
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.Mode#2: 5
    //DEBUG: e.Scanned#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@5/4 s.Mode#2/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@5/4 s.Mode#2/5 t.acc#0/6 (/10 e.scanned#0/8 )/11 e.items#0/2 >/1
  // closed e.scanned#0 as range 8
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 6
  //DEBUG: s.Mode#2: 5
  //DEBUG: e.scanned#0: 8
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } [*]/12 & DriveInlineOptimizerTick$2=2\1/13 Tile{ AsIs: s.Mode#2/5 } {*}/14 Tile{ AsIs: t.acc#0/6 AsIs: (/10 AsIs: e.scanned#0/8 AsIs: )/11 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DriveInlineOptimizerTick_S2A2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z5("DoMapAccum@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z5);


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
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & IsPassiveCall\1/4 AsIs: (/7 AsIs: e.Tail0#1/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_IsPassiveCall_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z1("Reduce$1=1@1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z1);


static refalrts::FnResult func_gen_Reduce_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Reduce$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@2/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & Reduce$1=1@2/4 s.Mode#1/5 (/8 e.Tail0#1/10 )/9 t.Acc#2/14 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Tail0#1 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tail0#1: 10
    //DEBUG: t.Acc#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@2/4 AsIs: s.Mode#1/5 } Tile{ AsIs: t.Acc#2/14 } Tile{ AsIs: e.Tail0#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@2/4 s.Mode#1/5 (/8 e.Tail0#1/6 )/9 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 6
  // closed e.dyn#0 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tail0#1: 6
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@0/4 } [*]/10 & OptFunction=1\1/11 Tile{ AsIs: s.Mode#1/5 } {*}/12 Tile{ AsIs: (/8 AsIs: e.Tail0#1/6 AsIs: )/9 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_OptFunction_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z2("Reduce$1=1@2", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & DoMapAccum@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@6/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 e.new#5/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  // closed e.new#5 as range 2
  do {
    // </0 & DoMapAccum@6/4 (/7 e.new#9/19 )/8 (/11 e.new#10/21 )/12 t.new#6/13 (/17 e.new#11/23 )/18 t.new#7/27 e.new#8/25 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[2];
    context[26] = context[3];
    // closed e.new#9 as range 19
    // closed e.new#10 as range 21
    // closed e.new#11 as range 23
    context[28] = refalrts::tvar_left( context[27], context[25], context[26] );
    if( ! context[28] )
      continue;
    // closed e.new#8 as range 25
    do {
      // </0 & DoMapAccum@6/4 (/7 e.Left#1/29 )/8 (/11 e.Right#1/31 )/12 (/13 e.#0/37 )/14 (/17 e.Scanned#1/33 )/18 (/27 (/43 e.2#0/41 )/44 e.3#0/39 (/47 e.4#0/45 )/48 )/28 e.Tail#1/35 >/1
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
      if( ! refalrts::brackets_term( context[37], context[38], context[13] ) )
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
      // closed e.Left#1 as range 29
      // closed e.Right#1 as range 31
      // closed e.#0 as range 37
      // closed e.Scanned#1 as range 33
      // closed e.2#0 as range 41
      // closed e.3#0 as range 39
      // closed e.4#0 as range 45
      // closed e.Tail#1 as range 35
      //DEBUG: e.Left#1: 29
      //DEBUG: e.Right#1: 31
      //DEBUG: e.#0: 37
      //DEBUG: e.Scanned#1: 33
      //DEBUG: e.2#0: 41
      //DEBUG: e.3#0: 39
      //DEBUG: e.4#0: 45
      //DEBUG: e.Tail#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@6/4 AsIs: (/7 AsIs: e.Left#1/29 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/31 AsIs: )/12 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/33 } Tile{ AsIs: )/48 HalfReuse: (/28 AsIs: e.Tail#1/35 HalfReuse: )/1 } (/49 Tile{ AsIs: e.#0/37 } Tile{ AsIs: e.4#0/45 } )/50 </51 & ApplySolutions/52 (/53 (/54 e.Left#1/29/55 Tile{ AsIs: )/14 AsIs: (/17 } e.Right#1/31/57 Tile{ AsIs: )/18 HalfReuse: )/27 AsIs: (/43 AsIs: e.2#0/41 AsIs: )/44 AsIs: e.3#0/39 HalfReuse: >/47 } >/59 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_name(vm, context[52], functions[efunc_ApplySolutions]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::copy_evar(vm, context[55], context[56], context[29], context[30]);
      refalrts::copy_evar(vm, context[57], context[58], context[31], context[32]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z6]);
      refalrts::reinit_open_bracket(context[28]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[27]);
      refalrts::reinit_close_call(context[47]);
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[51] );
      refalrts::link_brackets( context[43], context[44] );
      refalrts::link_brackets( context[53], context[27] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[54], context[14] );
      refalrts::link_brackets( context[49], context[50] );
      refalrts::link_brackets( context[28], context[1] );
      refalrts::link_brackets( context[13], context[48] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[59], context[59] );
      res = refalrts::splice_evar( res, context[18], context[47] );
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[50], context[54] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[49], context[49] );
      res = refalrts::splice_evar( res, context[48], context[1] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@6/4 (/7 e.Left#1/29 )/8 (/11 e.Right#1/31 )/12 t.Acc#1/13 (/17 e.Scanned#1/33 )/18 t.Next#1/27 e.Tail#1/35 >/1
    context[29] = context[19];
    context[30] = context[20];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = context[23];
    context[34] = context[24];
    context[35] = context[25];
    context[36] = context[26];
    // closed e.Left#1 as range 29
    // closed e.Right#1 as range 31
    // closed e.Scanned#1 as range 33
    // closed e.Tail#1 as range 35
    //DEBUG: t.Acc#1: 13
    //DEBUG: t.Next#1: 27
    //DEBUG: e.Left#1: 29
    //DEBUG: e.Right#1: 31
    //DEBUG: e.Scanned#1: 33
    //DEBUG: e.Tail#1: 35

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@6/4 AsIs: (/7 AsIs: e.Left#1/29 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/31 AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.Scanned#1/33 AsIs: )/18 } (/37 Tile{ AsIs: e.Tail#1/35 } )/38 </39 & OptSentence-Aux\1*1/40 (/41 e.Left#1/29/42 )/44 (/45 e.Right#1/31/46 )/48 Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/27 } >/49 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_gen_OptSentencem_Aux_L1D1]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::copy_evar(vm, context[42], context[43], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::copy_evar(vm, context[46], context[47], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[45], context[48] );
    refalrts::link_brackets( context[41], context[44] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[49], context[49] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[38], context[48] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@6/4 (/7 e.Left#1/19 )/8 (/11 e.Right#1/21 )/12 t.Acc#1/13 (/17 e.Scanned#1/23 )/18 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[15];
    context[24] = context[16];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Left#1 as range 19
    // closed e.Right#1 as range 21
    // closed e.Scanned#1 as range 23
    //DEBUG: t.Acc#1: 13
    //DEBUG: e.Left#1: 19
    //DEBUG: e.Right#1: 21
    //DEBUG: e.Scanned#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@6/4 (/7 e.Left#1/19 )/8 (/11 e.Right#1/21 )/12 {REMOVED TILE} (/17 {REMOVED TILE} )/18 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@6/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 t.acc#0/13 (/17 e.scanned#0/15 )/18 e.items#0/2 >/1
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.scanned#0 as range 15
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 13
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.scanned#0: 15
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & DoMapAccum@0/20 Tile{ HalfReuse: [*]/0 Reuse: & OptSentence-Aux\1/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/9 } )/21 Tile{ HalfReuse: {*}/12 AsIs: t.acc#0/13 AsIs: (/17 AsIs: e.scanned#0/15 AsIs: )/18 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_Aux_L1]);
  refalrts::reinit_unwrapped_closure(context[12], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z6("DoMapAccum@6", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z6);


static refalrts::FnResult func_gen_DoMapAccum_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@7/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoMapAccum@7/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 t.Next#1/15 e.Tail#1/13 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@7/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & FindOptimizedCall-Term/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_FindOptimizedCallm_Term]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@7/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@7/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
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

  // </0 & DoMapAccum@7/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & FindOptimizedCall-Term/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_FindOptimizedCallm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z7("DoMapAccum@7", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z7);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 (/7 e.OptNames#3/17 )/8 (/11 e.Scanned0#1/19 )/12 (/15 e.Tail0#1/21 )/16 t.Acc#2/25 e.StepScanned#2/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.OptNames#3 as range 17
    // closed e.Scanned0#1 as range 19
    // closed e.Tail0#1 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned#2 as range 23
    //DEBUG: e.OptNames#3: 17
    //DEBUG: e.Scanned0#1: 19
    //DEBUG: e.Tail0#1: 21
    //DEBUG: t.Acc#2: 25
    //DEBUG: e.StepScanned#2: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.OptNames#3/17 AsIs: )/8 } Tile{ AsIs: t.Acc#2/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0#1/19 } Tile{ AsIs: e.StepScanned#2/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.OptNames#3/5 )/8 (/11 e.Scanned0#1/9 )/12 (/15 e.Tail0#1/13 )/16 e.dyn#0/2 >/1
  // closed e.OptNames#3 as range 5
  // closed e.Scanned0#1 as range 9
  // closed e.Tail0#1 as range 13
  // closed e.dyn#0 as range 2
  //DEBUG: e.OptNames#3: 5
  //DEBUG: e.Scanned0#1: 9
  //DEBUG: e.Tail0#1: 13
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & UpdateDriveInfo=3\2/17 (/18 Tile{ AsIs: e.OptNames#3/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0#1/13 AsIs: )/16 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_UpdateDriveInfo_A3L2]);
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
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
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
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & UpdateDriveInfo=1\1/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateDriveInfo_A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
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
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & DriveInlineOptimizerTick$2=4\1/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A4L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
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
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & DriveInlineOptimizerTick$2=3\1/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_S2A3L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum$1=1@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@5/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
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
    // </0 & DoMapAccum$1=1@5/4 s.Mode#2/5 (/8 e.Scanned0#1/14 )/9 (/12 e.Tail0#1/16 )/13 t.Acc#2/20 e.StepScanned#2/18 >/1
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
    //DEBUG: s.Mode#2: 5
    //DEBUG: e.Scanned0#1: 14
    //DEBUG: e.Tail0#1: 16
    //DEBUG: t.Acc#2: 20
    //DEBUG: e.StepScanned#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@5/4 AsIs: s.Mode#2/5 } Tile{ AsIs: t.Acc#2/20 } Tile{ AsIs: (/12 } Tile{ AsIs: e.Scanned0#1/14 } Tile{ AsIs: e.StepScanned#2/18 } Tile{ AsIs: )/13 } Tile{ AsIs: e.Tail0#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@5/4 s.Mode#2/5 (/8 e.Scanned0#1/6 )/9 (/12 e.Tail0#1/10 )/13 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 6
  // closed e.Tail0#1 as range 10
  // closed e.dyn#0 as range 2
  //DEBUG: s.Mode#2: 5
  //DEBUG: e.Scanned0#1: 6
  //DEBUG: e.Tail0#1: 10
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 } [*]/14 & DriveInlineOptimizerTick$2=2\1/15 Tile{ AsIs: s.Mode#2/5 } {*}/16 Tile{ AsIs: (/8 AsIs: e.Scanned0#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Tail0#1/10 AsIs: )/13 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DriveInlineOptimizerTick_S2A2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z5("DoMapAccum$1=1@5", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z5);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoMapAccum$1=1@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@6/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 e.new#5/2 >/1
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
    // </0 & DoMapAccum$1=1@6/4 (/7 e.Left#1/21 )/8 (/11 e.Right#1/23 )/12 (/15 e.Scanned0#1/25 )/16 (/19 e.Tail0#1/27 )/20 t.Acc#2/31 e.StepScanned#2/29 >/1
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
    // closed e.Left#1 as range 21
    // closed e.Right#1 as range 23
    // closed e.Scanned0#1 as range 25
    // closed e.Tail0#1 as range 27
    context[32] = refalrts::tvar_left( context[31], context[29], context[30] );
    if( ! context[32] )
      continue;
    // closed e.StepScanned#2 as range 29
    //DEBUG: e.Left#1: 21
    //DEBUG: e.Right#1: 23
    //DEBUG: e.Scanned0#1: 25
    //DEBUG: e.Tail0#1: 27
    //DEBUG: t.Acc#2: 31
    //DEBUG: e.StepScanned#2: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@6/4 AsIs: (/7 AsIs: e.Left#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.Right#1/23 AsIs: )/12 } Tile{ AsIs: t.Acc#2/31 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Scanned0#1/25 } Tile{ AsIs: e.StepScanned#2/29 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Tail0#1/27 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( vm, context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@6/4 (/7 e.Left#1/5 )/8 (/11 e.Right#1/9 )/12 (/15 e.Scanned0#1/13 )/16 (/19 e.Tail0#1/17 )/20 e.dyn#0/2 >/1
  // closed e.Left#1 as range 5
  // closed e.Right#1 as range 9
  // closed e.Scanned0#1 as range 13
  // closed e.Tail0#1 as range 17
  // closed e.dyn#0 as range 2
  //DEBUG: e.Left#1: 5
  //DEBUG: e.Right#1: 9
  //DEBUG: e.Scanned0#1: 13
  //DEBUG: e.Tail0#1: 17
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 & DoMapAccum$1=1@0/22 Tile{ HalfReuse: [*]/0 Reuse: & OptSentence-Aux\1/4 AsIs: (/7 AsIs: e.Left#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Right#1/9 } )/23 Tile{ HalfReuse: {*}/12 AsIs: (/15 AsIs: e.Scanned0#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Tail0#1/17 AsIs: )/20 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_Aux_L1]);
  refalrts::reinit_unwrapped_closure(context[12], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
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
  // </0 & DoMapAccum$1=1@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@7/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@7/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@7/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@7/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & FindOptimizedCall-Term/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_FindOptimizedCallm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z7("DoMapAccum$1=1@7", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z7);


//End of file
